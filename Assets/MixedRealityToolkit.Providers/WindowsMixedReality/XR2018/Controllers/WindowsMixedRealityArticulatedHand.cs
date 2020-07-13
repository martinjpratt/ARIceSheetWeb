﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using System.Collections.Generic;

#if UNITY_WSA
using UnityEngine.XR.WSA.Input;
#if WINDOWS_UWP || DOTNETWINRT_PRESENT
using System;
using UnityEngine;
#if WINDOWS_UWP
using Windows.Foundation.Metadata;
using Windows.Perception;
using Windows.Perception.People;
using Windows.UI.Input.Spatial;
#elif DOTNETWINRT_PRESENT
using Microsoft.Windows.Foundation.Metadata;
using Microsoft.Windows.Perception;
using Microsoft.Windows.Perception.People;
using Microsoft.Windows.UI.Input.Spatial;
#endif
#endif // WINDOWS_UWP || DOTNETWINRT_PRESENT
#endif // UNITY_WSA

namespace Microsoft.MixedReality.Toolkit.WindowsMixedReality.Input
{
    /// <summary>
    /// A Windows Mixed Reality articulated hand instance.
    /// </summary>
    [MixedRealityController(
        SupportedControllerType.ArticulatedHand,
        new[] { Handedness.Left, Handedness.Right })]
    public class WindowsMixedRealityArticulatedHand : BaseWindowsMixedRealitySource, IMixedRealityHand
    {
        /// <summary>
        /// Constructor.
        /// </summary>
        public WindowsMixedRealityArticulatedHand(TrackingState trackingState, Handedness controllerHandedness, IMixedRealityInputSource inputSource = null, MixedRealityInteractionMapping[] interactions = null)
                : base(trackingState, controllerHandedness, inputSource, interactions)
        {
            handDefinition = new WindowsMixedRealityArticulatedHandDefinition(inputSource, controllerHandedness);
#if (UNITY_WSA && DOTNETWINRT_PRESENT) || WINDOWS_UWP
            articulatedHandApiAvailable = ApiInformation.IsMethodPresent("Windows.UI.Input.Spatial.SpatialInteractionSourceState", "TryGetHandPose");
#endif
        }

        /// <summary>
        /// The Windows Mixed Reality articulated hands default interactions.
        /// </summary>
        /// <remarks>A single interaction mapping works for both left and right articulated hands.</remarks>
        public override MixedRealityInteractionMapping[] DefaultInteractions => handDefinition?.DefaultInteractions;

        private readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
        private readonly WindowsMixedRealityArticulatedHandDefinition handDefinition;

        #region IMixedRealityHand Implementation

        /// <inheritdoc/>
        public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);

        #endregion IMixedRealityHand Implementation

        /// <inheritdoc/>
        public override bool IsInPointingPose => handDefinition.IsInPointingPose;

#if UNITY_WSA
#if WINDOWS_UWP || DOTNETWINRT_PRESENT
        private SpatialInteractionManager spatialInteractionManager = null;
        private SpatialInteractionManager SpatialInteractionManager
        {
            get
            {
                if (spatialInteractionManager == null)
                {
                    UnityEngine.WSA.Application.InvokeOnUIThread(() =>
                    {
                        spatialInteractionManager = SpatialInteractionManager.GetForCurrentView();
                    }, true);
                }

                return spatialInteractionManager;
            }
        }

        private readonly bool articulatedHandApiAvailable = false;
#endif // WINDOWS_UWP || DOTNETWINRT_PRESENT

        #region Update data functions

        /// <inheritdoc />
        public override void UpdateController(InteractionSourceState interactionSourceState)
        {
            if (!Enabled) { return; }

            base.UpdateController(interactionSourceState);

            UpdateHandData(interactionSourceState);

            for (int i = 0; i < Interactions?.Length; i++)
            {
                switch (Interactions[i].InputType)
                {
                    case DeviceInputType.IndexFinger:
                        handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
                        break;
                }
            }
        }

        /// <summary>
        /// Update the hand data from the device.
        /// </summary>
        /// <param name="interactionSourceState">The InteractionSourceState retrieved from the platform.</param>
        private void UpdateHandData(InteractionSourceState interactionSourceState)
        {
#if WINDOWS_UWP || DOTNETWINRT_PRESENT
            // Articulated hand support is only present in the 18362 version and beyond Windows
            // SDK (which contains the V8 drop of the Universal API Contract). In particular,
            // the HandPose related APIs are only present on this version and above.
            if (!articulatedHandApiAvailable)
            {
                return;
            }

            PerceptionTimestamp perceptionTimestamp = PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now);
            IReadOnlyList<SpatialInteractionSourceState> sources = SpatialInteractionManager?.GetDetectedSourcesAtTimestamp(perceptionTimestamp);
            foreach (SpatialInteractionSourceState sourceState in sources)
            {
                if (sourceState.Source.Id.Equals(interactionSourceState.source.id))
                {
#if WINDOWS_UWP
                    handDefinition?.UpdateHandMesh(sourceState);
#endif // WINDOWS_UWP

                    HandPose handPose = sourceState.TryGetHandPose();

                    if (handPose != null && handPose.TryGetJoints(WindowsMixedRealityUtilities.SpatialCoordinateSystem, jointIndices, jointPoses))
                    {
                        for (int i = 0; i < jointPoses.Length; i++)
                        {
                            Vector3 jointPosition = jointPoses[i].Position.ToUnityVector3();
                            Quaternion jointOrientation = jointPoses[i].Orientation.ToUnityQuaternion();

                            // We want the joints to follow the playspace, so fold in the playspace transform here to 
                            // put the joint pose into world space.
                            jointPosition = MixedRealityPlayspace.TransformPoint(jointPosition);
                            jointOrientation = MixedRealityPlayspace.Rotation * jointOrientation;

                            TrackedHandJoint handJoint = ConvertHandJointKindToTrackedHandJoint(jointIndices[i]);

                            if (handJoint == TrackedHandJoint.IndexTip)
                            {
                                lastIndexTipRadius = jointPoses[i].Radius;
                            }

                            unityJointPoses[handJoint] = new MixedRealityPose(jointPosition, jointOrientation);
                        }

                        handDefinition?.UpdateHandJoints(unityJointPoses);
                    }
                    break;
                }
            }
#endif // WINDOWS_UWP || DOTNETWINRT_PRESENT
        }

        #endregion Update data functions

#if WINDOWS_UWP || DOTNETWINRT_PRESENT
        private static readonly HandJointKind[] jointIndices = new HandJointKind[]
        {
            HandJointKind.Palm,
            HandJointKind.Wrist,
            HandJointKind.ThumbMetacarpal,
            HandJointKind.ThumbProximal,
            HandJointKind.ThumbDistal,
            HandJointKind.ThumbTip,
            HandJointKind.IndexMetacarpal,
            HandJointKind.IndexProximal,
            HandJointKind.IndexIntermediate,
            HandJointKind.IndexDistal,
            HandJointKind.IndexTip,
            HandJointKind.MiddleMetacarpal,
            HandJointKind.MiddleProximal,
            HandJointKind.MiddleIntermediate,
            HandJointKind.MiddleDistal,
            HandJointKind.MiddleTip,
            HandJointKind.RingMetacarpal,
            HandJointKind.RingProximal,
            HandJointKind.RingIntermediate,
            HandJointKind.RingDistal,
            HandJointKind.RingTip,
            HandJointKind.LittleMetacarpal,
            HandJointKind.LittleProximal,
            HandJointKind.LittleIntermediate,
            HandJointKind.LittleDistal,
            HandJointKind.LittleTip
        };

        private readonly JointPose[] jointPoses = new JointPose[jointIndices.Length];
        private float lastIndexTipRadius = 0;

        private TrackedHandJoint ConvertHandJointKindToTrackedHandJoint(HandJointKind handJointKind)
        {
            switch (handJointKind)
            {
                case HandJointKind.Palm: return TrackedHandJoint.Palm;

                case HandJointKind.Wrist: return TrackedHandJoint.Wrist;

                case HandJointKind.ThumbMetacarpal: return TrackedHandJoint.ThumbMetacarpalJoint;
                case HandJointKind.ThumbProximal: return TrackedHandJoint.ThumbProximalJoint;
                case HandJointKind.ThumbDistal: return TrackedHandJoint.ThumbDistalJoint;
                case HandJointKind.ThumbTip: return TrackedHandJoint.ThumbTip;

                case HandJointKind.IndexMetacarpal: return TrackedHandJoint.IndexMetacarpal;
                case HandJointKind.IndexProximal: return TrackedHandJoint.IndexKnuckle;
                case HandJointKind.IndexIntermediate: return TrackedHandJoint.IndexMiddleJoint;
                case HandJointKind.IndexDistal: return TrackedHandJoint.IndexDistalJoint;
                case HandJointKind.IndexTip: return TrackedHandJoint.IndexTip;

                case HandJointKind.MiddleMetacarpal: return TrackedHandJoint.MiddleMetacarpal;
                case HandJointKind.MiddleProximal: return TrackedHandJoint.MiddleKnuckle;
                case HandJointKind.MiddleIntermediate: return TrackedHandJoint.MiddleMiddleJoint;
                case HandJointKind.MiddleDistal: return TrackedHandJoint.MiddleDistalJoint;
                case HandJointKind.MiddleTip: return TrackedHandJoint.MiddleTip;

                case HandJointKind.RingMetacarpal: return TrackedHandJoint.RingMetacarpal;
                case HandJointKind.RingProximal: return TrackedHandJoint.RingKnuckle;
                case HandJointKind.RingIntermediate: return TrackedHandJoint.RingMiddleJoint;
                case HandJointKind.RingDistal: return TrackedHandJoint.RingDistalJoint;
                case HandJointKind.RingTip: return TrackedHandJoint.RingTip;

                case HandJointKind.LittleMetacarpal: return TrackedHandJoint.PinkyMetacarpal;
                case HandJointKind.LittleProximal: return TrackedHandJoint.PinkyKnuckle;
                case HandJointKind.LittleIntermediate: return TrackedHandJoint.PinkyMiddleJoint;
                case HandJointKind.LittleDistal: return TrackedHandJoint.PinkyDistalJoint;
                case HandJointKind.LittleTip: return TrackedHandJoint.PinkyTip;

                default: return TrackedHandJoint.None;
            }
        }

#endif // WINDOWS_UWP || DOTNETWINRT_PRESENT
#endif // UNITY_WSA
    }
}
