﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler
struct IMixedRealityDiagnosticsHandler_tAE87CFBAD96F343F0B2970057B2740DE4996C4E9;
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c
struct U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler/FrameRateColor[]
struct FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105;
// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct VisualProfilerControl_t371B3920551CA89ADA1510C809BFE7200BF3F24C;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCFBF28688CCD3ADC2D0EE8F88464DF1EA65FE30F;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA8F67CB2C442808E11CAA63ABD09B8423BEE3920;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tEC917A5E50A480140DA632DDC7D604A21B787DFA;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t82A17AA9A8DA25FDB5086747D61DEC23E16AFE65;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t5FAF2355648570ED1A3B011371734122D2138EA2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C;
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsHandler_tAE87CFBAD96F343F0B2970057B2740DE4996C4E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tF427C0C90F020A6DEA420D40C7BBADE13037782A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0085F04FFAF54410F314A1739CA00743371D3A5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE;
IL2CPP_EXTERN_C String_t* _stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05;
IL2CPP_EXTERN_C String_t* _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491;
IL2CPP_EXTERN_C String_t* _stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral469FB70DED7914453A23F856E6F6A00E7461E923;
IL2CPP_EXTERN_C String_t* _stringLiteral5483BF71B3B7138B1E91E9996288AA665C3E352D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A;
IL2CPP_EXTERN_C String_t* _stringLiteral5E044C5A2E8F3D4F49006EA5361F7FEB04CD498F;
IL2CPP_EXTERN_C String_t* _stringLiteral60DD62DDA6D0E9082284B2E9AF1CB4E2AFFEDFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral64DD60FE1A049FE6DB3EB1369DEC2E42BF428E21;
IL2CPP_EXTERN_C String_t* _stringLiteral6AC3D240BE15CDE5454371B7FC93D8B50949262C;
IL2CPP_EXTERN_C String_t* _stringLiteral9315667F99D5901C8E062AAC730B9254258670B5;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3A49852D90133B9BEB027ECCB54020A3D56034;
IL2CPP_EXTERN_C String_t* _stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB43776D3A8057BCB7F05D18BE4E19FA5C0A1171E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD;
IL2CPP_EXTERN_C String_t* _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8;
IL2CPP_EXTERN_C String_t* _stringLiteralD67803D21C492757F3E466439B3888A5240FB925;
IL2CPP_EXTERN_C String_t* _stringLiteralDA2CBFEB5B67015731670B2966A4EA649BDF8D7F;
IL2CPP_EXTERN_C String_t* _stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE2ACC6A2CAB5D8B552539E6ED55D7498F1BD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralEFDD3FFFDEBF8938E0ACF2BA36C21ADB990D938B;
IL2CPP_EXTERN_C String_t* _stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2CE179ADA45417D29FD8AAF094AD2E7762DB78;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_tAE87CFBAD96F343F0B2970057B2740DE4996C4E9_mAEDCE3556189D515703821F184B07215C174F6DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m13F4D9D6B934D7B294D250B87C0ECB430827BC32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6_mA510FF397FAB2EAE56C68D1C460EF19B40C6FEDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350_m5F779E07EDFD5150A9109AC411EB7B469DD70BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_m0F375787B7E075ECC07C89A28AF4B5A2E129C2E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_t1A1BC9237992FB216FCCB3AA74619164F57354F8_m5A1A060DC96CF948199CE8BCAC72F969735D4127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_t1A1BC9237992FB216FCCB3AA74619164F57354F8_mA44C0892D9AB349A4852D13993CFBA476F55100C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__59_0_mB6CF9A7A53E96A2BF3652B569FA1BE6ECEF0BC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_m496DBDE87D8009F68D927CA1A246262BA01A679B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_OnDisable_mB33D41E503FF77EF4670211D6C1CF7179D80FF64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_OnEnable_m1ECE7A8C5BA70E3E87A0B1B8A8385A03F6D7F00A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_ToggleDiagnostics_m149A8A0D534D2CEB1BF000737380A7452CD73247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiagnosticsSystemVoiceControls_ToggleProfiler_m76297DD644EF240E17DE25C8E40698BA82981B01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_CreateVisualizations_m8819D8EFE98502C032635F84A4055EBCE7559030_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_Destroy_m0C848C1C82BD181671BE920248337F09CC05D89F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_Initialize_m0E1E1DE9BCD97C494AA8DEDFF4765322C3528386_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m4A23844C9897B8E15A007658E0D6A05CB5CE5AB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem__cctor_m88F55B6287E503931F35347991065DFD3A5AA721_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem__ctor_mB5C4B3FE1726560D0D842708DCD17F9D1FE10AA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m68E80BC89496FB96C32D615B6A1FCC18725EBD34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_get_SourceName_mA53B9FA35D495EAE22ADE023AFFD20EC1CB45039_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_FrameSampleRate_m037CB8A13CEDE1C2185DC355B0DE3CA79AF91430_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mDA66A3D63AED5CA07243E70342783DD352A94174_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m76DF6C70F740894211AE1500004099C70F39E042_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_ShowProfiler_mE8F001A5A9E8B11D6ED49739D14DDA36CFBA8D35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowAnchor_m238E9E15AA43362934CE144049FDEA9D1876C05A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mC6C40C022859CC1BEC498298010FBF7416E7F0AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowOffset_m24F76FB9DD233EFCEBF83731DDB66CAA6B699EA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityDiagnosticsSystem_set_WindowScale_mDDB18D499E31C47583AB7D47F9D603CC9CBDD016_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mB9670D04531C70B01046D8083AF0E7239161C20B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_BuildWindow_mBCC4BD16F504DC6CAC86E078556958B3EB9C08AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m277DADD349A45BD857732E3B4D25D5B7064B3332_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateFrameColor_m0213214E418F0F526382D6C1061804F899431A4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m8C0BB61D9C23C394E3130DFDE16032208FC75CEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mFA1CCF49953AC7F0EACE8AD933B47E5BF8B37BAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateAnchor_m6CF22A47DB6CD86B1A739406F1BB4755C1FAC5B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_LateUpdate_m74F404FB6F10A8FA22160FB6D609A1AB292B3CFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_MemoryUsageToString_mDC6202726D1C356A3CB411D5989151B0FDED0B46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_OnDestroy_mEA9AE4D96E607825EE489822AA72FB49D174706D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_Reset_m9BDC66B271C5672895C1F04CF95F4304B09FBE86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC64E536311135A81FDC1B2D6591849A776D091E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler__cctor_mCCB9FFA7B037DA529C33779C19D9E42ECE985562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler__ctor_m237262B2074189426A9AB2B32FA8EB8A29BF9035_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m1C98E5A5B83047FB0037095BBAF6F8FE0C033F00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA8487EE1F35F72300474A546FFD1505B1D972F22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m9D2BD335DDBC7A646B10FF7F460986F016930032_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkitVisualProfiler_set_WindowScale_mCEE6A37B37D410F7F3B86426306738AB278EDDDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__59_0_mB6CF9A7A53E96A2BF3652B569FA1BE6ECEF0BC1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m1982D1BBC842D36866FD106B1A8BFDD5F3635B30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualProfilerControl_SetProfilerVisibility_m0B3B0F362CA0473A40B19FEE24513321EBF8D9FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualProfilerControl_ToggleProfiler_m10E4F6837DC4AA7C0BC8C4772235E76EB9DF4D20_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3;
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tACF0F1F583459EA48262EB1A987540C5AB54D2FB 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c
struct  U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::<>9
	U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t5FAF2355648570ED1A3B011371734122D2138EA2 * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t82A17AA9A8DA25FDB5086747D61DEC23E16AFE65 * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tEC917A5E50A480140DA632DDC7D604A21B787DFA * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___postponedActions_8)); }
	inline List_1_t5FAF2355648570ED1A3B011371734122D2138EA2 * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t5FAF2355648570ED1A3B011371734122D2138EA2 ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t5FAF2355648570ED1A3B011371734122D2138EA2 * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___postponedObjectActions_9)); }
	inline List_1_t82A17AA9A8DA25FDB5086747D61DEC23E16AFE65 * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t82A17AA9A8DA25FDB5086747D61DEC23E16AFE65 ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t82A17AA9A8DA25FDB5086747D61DEC23E16AFE65 * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_tEC917A5E50A480140DA632DDC7D604A21B787DFA * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_tEC917A5E50A480140DA632DDC7D604A21B787DFA ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_tEC917A5E50A480140DA632DDC7D604A21B787DFA * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.FrameTiming
struct  FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC 
{
public:
	// System.UInt64 UnityEngine.FrameTiming::cpuTimePresentCalled
	uint64_t ___cpuTimePresentCalled_0;
	// System.Double UnityEngine.FrameTiming::cpuFrameTime
	double ___cpuFrameTime_1;
	// System.UInt64 UnityEngine.FrameTiming::cpuTimeFrameComplete
	uint64_t ___cpuTimeFrameComplete_2;
	// System.Double UnityEngine.FrameTiming::gpuFrameTime
	double ___gpuFrameTime_3;
	// System.Single UnityEngine.FrameTiming::heightScale
	float ___heightScale_4;
	// System.Single UnityEngine.FrameTiming::widthScale
	float ___widthScale_5;
	// System.UInt32 UnityEngine.FrameTiming::syncInterval
	uint32_t ___syncInterval_6;

public:
	inline static int32_t get_offset_of_cpuTimePresentCalled_0() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuTimePresentCalled_0)); }
	inline uint64_t get_cpuTimePresentCalled_0() const { return ___cpuTimePresentCalled_0; }
	inline uint64_t* get_address_of_cpuTimePresentCalled_0() { return &___cpuTimePresentCalled_0; }
	inline void set_cpuTimePresentCalled_0(uint64_t value)
	{
		___cpuTimePresentCalled_0 = value;
	}

	inline static int32_t get_offset_of_cpuFrameTime_1() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuFrameTime_1)); }
	inline double get_cpuFrameTime_1() const { return ___cpuFrameTime_1; }
	inline double* get_address_of_cpuFrameTime_1() { return &___cpuFrameTime_1; }
	inline void set_cpuFrameTime_1(double value)
	{
		___cpuFrameTime_1 = value;
	}

	inline static int32_t get_offset_of_cpuTimeFrameComplete_2() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___cpuTimeFrameComplete_2)); }
	inline uint64_t get_cpuTimeFrameComplete_2() const { return ___cpuTimeFrameComplete_2; }
	inline uint64_t* get_address_of_cpuTimeFrameComplete_2() { return &___cpuTimeFrameComplete_2; }
	inline void set_cpuTimeFrameComplete_2(uint64_t value)
	{
		___cpuTimeFrameComplete_2 = value;
	}

	inline static int32_t get_offset_of_gpuFrameTime_3() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___gpuFrameTime_3)); }
	inline double get_gpuFrameTime_3() const { return ___gpuFrameTime_3; }
	inline double* get_address_of_gpuFrameTime_3() { return &___gpuFrameTime_3; }
	inline void set_gpuFrameTime_3(double value)
	{
		___gpuFrameTime_3 = value;
	}

	inline static int32_t get_offset_of_heightScale_4() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___heightScale_4)); }
	inline float get_heightScale_4() const { return ___heightScale_4; }
	inline float* get_address_of_heightScale_4() { return &___heightScale_4; }
	inline void set_heightScale_4(float value)
	{
		___heightScale_4 = value;
	}

	inline static int32_t get_offset_of_widthScale_5() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___widthScale_5)); }
	inline float get_widthScale_5() const { return ___widthScale_5; }
	inline float* get_address_of_widthScale_5() { return &___widthScale_5; }
	inline void set_widthScale_5(float value)
	{
		___widthScale_5 = value;
	}

	inline static int32_t get_offset_of_syncInterval_6() { return static_cast<int32_t>(offsetof(FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC, ___syncInterval_6)); }
	inline uint32_t get_syncInterval_6() const { return ___syncInterval_6; }
	inline uint32_t* get_address_of_syncInterval_6() { return &___syncInterval_6; }
	inline void set_syncInterval_6(uint32_t value)
	{
		___syncInterval_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC  : public BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler_FrameRateColor
struct  FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler_FrameRateColor::percentageOfTarget
	float ___percentageOfTarget_0;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler_FrameRateColor::color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color_1;

public:
	inline static int32_t get_offset_of_percentageOfTarget_0() { return static_cast<int32_t>(offsetof(FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103, ___percentageOfTarget_0)); }
	inline float get_percentageOfTarget_0() const { return ___percentageOfTarget_0; }
	inline float* get_address_of_percentageOfTarget_0() { return &___percentageOfTarget_0; }
	inline void set_percentageOfTarget_0(float value)
	{
		___percentageOfTarget_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103, ___color_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_color_1() const { return ___color_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___color_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct  RecognitionConfidenceLevel_t809A3C84185297360D36C31F8FE9A0244654E6C8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t809A3C84185297360D36C31F8FE9A0244654E6C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.MotionVectorGenerationMode
struct  MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63 
{
public:
	// System.Int32 UnityEngine.MotionVectorGenerationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MotionVectorGenerationMode_tB3408BD37D803441061663F0BAD2EE29B32D2B63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PrimitiveType
struct  PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.LightProbeUsage
struct  LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8 
{
public:
	// System.Int32 UnityEngine.Rendering.LightProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightProbeUsage_tC8F0DD8098B4ED548AEAD72D6B39089CE68CBBD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ReflectionProbeUsage
struct  ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeUsage_tAFF366D7F5E43B871C7302C4D7D0F48859E7B31A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t699023357D66025632B533A17D0FB1E4548141FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct  DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6  : public GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct  MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764  : public BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___diagnosticVisualizationParent_14;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * ___visualProfiler_15;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * ___diagnosticsSystemProfile_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_20;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_21;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * ___eventData_22;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_24;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_25;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_26;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_27;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___U3CNameU3Ek__BackingField_13)); }
	inline String_t* get_U3CNameU3Ek__BackingField_13() const { return ___U3CNameU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_13() { return &___U3CNameU3Ek__BackingField_13; }
	inline void set_U3CNameU3Ek__BackingField_13(String_t* value)
	{
		___U3CNameU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_14() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___diagnosticVisualizationParent_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_diagnosticVisualizationParent_14() const { return ___diagnosticVisualizationParent_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_diagnosticVisualizationParent_14() { return &___diagnosticVisualizationParent_14; }
	inline void set_diagnosticVisualizationParent_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___diagnosticVisualizationParent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_14), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_15() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___visualProfiler_15)); }
	inline MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * get_visualProfiler_15() const { return ___visualProfiler_15; }
	inline MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E ** get_address_of_visualProfiler_15() { return &___visualProfiler_15; }
	inline void set_visualProfiler_15(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * value)
	{
		___visualProfiler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_15), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_16() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___diagnosticsSystemProfile_16)); }
	inline MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * get_diagnosticsSystemProfile_16() const { return ___diagnosticsSystemProfile_16; }
	inline MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 ** get_address_of_diagnosticsSystemProfile_16() { return &___diagnosticsSystemProfile_16; }
	inline void set_diagnosticsSystemProfile_16(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * value)
	{
		___diagnosticsSystemProfile_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_16), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___showDiagnostics_17)); }
	inline bool get_showDiagnostics_17() const { return ___showDiagnostics_17; }
	inline bool* get_address_of_showDiagnostics_17() { return &___showDiagnostics_17; }
	inline void set_showDiagnostics_17(bool value)
	{
		___showDiagnostics_17 = value;
	}

	inline static int32_t get_offset_of_showProfiler_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___showProfiler_18)); }
	inline bool get_showProfiler_18() const { return ___showProfiler_18; }
	inline bool* get_address_of_showProfiler_18() { return &___showProfiler_18; }
	inline void set_showProfiler_18(bool value)
	{
		___showProfiler_18 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___showFrameInfo_19)); }
	inline bool get_showFrameInfo_19() const { return ___showFrameInfo_19; }
	inline bool* get_address_of_showFrameInfo_19() { return &___showFrameInfo_19; }
	inline void set_showFrameInfo_19(bool value)
	{
		___showFrameInfo_19 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___showMemoryStats_20)); }
	inline bool get_showMemoryStats_20() const { return ___showMemoryStats_20; }
	inline bool* get_address_of_showMemoryStats_20() { return &___showMemoryStats_20; }
	inline void set_showMemoryStats_20(bool value)
	{
		___showMemoryStats_20 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___frameSampleRate_21)); }
	inline float get_frameSampleRate_21() const { return ___frameSampleRate_21; }
	inline float* get_address_of_frameSampleRate_21() { return &___frameSampleRate_21; }
	inline void set_frameSampleRate_21(float value)
	{
		___frameSampleRate_21 = value;
	}

	inline static int32_t get_offset_of_eventData_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___eventData_22)); }
	inline DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * get_eventData_22() const { return ___eventData_22; }
	inline DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 ** get_address_of_eventData_22() { return &___eventData_22; }
	inline void set_eventData_22(DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * value)
	{
		___eventData_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_22), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___windowAnchor_24)); }
	inline int32_t get_windowAnchor_24() const { return ___windowAnchor_24; }
	inline int32_t* get_address_of_windowAnchor_24() { return &___windowAnchor_24; }
	inline void set_windowAnchor_24(int32_t value)
	{
		___windowAnchor_24 = value;
	}

	inline static int32_t get_offset_of_windowOffset_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___windowOffset_25)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_25() const { return ___windowOffset_25; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_25() { return &___windowOffset_25; }
	inline void set_windowOffset_25(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_25 = value;
	}

	inline static int32_t get_offset_of_windowScale_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___windowScale_26)); }
	inline float get_windowScale_26() const { return ___windowScale_26; }
	inline float* get_address_of_windowScale_26() { return &___windowScale_26; }
	inline void set_windowScale_26(float value)
	{
		___windowScale_26 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764, ___windowFollowSpeed_27)); }
	inline float get_windowFollowSpeed_27() const { return ___windowFollowSpeed_27; }
	inline float* get_address_of_windowFollowSpeed_27() { return &___windowFollowSpeed_27; }
	inline void set_windowFollowSpeed_27(float value)
	{
		___windowFollowSpeed_27 = value;
	}
};

struct MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 * ___OnDiagnosticsChanged_23;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChanged_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_StaticFields, ___OnDiagnosticsChanged_23)); }
	inline EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 * get_OnDiagnosticsChanged_23() const { return ___OnDiagnosticsChanged_23; }
	inline EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 ** get_address_of_OnDiagnosticsChanged_23() { return &___OnDiagnosticsChanged_23; }
	inline void set_OnDiagnosticsChanged_23(EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 * value)
	{
		___OnDiagnosticsChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CMixedRealityInputActionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CSourceIdU3Ek__BackingField_4)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_4() const { return ___U3CSourceIdU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_4() { return &___U3CSourceIdU3Ek__BackingField_4; }
	inline void set_U3CSourceIdU3Ek__BackingField_4(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531, ___U3CMixedRealityInputActionU3Ek__BackingField_5)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CMixedRealityInputActionU3Ek__BackingField_5() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return &___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_5(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_5))->___description_2), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct  SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353, ___action_4)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com ___action_4;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct  EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct  MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showDiagnostics
	bool ___showDiagnostics_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showProfiler
	bool ___showProfiler_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showFrameInfo
	bool ___showFrameInfo_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::showMemoryStats
	bool ___showMemoryStats_8;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::frameSampleRate
	float ___frameSampleRate_9;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowAnchor
	int32_t ___windowAnchor_10;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_11;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowScale
	float ___windowScale_12;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::windowFollowSpeed
	float ___windowFollowSpeed_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::defaultInstancedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultInstancedMaterial_14;

public:
	inline static int32_t get_offset_of_showDiagnostics_5() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___showDiagnostics_5)); }
	inline bool get_showDiagnostics_5() const { return ___showDiagnostics_5; }
	inline bool* get_address_of_showDiagnostics_5() { return &___showDiagnostics_5; }
	inline void set_showDiagnostics_5(bool value)
	{
		___showDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_showProfiler_6() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___showProfiler_6)); }
	inline bool get_showProfiler_6() const { return ___showProfiler_6; }
	inline bool* get_address_of_showProfiler_6() { return &___showProfiler_6; }
	inline void set_showProfiler_6(bool value)
	{
		___showProfiler_6 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_7() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___showFrameInfo_7)); }
	inline bool get_showFrameInfo_7() const { return ___showFrameInfo_7; }
	inline bool* get_address_of_showFrameInfo_7() { return &___showFrameInfo_7; }
	inline void set_showFrameInfo_7(bool value)
	{
		___showFrameInfo_7 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_8() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___showMemoryStats_8)); }
	inline bool get_showMemoryStats_8() const { return ___showMemoryStats_8; }
	inline bool* get_address_of_showMemoryStats_8() { return &___showMemoryStats_8; }
	inline void set_showMemoryStats_8(bool value)
	{
		___showMemoryStats_8 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_9() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___frameSampleRate_9)); }
	inline float get_frameSampleRate_9() const { return ___frameSampleRate_9; }
	inline float* get_address_of_frameSampleRate_9() { return &___frameSampleRate_9; }
	inline void set_frameSampleRate_9(float value)
	{
		___frameSampleRate_9 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_10() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___windowAnchor_10)); }
	inline int32_t get_windowAnchor_10() const { return ___windowAnchor_10; }
	inline int32_t* get_address_of_windowAnchor_10() { return &___windowAnchor_10; }
	inline void set_windowAnchor_10(int32_t value)
	{
		___windowAnchor_10 = value;
	}

	inline static int32_t get_offset_of_windowOffset_11() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___windowOffset_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_11() const { return ___windowOffset_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_11() { return &___windowOffset_11; }
	inline void set_windowOffset_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_11 = value;
	}

	inline static int32_t get_offset_of_windowScale_12() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___windowScale_12)); }
	inline float get_windowScale_12() const { return ___windowScale_12; }
	inline float* get_address_of_windowScale_12() { return &___windowScale_12; }
	inline void set_windowScale_12(float value)
	{
		___windowScale_12 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_13() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___windowFollowSpeed_13)); }
	inline float get_windowFollowSpeed_13() const { return ___windowFollowSpeed_13; }
	inline float* get_address_of_windowFollowSpeed_13() { return &___windowFollowSpeed_13; }
	inline void set_windowFollowSpeed_13(float value)
	{
		___windowFollowSpeed_13 = value;
	}

	inline static int32_t get_offset_of_defaultInstancedMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394, ___defaultInstancedMaterial_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultInstancedMaterial_14() const { return ___defaultInstancedMaterial_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultInstancedMaterial_14() { return &___defaultInstancedMaterial_14; }
	inline void set_defaultInstancedMaterial_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultInstancedMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstancedMaterial_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct  SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83  : public BaseInputEventData_t4071016DA383AB6D140332959AAB0ECEF21BE531
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___U3CPhraseDurationU3Ek__BackingField_6;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CPhraseStartTimeU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  ___U3CCommandU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83, ___U3CPhraseDurationU3Ek__BackingField_6)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_U3CPhraseDurationU3Ek__BackingField_6() const { return ___U3CPhraseDurationU3Ek__BackingField_6; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_U3CPhraseDurationU3Ek__BackingField_6() { return &___U3CPhraseDurationU3Ek__BackingField_6; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_6(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83, ___U3CPhraseStartTimeU3Ek__BackingField_7)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CPhraseStartTimeU3Ek__BackingField_7() const { return ___U3CPhraseStartTimeU3Ek__BackingField_7; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_7() { return &___U3CPhraseStartTimeU3Ek__BackingField_7; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_7(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83, ___U3CCommandU3Ek__BackingField_8)); }
	inline SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  get_U3CCommandU3Ek__BackingField_8() const { return ___U3CCommandU3Ek__BackingField_8; }
	inline SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353 * get_address_of_U3CCommandU3Ek__BackingField_8() { return &___U3CCommandU3Ek__BackingField_8; }
	inline void set_U3CCommandU3Ek__BackingField_8(SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  value)
	{
		___U3CCommandU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_8))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_8))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_8))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_8))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83, ___U3CConfidenceU3Ek__BackingField_9)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_9() const { return ___U3CConfidenceU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_9() { return &___U3CConfidenceU3Ek__BackingField_9; }
	inline void set_U3CConfidenceU3Ek__BackingField_9(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_9 = value;
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls
struct  DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::registeredForInput
	bool ___registeredForInput_4;

public:
	inline static int32_t get_offset_of_registeredForInput_4() { return static_cast<int32_t>(offsetof(DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350, ___registeredForInput_4)); }
	inline bool get_registeredForInput_4() const { return ___registeredForInput_4; }
	inline bool* get_address_of_registeredForInput_4() { return &___registeredForInput_4; }
	inline void set_registeredForInput_4(bool value)
	{
		___registeredForInput_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct  MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::<WindowParent>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CWindowParentU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::isVisible
	bool ___isVisible_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoVisible
	bool ___frameInfoVisible_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStatsVisible
	bool ___memoryStatsVisible_18;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameSampleRate
	float ___frameSampleRate_19;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowAnchor
	int32_t ___windowAnchor_20;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowOffset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___windowOffset_21;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowScale
	float ___windowScale_22;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowFollowSpeed
	float ___windowFollowSpeed_23;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::displayedDecimalDigits
	int32_t ___displayedDecimalDigits_24;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler_FrameRateColor[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRateColors
	FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* ___frameRateColors_25;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::baseColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___baseColor_26;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryUsedColor_27;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryPeakColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryPeakColor_28;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryLimitColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___memoryLimitColor_29;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::window
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___window_30;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::background
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___background_31;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___cpuFrameRateText_32;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___gpuFrameRateText_33;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryStats
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___memoryStats_34;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___usedMemoryText_35;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___peakMemoryText_36;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___limitMemoryText_37;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___usedAnchor_38;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakAnchor
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___peakAnchor_39;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowHorizontalRotation_40;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowHorizontalRotationInverse
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowHorizontalRotationInverse_41;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowVerticalRotation_42;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::windowVerticalRotationInverse
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___windowVerticalRotationInverse_43;
	// UnityEngine.Matrix4x4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoMatrices
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___frameInfoMatrices_44;
	// UnityEngine.Vector4[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoColors
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___frameInfoColors_45;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameInfoPropertyBlock
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___frameInfoPropertyBlock_46;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::colorID
	int32_t ___colorID_47;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::parentMatrixID
	int32_t ___parentMatrixID_48;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameCount
	int32_t ___frameCount_49;
	// System.Diagnostics.Stopwatch Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___stopwatch_50;
	// UnityEngine.FrameTiming[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameTimings
	FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings_51;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::cpuFrameRateStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___cpuFrameRateStrings_52;
	// System.String[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::gpuFrameRateStrings
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___gpuFrameRateStrings_53;
	// System.Char[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::stringBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer_54;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::memoryUsage
	uint64_t ___memoryUsage_55;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryUsage
	uint64_t ___peakMemoryUsage_56;
	// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryUsage
	uint64_t ___limitMemoryUsage_57;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultMaterial_58;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultInstancedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defaultInstancedMaterial_59;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___backgroundMaterial_60;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::foregroundMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___foregroundMaterial_61;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::textMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___textMaterial_62;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::quadMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___quadMesh_63;

public:
	inline static int32_t get_offset_of_U3CWindowParentU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___U3CWindowParentU3Ek__BackingField_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CWindowParentU3Ek__BackingField_15() const { return ___U3CWindowParentU3Ek__BackingField_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CWindowParentU3Ek__BackingField_15() { return &___U3CWindowParentU3Ek__BackingField_15; }
	inline void set_U3CWindowParentU3Ek__BackingField_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CWindowParentU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWindowParentU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_isVisible_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___isVisible_16)); }
	inline bool get_isVisible_16() const { return ___isVisible_16; }
	inline bool* get_address_of_isVisible_16() { return &___isVisible_16; }
	inline void set_isVisible_16(bool value)
	{
		___isVisible_16 = value;
	}

	inline static int32_t get_offset_of_frameInfoVisible_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameInfoVisible_17)); }
	inline bool get_frameInfoVisible_17() const { return ___frameInfoVisible_17; }
	inline bool* get_address_of_frameInfoVisible_17() { return &___frameInfoVisible_17; }
	inline void set_frameInfoVisible_17(bool value)
	{
		___frameInfoVisible_17 = value;
	}

	inline static int32_t get_offset_of_memoryStatsVisible_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___memoryStatsVisible_18)); }
	inline bool get_memoryStatsVisible_18() const { return ___memoryStatsVisible_18; }
	inline bool* get_address_of_memoryStatsVisible_18() { return &___memoryStatsVisible_18; }
	inline void set_memoryStatsVisible_18(bool value)
	{
		___memoryStatsVisible_18 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameSampleRate_19)); }
	inline float get_frameSampleRate_19() const { return ___frameSampleRate_19; }
	inline float* get_address_of_frameSampleRate_19() { return &___frameSampleRate_19; }
	inline void set_frameSampleRate_19(float value)
	{
		___frameSampleRate_19 = value;
	}

	inline static int32_t get_offset_of_windowAnchor_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowAnchor_20)); }
	inline int32_t get_windowAnchor_20() const { return ___windowAnchor_20; }
	inline int32_t* get_address_of_windowAnchor_20() { return &___windowAnchor_20; }
	inline void set_windowAnchor_20(int32_t value)
	{
		___windowAnchor_20 = value;
	}

	inline static int32_t get_offset_of_windowOffset_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowOffset_21)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_windowOffset_21() const { return ___windowOffset_21; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_windowOffset_21() { return &___windowOffset_21; }
	inline void set_windowOffset_21(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___windowOffset_21 = value;
	}

	inline static int32_t get_offset_of_windowScale_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowScale_22)); }
	inline float get_windowScale_22() const { return ___windowScale_22; }
	inline float* get_address_of_windowScale_22() { return &___windowScale_22; }
	inline void set_windowScale_22(float value)
	{
		___windowScale_22 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowFollowSpeed_23)); }
	inline float get_windowFollowSpeed_23() const { return ___windowFollowSpeed_23; }
	inline float* get_address_of_windowFollowSpeed_23() { return &___windowFollowSpeed_23; }
	inline void set_windowFollowSpeed_23(float value)
	{
		___windowFollowSpeed_23 = value;
	}

	inline static int32_t get_offset_of_displayedDecimalDigits_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___displayedDecimalDigits_24)); }
	inline int32_t get_displayedDecimalDigits_24() const { return ___displayedDecimalDigits_24; }
	inline int32_t* get_address_of_displayedDecimalDigits_24() { return &___displayedDecimalDigits_24; }
	inline void set_displayedDecimalDigits_24(int32_t value)
	{
		___displayedDecimalDigits_24 = value;
	}

	inline static int32_t get_offset_of_frameRateColors_25() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameRateColors_25)); }
	inline FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* get_frameRateColors_25() const { return ___frameRateColors_25; }
	inline FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105** get_address_of_frameRateColors_25() { return &___frameRateColors_25; }
	inline void set_frameRateColors_25(FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* value)
	{
		___frameRateColors_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameRateColors_25), (void*)value);
	}

	inline static int32_t get_offset_of_baseColor_26() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___baseColor_26)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_baseColor_26() const { return ___baseColor_26; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_baseColor_26() { return &___baseColor_26; }
	inline void set_baseColor_26(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___baseColor_26 = value;
	}

	inline static int32_t get_offset_of_memoryUsedColor_27() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___memoryUsedColor_27)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryUsedColor_27() const { return ___memoryUsedColor_27; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryUsedColor_27() { return &___memoryUsedColor_27; }
	inline void set_memoryUsedColor_27(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryUsedColor_27 = value;
	}

	inline static int32_t get_offset_of_memoryPeakColor_28() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___memoryPeakColor_28)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryPeakColor_28() const { return ___memoryPeakColor_28; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryPeakColor_28() { return &___memoryPeakColor_28; }
	inline void set_memoryPeakColor_28(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryPeakColor_28 = value;
	}

	inline static int32_t get_offset_of_memoryLimitColor_29() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___memoryLimitColor_29)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_memoryLimitColor_29() const { return ___memoryLimitColor_29; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_memoryLimitColor_29() { return &___memoryLimitColor_29; }
	inline void set_memoryLimitColor_29(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___memoryLimitColor_29 = value;
	}

	inline static int32_t get_offset_of_window_30() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___window_30)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_window_30() const { return ___window_30; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_window_30() { return &___window_30; }
	inline void set_window_30(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___window_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_30), (void*)value);
	}

	inline static int32_t get_offset_of_background_31() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___background_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_background_31() const { return ___background_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_background_31() { return &___background_31; }
	inline void set_background_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___background_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_31), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateText_32() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___cpuFrameRateText_32)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_cpuFrameRateText_32() const { return ___cpuFrameRateText_32; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_cpuFrameRateText_32() { return &___cpuFrameRateText_32; }
	inline void set_cpuFrameRateText_32(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___cpuFrameRateText_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateText_32), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateText_33() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___gpuFrameRateText_33)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_gpuFrameRateText_33() const { return ___gpuFrameRateText_33; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_gpuFrameRateText_33() { return &___gpuFrameRateText_33; }
	inline void set_gpuFrameRateText_33(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___gpuFrameRateText_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateText_33), (void*)value);
	}

	inline static int32_t get_offset_of_memoryStats_34() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___memoryStats_34)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_memoryStats_34() const { return ___memoryStats_34; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_memoryStats_34() { return &___memoryStats_34; }
	inline void set_memoryStats_34(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___memoryStats_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memoryStats_34), (void*)value);
	}

	inline static int32_t get_offset_of_usedMemoryText_35() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___usedMemoryText_35)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_usedMemoryText_35() const { return ___usedMemoryText_35; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_usedMemoryText_35() { return &___usedMemoryText_35; }
	inline void set_usedMemoryText_35(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___usedMemoryText_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryText_35), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryText_36() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___peakMemoryText_36)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_peakMemoryText_36() const { return ___peakMemoryText_36; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_peakMemoryText_36() { return &___peakMemoryText_36; }
	inline void set_peakMemoryText_36(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___peakMemoryText_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryText_36), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryText_37() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___limitMemoryText_37)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_limitMemoryText_37() const { return ___limitMemoryText_37; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_limitMemoryText_37() { return &___limitMemoryText_37; }
	inline void set_limitMemoryText_37(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___limitMemoryText_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryText_37), (void*)value);
	}

	inline static int32_t get_offset_of_usedAnchor_38() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___usedAnchor_38)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_usedAnchor_38() const { return ___usedAnchor_38; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_usedAnchor_38() { return &___usedAnchor_38; }
	inline void set_usedAnchor_38(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___usedAnchor_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedAnchor_38), (void*)value);
	}

	inline static int32_t get_offset_of_peakAnchor_39() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___peakAnchor_39)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_peakAnchor_39() const { return ___peakAnchor_39; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_peakAnchor_39() { return &___peakAnchor_39; }
	inline void set_peakAnchor_39(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___peakAnchor_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakAnchor_39), (void*)value);
	}

	inline static int32_t get_offset_of_windowHorizontalRotation_40() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowHorizontalRotation_40)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowHorizontalRotation_40() const { return ___windowHorizontalRotation_40; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowHorizontalRotation_40() { return &___windowHorizontalRotation_40; }
	inline void set_windowHorizontalRotation_40(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowHorizontalRotation_40 = value;
	}

	inline static int32_t get_offset_of_windowHorizontalRotationInverse_41() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowHorizontalRotationInverse_41)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowHorizontalRotationInverse_41() const { return ___windowHorizontalRotationInverse_41; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowHorizontalRotationInverse_41() { return &___windowHorizontalRotationInverse_41; }
	inline void set_windowHorizontalRotationInverse_41(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowHorizontalRotationInverse_41 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotation_42() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowVerticalRotation_42)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowVerticalRotation_42() const { return ___windowVerticalRotation_42; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowVerticalRotation_42() { return &___windowVerticalRotation_42; }
	inline void set_windowVerticalRotation_42(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowVerticalRotation_42 = value;
	}

	inline static int32_t get_offset_of_windowVerticalRotationInverse_43() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___windowVerticalRotationInverse_43)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_windowVerticalRotationInverse_43() const { return ___windowVerticalRotationInverse_43; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_windowVerticalRotationInverse_43() { return &___windowVerticalRotationInverse_43; }
	inline void set_windowVerticalRotationInverse_43(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___windowVerticalRotationInverse_43 = value;
	}

	inline static int32_t get_offset_of_frameInfoMatrices_44() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameInfoMatrices_44)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_frameInfoMatrices_44() const { return ___frameInfoMatrices_44; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_frameInfoMatrices_44() { return &___frameInfoMatrices_44; }
	inline void set_frameInfoMatrices_44(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___frameInfoMatrices_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoMatrices_44), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoColors_45() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameInfoColors_45)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get_frameInfoColors_45() const { return ___frameInfoColors_45; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of_frameInfoColors_45() { return &___frameInfoColors_45; }
	inline void set_frameInfoColors_45(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		___frameInfoColors_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoColors_45), (void*)value);
	}

	inline static int32_t get_offset_of_frameInfoPropertyBlock_46() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameInfoPropertyBlock_46)); }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * get_frameInfoPropertyBlock_46() const { return ___frameInfoPropertyBlock_46; }
	inline MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 ** get_address_of_frameInfoPropertyBlock_46() { return &___frameInfoPropertyBlock_46; }
	inline void set_frameInfoPropertyBlock_46(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * value)
	{
		___frameInfoPropertyBlock_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameInfoPropertyBlock_46), (void*)value);
	}

	inline static int32_t get_offset_of_colorID_47() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___colorID_47)); }
	inline int32_t get_colorID_47() const { return ___colorID_47; }
	inline int32_t* get_address_of_colorID_47() { return &___colorID_47; }
	inline void set_colorID_47(int32_t value)
	{
		___colorID_47 = value;
	}

	inline static int32_t get_offset_of_parentMatrixID_48() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___parentMatrixID_48)); }
	inline int32_t get_parentMatrixID_48() const { return ___parentMatrixID_48; }
	inline int32_t* get_address_of_parentMatrixID_48() { return &___parentMatrixID_48; }
	inline void set_parentMatrixID_48(int32_t value)
	{
		___parentMatrixID_48 = value;
	}

	inline static int32_t get_offset_of_frameCount_49() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameCount_49)); }
	inline int32_t get_frameCount_49() const { return ___frameCount_49; }
	inline int32_t* get_address_of_frameCount_49() { return &___frameCount_49; }
	inline void set_frameCount_49(int32_t value)
	{
		___frameCount_49 = value;
	}

	inline static int32_t get_offset_of_stopwatch_50() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___stopwatch_50)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_stopwatch_50() const { return ___stopwatch_50; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_stopwatch_50() { return &___stopwatch_50; }
	inline void set_stopwatch_50(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___stopwatch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_50), (void*)value);
	}

	inline static int32_t get_offset_of_frameTimings_51() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___frameTimings_51)); }
	inline FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* get_frameTimings_51() const { return ___frameTimings_51; }
	inline FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3** get_address_of_frameTimings_51() { return &___frameTimings_51; }
	inline void set_frameTimings_51(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* value)
	{
		___frameTimings_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameTimings_51), (void*)value);
	}

	inline static int32_t get_offset_of_cpuFrameRateStrings_52() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___cpuFrameRateStrings_52)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_cpuFrameRateStrings_52() const { return ___cpuFrameRateStrings_52; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_cpuFrameRateStrings_52() { return &___cpuFrameRateStrings_52; }
	inline void set_cpuFrameRateStrings_52(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___cpuFrameRateStrings_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpuFrameRateStrings_52), (void*)value);
	}

	inline static int32_t get_offset_of_gpuFrameRateStrings_53() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___gpuFrameRateStrings_53)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_gpuFrameRateStrings_53() const { return ___gpuFrameRateStrings_53; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_gpuFrameRateStrings_53() { return &___gpuFrameRateStrings_53; }
	inline void set_gpuFrameRateStrings_53(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___gpuFrameRateStrings_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpuFrameRateStrings_53), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuffer_54() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___stringBuffer_54)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_stringBuffer_54() const { return ___stringBuffer_54; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_stringBuffer_54() { return &___stringBuffer_54; }
	inline void set_stringBuffer_54(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___stringBuffer_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuffer_54), (void*)value);
	}

	inline static int32_t get_offset_of_memoryUsage_55() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___memoryUsage_55)); }
	inline uint64_t get_memoryUsage_55() const { return ___memoryUsage_55; }
	inline uint64_t* get_address_of_memoryUsage_55() { return &___memoryUsage_55; }
	inline void set_memoryUsage_55(uint64_t value)
	{
		___memoryUsage_55 = value;
	}

	inline static int32_t get_offset_of_peakMemoryUsage_56() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___peakMemoryUsage_56)); }
	inline uint64_t get_peakMemoryUsage_56() const { return ___peakMemoryUsage_56; }
	inline uint64_t* get_address_of_peakMemoryUsage_56() { return &___peakMemoryUsage_56; }
	inline void set_peakMemoryUsage_56(uint64_t value)
	{
		___peakMemoryUsage_56 = value;
	}

	inline static int32_t get_offset_of_limitMemoryUsage_57() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___limitMemoryUsage_57)); }
	inline uint64_t get_limitMemoryUsage_57() const { return ___limitMemoryUsage_57; }
	inline uint64_t* get_address_of_limitMemoryUsage_57() { return &___limitMemoryUsage_57; }
	inline void set_limitMemoryUsage_57(uint64_t value)
	{
		___limitMemoryUsage_57 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_58() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___defaultMaterial_58)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultMaterial_58() const { return ___defaultMaterial_58; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultMaterial_58() { return &___defaultMaterial_58; }
	inline void set_defaultMaterial_58(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultMaterial_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_58), (void*)value);
	}

	inline static int32_t get_offset_of_defaultInstancedMaterial_59() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___defaultInstancedMaterial_59)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defaultInstancedMaterial_59() const { return ___defaultInstancedMaterial_59; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defaultInstancedMaterial_59() { return &___defaultInstancedMaterial_59; }
	inline void set_defaultInstancedMaterial_59(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defaultInstancedMaterial_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstancedMaterial_59), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundMaterial_60() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___backgroundMaterial_60)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_backgroundMaterial_60() const { return ___backgroundMaterial_60; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_backgroundMaterial_60() { return &___backgroundMaterial_60; }
	inline void set_backgroundMaterial_60(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___backgroundMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_foregroundMaterial_61() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___foregroundMaterial_61)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_foregroundMaterial_61() const { return ___foregroundMaterial_61; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_foregroundMaterial_61() { return &___foregroundMaterial_61; }
	inline void set_foregroundMaterial_61(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___foregroundMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foregroundMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_textMaterial_62() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___textMaterial_62)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_textMaterial_62() const { return ___textMaterial_62; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_textMaterial_62() { return &___textMaterial_62; }
	inline void set_textMaterial_62(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___textMaterial_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMaterial_62), (void*)value);
	}

	inline static int32_t get_offset_of_quadMesh_63() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E, ___quadMesh_63)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_quadMesh_63() const { return ___quadMesh_63; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_quadMesh_63() { return &___quadMesh_63; }
	inline void set_quadMesh_63(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___quadMesh_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMesh_63), (void*)value);
	}
};

struct MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxStringLength
	int32_t ___maxStringLength_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxTargetFrameRate
	int32_t ___maxTargetFrameRate_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::maxFrameTimings
	int32_t ___maxFrameTimings_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::frameRange
	int32_t ___frameRange_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowRotation
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___defaultWindowRotation_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::defaultWindowScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___defaultWindowScale_9;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundScales
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___backgroundScales_10;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::backgroundOffsets
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___backgroundOffsets_11;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::usedMemoryString
	String_t* ___usedMemoryString_12;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::peakMemoryString
	String_t* ___peakMemoryString_13;
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::limitMemoryString
	String_t* ___limitMemoryString_14;

public:
	inline static int32_t get_offset_of_maxStringLength_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___maxStringLength_4)); }
	inline int32_t get_maxStringLength_4() const { return ___maxStringLength_4; }
	inline int32_t* get_address_of_maxStringLength_4() { return &___maxStringLength_4; }
	inline void set_maxStringLength_4(int32_t value)
	{
		___maxStringLength_4 = value;
	}

	inline static int32_t get_offset_of_maxTargetFrameRate_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___maxTargetFrameRate_5)); }
	inline int32_t get_maxTargetFrameRate_5() const { return ___maxTargetFrameRate_5; }
	inline int32_t* get_address_of_maxTargetFrameRate_5() { return &___maxTargetFrameRate_5; }
	inline void set_maxTargetFrameRate_5(int32_t value)
	{
		___maxTargetFrameRate_5 = value;
	}

	inline static int32_t get_offset_of_maxFrameTimings_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___maxFrameTimings_6)); }
	inline int32_t get_maxFrameTimings_6() const { return ___maxFrameTimings_6; }
	inline int32_t* get_address_of_maxFrameTimings_6() { return &___maxFrameTimings_6; }
	inline void set_maxFrameTimings_6(int32_t value)
	{
		___maxFrameTimings_6 = value;
	}

	inline static int32_t get_offset_of_frameRange_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___frameRange_7)); }
	inline int32_t get_frameRange_7() const { return ___frameRange_7; }
	inline int32_t* get_address_of_frameRange_7() { return &___frameRange_7; }
	inline void set_frameRange_7(int32_t value)
	{
		___frameRange_7 = value;
	}

	inline static int32_t get_offset_of_defaultWindowRotation_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___defaultWindowRotation_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_defaultWindowRotation_8() const { return ___defaultWindowRotation_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_defaultWindowRotation_8() { return &___defaultWindowRotation_8; }
	inline void set_defaultWindowRotation_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___defaultWindowRotation_8 = value;
	}

	inline static int32_t get_offset_of_defaultWindowScale_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___defaultWindowScale_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_defaultWindowScale_9() const { return ___defaultWindowScale_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_defaultWindowScale_9() { return &___defaultWindowScale_9; }
	inline void set_defaultWindowScale_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___defaultWindowScale_9 = value;
	}

	inline static int32_t get_offset_of_backgroundScales_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___backgroundScales_10)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_backgroundScales_10() const { return ___backgroundScales_10; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_backgroundScales_10() { return &___backgroundScales_10; }
	inline void set_backgroundScales_10(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___backgroundScales_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundScales_10), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundOffsets_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___backgroundOffsets_11)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_backgroundOffsets_11() const { return ___backgroundOffsets_11; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_backgroundOffsets_11() { return &___backgroundOffsets_11; }
	inline void set_backgroundOffsets_11(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___backgroundOffsets_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundOffsets_11), (void*)value);
	}

	inline static int32_t get_offset_of_usedMemoryString_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___usedMemoryString_12)); }
	inline String_t* get_usedMemoryString_12() const { return ___usedMemoryString_12; }
	inline String_t** get_address_of_usedMemoryString_12() { return &___usedMemoryString_12; }
	inline void set_usedMemoryString_12(String_t* value)
	{
		___usedMemoryString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usedMemoryString_12), (void*)value);
	}

	inline static int32_t get_offset_of_peakMemoryString_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___peakMemoryString_13)); }
	inline String_t* get_peakMemoryString_13() const { return ___peakMemoryString_13; }
	inline String_t** get_address_of_peakMemoryString_13() { return &___peakMemoryString_13; }
	inline void set_peakMemoryString_13(String_t* value)
	{
		___peakMemoryString_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peakMemoryString_13), (void*)value);
	}

	inline static int32_t get_offset_of_limitMemoryString_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields, ___limitMemoryString_14)); }
	inline String_t* get_limitMemoryString_14() const { return ___limitMemoryString_14; }
	inline String_t** get_address_of_limitMemoryString_14() { return &___limitMemoryString_14; }
	inline void set_limitMemoryString_14(String_t* value)
	{
		___limitMemoryString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitMemoryString_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl
struct  VisualProfilerControl_t371B3920551CA89ADA1510C809BFE7200BF3F24C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.FrameTiming[]
struct FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  m_Items[1];

public:
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameTiming_tAF2F0C7558BD0631E69FC0D0A5ADCE90EDC166FC  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  m_Items[1];

public:
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler_FrameRateColor[]
struct FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  m_Items[1];

public:
	inline FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_m7A19A827934CFEE34C9C44916C984B86003C7E69_gshared (EventFunction_1_t0D76F16B2B9E513C3DFCE66CDCAC1768F5B6488C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_mC0CCF6A7FE6F32C0C6B0FB70F163257D9A07F211_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::get_Command()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  SpeechEventData_get_Command_mAEDE76389095DA584E6CDAF6C52BFE2FD85757CB_inline (SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_Keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_Keyword_mDCA41FF19189CF0D098E1147C64F3117C0D2DA06 (SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m149A8A0D534D2CEB1BF000737380A7452CD73247 (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_m76297DD644EF240E17DE25C8E40698BA82981B01 (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.CoreServices::get_DiagnosticsSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mB5C4B3FE1726560D0D842708DCD17F9D1FE10AA3 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m6588B33F12F54F3CDADCE9D455164EBF8E6D1A75_inline (BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_m40CCA320C69D6978028C8B998E48A83FE81647B7 (BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC * __this, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls>()
inline DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350_m5F779E07EDFD5150A9109AC411EB7B469DD70BBA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_mB46688FFB2AF5DAF9D3589C378797DAB28DBCDB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mA72EC79B40C73FD5BD032463D81D65C8B6016F81_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler>()
inline MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_m0F375787B7E075ECC07C89A28AF4B5A2E129C2E8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m50E6AEAA487C78034A4DCD70368C894B07F51024_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_mBEB50047A407F93678618D29C58DC2CCFF762C1F_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m8A9408532076499A6D6AF1E8565FDBFC44CE563A_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mAB8F7B120A4B698EA436122F1285E1BD0DCBDCFD_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m8D205CD94056846C05AEA8D96AAF631B8CE7A4BD_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mDA8F638CF88631244B26D5CCB1B149692F53393E_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mF5BF6E7D15A5EA793BA9132260D1537BC9DF8AAB_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m09BE9F07637D13FA591844233586EF15DDA4469D_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m523DDCAB3CFBEB0C022B832EFB2FE21270FAB0DB_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mA832D6EEAB140ED745F1BCB65DA8FFC55D6E1D3F_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m50D12A011DF5B139ABB0247BA7BE19F7FE57EA94_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_mC89E1DCFA279D26BBAFA9445DFD35BDB5C18B3E8_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_mD6B90405F9930ED4E5BA3F1F3D904E678B119B0F_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_mFDEA534CECEE3C2E440840E2D5E4427109352A77_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_mCEE6A37B37D410F7F3B86426306738AB278EDDDA (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEA6FD6E7762717F455469B222AE36D24AD665314_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m9D2BD335DDBC7A646B10FF7F460986F016930032 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData__ctor_m87B553DDF9C01BFF7CFCEC19852801BEF3AE1223 (DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowDiagnostics()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m0B592F14159ADA473A63992AEFD3E73289410B79_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m3B9099C75B4405B3F8E00D0284D5FB3ED982F71C (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowProfiler()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_mEF72E96840D11DB574DF9DDC266186F3ED66CC90_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mE8F001A5A9E8B11D6ED49739D14DDA36CFBA8D35 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowFrameInfo()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m491162593C4F951FAD87637C428DA1AF7CC3753F_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mDA66A3D63AED5CA07243E70342783DD352A94174 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_ShowMemoryStats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_mC2B1ADF49D79384554FFEACFCC161C5D26A8C616_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m76DF6C70F740894211AE1500004099C70F39E042 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_FrameSampleRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_m6677821C573D96A3C57F768A078E4011DF2CAAD0_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m037CB8A13CEDE1C2185DC355B0DE3CA79AF91430 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowAnchor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m2618DBA5D791DFD9AFA1734E4E8BB40CA4C910E2_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_m238E9E15AA43362934CE144049FDEA9D1876C05A (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsProfile_get_WindowOffset_m94AA80E762902234A3178FB97EF78F9054C81DE2_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m24F76FB9DD233EFCEBF83731DDB66CAA6B699EA8 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_m7554343EE37046B3B7A235D5540B987EF950954C_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_mDDB18D499E31C47583AB7D47F9D603CC9CBDD016 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile::get_WindowFollowSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_mE4D5939D4B319D3BD4A24F0428426091B582A015_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mC6C40C022859CC1BEC498298010FBF7416E7F0AF (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m8819D8EFE98502C032635F84A4055EBCE7559030 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_mA53B9FA35D495EAE22ADE023AFFD20EC1CB45039 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData::Initialize(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsEventData_Initialize_mD00A6CB2C3B9131234FB49FDF34F28D1CC142F58 (DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * __this, RuntimeObject* ___diagnosticsSystem0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m13F4D9D6B934D7B294D250B87C0ECB430827BC32 (EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m7A19A827934CFEE34C9C44916C984B86003C7E69_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1983ED6215D8B264C98D00DD9CA6E1A3CFA667B2 (U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData>(UnityEngine.EventSystems.BaseEventData)
inline DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6_mA510FF397FAB2EAE56C68D1C460EF19B40C6FEDD (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method)
{
	return ((  DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mC0CCF6A7FE6F32C0C6B0FB70F163257D9A07F211_gshared)(___data0, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___source0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_mB09338F622466456ADBCC449BB1F62F2EF1731B6 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m9BDC66B271C5672895C1F04CF95F4304B09FBE86 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_mBCC4BD16F504DC6CAC86E078556958B3EB9C08AD (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mB9670D04531C70B01046D8083AF0E7239161C20B (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m8C0BB61D9C23C394E3130DFDE16032208FC75CEB (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mFA1CCF49953AC7F0EACE8AD933B47E5BF8B37BAB (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m277DADD349A45BD857732E3B4D25D5B7064B3332 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.FrameTimingManager::CaptureFrameTimings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameTimingManager_CaptureFrameTimings_m1816EB99EFF92F9394E7000A9CB1F9F9363A90F5 (const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.UInt32 UnityEngine.FrameTimingManager::GetLatestTimings(System.UInt32,UnityEngine.FrameTiming[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FrameTimingManager_GetLatestTimings_m286888EFC8779C9F97D5140EE5D7EE80BEE3DE35 (uint32_t ___numFrames0, FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___timings1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_m5E5C61DDCC7F203EEB150C3B0F8EA0FD01772C1E (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityToolkitVisualProfiler_CalculateFrameColor_m0213214E418F0F526382D6C1061804F899431A4E (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, int32_t ___frameRate0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetVectorArray(System.Int32,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ___values1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetMatrix_mF4694BD7CFC224C638D30BFC9CC91D5D711EA227 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock,UnityEngine.Rendering.ShadowCastingMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMeshInstanced_mD1048BED7CCCC0675C7EC696407E545456D27D19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, int32_t ___submeshIndex1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material2, Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___matrices3, int32_t ___count4, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties5, int32_t ___castShadows6, bool ___receiveShadows7, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_op_Implicit_m51CEC50D37ABC484073AECE7EB958B414F2B6E7B (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, int32_t ___nameID0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.Camera,System.Int32,UnityEngine.MaterialPropertyBlock,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_mA26415237B646D7C832483597F98C6C158785660 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material2, int32_t ___layer3, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera4, int32_t ___submeshIndex5, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties6, bool ___castShadows7, bool ___receiveShadows8, bool ___useLightProbes9, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m1C98E5A5B83047FB0037095BBAF6F8FE0C033F00 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC64E536311135A81FDC1B2D6591849A776D091E8 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mDC6202726D1C356A3CB411D5989151B0FDED0B46 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mCA2C2FF62139ABAA97E1250B1629A60607A91C25 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA8487EE1F35F72300474A546FFD1505B1D972F22 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m1DED2011000F4D9A303C2D320B39A2806B4FFED5_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3 (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_m6CF22A47DB6CD86B1A739406F1BB4755C1FAC5B1 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_richText_mEA6ACA489617BC48D2317385C92C542C5EFD15CA (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m803E312A187E7D5FE6F60575A855EC545AC9A909 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_allowOcclusionWhenDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m99D50BB9766B5B9717384F9AFB9269D108525AD5 (uint64_t ___bytes0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m01F4C17AFB569A1A313022827340AB2A327252B8 (int32_t ___value0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8 (const RuntimeMethod* method);
// System.Int64 UnityEngine.Profiling.Profiler::GetTotalAllocatedMemoryLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Profiler_GetTotalAllocatedMemoryLong_m8B81D9312DC29887D552EEAFBFA95794A4D4EBD1 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m7599C2A9CA16C15DD72C5563D5C47262CEDE0EB8 (const RuntimeMethod* method);
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertMegabytesToBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m22808CA3BD8A2EB600B4816A5968E3DE857F3B40 (int32_t ___megabytes0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnEnable_m1ECE7A8C5BA70E3E87A0B1B8A8385A03F6D7F00A (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_OnEnable_m1ECE7A8C5BA70E3E87A0B1B8A8385A03F6D7F00A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!registeredForInput)
		bool L_0 = __this->get_registeredForInput_4();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (CoreServices.InputSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// CoreServices.InputSystem.RegisterHandler<IMixedRealitySpeechHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_t1A1BC9237992FB216FCCB3AA74619164F57354F8_m5A1A060DC96CF948199CE8BCAC72F969735D4127_RuntimeMethod_var, L_2, __this);
		// registeredForInput = true;
		__this->set_registeredForInput_4((bool)1);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_OnDisable_mB33D41E503FF77EF4670211D6C1CF7179D80FF64 (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_OnDisable_mB33D41E503FF77EF4670211D6C1CF7179D80FF64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (registeredForInput)
		bool L_0 = __this->get_registeredForInput_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// CoreServices.InputSystem.UnregisterHandler<IMixedRealitySpeechHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_t1A1BC9237992FB216FCCB3AA74619164F57354F8_mA44C0892D9AB349A4852D13993CFBA476F55100C_RuntimeMethod_var, L_1, __this);
		// registeredForInput = false;
		__this->set_registeredForInput_4((bool)0);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler.OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_m496DBDE87D8009F68D927CA1A246262BA01A679B (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_Microsoft_MixedReality_Toolkit_Input_IMixedRealitySpeechHandler_OnSpeechKeywordRecognized_m496DBDE87D8009F68D927CA1A246262BA01A679B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// switch (eventData.Command.Keyword.ToLower())
		SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83 * L_0 = ___eventData0;
		NullCheck(L_0);
		SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  L_1 = SpeechEventData_get_Command_mAEDE76389095DA584E6CDAF6C52BFE2FD85757CB_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = SpeechCommands_get_Keyword_mDCA41FF19189CF0D098E1147C64F3117C0D2DA06((SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralDA2CBFEB5B67015731670B2966A4EA649BDF8D7F, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = V_1;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteralD67803D21C492757F3E466439B3888A5240FB925, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_002f:
	{
		// ToggleDiagnostics();
		DiagnosticsSystemVoiceControls_ToggleDiagnostics_m149A8A0D534D2CEB1BF000737380A7452CD73247(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0036:
	{
		// ToggleProfiler();
		DiagnosticsSystemVoiceControls_ToggleProfiler_m76297DD644EF240E17DE25C8E40698BA82981B01(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleDiagnostics_m149A8A0D534D2CEB1BF000737380A7452CD73247 (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_ToggleDiagnostics_m149A8A0D534D2CEB1BF000737380A7452CD73247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowDiagnostics = !CoreServices.DiagnosticsSystem.ShowDiagnostics;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		RuntimeObject* L_2 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowDiagnostics() */, IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean) */, IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls_ToggleProfiler_m76297DD644EF240E17DE25C8E40698BA82981B01 (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiagnosticsSystemVoiceControls_ToggleProfiler_m76297DD644EF240E17DE25C8E40698BA82981B01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		RuntimeObject* L_2 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsSystemVoiceControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsSystemVoiceControls__ctor_m286ABCC597D450B501A8B5236FEF2F7546BCA318 (DiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mE385D219AB5597C49D7F918ED1BEFFE3AC5644A3 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, RuntimeObject* ___registrar0, MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * ___profile1, const RuntimeMethod* method)
{
	{
		// MixedRealityDiagnosticsProfile profile) : this(profile)
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_0 = ___profile1;
		MixedRealityDiagnosticsSystem__ctor_mB5C4B3FE1726560D0D842708DCD17F9D1FE10AA3(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_m6588B33F12F54F3CDADCE9D455164EBF8E6D1A75_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.ctor(Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__ctor_mB5C4B3FE1726560D0D842708DCD17F9D1FE10AA3 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__ctor_mB5C4B3FE1726560D0D842708DCD17F9D1FE10AA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		__this->set_U3CNameU3Ek__BackingField_13(_stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A);
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_21((0.1f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_24(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.1f), (0.1f), /*hidden argument*/NULL);
		__this->set_windowOffset_25(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_26((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_27((5.0f));
		// MixedRealityDiagnosticsProfile profile) : base(profile)
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_1 = ___profile0;
		BaseCoreSystem__ctor_m40CCA320C69D6978028C8B998E48A83FE81647B7(__this, L_1, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_Name_m084559E11A1819E9BA979D36367F9D6A8CD61F9E (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_Name_mE4D597A997454E947E1B3A9E51B02CFBB831C516 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Diagnostics System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::CreateVisualizations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_CreateVisualizations_m8819D8EFE98502C032635F84A4055EBCE7559030 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_CreateVisualizations_m8819D8EFE98502C032635F84A4055EBCE7559030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// diagnosticVisualizationParent = new GameObject("Diagnostics");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3AF2279F9E306ACD0A4644E2B0F2F48A1E06D8D9, /*hidden argument*/NULL);
		__this->set_diagnosticVisualizationParent_14(L_0);
		// diagnosticVisualizationParent.AddComponent<DiagnosticsSystemVoiceControls>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_diagnosticVisualizationParent_14();
		NullCheck(L_1);
		GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350_m5F779E07EDFD5150A9109AC411EB7B469DD70BBA(L_1, /*hidden argument*/GameObject_AddComponent_TisDiagnosticsSystemVoiceControls_tD683A17F3904E747CB19E1D059E285168A5B1350_m5F779E07EDFD5150A9109AC411EB7B469DD70BBA_RuntimeMethod_var);
		// MixedRealityPlayspace.AddChild(diagnosticVisualizationParent.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_diagnosticVisualizationParent_14();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tF427C0C90F020A6DEA420D40C7BBADE13037782A_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_AddChild_mB46688FFB2AF5DAF9D3589C378797DAB28DBCDB0(L_3, /*hidden argument*/NULL);
		// diagnosticVisualizationParent.SetActive(ShowDiagnostics);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_diagnosticVisualizationParent_14();
		bool L_5 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mA72EC79B40C73FD5BD032463D81D65C8B6016F81_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, L_5, /*hidden argument*/NULL);
		// visualProfiler = diagnosticVisualizationParent.AddComponent<MixedRealityToolkitVisualProfiler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_diagnosticVisualizationParent_14();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_7 = GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_m0F375787B7E075ECC07C89A28AF4B5A2E129C2E8(L_6, /*hidden argument*/GameObject_AddComponent_TisMixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_m0F375787B7E075ECC07C89A28AF4B5A2E129C2E8_RuntimeMethod_var);
		__this->set_visualProfiler_15(L_7);
		// visualProfiler.WindowParent = diagnosticVisualizationParent.transform;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_8 = __this->get_visualProfiler_15();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_diagnosticVisualizationParent_14();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		MixedRealityToolkitVisualProfiler_set_WindowParent_m50E6AEAA487C78034A4DCD70368C894B07F51024_inline(L_8, L_10, /*hidden argument*/NULL);
		// visualProfiler.IsVisible = ShowProfiler;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_11 = __this->get_visualProfiler_15();
		bool L_12 = MixedRealityDiagnosticsSystem_get_ShowProfiler_mBEB50047A407F93678618D29C58DC2CCFF762C1F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m8A9408532076499A6D6AF1E8565FDBFC44CE563A_inline(L_11, L_12, /*hidden argument*/NULL);
		// visualProfiler.FrameInfoVisible = ShowFrameInfo;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_13 = __this->get_visualProfiler_15();
		bool L_14 = MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mAB8F7B120A4B698EA436122F1285E1BD0DCBDCFD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m8D205CD94056846C05AEA8D96AAF631B8CE7A4BD_inline(L_13, L_14, /*hidden argument*/NULL);
		// visualProfiler.MemoryStatsVisible = ShowMemoryStats;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_15 = __this->get_visualProfiler_15();
		bool L_16 = MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mDA8F638CF88631244B26D5CCB1B149692F53393E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mF5BF6E7D15A5EA793BA9132260D1537BC9DF8AAB_inline(L_15, L_16, /*hidden argument*/NULL);
		// visualProfiler.FrameSampleRate = FrameSampleRate;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_17 = __this->get_visualProfiler_15();
		float L_18 = MixedRealityDiagnosticsSystem_get_FrameSampleRate_m09BE9F07637D13FA591844233586EF15DDA4469D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m523DDCAB3CFBEB0C022B832EFB2FE21270FAB0DB_inline(L_17, L_18, /*hidden argument*/NULL);
		// visualProfiler.WindowAnchor = WindowAnchor;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_19 = __this->get_visualProfiler_15();
		int32_t L_20 = MixedRealityDiagnosticsSystem_get_WindowAnchor_mA832D6EEAB140ED745F1BCB65DA8FFC55D6E1D3F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m50D12A011DF5B139ABB0247BA7BE19F7FE57EA94_inline(L_19, L_20, /*hidden argument*/NULL);
		// visualProfiler.WindowOffset = WindowOffset;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_21 = __this->get_visualProfiler_15();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = MixedRealityDiagnosticsSystem_get_WindowOffset_mC89E1DCFA279D26BBAFA9445DFD35BDB5C18B3E8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_mD6B90405F9930ED4E5BA3F1F3D904E678B119B0F_inline(L_21, L_22, /*hidden argument*/NULL);
		// visualProfiler.WindowScale = WindowScale;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_23 = __this->get_visualProfiler_15();
		float L_24 = MixedRealityDiagnosticsSystem_get_WindowScale_mFDEA534CECEE3C2E440840E2D5E4427109352A77_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		MixedRealityToolkitVisualProfiler_set_WindowScale_mCEE6A37B37D410F7F3B86426306738AB278EDDDA(L_23, L_24, /*hidden argument*/NULL);
		// visualProfiler.WindowFollowSpeed = WindowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_25 = __this->get_visualProfiler_15();
		float L_26 = MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEA6FD6E7762717F455469B222AE36D24AD665314_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m9D2BD335DDBC7A646B10FF7F460986F016930032(L_25, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Initialize_m0E1E1DE9BCD97C494AA8DEDFF4765322C3528386 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Initialize_m0E1E1DE9BCD97C494AA8DEDFF4765322C3528386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * V_0 = NULL;
	{
		// if (!Application.isPlaying) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) { return; }
		return;
	}

IL_0008:
	{
		// MixedRealityDiagnosticsProfile profile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_1 = VirtFuncInvoker0< BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 *)IsInstClass((RuntimeObject*)L_1, MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394_il2cpp_TypeInfo_var));
		// if (profile == null) { return; }
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (profile == null) { return; }
		return;
	}

IL_001e:
	{
		// eventData = new DiagnosticsEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_4 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * L_5 = (DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 *)il2cpp_codegen_object_new(DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6_il2cpp_TypeInfo_var);
		DiagnosticsEventData__ctor_m87B553DDF9C01BFF7CFCEC19852801BEF3AE1223(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventData_22(L_5);
		// ShowDiagnostics = profile.ShowDiagnostics;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m0B592F14159ADA473A63992AEFD3E73289410B79_inline(L_6, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m3B9099C75B4405B3F8E00D0284D5FB3ED982F71C(__this, L_7, /*hidden argument*/NULL);
		// ShowProfiler = profile.ShowProfiler;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = MixedRealityDiagnosticsProfile_get_ShowProfiler_mEF72E96840D11DB574DF9DDC266186F3ED66CC90_inline(L_8, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowProfiler_mE8F001A5A9E8B11D6ED49739D14DDA36CFBA8D35(__this, L_9, /*hidden argument*/NULL);
		// ShowFrameInfo = profile.ShowFrameInfo;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m491162593C4F951FAD87637C428DA1AF7CC3753F_inline(L_10, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mDA66A3D63AED5CA07243E70342783DD352A94174(__this, L_11, /*hidden argument*/NULL);
		// ShowMemoryStats = profile.ShowMemoryStats;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = MixedRealityDiagnosticsProfile_get_ShowMemoryStats_mC2B1ADF49D79384554FFEACFCC161C5D26A8C616_inline(L_12, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m76DF6C70F740894211AE1500004099C70F39E042(__this, L_13, /*hidden argument*/NULL);
		// FrameSampleRate = profile.FrameSampleRate;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = MixedRealityDiagnosticsProfile_get_FrameSampleRate_m6677821C573D96A3C57F768A078E4011DF2CAAD0_inline(L_14, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_FrameSampleRate_m037CB8A13CEDE1C2185DC355B0DE3CA79AF91430(__this, L_15, /*hidden argument*/NULL);
		// WindowAnchor = profile.WindowAnchor;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = MixedRealityDiagnosticsProfile_get_WindowAnchor_m2618DBA5D791DFD9AFA1734E4E8BB40CA4C910E2_inline(L_16, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowAnchor_m238E9E15AA43362934CE144049FDEA9D1876C05A(__this, L_17, /*hidden argument*/NULL);
		// WindowOffset = profile.WindowOffset;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_18 = V_0;
		NullCheck(L_18);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = MixedRealityDiagnosticsProfile_get_WindowOffset_m94AA80E762902234A3178FB97EF78F9054C81DE2_inline(L_18, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowOffset_m24F76FB9DD233EFCEBF83731DDB66CAA6B699EA8(__this, L_19, /*hidden argument*/NULL);
		// WindowScale = profile.WindowScale;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_20 = V_0;
		NullCheck(L_20);
		float L_21 = MixedRealityDiagnosticsProfile_get_WindowScale_m7554343EE37046B3B7A235D5540B987EF950954C_inline(L_20, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowScale_mDDB18D499E31C47583AB7D47F9D603CC9CBDD016(__this, L_21, /*hidden argument*/NULL);
		// WindowFollowSpeed = profile.WindowFollowSpeed;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_22 = V_0;
		NullCheck(L_22);
		float L_23 = MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_mE4D5939D4B319D3BD4A24F0428426091B582A015_inline(L_22, /*hidden argument*/NULL);
		MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mC6C40C022859CC1BEC498298010FBF7416E7F0AF(__this, L_23, /*hidden argument*/NULL);
		// CreateVisualizations();
		MixedRealityDiagnosticsSystem_CreateVisualizations_m8819D8EFE98502C032635F84A4055EBCE7559030(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_Destroy_m0C848C1C82BD181671BE920248337F09CC05D89F (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_Destroy_m0C848C1C82BD181671BE920248337F09CC05D89F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_diagnosticVisualizationParent_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// if (Application.isEditor)
		bool L_2 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Object.DestroyImmediate(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_diagnosticVisualizationParent_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_3, /*hidden argument*/NULL);
		// }
		goto IL_003d;
	}

IL_0022:
	{
		// diagnosticVisualizationParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_diagnosticVisualizationParent_14();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_5, /*hidden argument*/NULL);
		// Object.Destroy(diagnosticVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_diagnosticVisualizationParent_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// diagnosticVisualizationParent = null;
		__this->set_diagnosticVisualizationParent_14((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_DiagnosticsSystemProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m68E80BC89496FB96C32D615B6A1FCC18725EBD34 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_get_DiagnosticsSystemProfile_m68E80BC89496FB96C32D615B6A1FCC18725EBD34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticsSystemProfile == null)
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_0 = __this->get_diagnosticsSystemProfile_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// diagnosticsSystemProfile = ConfigurationProfile as MixedRealityDiagnosticsProfile;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_2 = VirtFuncInvoker0< BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_diagnosticsSystemProfile_16(((MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 *)IsInstClass((RuntimeObject*)L_2, MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394_il2cpp_TypeInfo_var)));
	}

IL_001f:
	{
		// return diagnosticsSystemProfile;
		MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * L_3 = __this->get_diagnosticsSystemProfile_16();
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowDiagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mA72EC79B40C73FD5BD032463D81D65C8B6016F81 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowDiagnostics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowDiagnostics_m3B9099C75B4405B3F8E00D0284D5FB3ED982F71C (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value != showDiagnostics)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showDiagnostics_17();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		// showDiagnostics = value;
		bool L_2 = ___value0;
		__this->set_showDiagnostics_17(L_2);
		// if (ShowProfiler)
		bool L_3 = MixedRealityDiagnosticsSystem_get_ShowProfiler_mBEB50047A407F93678618D29C58DC2CCFF762C1F_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_4 = __this->get_visualProfiler_15();
		bool L_5 = ___value0;
		NullCheck(L_4);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m8A9408532076499A6D6AF1E8565FDBFC44CE563A_inline(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_mBEB50047A407F93678618D29C58DC2CCFF762C1F (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowProfiler_mE8F001A5A9E8B11D6ED49739D14DDA36CFBA8D35 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowProfiler_mE8F001A5A9E8B11D6ED49739D14DDA36CFBA8D35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showProfiler)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showProfiler_18();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		// showProfiler = value;
		bool L_2 = ___value0;
		__this->set_showProfiler_18(L_2);
		// if ((visualProfiler != null) && ShowDiagnostics)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_3 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		bool L_5 = MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mA72EC79B40C73FD5BD032463D81D65C8B6016F81_inline(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// visualProfiler.IsVisible = value;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_6 = __this->get_visualProfiler_15();
		bool L_7 = ___value0;
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_IsVisible_m8A9408532076499A6D6AF1E8565FDBFC44CE563A_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowFrameInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mAB8F7B120A4B698EA436122F1285E1BD0DCBDCFD (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowFrameInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mDA66A3D63AED5CA07243E70342783DD352A94174 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowFrameInfo_mDA66A3D63AED5CA07243E70342783DD352A94174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showFrameInfo)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showFrameInfo_19();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showFrameInfo = value;
		bool L_2 = ___value0;
		__this->set_showFrameInfo_19(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_3 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.FrameInfoVisible = value;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_5 = __this->get_visualProfiler_15();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m8D205CD94056846C05AEA8D96AAF631B8CE7A4BD_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_ShowMemoryStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mDA8F638CF88631244B26D5CCB1B149692F53393E (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_ShowMemoryStats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m76DF6C70F740894211AE1500004099C70F39E042 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_ShowMemoryStats_m76DF6C70F740894211AE1500004099C70F39E042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != showMemoryStats)
		bool L_0 = ___value0;
		bool L_1 = __this->get_showMemoryStats_20();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// showMemoryStats = value;
		bool L_2 = ___value0;
		__this->set_showMemoryStats_20(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_3 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// visualProfiler.MemoryStatsVisible = value;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_5 = __this->get_visualProfiler_15();
		bool L_6 = ___value0;
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mF5BF6E7D15A5EA793BA9132260D1537BC9DF8AAB_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m09BE9F07637D13FA591844233586EF15DDA4469D (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_FrameSampleRate_m037CB8A13CEDE1C2185DC355B0DE3CA79AF91430 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_FrameSampleRate_m037CB8A13CEDE1C2185DC355B0DE3CA79AF91430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Mathf.Approximately(frameSampleRate, value))
		float L_0 = __this->get_frameSampleRate_21();
		float L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		// frameSampleRate = value;
		float L_3 = ___value0;
		__this->set_frameSampleRate_21(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_4 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.FrameSampleRate = frameSampleRate;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_6 = __this->get_visualProfiler_15();
		float L_7 = __this->get_frameSampleRate_21();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m523DDCAB3CFBEB0C022B832EFB2FE21270FAB0DB_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityDiagnosticsSystem_get_SourceId_mFC5B014DCF0A55C78BAF666361447A3D76175A02 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId => (uint)SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_mA53B9FA35D495EAE22ADE023AFFD20EC1CB45039(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityDiagnosticsSystem_get_SourceName_mA53B9FA35D495EAE22ADE023AFFD20EC1CB45039 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_get_SourceName_mA53B9FA35D495EAE22ADE023AFFD20EC1CB45039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SourceName => "Mixed Reality Diagnostics System";
		return _stringLiteral239E0C1950725645EB093C14A66E2BBDD321DF7A;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_Equals_m806745AFBE63E2CD79008391E5C5799239F87240 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// public new bool Equals(object x, object y) => false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_GetHashCode_m119F3A1461BB6B3FF4186CF17F9B9C98BE64EEA6 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// public int GetHashCode(object obj) => SourceName.GetHashCode();
		String_t* L_0 = MixedRealityDiagnosticsSystem_get_SourceName_mA53B9FA35D495EAE22ADE023AFFD20EC1CB45039(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::RaiseDiagnosticsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m4A23844C9897B8E15A007658E0D6A05CB5CE5AB5 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_RaiseDiagnosticsChanged_m4A23844C9897B8E15A007658E0D6A05CB5CE5AB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventData.Initialize(this);
		DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * L_0 = __this->get_eventData_22();
		NullCheck(L_0);
		DiagnosticsEventData_Initialize_mD00A6CB2C3B9131234FB49FDF34F28D1CC142F58(L_0, __this, /*hidden argument*/NULL);
		// HandleEvent(eventData, OnDiagnosticsChanged);
		DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * L_1 = __this->get_eventData_22();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_il2cpp_TypeInfo_var);
		EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 * L_2 = ((MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_il2cpp_TypeInfo_var))->get_OnDiagnosticsChanged_23();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityDiagnosticsHandler_tAE87CFBAD96F343F0B2970057B2740DE4996C4E9_mAEDCE3556189D515703821F184B07215C174F6DB_RuntimeMethod_var, __this, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mA832D6EEAB140ED745F1BCB65DA8FFC55D6E1D3F (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowAnchor_m238E9E15AA43362934CE144049FDEA9D1876C05A (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowAnchor_m238E9E15AA43362934CE144049FDEA9D1876C05A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowAnchor)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_windowAnchor_24();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowAnchor = value;
		int32_t L_2 = ___value0;
		__this->set_windowAnchor_24(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_3 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowAnchor = windowAnchor;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_5 = __this->get_visualProfiler_15();
		int32_t L_6 = __this->get_windowAnchor_24();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowAnchor_m50D12A011DF5B139ABB0247BA7BE19F7FE57EA94_inline(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_mC89E1DCFA279D26BBAFA9445DFD35BDB5C18B3E8 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowOffset_m24F76FB9DD233EFCEBF83731DDB66CAA6B699EA8 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowOffset_m24F76FB9DD233EFCEBF83731DDB66CAA6B699EA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowOffset)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = __this->get_windowOffset_25();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		bool L_2 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// windowOffset = value;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___value0;
		__this->set_windowOffset_25(L_3);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_4 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// visualProfiler.WindowOffset = windowOffset;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_6 = __this->get_visualProfiler_15();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = __this->get_windowOffset_25();
		NullCheck(L_6);
		MixedRealityToolkitVisualProfiler_set_WindowOffset_mD6B90405F9930ED4E5BA3F1F3D904E678B119B0F_inline(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_mFDEA534CECEE3C2E440840E2D5E4427109352A77 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowScale_mDDB18D499E31C47583AB7D47F9D603CC9CBDD016 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowScale_mDDB18D499E31C47583AB7D47F9D603CC9CBDD016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowScale)
		float L_0 = ___value0;
		float L_1 = __this->get_windowScale_26();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowScale = value;
		float L_2 = ___value0;
		__this->set_windowScale_26(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_3 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowScale = windowScale;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_5 = __this->get_visualProfiler_15();
		float L_6 = __this->get_windowScale_26();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowScale_mCEE6A37B37D410F7F3B86426306738AB278EDDDA(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEA6FD6E7762717F455469B222AE36D24AD665314 (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mC6C40C022859CC1BEC498298010FBF7416E7F0AF (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem_set_WindowFollowSpeed_mC6C40C022859CC1BEC498298010FBF7416E7F0AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value != windowFollowSpeed)
		float L_0 = ___value0;
		float L_1 = __this->get_windowFollowSpeed_27();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		// windowFollowSpeed = value;
		float L_2 = ___value0;
		__this->set_windowFollowSpeed_27(L_2);
		// if (visualProfiler != null)
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_3 = __this->get_visualProfiler_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// visualProfiler.WindowFollowSpeed = windowFollowSpeed;
		MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * L_5 = __this->get_visualProfiler_15();
		float L_6 = __this->get_windowFollowSpeed_27();
		NullCheck(L_5);
		MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m9D2BD335DDBC7A646B10FF7F460986F016930032(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityDiagnosticsSystem__cctor_m88F55B6287E503931F35347991065DFD3A5AA721 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityDiagnosticsSystem__cctor_m88F55B6287E503931F35347991065DFD3A5AA721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityDiagnosticsHandler> OnDiagnosticsChanged =
		//     delegate (IMixedRealityDiagnosticsHandler handler, BaseEventData eventData)
		//     {
		//         var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		//         handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		//     };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_il2cpp_TypeInfo_var);
		U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * L_0 = ((U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 * L_1 = (EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5 *)il2cpp_codegen_object_new(EventFunction_1_tF20ADA0A8D5F56D7CF33795CA21C34FB254A94C5_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m13F4D9D6B934D7B294D250B87C0ECB430827BC32(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__59_0_mB6CF9A7A53E96A2BF3652B569FA1BE6ECEF0BC1B_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m13F4D9D6B934D7B294D250B87C0ECB430827BC32_RuntimeMethod_var);
		((MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764_il2cpp_TypeInfo_var))->set_OnDiagnosticsChanged_23(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1982D1BBC842D36866FD106B1A8BFDD5F3635B30 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1982D1BBC842D36866FD106B1A8BFDD5F3635B30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * L_0 = (U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 *)il2cpp_codegen_object_new(U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1983ED6215D8B264C98D00DD9CA6E1A3CFA667B2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1983ED6215D8B264C98D00DD9CA6E1A3CFA667B2 (U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem_<>c::<.cctor>b__59_0(Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__59_0_mB6CF9A7A53E96A2BF3652B569FA1BE6ECEF0BC1B (U3CU3Ec_tA5A10E21CDB24ED328EB970954A7B554896203A4 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__59_0_mB6CF9A7A53E96A2BF3652B569FA1BE6ECEF0BC1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * V_0 = NULL;
	{
		// var diagnosticsEventsData = ExecuteEvents.ValidateEventData<DiagnosticsEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * L_1 = ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6_mA510FF397FAB2EAE56C68D1C460EF19B40C6FEDD(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6_mA510FF397FAB2EAE56C68D1C460EF19B40C6FEDD_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDiagnosticSettingsChanged(diagnosticsEventsData);
		RuntimeObject* L_2 = ___handler0;
		DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DiagnosticsEventData_t8B7B53D172849FF58F14176C21E0DB4B290285B6 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler::OnDiagnosticSettingsChanged(Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData) */, IMixedRealityDiagnosticsHandler_tAE87CFBAD96F343F0B2970057B2740DE4996C4E9_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m1DED2011000F4D9A303C2D320B39A2806B4FFED5 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m50E6AEAA487C78034A4DCD70368C894B07F51024 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_IsVisible_m1C0956337372E5A5CFD200267A69127B8D31F70D (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return isVisible; }
		bool L_0 = __this->get_isVisible_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m8A9408532076499A6D6AF1E8565FDBFC44CE563A (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_16(L_0);
		// set { isVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameInfoVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_FrameInfoVisible_m41F2F5EDEFDDD3FDA8875CEC374882FF445BBE6D (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return frameInfoVisible; }
		bool L_0 = __this->get_frameInfoVisible_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameInfoVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m8D205CD94056846C05AEA8D96AAF631B8CE7A4BD (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->set_frameInfoVisible_17(L_0);
		// set { frameInfoVisible = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_MemoryStatsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_get_MemoryStatsVisible_mEB78FEB407E85A12A908167DB3A3D0DB3D884DB7 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return memoryStatsVisible; }
		bool L_0 = __this->get_memoryStatsVisible_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_MemoryStatsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mF5BF6E7D15A5EA793BA9132260D1537BC9DF8AAB (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->set_memoryStatsVisible_18(L_0);
		// set { memoryStatsVisible = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_FrameSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_FrameSampleRate_mB0BD5AE747B7117274B9E408D273699B8D552B44 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return frameSampleRate; }
		float L_0 = __this->get_frameSampleRate_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_FrameSampleRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m523DDCAB3CFBEB0C022B832EFB2FE21270FAB0DB (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_19(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_get_WindowAnchor_mA7F14043B91140C673A3EEC8FB78F64D03FFD357 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowAnchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m50D12A011DF5B139ABB0247BA7BE19F7FE57EA94 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_20(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityToolkitVisualProfiler_get_WindowOffset_mFED6575794374225CEB923DA8807D63ABFD60B13 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_mD6B90405F9930ED4E5BA3F1F3D904E678B119B0F (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_windowOffset_21(L_0);
		// set { windowOffset = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowScale_m8F33A45712A7F463CF32014E4D05DDD626CC077E (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowScale_mCEE6A37B37D410F7F3B86426306738AB278EDDDA (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_set_WindowScale_mCEE6A37B37D410F7F3B86426306738AB278EDDDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.5f), (5.0f), /*hidden argument*/NULL);
		__this->set_windowScale_22(L_1);
		// set { windowScale = Mathf.Clamp(value, 0.5f, 5.0f); }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_WindowFollowSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_WindowFollowSpeed_mC0AE189C395BEFB7422D967C72A720F8DB399EC9 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::set_WindowFollowSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m9D2BD335DDBC7A646B10FF7F460986F016930032 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_set_WindowFollowSpeed_m9D2BD335DDBC7A646B10FF7F460986F016930032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { windowFollowSpeed = Mathf.Abs(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_windowFollowSpeed_23(L_1);
		// set { windowFollowSpeed = Mathf.Abs(value); }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Reset_m9BDC66B271C5672895C1F04CF95F4304B09FBE86 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_Reset_m9BDC66B271C5672895C1F04CF95F4304B09FBE86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * V_0 = NULL;
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * V_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_2 = NULL;
	{
		// if (defaultMaterial == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_defaultMaterial_58();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// defaultMaterial = new Material(Shader.Find("Hidden/Internal-Colored"));
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_2 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralF11AF337B3340D92B47E93D08CB0B65A6AE686F5, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_3, L_2, /*hidden argument*/NULL);
		__this->set_defaultMaterial_58(L_3);
		// defaultMaterial.SetFloat("_ZWrite", 1.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_defaultMaterial_58();
		NullCheck(L_4);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_4, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, (1.0f), /*hidden argument*/NULL);
		// defaultMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get_defaultMaterial_58();
		NullCheck(L_5);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_5, _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3, (0.0f), /*hidden argument*/NULL);
		// defaultMaterial.renderQueue = 5000;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_defaultMaterial_58();
		NullCheck(L_6);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_6, ((int32_t)5000), /*hidden argument*/NULL);
	}

IL_005d:
	{
		// if (defaultInstancedMaterial == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = __this->get_defaultInstancedMaterial_59();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00dd;
		}
	}
	{
		// Shader defaultInstancedShader = Shader.Find("Hidden/Instanced-Colored");
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_9 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralFE2CE179ADA45417D29FD8AAF094AD2E7762DB78, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (defaultInstancedShader != null)
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00d3;
		}
	}
	{
		// defaultInstancedMaterial = new Material(defaultInstancedShader);
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_12 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_13, L_12, /*hidden argument*/NULL);
		__this->set_defaultInstancedMaterial_59(L_13);
		// defaultInstancedMaterial.enableInstancing = true;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_14 = __this->get_defaultInstancedMaterial_59();
		NullCheck(L_14);
		Material_set_enableInstancing_m745D94DF21B9749DA7CFE42BAB3CBD05F614B81E(L_14, (bool)1, /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZWrite", 1.0f);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = __this->get_defaultInstancedMaterial_59();
		NullCheck(L_15);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_15, _stringLiteralD48C67736A90281297DD96BF118099E6CB6939B8, (1.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Disabled);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_16 = __this->get_defaultInstancedMaterial_59();
		NullCheck(L_16);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_16, _stringLiteralE6CCEBA6FB0724DD7ABAA53A7A4801E3696007F3, (0.0f), /*hidden argument*/NULL);
		// defaultInstancedMaterial.renderQueue = 5000;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_17 = __this->get_defaultInstancedMaterial_59();
		NullCheck(L_17);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_17, ((int32_t)5000), /*hidden argument*/NULL);
		// }
		goto IL_00dd;
	}

IL_00d3:
	{
		// Debug.LogWarning("A shader supporting instancing could not be found for the VisualProfiler, falling back to traditional rendering. This may impact performance.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral6AC3D240BE15CDE5454371B7FC93D8B50949262C, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// if (Application.isPlaying)
		bool L_18 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_01de;
		}
	}
	{
		// backgroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_19 = __this->get_defaultMaterial_58();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_20 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_20, L_19, /*hidden argument*/NULL);
		__this->set_backgroundMaterial_60(L_20);
		// foregroundMaterial = new Material(defaultMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_21 = __this->get_defaultMaterial_58();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_22, L_21, /*hidden argument*/NULL);
		__this->set_foregroundMaterial_61(L_22);
		// defaultMaterial.renderQueue = foregroundMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = __this->get_defaultMaterial_58();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_24 = __this->get_foregroundMaterial_61();
		NullCheck(L_24);
		int32_t L_25 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		// backgroundMaterial.renderQueue = defaultMaterial.renderQueue - 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_26 = __this->get_backgroundMaterial_60();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = __this->get_defaultMaterial_58();
		NullCheck(L_27);
		int32_t L_28 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
		// MeshRenderer meshRenderer = new GameObject().AddComponent<TextMesh>().GetComponent<MeshRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_29, /*hidden argument*/NULL);
		NullCheck(L_29);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_30 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_29, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		NullCheck(L_30);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_31 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(L_30, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
		V_1 = L_31;
		// textMaterial = new Material(meshRenderer.sharedMaterial);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_32 = V_1;
		NullCheck(L_32);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_33 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_32, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_34 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_34, L_33, /*hidden argument*/NULL);
		__this->set_textMaterial_62(L_34);
		// textMaterial.renderQueue = defaultMaterial.renderQueue;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_35 = __this->get_textMaterial_62();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_36 = __this->get_defaultMaterial_58();
		NullCheck(L_36);
		int32_t L_37 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_35, L_37, /*hidden argument*/NULL);
		// Destroy(meshRenderer.gameObject);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_38 = V_1;
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_39, /*hidden argument*/NULL);
		// MeshFilter quadMeshFilter = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<MeshFilter>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		NullCheck(L_40);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_41 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_40, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		V_2 = L_41;
		// if (defaultInstancedMaterial != null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_42 = __this->get_defaultInstancedMaterial_59();
		bool L_43 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_42, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01c7;
		}
	}
	{
		// quadMesh = quadMeshFilter.mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_44 = V_2;
		NullCheck(L_44);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_45 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_44, /*hidden argument*/NULL);
		__this->set_quadMesh_63(L_45);
		// quadMesh.bounds = new Bounds(Vector3.zero, Vector3.one * float.MaxValue);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_46 = __this->get_quadMesh_63();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_48, ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Bounds__ctor_m294E77A20EC1A3E96985FE1A925CB271D1B5266D((&L_50), L_47, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		Mesh_set_bounds_mB09338F622466456ADBCC449BB1F62F2EF1731B6(L_46, L_50, /*hidden argument*/NULL);
		// }
		goto IL_01d3;
	}

IL_01c7:
	{
		// quadMesh = quadMeshFilter.sharedMesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_51 = V_2;
		NullCheck(L_51);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_52 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_51, /*hidden argument*/NULL);
		__this->set_quadMesh_63(L_52);
	}

IL_01d3:
	{
		// Destroy(quadMeshFilter.gameObject);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_53 = V_2;
		NullCheck(L_53);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_54, /*hidden argument*/NULL);
	}

IL_01de:
	{
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_55 = __this->get_stopwatch_50();
		NullCheck(L_55);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_55, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_56 = __this->get_stopwatch_50();
		NullCheck(L_56);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_56, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_Start_m270E911483D8917CC59B972BACF7ED23142BDBF0 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// Reset();
		MixedRealityToolkitVisualProfiler_Reset_m9BDC66B271C5672895C1F04CF95F4304B09FBE86(__this, /*hidden argument*/NULL);
		// BuildWindow();
		MixedRealityToolkitVisualProfiler_BuildWindow_mBCC4BD16F504DC6CAC86E078556958B3EB9C08AD(__this, /*hidden argument*/NULL);
		// BuildFrameRateStrings();
		MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mB9670D04531C70B01046D8083AF0E7239161C20B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OnDestroy_mEA9AE4D96E607825EE489822AA72FB49D174706D (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_OnDestroy_mEA9AE4D96E607825EE489822AA72FB49D174706D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (window != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_window_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(window.gameObject);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_window_30();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_LateUpdate_m74F404FB6F10A8FA22160FB6D609A1AB292B3CFA (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_LateUpdate_m74F404FB6F10A8FA22160FB6D609A1AB292B3CFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	{
		// if (window == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_window_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// Transform cameraTransform = CameraCache.Main ? CameraCache.Main.transform : null;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0028;
	}

IL_001e:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		G_B5_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B5_0;
		// if (isVisible && cameraTransform != null)
		bool L_6 = __this->get_isVisible_16();
		if (!L_6)
		{
			goto IL_00ae;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ae;
		}
	}
	{
		// float t = Time.deltaTime * windowFollowSpeed;
		float L_9 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_10 = __this->get_windowFollowSpeed_23();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// window.position = Vector3.Lerp(window.position, CalculateWindowPosition(cameraTransform), t);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = __this->get_window_30();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_window_30();
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m8C0BB61D9C23C394E3130DFDE16032208FC75CEB(__this, L_14, /*hidden argument*/NULL);
		float L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_13, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_11, L_17, /*hidden argument*/NULL);
		// window.rotation = Quaternion.Slerp(window.rotation, CalculateWindowRotation(cameraTransform), t);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_window_30();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = __this->get_window_30();
		NullCheck(L_19);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_19, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mFA1CCF49953AC7F0EACE8AD933B47E5BF8B37BAB(__this, L_21, /*hidden argument*/NULL);
		float L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_20, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_18, L_24, /*hidden argument*/NULL);
		// window.localScale = defaultWindowScale * windowScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = __this->get_window_30();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
		float L_27 = __this->get_windowScale_22();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_25, L_28, /*hidden argument*/NULL);
		// CalculateBackgroundSize();
		MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m277DADD349A45BD857732E3B4D25D5B7064B3332(__this, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// FrameTimingManager.CaptureFrameTimings();
		FrameTimingManager_CaptureFrameTimings_m1816EB99EFF92F9394E7000A9CB1F9F9363A90F5(/*hidden argument*/NULL);
		// ++frameCount;
		int32_t L_29 = __this->get_frameCount_49();
		__this->set_frameCount_49(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
		// float elapsedSeconds = stopwatch.ElapsedMilliseconds * 0.001f;
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_30 = __this->get_stopwatch_50();
		NullCheck(L_30);
		int64_t L_31 = Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177(L_30, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_31))), (float)(0.001f)));
		// if (elapsedSeconds >= frameSampleRate)
		float L_32 = V_1;
		float L_33 = __this->get_frameSampleRate_19();
		if ((!(((float)L_32) >= ((float)L_33))))
		{
			goto IL_0223;
		}
	}
	{
		// int cpuFrameRate = (int)(1.0f / (elapsedSeconds / frameCount));
		float L_34 = V_1;
		int32_t L_35 = __this->get_frameCount_49();
		V_3 = (((int32_t)((int32_t)((float)((float)(1.0f)/(float)((float)((float)L_34/(float)(((float)((float)L_35))))))))));
		// int gpuFrameRate = 0;
		V_4 = 0;
		// uint frameTimingsCount = FrameTimingManager.GetLatestTimings((uint)Mathf.Min(frameCount, maxFrameTimings), frameTimings);
		int32_t L_36 = __this->get_frameCount_49();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_37 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_38 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_36, L_37, /*hidden argument*/NULL);
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_39 = __this->get_frameTimings_51();
		uint32_t L_40 = FrameTimingManager_GetLatestTimings_m286888EFC8779C9F97D5140EE5D7EE80BEE3DE35(L_38, L_39, /*hidden argument*/NULL);
		V_5 = L_40;
		// if (frameTimingsCount != 0)
		uint32_t L_41 = V_5;
		if (!L_41)
		{
			goto IL_014b;
		}
	}
	{
		// AverageFrameTiming(frameTimings, frameTimingsCount, out cpuFrameTime, out gpuFrameTime);
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_42 = __this->get_frameTimings_51();
		uint32_t L_43 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_AverageFrameTiming_m5E5C61DDCC7F203EEB150C3B0F8EA0FD01772C1E(L_42, L_43, (float*)(&V_6), (float*)(&V_7), /*hidden argument*/NULL);
		// cpuFrameRate = (int)(1.0f / (cpuFrameTime / frameCount));
		float L_44 = V_6;
		int32_t L_45 = __this->get_frameCount_49();
		V_3 = (((int32_t)((int32_t)((float)((float)(1.0f)/(float)((float)((float)L_44/(float)(((float)((float)L_45))))))))));
		// gpuFrameRate = (int)(1.0f / (gpuFrameTime / frameCount));
		float L_46 = V_7;
		int32_t L_47 = __this->get_frameCount_49();
		V_4 = (((int32_t)((int32_t)((float)((float)(1.0f)/(float)((float)((float)L_46/(float)(((float)((float)L_47))))))))));
	}

IL_014b:
	{
		// cpuFrameRateText.text = cpuFrameRateStrings[Mathf.Clamp(cpuFrameRate, 0, maxTargetFrameRate)];
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_48 = __this->get_cpuFrameRateText_32();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_49 = __this->get_cpuFrameRateStrings_52();
		int32_t L_50 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_51 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_52 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_50, 0, L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		int32_t L_53 = L_52;
		String_t* L_54 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_48);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_48, L_54, /*hidden argument*/NULL);
		// if (gpuFrameRate != 0)
		int32_t L_55 = V_4;
		if (!L_55)
		{
			goto IL_019d;
		}
	}
	{
		// gpuFrameRateText.gameObject.SetActive(true);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_56 = __this->get_gpuFrameRateText_33();
		NullCheck(L_56);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_57 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_57, (bool)1, /*hidden argument*/NULL);
		// gpuFrameRateText.text = gpuFrameRateStrings[Mathf.Clamp(gpuFrameRate, 0, maxTargetFrameRate)];
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_58 = __this->get_gpuFrameRateText_33();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_59 = __this->get_gpuFrameRateStrings_53();
		int32_t L_60 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_61 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_62 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_60, 0, L_61, /*hidden argument*/NULL);
		NullCheck(L_59);
		int32_t L_63 = L_62;
		String_t* L_64 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_58, L_64, /*hidden argument*/NULL);
	}

IL_019d:
	{
		// if (frameInfoVisible)
		bool L_65 = __this->get_frameInfoVisible_17();
		if (!L_65)
		{
			goto IL_0206;
		}
	}
	{
		// for (int i = frameRange - 1; i > 0; --i)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_66 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_frameRange_7();
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1));
		goto IL_01d2;
	}

IL_01b0:
	{
		// frameInfoColors[i] = frameInfoColors[i - 1];
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_67 = __this->get_frameInfoColors_45();
		int32_t L_68 = V_8;
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_69 = __this->get_frameInfoColors_45();
		int32_t L_70 = V_8;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)1));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_72);
		// for (int i = frameRange - 1; i > 0; --i)
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)1));
	}

IL_01d2:
	{
		// for (int i = frameRange - 1; i > 0; --i)
		int32_t L_74 = V_8;
		if ((((int32_t)L_74) > ((int32_t)0)))
		{
			goto IL_01b0;
		}
	}
	{
		// frameInfoColors[0] = CalculateFrameColor(cpuFrameRate);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_75 = __this->get_frameInfoColors_45();
		int32_t L_76 = V_3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_77 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_m0213214E418F0F526382D6C1061804F899431A4E(__this, L_76, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_78 = Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE(L_77, /*hidden argument*/NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_78);
		// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_79 = __this->get_frameInfoPropertyBlock_46();
		int32_t L_80 = __this->get_colorID_47();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_81 = __this->get_frameInfoColors_45();
		NullCheck(L_79);
		MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787(L_79, L_80, L_81, /*hidden argument*/NULL);
	}

IL_0206:
	{
		// frameCount = 0;
		__this->set_frameCount_49(0);
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_82 = __this->get_stopwatch_50();
		NullCheck(L_82);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_82, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_83 = __this->get_stopwatch_50();
		NullCheck(L_83);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_83, /*hidden argument*/NULL);
	}

IL_0223:
	{
		// if (isVisible && frameInfoVisible)
		bool L_84 = __this->get_isVisible_16();
		if (!L_84)
		{
			goto IL_02fc;
		}
	}
	{
		bool L_85 = __this->get_frameInfoVisible_17();
		if (!L_85)
		{
			goto IL_02fc;
		}
	}
	{
		// Matrix4x4 parentLocalToWorldMatrix = window.localToWorldMatrix;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_86 = __this->get_window_30();
		NullCheck(L_86);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_87 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_86, /*hidden argument*/NULL);
		V_9 = L_87;
		// if (defaultInstancedMaterial != null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_88 = __this->get_defaultInstancedMaterial_59();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_89 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_88, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0291;
		}
	}
	{
		// frameInfoPropertyBlock.SetMatrix(parentMatrixID, parentLocalToWorldMatrix);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_90 = __this->get_frameInfoPropertyBlock_46();
		int32_t L_91 = __this->get_parentMatrixID_48();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_92 = V_9;
		NullCheck(L_90);
		MaterialPropertyBlock_SetMatrix_mF4694BD7CFC224C638D30BFC9CC91D5D711EA227(L_90, L_91, L_92, /*hidden argument*/NULL);
		// Graphics.DrawMeshInstanced(quadMesh, 0, defaultInstancedMaterial, frameInfoMatrices, frameInfoMatrices.Length, frameInfoPropertyBlock, UnityEngine.Rendering.ShadowCastingMode.Off, false);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_93 = __this->get_quadMesh_63();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_94 = __this->get_defaultInstancedMaterial_59();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_95 = __this->get_frameInfoMatrices_44();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_96 = __this->get_frameInfoMatrices_44();
		NullCheck(L_96);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_97 = __this->get_frameInfoPropertyBlock_46();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_DrawMeshInstanced_mD1048BED7CCCC0675C7EC696407E545456D27D19(L_93, 0, L_94, L_95, (((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length)))), L_97, 0, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_02fc;
	}

IL_0291:
	{
		// for (int i  = 0; i < frameInfoMatrices.Length; ++i)
		V_10 = 0;
		goto IL_02f0;
	}

IL_0296:
	{
		// frameInfoPropertyBlock.SetColor(colorID, frameInfoColors[i]);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_98 = __this->get_frameInfoPropertyBlock_46();
		int32_t L_99 = __this->get_colorID_47();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_100 = __this->get_frameInfoColors_45();
		int32_t L_101 = V_10;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_104 = Color_op_Implicit_m51CEC50D37ABC484073AECE7EB958B414F2B6E7B(L_103, /*hidden argument*/NULL);
		NullCheck(L_98);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_98, L_99, L_104, /*hidden argument*/NULL);
		// Graphics.DrawMesh(quadMesh, parentLocalToWorldMatrix * frameInfoMatrices[i], defaultMaterial, 0, null, 0, frameInfoPropertyBlock, false, false, false);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_105 = __this->get_quadMesh_63();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_106 = V_9;
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_107 = __this->get_frameInfoMatrices_44();
		int32_t L_108 = V_10;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_111 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_106, L_110, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_112 = __this->get_defaultMaterial_58();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_113 = __this->get_frameInfoPropertyBlock_46();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_DrawMesh_mA26415237B646D7C832483597F98C6C158785660(L_105, L_111, L_112, 0, (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)NULL, 0, L_113, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
		// for (int i  = 0; i < frameInfoMatrices.Length; ++i)
		int32_t L_114 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1));
	}

IL_02f0:
	{
		// for (int i  = 0; i < frameInfoMatrices.Length; ++i)
		int32_t L_115 = V_10;
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_116 = __this->get_frameInfoMatrices_44();
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_116)->max_length)))))))
		{
			goto IL_0296;
		}
	}

IL_02fc:
	{
		// if (isVisible && memoryStatsVisible)
		bool L_117 = __this->get_isVisible_16();
		if (!L_117)
		{
			goto IL_0480;
		}
	}
	{
		bool L_118 = __this->get_memoryStatsVisible_18();
		if (!L_118)
		{
			goto IL_0480;
		}
	}
	{
		// ulong limit = AppMemoryUsageLimit;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		uint64_t L_119 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m1C98E5A5B83047FB0037095BBAF6F8FE0C033F00(/*hidden argument*/NULL);
		V_11 = L_119;
		// if (limit != limitMemoryUsage)
		uint64_t L_120 = V_11;
		uint64_t L_121 = __this->get_limitMemoryUsage_57();
		if ((((int64_t)L_120) == ((int64_t)L_121)))
		{
			goto IL_035e;
		}
	}
	{
		// if (WillDisplayedMemoryUsageDiffer(limitMemoryUsage, limit, displayedDecimalDigits))
		uint64_t L_122 = __this->get_limitMemoryUsage_57();
		uint64_t L_123 = V_11;
		int32_t L_124 = __this->get_displayedDecimalDigits_24();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		bool L_125 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC64E536311135A81FDC1B2D6591849A776D091E8(L_122, L_123, L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_0356;
		}
	}
	{
		// MemoryUsageToString(stringBuffer, displayedDecimalDigits, limitMemoryText, limitMemoryString, limit);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_126 = __this->get_stringBuffer_54();
		int32_t L_127 = __this->get_displayedDecimalDigits_24();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_128 = __this->get_limitMemoryText_37();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		String_t* L_129 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_limitMemoryString_14();
		uint64_t L_130 = V_11;
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mDC6202726D1C356A3CB411D5989151B0FDED0B46(L_126, L_127, L_128, L_129, L_130, /*hidden argument*/NULL);
	}

IL_0356:
	{
		// limitMemoryUsage = limit;
		uint64_t L_131 = V_11;
		__this->set_limitMemoryUsage_57(L_131);
	}

IL_035e:
	{
		// ulong usage = AppMemoryUsage;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		uint64_t L_132 = MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mCA2C2FF62139ABAA97E1250B1629A60607A91C25(/*hidden argument*/NULL);
		V_12 = L_132;
		// if (usage != memoryUsage)
		uint64_t L_133 = V_12;
		uint64_t L_134 = __this->get_memoryUsage_55();
		if ((((int64_t)L_133) == ((int64_t)L_134)))
		{
			goto IL_03e7;
		}
	}
	{
		// usedAnchor.localScale = new Vector3((float)usage / limitMemoryUsage, usedAnchor.localScale.y, usedAnchor.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_135 = __this->get_usedAnchor_38();
		uint64_t L_136 = V_12;
		uint64_t L_137 = __this->get_limitMemoryUsage_57();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_138 = __this->get_usedAnchor_38();
		NullCheck(L_138);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_138, /*hidden argument*/NULL);
		float L_140 = L_139.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_141 = __this->get_usedAnchor_38();
		NullCheck(L_141);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_142 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_141, /*hidden argument*/NULL);
		float L_143 = L_142.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144;
		memset((&L_144), 0, sizeof(L_144));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_144), ((float)((float)(((float)((float)(((double)((uint64_t)L_136))))))/(float)(((float)((float)(((double)((uint64_t)L_137)))))))), L_140, L_143, /*hidden argument*/NULL);
		NullCheck(L_135);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_135, L_144, /*hidden argument*/NULL);
		// if (WillDisplayedMemoryUsageDiffer(memoryUsage, usage, displayedDecimalDigits))
		uint64_t L_145 = __this->get_memoryUsage_55();
		uint64_t L_146 = V_12;
		int32_t L_147 = __this->get_displayedDecimalDigits_24();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		bool L_148 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC64E536311135A81FDC1B2D6591849A776D091E8(L_145, L_146, L_147, /*hidden argument*/NULL);
		if (!L_148)
		{
			goto IL_03df;
		}
	}
	{
		// MemoryUsageToString(stringBuffer, displayedDecimalDigits, usedMemoryText, usedMemoryString, usage);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_149 = __this->get_stringBuffer_54();
		int32_t L_150 = __this->get_displayedDecimalDigits_24();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_151 = __this->get_usedMemoryText_35();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		String_t* L_152 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_usedMemoryString_12();
		uint64_t L_153 = V_12;
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mDC6202726D1C356A3CB411D5989151B0FDED0B46(L_149, L_150, L_151, L_152, L_153, /*hidden argument*/NULL);
	}

IL_03df:
	{
		// memoryUsage = usage;
		uint64_t L_154 = V_12;
		__this->set_memoryUsage_55(L_154);
	}

IL_03e7:
	{
		// if (memoryUsage > peakMemoryUsage)
		uint64_t L_155 = __this->get_memoryUsage_55();
		uint64_t L_156 = __this->get_peakMemoryUsage_56();
		if ((!(((uint64_t)L_155) > ((uint64_t)L_156))))
		{
			goto IL_0480;
		}
	}
	{
		// peakAnchor.localScale = new Vector3((float)memoryUsage / limitMemoryUsage, peakAnchor.localScale.y, peakAnchor.localScale.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_157 = __this->get_peakAnchor_39();
		uint64_t L_158 = __this->get_memoryUsage_55();
		uint64_t L_159 = __this->get_limitMemoryUsage_57();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_160 = __this->get_peakAnchor_39();
		NullCheck(L_160);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_161 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_160, /*hidden argument*/NULL);
		float L_162 = L_161.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_163 = __this->get_peakAnchor_39();
		NullCheck(L_163);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_164 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_163, /*hidden argument*/NULL);
		float L_165 = L_164.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_166;
		memset((&L_166), 0, sizeof(L_166));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_166), ((float)((float)(((float)((float)(((double)((uint64_t)L_158))))))/(float)(((float)((float)(((double)((uint64_t)L_159)))))))), L_162, L_165, /*hidden argument*/NULL);
		NullCheck(L_157);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_157, L_166, /*hidden argument*/NULL);
		// if (WillDisplayedMemoryUsageDiffer(peakMemoryUsage, memoryUsage, displayedDecimalDigits))
		uint64_t L_167 = __this->get_peakMemoryUsage_56();
		uint64_t L_168 = __this->get_memoryUsage_55();
		int32_t L_169 = __this->get_displayedDecimalDigits_24();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		bool L_170 = MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC64E536311135A81FDC1B2D6591849A776D091E8(L_167, L_168, L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_0474;
		}
	}
	{
		// MemoryUsageToString(stringBuffer, displayedDecimalDigits, peakMemoryText, peakMemoryString, memoryUsage);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_171 = __this->get_stringBuffer_54();
		int32_t L_172 = __this->get_displayedDecimalDigits_24();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_173 = __this->get_peakMemoryText_36();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		String_t* L_174 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_peakMemoryString_13();
		uint64_t L_175 = __this->get_memoryUsage_55();
		MixedRealityToolkitVisualProfiler_MemoryUsageToString_mDC6202726D1C356A3CB411D5989151B0FDED0B46(L_171, L_172, L_173, L_174, L_175, /*hidden argument*/NULL);
	}

IL_0474:
	{
		// peakMemoryUsage = memoryUsage;
		uint64_t L_176 = __this->get_memoryUsage_55();
		__this->set_peakMemoryUsage_56(L_176);
	}

IL_0480:
	{
		// window.gameObject.SetActive(isVisible);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_177 = __this->get_window_30();
		NullCheck(L_177);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_178 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_177, /*hidden argument*/NULL);
		bool L_179 = __this->get_isVisible_16();
		NullCheck(L_178);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_178, L_179, /*hidden argument*/NULL);
		// memoryStats.gameObject.SetActive(memoryStatsVisible);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_180 = __this->get_memoryStats_34();
		NullCheck(L_180);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_181 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_180, /*hidden argument*/NULL);
		bool L_182 = __this->get_memoryStatsVisible_18();
		NullCheck(L_181);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_181, L_182, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowPosition(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m8C0BB61D9C23C394E3130DFDE16032208FC75CEB (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateWindowPosition_m8C0BB61D9C23C394E3130DFDE16032208FC75CEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		// float windowDistance = Mathf.Max(16.0f / CameraCache.Main.fieldOfView, CameraCache.Main.nearClipPlane + 0.25f);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_0, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3 = Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(((float)((float)(16.0f)/(float)L_1)), ((float)il2cpp_codegen_add((float)L_3, (float)(0.25f))), /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 position = cameraTransform.position + (cameraTransform.forward * windowDistance);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___cameraTransform0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___cameraTransform0;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// Vector3 horizontalOffset = cameraTransform.right * windowOffset.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = ___cameraTransform0;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_12, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_14 = __this->get_address_of_windowOffset_21();
		float L_15 = L_14->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_13, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// Vector3 verticalOffset = cameraTransform.up * windowOffset.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = ___cameraTransform0;
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_17, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_19 = __this->get_address_of_windowOffset_21();
		float L_20 = L_19->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// switch (windowAnchor)
		int32_t L_22 = __this->get_windowAnchor_20();
		V_4 = L_22;
		int32_t L_23 = V_4;
		switch (L_23)
		{
			case 0:
			{
				goto IL_00a1;
			}
			case 1:
			{
				goto IL_00b1;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_0107;
			}
			case 5:
			{
				goto IL_00d5;
			}
			case 6:
			{
				goto IL_00df;
			}
			case 7:
			{
				goto IL_00ef;
			}
			case 8:
			{
				goto IL_00f9;
			}
		}
	}
	{
		goto IL_0107;
	}

IL_00a1:
	{
		// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// case TextAnchor.UpperLeft: position += verticalOffset - horizontalOffset; break;
		goto IL_0107;
	}

IL_00b1:
	{
		// case TextAnchor.UpperCenter: position += verticalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_29, L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		// case TextAnchor.UpperCenter: position += verticalOffset; break;
		goto IL_0107;
	}

IL_00bb:
	{
		// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_33, L_34, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_32, L_35, /*hidden argument*/NULL);
		V_1 = L_36;
		// case TextAnchor.UpperRight: position += verticalOffset + horizontalOffset; break;
		goto IL_0107;
	}

IL_00cb:
	{
		// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_37, L_38, /*hidden argument*/NULL);
		V_1 = L_39;
		// case TextAnchor.MiddleLeft: position -= horizontalOffset; break;
		goto IL_0107;
	}

IL_00d5:
	{
		// case TextAnchor.MiddleRight: position += horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_40, L_41, /*hidden argument*/NULL);
		V_1 = L_42;
		// case TextAnchor.MiddleRight: position += horizontalOffset; break;
		goto IL_0107;
	}

IL_00df:
	{
		// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_44, L_45, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_43, L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		// case TextAnchor.LowerLeft: position -= verticalOffset + horizontalOffset; break;
		goto IL_0107;
	}

IL_00ef:
	{
		// case TextAnchor.LowerCenter: position -= verticalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_48, L_49, /*hidden argument*/NULL);
		V_1 = L_50;
		// case TextAnchor.LowerCenter: position -= verticalOffset; break;
		goto IL_0107;
	}

IL_00f9:
	{
		// case TextAnchor.LowerRight: position -= verticalOffset - horizontalOffset; break;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_52, L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_51, L_54, /*hidden argument*/NULL);
		V_1 = L_55;
	}

IL_0107:
	{
		// return position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = V_1;
		return L_56;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateWindowRotation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mFA1CCF49953AC7F0EACE8AD933B47E5BF8B37BAB (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateWindowRotation_mFA1CCF49953AC7F0EACE8AD933B47E5BF8B37BAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Quaternion rotation = cameraTransform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___cameraTransform0;
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// switch (windowAnchor)
		int32_t L_2 = __this->get_windowAnchor_20();
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_0083;
			}
			case 4:
			{
				goto IL_00e2;
			}
			case 5:
			{
				goto IL_0092;
			}
			case 6:
			{
				goto IL_00a1;
			}
			case 7:
			{
				goto IL_00bb;
			}
			case 8:
			{
				goto IL_00ca;
			}
		}
	}
	{
		goto IL_00e2;
	}

IL_003d:
	{
		// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = __this->get_windowHorizontalRotationInverse_41();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = __this->get_windowVerticalRotationInverse_43();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_5, L_6, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_4, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// case TextAnchor.UpperLeft: rotation *= windowHorizontalRotationInverse * windowVerticalRotationInverse; break;
		goto IL_00e2;
	}

IL_005a:
	{
		// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = __this->get_windowHorizontalRotationInverse_41();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// case TextAnchor.UpperCenter: rotation *= windowHorizontalRotationInverse; break;
		goto IL_00e2;
	}

IL_0069:
	{
		// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get_windowHorizontalRotationInverse_41();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = __this->get_windowVerticalRotation_42();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_13, L_14, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_12, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// case TextAnchor.UpperRight: rotation *= windowHorizontalRotationInverse * windowVerticalRotation; break;
		goto IL_00e2;
	}

IL_0083:
	{
		// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = __this->get_windowVerticalRotationInverse_43();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// case TextAnchor.MiddleLeft: rotation *= windowVerticalRotationInverse; break;
		goto IL_00e2;
	}

IL_0092:
	{
		// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = __this->get_windowVerticalRotation_42();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// case TextAnchor.MiddleRight: rotation *= windowVerticalRotation; break;
		goto IL_00e2;
	}

IL_00a1:
	{
		// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = __this->get_windowHorizontalRotation_40();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = __this->get_windowVerticalRotationInverse_43();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_24, L_25, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_23, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// case TextAnchor.LowerLeft: rotation *= windowHorizontalRotation * windowVerticalRotationInverse; break;
		goto IL_00e2;
	}

IL_00bb:
	{
		// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = __this->get_windowHorizontalRotation_40();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// case TextAnchor.LowerCenter: rotation *= windowHorizontalRotation; break;
		goto IL_00e2;
	}

IL_00ca:
	{
		// case TextAnchor.LowerRight: rotation *= windowHorizontalRotation * windowVerticalRotation; break;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = __this->get_windowHorizontalRotation_40();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = __this->get_windowVerticalRotation_42();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_32, L_33, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_31, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
	}

IL_00e2:
	{
		// return rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = V_0;
		return L_36;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateFrameColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MixedRealityToolkitVisualProfiler_CalculateFrameColor_m0213214E418F0F526382D6C1061804F899431A4E (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, int32_t ___frameRate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateFrameColor_m0213214E418F0F526382D6C1061804F899431A4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int colorCount = frameRateColors.Length;
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_0 = __this->get_frameRateColors_25();
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// if (colorCount == 0)
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return baseColor;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = __this->get_baseColor_26();
		return L_2;
	}

IL_0013:
	{
		// float percentageOfTarget = frameRate / AppTargetFrameRate;
		int32_t L_3 = ___frameRate0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		float L_4 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA8487EE1F35F72300474A546FFD1505B1D972F22(/*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_3)))/(float)L_4));
		// int lastColor = colorCount - 1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		// for (int i = 0; i < lastColor; ++i)
		V_3 = 0;
		goto IL_004e;
	}

IL_0024:
	{
		// if (percentageOfTarget >= frameRateColors[i].percentageOfTarget)
		float L_6 = V_1;
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_7 = __this->get_frameRateColors_25();
		int32_t L_8 = V_3;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_percentageOfTarget_0();
		if ((!(((float)L_6) >= ((float)L_9))))
		{
			goto IL_004a;
		}
	}
	{
		// return frameRateColors[i].color;
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_10 = __this->get_frameRateColors_25();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_color_1();
		return L_12;
	}

IL_004a:
	{
		// for (int i = 0; i < lastColor; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004e:
	{
		// for (int i = 0; i < lastColor; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0024;
		}
	}
	{
		// return frameRateColors[lastColor].color;
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_16 = __this->get_frameRateColors_25();
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_color_1();
		return L_18;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CalculateBackgroundSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m277DADD349A45BD857732E3B4D25D5B7064B3332 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m277DADD349A45BD857732E3B4D25D5B7064B3332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (frameInfoVisible && memoryStatsVisible || memoryStatsVisible)
		bool L_0 = __this->get_frameInfoVisible_17();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_memoryStatsVisible_18();
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0010:
	{
		bool L_2 = __this->get_memoryStatsVisible_18();
		if (!L_2)
		{
			goto IL_0045;
		}
	}

IL_0018:
	{
		// background.localPosition = backgroundOffsets[0];
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_background_31();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
		NullCheck(L_4);
		int32_t L_5 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_3);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_3, L_6, /*hidden argument*/NULL);
		// background.localScale = backgroundScales[0];
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_background_31();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_backgroundScales_10();
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_7);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_7, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0045:
	{
		// else if (frameInfoVisible)
		bool L_11 = __this->get_frameInfoVisible_17();
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// background.localPosition = backgroundOffsets[1];
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_background_31();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
		NullCheck(L_13);
		int32_t L_14 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_15, /*hidden argument*/NULL);
		// background.localScale = backgroundScales[1];
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get_background_31();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_backgroundScales_10();
		NullCheck(L_17);
		int32_t L_18 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_16, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007a:
	{
		// background.localPosition = backgroundOffsets[2];
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_background_31();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_backgroundOffsets_11();
		NullCheck(L_21);
		int32_t L_22 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_20, L_23, /*hidden argument*/NULL);
		// background.localScale = backgroundScales[2];
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = __this->get_background_31();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_25 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_backgroundScales_10();
		NullCheck(L_25);
		int32_t L_26 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_24, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildWindow_mBCC4BD16F504DC6CAC86E078556958B3EB9C08AD (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildWindow_mBCC4BD16F504DC6CAC86E078556958B3EB9C08AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_4 = NULL;
	{
		// colorID = Shader.PropertyToID("_Color");
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral36BDCAB142B91EE6C030073C24B3B2A5605ED74A, /*hidden argument*/NULL);
		__this->set_colorID_47(L_0);
		// parentMatrixID = Shader.PropertyToID("_ParentLocalToWorldMatrix");
		int32_t L_1 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral60DD62DDA6D0E9082284B2E9AF1CB4E2AFFEDFC5, /*hidden argument*/NULL);
		__this->set_parentMatrixID_48(L_1);
		// window = new GameObject("VisualProfiler").transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteral5BFD6CD9A18872E3AB00178F2F3588D3A16CC24A, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		__this->set_window_30(L_3);
		// window.parent = WindowParent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_window_30();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = MixedRealityToolkitVisualProfiler_get_WindowParent_m1DED2011000F4D9A303C2D320B39A2806B4FFED5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_4, L_5, /*hidden argument*/NULL);
		// window.localScale = defaultWindowScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_window_30();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_defaultWindowScale_9();
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_7, /*hidden argument*/NULL);
		// windowHorizontalRotation = Quaternion.AngleAxis(defaultWindowRotation.y, Vector3.right);
		float L_8 = (((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_8, L_9, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotation_40(L_10);
		// windowHorizontalRotationInverse = Quaternion.Inverse(windowHorizontalRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = __this->get_windowHorizontalRotation_40();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_11, /*hidden argument*/NULL);
		__this->set_windowHorizontalRotationInverse_41(L_12);
		// windowVerticalRotation = Quaternion.AngleAxis(defaultWindowRotation.x, Vector3.up);
		float L_13 = (((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_address_of_defaultWindowRotation_8())->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_13, L_14, /*hidden argument*/NULL);
		__this->set_windowVerticalRotation_42(L_15);
		// windowVerticalRotationInverse = Quaternion.Inverse(windowVerticalRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = __this->get_windowVerticalRotation_42();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_16, /*hidden argument*/NULL);
		__this->set_windowVerticalRotationInverse_43(L_17);
		// background = CreateQuad("Background", window).transform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_window_30();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB(_stringLiteral64DD60FE1A049FE6DB3EB1369DEC2E42BF428E21, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		__this->set_background_31(L_20);
		// InitializeRenderer(background.gameObject, backgroundMaterial, colorID, baseColor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = __this->get_background_31();
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_21, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_23 = __this->get_backgroundMaterial_60();
		int32_t L_24 = __this->get_colorID_47();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_25 = __this->get_baseColor_26();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B(L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		// CalculateBackgroundSize();
		MixedRealityToolkitVisualProfiler_CalculateBackgroundSize_m277DADD349A45BD857732E3B4D25D5B7064B3332(__this, /*hidden argument*/NULL);
		// cpuFrameRateText = CreateText("CPUFrameRateText", new Vector3(-0.495f, 0.5f, 0.0f), window, TextAnchor.UpperLeft, textMaterial, Color.white, string.Empty);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), (-0.495f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = __this->get_window_30();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_28 = __this->get_textMaterial_62();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_29 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_31 = MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B(_stringLiteralEDE2ACC6A2CAB5D8B552539E6ED55D7498F1BD1D, L_26, L_27, 0, L_28, L_29, L_30, /*hidden argument*/NULL);
		__this->set_cpuFrameRateText_32(L_31);
		// gpuFrameRateText = CreateText("GPUFrameRateText", new Vector3(0.495f, 0.5f, 0.0f), window, TextAnchor.UpperRight, textMaterial, Color.white, string.Empty);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_32), (0.495f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = __this->get_window_30();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_34 = __this->get_textMaterial_62();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_35 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_37 = MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B(_stringLiteralB43776D3A8057BCB7F05D18BE4E19FA5C0A1171E, L_32, L_33, 2, L_34, L_35, L_36, /*hidden argument*/NULL);
		__this->set_gpuFrameRateText_33(L_37);
		// gpuFrameRateText.gameObject.SetActive(false);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_38 = __this->get_gpuFrameRateText_33();
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_39, (bool)0, /*hidden argument*/NULL);
		// frameInfoMatrices = new Matrix4x4[frameRange];
		int32_t L_40 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_frameRange_7();
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_41 = (Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9*)SZArrayNew(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9_il2cpp_TypeInfo_var, (uint32_t)L_40);
		__this->set_frameInfoMatrices_44(L_41);
		// frameInfoColors = new Vector4[frameRange];
		int32_t L_42 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_43 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66_il2cpp_TypeInfo_var, (uint32_t)L_42);
		__this->set_frameInfoColors_45(L_43);
		// Vector3 scale = new Vector3(1.0f / frameRange, 0.2f, 1.0f);
		int32_t L_44 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_frameRange_7();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), ((float)((float)(1.0f)/(float)(((float)((float)L_44))))), (0.2f), (1.0f), /*hidden argument*/NULL);
		// Vector3 position = new Vector3(0.5f - (scale.x * 0.5f), 0.15f, 0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_0;
		float L_46 = L_45.get_x_2();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), ((float)il2cpp_codegen_subtract((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)L_46, (float)(0.5f))))), (0.15f), (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < frameRange; ++i)
		V_2 = 0;
		goto IL_0241;
	}

IL_01db:
	{
		// frameInfoMatrices[i] = Matrix4x4.TRS(position, Quaternion.identity, new Vector3(scale.x * 0.8f, scale.y, scale.z));
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_47 = __this->get_frameInfoMatrices_44();
		int32_t L_48 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_0;
		float L_52 = L_51.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_0;
		float L_54 = L_53.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_0;
		float L_56 = L_55.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_57), ((float)il2cpp_codegen_multiply((float)L_52, (float)(0.8f))), L_54, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_58 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_49, L_50, L_57, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA )L_58);
		// position.x -= scale.x;
		float* L_59 = (&V_1)->get_address_of_x_2();
		float* L_60 = L_59;
		float L_61 = *((float*)L_60);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_0;
		float L_63 = L_62.get_x_2();
		*((float*)L_60) = (float)((float)il2cpp_codegen_subtract((float)L_61, (float)L_63));
		// frameInfoColors[i] = CalculateFrameColor((int)AppTargetFrameRate);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_64 = __this->get_frameInfoColors_45();
		int32_t L_65 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		float L_66 = MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA8487EE1F35F72300474A546FFD1505B1D972F22(/*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_67 = MixedRealityToolkitVisualProfiler_CalculateFrameColor_m0213214E418F0F526382D6C1061804F899431A4E(__this, (((int32_t)((int32_t)L_66))), /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_68 = Color_op_Implicit_m653C1CE2391B0A04114B9132C37E41AC92B33AFE(L_67, /*hidden argument*/NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E )L_68);
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_69 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_0241:
	{
		// for (int i = 0; i < frameRange; ++i)
		int32_t L_70 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_71 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_frameRange_7();
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_01db;
		}
	}
	{
		// frameInfoPropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_72 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_72, /*hidden argument*/NULL);
		__this->set_frameInfoPropertyBlock_46(L_72);
		// frameInfoPropertyBlock.SetVectorArray(colorID, frameInfoColors);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_73 = __this->get_frameInfoPropertyBlock_46();
		int32_t L_74 = __this->get_colorID_47();
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_75 = __this->get_frameInfoColors_45();
		NullCheck(L_73);
		MaterialPropertyBlock_SetVectorArray_m189E1657C000ACBCAF56CB62F3A4DCF1FD472787(L_73, L_74, L_75, /*hidden argument*/NULL);
		// memoryStats = new GameObject("MemoryStats").transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_76 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_76, _stringLiteral5483BF71B3B7138B1E91E9996288AA665C3E352D, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_77 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_76, /*hidden argument*/NULL);
		__this->set_memoryStats_34(L_77);
		// memoryStats.parent = window;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_78 = __this->get_memoryStats_34();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_79 = __this->get_window_30();
		NullCheck(L_78);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_78, L_79, /*hidden argument*/NULL);
		// memoryStats.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_80 = __this->get_memoryStats_34();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_80, L_81, /*hidden argument*/NULL);
		// usedMemoryText = CreateText("UsedMemoryText", new Vector3(-0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperLeft, textMaterial, memoryUsedColor, usedMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_82), (-0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = __this->get_memoryStats_34();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_84 = __this->get_textMaterial_62();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_85 = __this->get_memoryUsedColor_27();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		String_t* L_86 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_usedMemoryString_12();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_87 = MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B(_stringLiteral10091FE4A98C623CD25DBBAE02B40227888E2A05, L_82, L_83, 0, L_84, L_85, L_86, /*hidden argument*/NULL);
		__this->set_usedMemoryText_35(L_87);
		// peakMemoryText = CreateText("PeakMemoryText", new Vector3(0.0f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperCenter, textMaterial, memoryPeakColor, peakMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_88), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_89 = __this->get_memoryStats_34();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_90 = __this->get_textMaterial_62();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_91 = __this->get_memoryPeakColor_28();
		String_t* L_92 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_peakMemoryString_13();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_93 = MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B(_stringLiteral2A2E2357C56DD659D0DC9E3D8ECE1D8242034491, L_88, L_89, 1, L_90, L_91, L_92, /*hidden argument*/NULL);
		__this->set_peakMemoryText_36(L_93);
		// limitMemoryText = CreateText("LimitMemoryText", new Vector3(0.495f, 0.0f, 0.0f), memoryStats, TextAnchor.UpperRight, textMaterial, Color.white, limitMemoryString);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_94), (0.495f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_95 = __this->get_memoryStats_34();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_96 = __this->get_textMaterial_62();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_97 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		String_t* L_98 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_limitMemoryString_14();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_99 = MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B(_stringLiteral9315667F99D5901C8E062AAC730B9254258670B5, L_94, L_95, 2, L_96, L_97, L_98, /*hidden argument*/NULL);
		__this->set_limitMemoryText_37(L_99);
		// GameObject limitBar = CreateQuad("LimitBar", memoryStats);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_100 = __this->get_memoryStats_34();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_101 = MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB(_stringLiteralCA1DF7778711AC043DE19DBF92546587DCB1A0BD, L_100, /*hidden argument*/NULL);
		V_3 = L_101;
		// InitializeRenderer(limitBar, defaultMaterial, colorID, memoryLimitColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_102 = V_3;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_103 = __this->get_defaultMaterial_58();
		int32_t L_104 = __this->get_colorID_47();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_105 = __this->get_memoryLimitColor_29();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B(L_102, L_103, L_104, L_105, /*hidden argument*/NULL);
		// limitBar.transform.localScale = new Vector3(0.99f, 0.2f, 1.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_106 = V_3;
		NullCheck(L_106);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_107 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_106, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_108), (0.99f), (0.2f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_107);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_107, L_108, /*hidden argument*/NULL);
		// limitBar.transform.localPosition = new Vector3(0.0f, -0.37f, 0.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_109 = V_3;
		NullCheck(L_109);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_110 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_109, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_111), (0.0f), (-0.37f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_110);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_110, L_111, /*hidden argument*/NULL);
		// usedAnchor = CreateAnchor("UsedAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_112 = V_3;
		NullCheck(L_112);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_113 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_112, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_114 = MixedRealityToolkitVisualProfiler_CreateAnchor_m6CF22A47DB6CD86B1A739406F1BB4755C1FAC5B1(_stringLiteralDE54FCF888EB0C889DFF7964C29E0C89A5613301, L_113, /*hidden argument*/NULL);
		__this->set_usedAnchor_38(L_114);
		// GameObject bar = CreateQuad("UsedBar", usedAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_115 = __this->get_usedAnchor_38();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_116 = MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB(_stringLiteralACCAD3295265225D2B9E4FB826E53031E4D933F6, L_115, /*hidden argument*/NULL);
		// Material material = new Material(foregroundMaterial);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_117 = __this->get_foregroundMaterial_61();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_118 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_118, L_117, /*hidden argument*/NULL);
		V_4 = L_118;
		// material.renderQueue = material.renderQueue + 1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_119 = V_4;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_120 = V_4;
		NullCheck(L_120);
		int32_t L_121 = Material_get_renderQueue_mDEC48BD94C93FF5A04BC7190E4B5C56BB6E44140(L_120, /*hidden argument*/NULL);
		NullCheck(L_119);
		Material_set_renderQueue_m02A0C73EC4B9C9D2C2ABFFD777EBDA45C1E1BD4D(L_119, ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1)), /*hidden argument*/NULL);
		// InitializeRenderer(bar, material, colorID, memoryUsedColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_122 = L_116;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_123 = V_4;
		int32_t L_124 = __this->get_colorID_47();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_125 = __this->get_memoryUsedColor_27();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B(L_122, L_123, L_124, L_125, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_126 = L_122;
		NullCheck(L_126);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_127 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_126, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_128 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_127);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_127, L_128, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_126);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_129 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_126, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_130;
		memset((&L_130), 0, sizeof(L_130));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_130), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_129);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_129, L_130, /*hidden argument*/NULL);
		// peakAnchor = CreateAnchor("PeakAnchor", limitBar.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_131 = V_3;
		NullCheck(L_131);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_132 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_131, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_133 = MixedRealityToolkitVisualProfiler_CreateAnchor_m6CF22A47DB6CD86B1A739406F1BB4755C1FAC5B1(_stringLiteralFBE2C10212C6D261022FC9B3F7F7D5A3F2318FB3, L_132, /*hidden argument*/NULL);
		__this->set_peakAnchor_39(L_133);
		// GameObject bar = CreateQuad("PeakBar", peakAnchor);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_134 = __this->get_peakAnchor_39();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_135 = MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB(_stringLiteralB066E98ABD1787899F779143B75CEDB2486305D4, L_134, /*hidden argument*/NULL);
		// InitializeRenderer(bar, foregroundMaterial, colorID, memoryPeakColor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_136 = L_135;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_137 = __this->get_foregroundMaterial_61();
		int32_t L_138 = __this->get_colorID_47();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_139 = __this->get_memoryPeakColor_28();
		MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B(L_136, L_137, L_138, L_139, /*hidden argument*/NULL);
		// bar.transform.localScale = Vector3.one;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_140 = L_136;
		NullCheck(L_140);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_141 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_140, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_142 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_141);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_141, L_142, /*hidden argument*/NULL);
		// bar.transform.localPosition = new Vector3(0.5f, 0.0f, 0.0f);
		NullCheck(L_140);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_143 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_140, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144;
		memset((&L_144), 0, sizeof(L_144));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_144), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_143);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_143, L_144, /*hidden argument*/NULL);
		// window.gameObject.SetActive(isVisible);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_145 = __this->get_window_30();
		NullCheck(L_145);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_146 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_145, /*hidden argument*/NULL);
		bool L_147 = __this->get_isVisible_16();
		NullCheck(L_146);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_146, L_147, /*hidden argument*/NULL);
		// memoryStats.gameObject.SetActive(memoryStatsVisible);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_148 = __this->get_memoryStats_34();
		NullCheck(L_148);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_149 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_148, /*hidden argument*/NULL);
		bool L_150 = __this->get_memoryStatsVisible_18();
		NullCheck(L_149);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_149, L_150, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::BuildFrameRateStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mB9670D04531C70B01046D8083AF0E7239161C20B (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_BuildFrameRateStrings_mB9670D04531C70B01046D8083AF0E7239161C20B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// cpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		__this->set_cpuFrameRateStrings_52(L_1);
		// gpuFrameRateStrings = new string[maxTargetFrameRate + 1];
		int32_t L_2 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_maxTargetFrameRate_5();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_gpuFrameRateStrings_53(L_3);
		// string displayedDecimalFormat = string.Format("{{0:F{0}}}", displayedDecimalDigits);
		int32_t L_4 = __this->get_displayedDecimalDigits_24();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0E8EC13A3AA3AD0DF348D45AF23180EF013500EE, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// StringBuilder stringBuilder = new StringBuilder(32);
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_8, ((int32_t)32), /*hidden argument*/NULL);
		V_1 = L_8;
		// StringBuilder milisecondStringBuilder = new StringBuilder(16);
		StringBuilder_t * L_9 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_9, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		V_3 = 0;
		goto IL_00e1;
	}

IL_0051:
	{
		// float miliseconds = (i == 0) ? 0.0f : (1.0f / i) * 1000.0f;
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_3;
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)(((float)((float)L_11))))), (float)(1000.0f)));
		goto IL_0069;
	}

IL_0064:
	{
		G_B4_0 = (0.0f);
	}

IL_0069:
	{
		V_4 = G_B4_0;
		// milisecondStringBuilder.AppendFormat(displayedDecimalFormat, miliseconds);
		StringBuilder_t * L_12 = V_2;
		String_t* L_13 = V_0;
		float L_14 = V_4;
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_12, L_13, L_16, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("CPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_17 = V_1;
		String_t* L_18 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		NullCheck(L_17);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_17, _stringLiteral469FB70DED7914453A23F856E6F6A00E7461E923, L_18, L_20, /*hidden argument*/NULL);
		// cpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = __this->get_cpuFrameRateStrings_52();
		int32_t L_22 = V_3;
		StringBuilder_t * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (String_t*)L_24);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_25 = V_1;
		NullCheck(L_25);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_25, 0, /*hidden argument*/NULL);
		// stringBuilder.AppendFormat("GPU: {0} fps ({1} ms)", i.ToString(), milisecondStringBuilder.ToString());
		StringBuilder_t * L_26 = V_1;
		String_t* L_27 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		StringBuilder_t * L_28 = V_2;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		NullCheck(L_26);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_26, _stringLiteral9C3A49852D90133B9BEB027ECCB54020A3D56034, L_27, L_29, /*hidden argument*/NULL);
		// gpuFrameRateStrings[i] = stringBuilder.ToString();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = __this->get_gpuFrameRateStrings_53();
		int32_t L_31 = V_3;
		StringBuilder_t * L_32 = V_1;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (String_t*)L_33);
		// milisecondStringBuilder.Length = 0;
		StringBuilder_t * L_34 = V_2;
		NullCheck(L_34);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_34, 0, /*hidden argument*/NULL);
		// stringBuilder.Length = 0;
		StringBuilder_t * L_35 = V_1;
		NullCheck(L_35);
		StringBuilder_set_Length_m84AF318230AE5C3D0D48F1CE7C2170F6F5C19F5B(L_35, 0, /*hidden argument*/NULL);
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = 0; i < cpuFrameRateStrings.Length; ++i)
		int32_t L_37 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = __this->get_cpuFrameRateStrings_52();
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateAnchor(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_CreateAnchor_m6CF22A47DB6CD86B1A739406F1BB4755C1FAC5B1 (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateAnchor_m6CF22A47DB6CD86B1A739406F1BB4755C1FAC5B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform anchor = new GameObject(name).transform;
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		// anchor.parent = parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = L_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___parent1;
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_4, /*hidden argument*/NULL);
		// anchor.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_5, L_6, /*hidden argument*/NULL);
		// anchor.localPosition = new Vector3(-0.5f, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (-0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_7, L_8, /*hidden argument*/NULL);
		// return anchor;
		return L_7;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateQuad(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB (String_t* ___name0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateQuad_mD12E99D030C072472B13AB8FF81A91158C36BBEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		// Destroy(quad.GetComponent<Collider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = L_0;
		NullCheck(L_1);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_1, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// quad.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_3, L_4, /*hidden argument*/NULL);
		// quad.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_3;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___parent1;
		NullCheck(L_6);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_6, L_7, /*hidden argument*/NULL);
		// return quad;
		return L_5;
	}
}
// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::CreateText(System.String,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.TextAnchor,UnityEngine.Material,UnityEngine.Color,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B (String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent2, int32_t ___anchor3, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, String_t* ___text6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_CreateText_m2F4CE073B63D5492B40974B9CF017EAA29F9E20B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject obj = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// obj.transform.localScale = Vector3.one * 0.0016f;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, (0.0016f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_5, /*hidden argument*/NULL);
		// obj.transform.parent = parent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___parent2;
		NullCheck(L_7);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_7, L_8, /*hidden argument*/NULL);
		// obj.transform.localPosition = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_0;
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___position1;
		NullCheck(L_10);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_10, L_11, /*hidden argument*/NULL);
		// TextMesh textMesh = obj.AddComponent<TextMesh>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_0;
		NullCheck(L_12);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_13 = GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A(L_12, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_mF57CA692C5FFBA2C6599F6FEEA08E0F9050C368A_RuntimeMethod_var);
		// textMesh.fontSize = 48;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_14 = L_13;
		NullCheck(L_14);
		TextMesh_set_fontSize_m6701886D6E870EF23C2462B1BE7F67903A2649BA(L_14, ((int32_t)48), /*hidden argument*/NULL);
		// textMesh.anchor = anchor;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_15 = L_14;
		int32_t L_16 = ___anchor3;
		NullCheck(L_15);
		TextMesh_set_anchor_m013CFCFA46AB8478ADD1C4818FAAD90596BF4E15(L_15, L_16, /*hidden argument*/NULL);
		// textMesh.color = color;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_17 = L_15;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18 = ___color5;
		NullCheck(L_17);
		TextMesh_set_color_mF86B9E8CD0F9FD387AF7D543337B5C14DFE67AF0(L_17, L_18, /*hidden argument*/NULL);
		// textMesh.text = text;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_19 = L_17;
		String_t* L_20 = ___text6;
		NullCheck(L_19);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_19, L_20, /*hidden argument*/NULL);
		// textMesh.richText = false;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_21 = L_19;
		NullCheck(L_21);
		TextMesh_set_richText_mEA6ACA489617BC48D2317385C92C542C5EFD15CA(L_21, (bool)0, /*hidden argument*/NULL);
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = V_0;
		NullCheck(L_22);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_23 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_22, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_24 = L_23;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_25 = ___material4;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_24, L_25, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m803E312A187E7D5FE6F60575A855EC545AC9A909(L_24, /*hidden argument*/NULL);
		// return textMesh;
		return L_21;
	}
}
// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::InitializeRenderer(UnityEngine.GameObject,UnityEngine.Material,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material1, int32_t ___colorID2, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_InitializeRenderer_m8629C80CE7428CCA80DB29012EE21C93CCA1C50B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * V_0 = NULL;
	{
		// Renderer renderer = obj.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		// renderer.sharedMaterial = material;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = L_1;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = ___material1;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_2, L_3, /*hidden argument*/NULL);
		// MaterialPropertyBlock propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_4 = (MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m9055A333A5DA8CC70CC3D837BD59B54C313D39F3(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// renderer.GetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = L_2;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_6 = V_0;
		NullCheck(L_5);
		Renderer_GetPropertyBlock_mCD279F8A7CEB56ABB9EF9D150103FB1C4FB3CE8C(L_5, L_6, /*hidden argument*/NULL);
		// propertyBlock.SetColor(colorID, color);
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_7 = V_0;
		int32_t L_8 = ___colorID2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = ___color3;
		NullCheck(L_7);
		MaterialPropertyBlock_SetColor_mAD64140F8E6FC74CA36AF187B649BC575B4D666F(L_7, L_8, L_9, /*hidden argument*/NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_10 = L_5;
		MaterialPropertyBlock_t72A481768111C6F11DCDCD44F0C7F99F1CA79E13 * L_11 = V_0;
		NullCheck(L_10);
		Renderer_SetPropertyBlock_m1B999AB9B425587EF44CF1CB83CDE0A191F76C40(L_10, L_11, /*hidden argument*/NULL);
		// OptimizeRenderer(renderer);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_12 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		MixedRealityToolkitVisualProfiler_OptimizeRenderer_m803E312A187E7D5FE6F60575A855EC545AC9A909(L_12, /*hidden argument*/NULL);
		// return renderer;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::OptimizeRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_OptimizeRenderer_m803E312A187E7D5FE6F60575A855EC545AC9A909 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___renderer0, const RuntimeMethod* method)
{
	{
		// renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = ___renderer0;
		NullCheck(L_0);
		Renderer_set_shadowCastingMode_mC7E601EE9B32B63097B216C78ED4F854B0AF21EC(L_0, 0, /*hidden argument*/NULL);
		// renderer.receiveShadows = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = ___renderer0;
		NullCheck(L_1);
		Renderer_set_receiveShadows_mD2BD2FF58156E328677EAE5E175D2069BC2925A0(L_1, (bool)0, /*hidden argument*/NULL);
		// renderer.motionVectorGenerationMode = MotionVectorGenerationMode.ForceNoMotion;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_2 = ___renderer0;
		NullCheck(L_2);
		Renderer_set_motionVectorGenerationMode_m4C127FB86BB4B20031F77B66CC629F272904178B(L_2, 2, /*hidden argument*/NULL);
		// renderer.lightProbeUsage = UnityEngine.Rendering.LightProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = ___renderer0;
		NullCheck(L_3);
		Renderer_set_lightProbeUsage_mD4F86D1953BD7A2E98C187C207AB9C2A4DA8839D(L_3, 0, /*hidden argument*/NULL);
		// renderer.reflectionProbeUsage = UnityEngine.Rendering.ReflectionProbeUsage.Off;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_4 = ___renderer0;
		NullCheck(L_4);
		Renderer_set_reflectionProbeUsage_mB1E5A77AB7204CA2FD3AE3294D2CBC0EF352DD08(L_4, 0, /*hidden argument*/NULL);
		// renderer.allowOcclusionWhenDynamic = false;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = ___renderer0;
		NullCheck(L_5);
		Renderer_set_allowOcclusionWhenDynamic_m32286F46CA4405E850B5BFA6245E243641E85D55(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryUsageToString(System.Char[],System.Int32,UnityEngine.TextMesh,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_MemoryUsageToString_mDC6202726D1C356A3CB411D5989151B0FDED0B46 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer0, int32_t ___displayedDecimalDigits1, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___textMesh2, String_t* ___prefixString3, uint64_t ___memoryUsage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_MemoryUsageToString_mDC6202726D1C356A3CB411D5989151B0FDED0B46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// float memoryUsageMB = ConvertBytesToMegabytes(memoryUsage);
		uint64_t L_0 = ___memoryUsage4;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		float L_1 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m99D50BB9766B5B9717384F9AFB9269D108525AD5(L_0, /*hidden argument*/NULL);
		// int memoryUsageIntegerDigits = (int)memoryUsageMB;
		float L_2 = L_1;
		V_0 = (((int32_t)((int32_t)L_2)));
		// int memoryUsageFractionalDigits = (int)((memoryUsageMB - memoryUsageIntegerDigits) * Mathf.Pow(10.0f, displayedDecimalDigits));
		int32_t L_3 = V_0;
		int32_t L_4 = ___displayedDecimalDigits1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = powf((10.0f), (((float)((float)L_4))));
		V_1 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)(((float)((float)L_3))))), (float)L_5)))));
		// int bufferIndex = 0;
		V_2 = 0;
		// for (int i = 0; i < prefixString.Length; ++i)
		V_3 = 0;
		goto IL_0034;
	}

IL_0022:
	{
		// stringBuffer[bufferIndex++] = prefixString[i];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = ___stringBuffer0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		String_t* L_9 = ___prefixString3;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		Il2CppChar L_11 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppChar)L_11);
		// for (int i = 0; i < prefixString.Length; ++i)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < prefixString.Length; ++i)
		int32_t L_13 = V_3;
		String_t* L_14 = ___prefixString3;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0022;
		}
	}
	{
		// bufferIndex = MemoryItoA(memoryUsageIntegerDigits, stringBuffer, bufferIndex);
		int32_t L_16 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_17 = ___stringBuffer0;
		int32_t L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_19 = MixedRealityToolkitVisualProfiler_MemoryItoA_m01F4C17AFB569A1A313022827340AB2A327252B8(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// stringBuffer[bufferIndex++] = '.';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = ___stringBuffer0;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Il2CppChar)((int32_t)46));
		// if (memoryUsageFractionalDigits != 0)
		int32_t L_23 = V_1;
		if (!L_23)
		{
			goto IL_005d;
		}
	}
	{
		// bufferIndex = MemoryItoA(memoryUsageFractionalDigits, stringBuffer, bufferIndex);
		int32_t L_24 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_25 = ___stringBuffer0;
		int32_t L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_27 = MixedRealityToolkitVisualProfiler_MemoryItoA_m01F4C17AFB569A1A313022827340AB2A327252B8(L_24, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// }
		goto IL_0076;
	}

IL_005d:
	{
		// for (int i = 0; i < displayedDecimalDigits; ++i)
		V_4 = 0;
		goto IL_0071;
	}

IL_0062:
	{
		// stringBuffer[bufferIndex++] = '0';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = ___stringBuffer0;
		int32_t L_29 = V_2;
		int32_t L_30 = L_29;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Il2CppChar)((int32_t)48));
		// for (int i = 0; i < displayedDecimalDigits; ++i)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0071:
	{
		// for (int i = 0; i < displayedDecimalDigits; ++i)
		int32_t L_32 = V_4;
		int32_t L_33 = ___displayedDecimalDigits1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0062;
		}
	}

IL_0076:
	{
		// stringBuffer[bufferIndex++] = 'M';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_34 = ___stringBuffer0;
		int32_t L_35 = V_2;
		int32_t L_36 = L_35;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Il2CppChar)((int32_t)77));
		// stringBuffer[bufferIndex++] = 'B';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_37 = ___stringBuffer0;
		int32_t L_38 = V_2;
		int32_t L_39 = L_38;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Il2CppChar)((int32_t)66));
		// textMesh.text = new string(stringBuffer, 0, bufferIndex);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_40 = ___textMesh2;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_41 = ___stringBuffer0;
		int32_t L_42 = V_2;
		String_t* L_43 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_41, 0, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_40, L_43, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::MemoryItoA(System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityToolkitVisualProfiler_MemoryItoA_m01F4C17AFB569A1A313022827340AB2A327252B8 (int32_t ___value0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___stringBuffer1, int32_t ___bufferIndex2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		// int startIndex = bufferIndex;
		int32_t L_0 = ___bufferIndex2;
		V_0 = L_0;
		goto IL_001b;
	}

IL_0004:
	{
		// stringBuffer[bufferIndex++] = (char)((char)(value % 10) + '0');
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = ___stringBuffer1;
		int32_t L_2 = ___bufferIndex2;
		int32_t L_3 = L_2;
		___bufferIndex2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_4%(int32_t)((int32_t)10)))))), (int32_t)((int32_t)48)))))));
		// for (; value != 0; value /= 10)
		int32_t L_5 = ___value0;
		___value0 = ((int32_t)((int32_t)L_5/(int32_t)((int32_t)10)));
	}

IL_001b:
	{
		// for (; value != 0; value /= 10)
		int32_t L_6 = ___value0;
		if (L_6)
		{
			goto IL_0004;
		}
	}
	{
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_7 = ___bufferIndex2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_003a;
	}

IL_0024:
	{
		// temp = stringBuffer[startIndex];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = ___stringBuffer1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// stringBuffer[startIndex] = stringBuffer[endIndex];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_12 = ___stringBuffer1;
		int32_t L_13 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = ___stringBuffer1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint16_t L_17 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)L_17);
		// stringBuffer[endIndex] = temp;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_18 = ___stringBuffer1;
		int32_t L_19 = V_2;
		Il2CppChar L_20 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Il2CppChar)L_20);
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
	}

IL_003a:
	{
		// for (int endIndex = bufferIndex - 1; startIndex < endIndex; ++startIndex, --endIndex)
		int32_t L_23 = V_0;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0024;
		}
	}
	{
		// return bufferIndex;
		int32_t L_25 = ___bufferIndex2;
		return L_25;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppTargetFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA8487EE1F35F72300474A546FFD1505B1D972F22 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_get_AppTargetFrameRate_mA8487EE1F35F72300474A546FFD1505B1D972F22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float refreshRate = UnityEngine.XR.XRDevice.refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		float L_0 = XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8(/*hidden argument*/NULL);
		V_0 = L_0;
		// return ((int)refreshRate == 0) ? 60.0f : refreshRate;
		float L_1 = V_0;
		if (!(((int32_t)((int32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		float L_2 = V_0;
		return L_2;
	}

IL_000c:
	{
		return (60.0f);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::AverageFrameTiming(UnityEngine.FrameTiming[],System.UInt32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_AverageFrameTiming_m5E5C61DDCC7F203EEB150C3B0F8EA0FD01772C1E (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* ___frameTimings0, uint32_t ___frameTimingsCount1, float* ___cpuFrameTime2, float* ___gpuFrameTime3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		// double cpuTime = 0.0f;
		V_0 = (0.0);
		// double gpuTime = 0.0f;
		V_1 = (0.0);
		// for (int i = 0; i < frameTimingsCount; ++i)
		V_2 = 0;
		goto IL_003a;
	}

IL_0018:
	{
		// cpuTime += frameTimings[i].cpuFrameTime;
		double L_0 = V_0;
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_1 = ___frameTimings0;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		double L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_cpuFrameTime_1();
		V_0 = ((double)il2cpp_codegen_add((double)L_0, (double)L_3));
		// gpuTime += frameTimings[i].gpuFrameTime;
		double L_4 = V_1;
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_5 = ___frameTimings0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		double L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_gpuFrameTime_3();
		V_1 = ((double)il2cpp_codegen_add((double)L_4, (double)L_7));
		// for (int i = 0; i < frameTimingsCount; ++i)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003a:
	{
		// for (int i = 0; i < frameTimingsCount; ++i)
		int32_t L_9 = V_2;
		uint32_t L_10 = ___frameTimingsCount1;
		if ((((int64_t)(((int64_t)((int64_t)L_9)))) < ((int64_t)(((int64_t)((uint64_t)L_10))))))
		{
			goto IL_0018;
		}
	}
	{
		// cpuTime /= frameTimingsCount;
		double L_11 = V_0;
		uint32_t L_12 = ___frameTimingsCount1;
		V_0 = ((double)((double)L_11/(double)(((double)((double)(((double)((uint32_t)L_12))))))));
		// gpuTime /= frameTimingsCount;
		double L_13 = V_1;
		uint32_t L_14 = ___frameTimingsCount1;
		V_1 = ((double)((double)L_13/(double)(((double)((double)(((double)((uint32_t)L_14))))))));
		// cpuFrameTime = (float)(cpuTime * 0.001);
		float* L_15 = ___cpuFrameTime2;
		double L_16 = V_0;
		*((float*)L_15) = (float)(((float)((float)((double)il2cpp_codegen_multiply((double)L_16, (double)(0.001))))));
		// gpuFrameTime = (float)(gpuTime * 0.001);
		float* L_17 = ___gpuFrameTime3;
		double L_18 = V_1;
		*((float*)L_17) = (float)(((float)((float)((double)il2cpp_codegen_multiply((double)L_18, (double)(0.001))))));
		// }
		return;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsage_mCA2C2FF62139ABAA97E1250B1629A60607A91C25 (const RuntimeMethod* method)
{
	{
		// return (ulong)Profiler.GetTotalAllocatedMemoryLong();
		int64_t L_0 = Profiler_GetTotalAllocatedMemoryLong_m8B81D9312DC29887D552EEAFBFA95794A4D4EBD1(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::get_AppMemoryUsageLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m1C98E5A5B83047FB0037095BBAF6F8FE0C033F00 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_get_AppMemoryUsageLimit_m1C98E5A5B83047FB0037095BBAF6F8FE0C033F00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ConvertMegabytesToBytes(SystemInfo.systemMemorySize);
		int32_t L_0 = SystemInfo_get_systemMemorySize_m7599C2A9CA16C15DD72C5563D5C47262CEDE0EB8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		uint64_t L_1 = MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m22808CA3BD8A2EB600B4816A5968E3DE857F3B40(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::WillDisplayedMemoryUsageDiffer(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC64E536311135A81FDC1B2D6591849A776D091E8 (uint64_t ___oldUsage0, uint64_t ___newUsage1, int32_t ___displayedDecimalDigits2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler_WillDisplayedMemoryUsageDiffer_mC64E536311135A81FDC1B2D6591849A776D091E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float oldUsageMBs = ConvertBytesToMegabytes(oldUsage);
		uint64_t L_0 = ___oldUsage0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		float L_1 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m99D50BB9766B5B9717384F9AFB9269D108525AD5(L_0, /*hidden argument*/NULL);
		// float newUsageMBs = ConvertBytesToMegabytes(newUsage);
		uint64_t L_2 = ___newUsage1;
		float L_3 = MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m99D50BB9766B5B9717384F9AFB9269D108525AD5(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// float decimalPower = Mathf.Pow(10.0f, displayedDecimalDigits);
		int32_t L_4 = ___displayedDecimalDigits2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = powf((10.0f), (((float)((float)L_4))));
		V_1 = L_5;
		// return (int)(oldUsageMBs * decimalPower) != (int)(newUsageMBs * decimalPower);
		float L_6 = V_1;
		float L_7 = V_0;
		float L_8 = V_1;
		return (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_1, (float)L_6)))))) == ((int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt64 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertMegabytesToBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MixedRealityToolkitVisualProfiler_ConvertMegabytesToBytes_m22808CA3BD8A2EB600B4816A5968E3DE857F3B40 (int32_t ___megabytes0, const RuntimeMethod* method)
{
	{
		// return ((ulong)megabytes * 1024UL) * 1024UL;
		int32_t L_0 = ___megabytes0;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_0))), (int64_t)(((int64_t)((int64_t)((int32_t)1024)))))), (int64_t)(((int64_t)((int64_t)((int32_t)1024))))));
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::ConvertBytesToMegabytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityToolkitVisualProfiler_ConvertBytesToMegabytes_m99D50BB9766B5B9717384F9AFB9269D108525AD5 (uint64_t ___bytes0, const RuntimeMethod* method)
{
	{
		// return (bytes / 1024.0f) / 1024.0f;
		uint64_t L_0 = ___bytes0;
		return ((float)((float)((float)((float)(((float)((float)(((double)((uint64_t)L_0))))))/(float)(1024.0f)))/(float)(1024.0f)));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__ctor_m237262B2074189426A9AB2B32FA8EB8A29BF9035 (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler__ctor_m237262B2074189426A9AB2B32FA8EB8A29BF9035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private bool frameInfoVisible = true;
		__this->set_frameInfoVisible_17((bool)1);
		// private bool memoryStatsVisible = true;
		__this->set_memoryStatsVisible_18((bool)1);
		// private float frameSampleRate = 0.1f;
		__this->set_frameSampleRate_19((0.1f));
		// private TextAnchor windowAnchor = TextAnchor.LowerCenter;
		__this->set_windowAnchor_20(7);
		// private Vector2 windowOffset = new Vector2(0.1f, 0.1f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (0.1f), (0.1f), /*hidden argument*/NULL);
		__this->set_windowOffset_21(L_0);
		// private float windowScale = 1.0f;
		__this->set_windowScale_22((1.0f));
		// private float windowFollowSpeed = 5.0f;
		__this->set_windowFollowSpeed_23((5.0f));
		// private int displayedDecimalDigits = 1;
		__this->set_displayedDecimalDigits_24(1);
		// private FrameRateColor[] frameRateColors = new FrameRateColor[]
		// {
		//     // Green
		//     new FrameRateColor() { percentageOfTarget = 0.95f, color = new Color(127 / 256.0f, 186 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Yellow
		//     new FrameRateColor() { percentageOfTarget = 0.75f, color = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f) },
		//     // Red
		//     new FrameRateColor() { percentageOfTarget = 0.0f, color = new Color(255 / 256.0f, 0 / 256.0f, 0 / 256.0f, 1.0f) },
		// };
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_1 = (FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105*)(FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105*)SZArrayNew(FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105_il2cpp_TypeInfo_var, (uint32_t)3);
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_2 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 ));
		(&V_0)->set_percentageOfTarget_0((0.95f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_3), (0.49609375f), (0.7265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_3);
		FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 )L_4);
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_5 = L_2;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 ));
		(&V_0)->set_percentageOfTarget_0((0.75f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_6), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_6);
		FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 )L_7);
		FrameRateColorU5BU5D_tB4E40929C9FAF2D0D89385B8FCFE3799D7971105* L_8 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 ));
		(&V_0)->set_percentageOfTarget_0((0.0f));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_9), (0.99609375f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->set_color_1(L_9);
		FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103  L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (FrameRateColor_tA18CA19BEF3B11918729550FC9790324FC0B1103 )L_10);
		__this->set_frameRateColors_25(L_8);
		// private Color baseColor = new Color(80 / 256.0f, 80 / 256.0f, 80 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_11), (0.3125f), (0.3125f), (0.3125f), (1.0f), /*hidden argument*/NULL);
		__this->set_baseColor_26(L_11);
		// private Color memoryUsedColor = new Color(0 / 256.0f, 164 / 256.0f, 239 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_12), (0.0f), (0.640625f), (0.93359375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryUsedColor_27(L_12);
		// private Color memoryPeakColor = new Color(255 / 256.0f, 185 / 256.0f, 0 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_13), (0.99609375f), (0.72265625f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryPeakColor_28(L_13);
		// private Color memoryLimitColor = new Color(150 / 256.0f, 150 / 256.0f, 150 / 256.0f, 1.0f);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_14), (0.5859375f), (0.5859375f), (0.5859375f), (1.0f), /*hidden argument*/NULL);
		__this->set_memoryLimitColor_29(L_14);
		// private System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_15 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_15, /*hidden argument*/NULL);
		__this->set_stopwatch_50(L_15);
		// private FrameTiming[] frameTimings = new FrameTiming[maxFrameTimings];
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var);
		int32_t L_16 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_maxFrameTimings_6();
		FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3* L_17 = (FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3*)(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3*)SZArrayNew(FrameTimingU5BU5D_t85032E841FA7033B896FB52B489D4CE5E2266FB3_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->set_frameTimings_51(L_17);
		// private char[] stringBuffer = new char[maxStringLength];
		int32_t L_18 = ((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->get_maxStringLength_4();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->set_stringBuffer_54(L_19);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler__cctor_mCCB9FFA7B037DA529C33779C19D9E42ECE985562 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkitVisualProfiler__cctor_mCCB9FFA7B037DA529C33779C19D9E42ECE985562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int maxStringLength = 32;
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_maxStringLength_4(((int32_t)32));
		// private static readonly int maxTargetFrameRate = 120;
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_maxTargetFrameRate_5(((int32_t)120));
		// private static readonly int maxFrameTimings = 128;
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_maxFrameTimings_6(((int32_t)128));
		// private static readonly int frameRange = 30;
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_frameRange_7(((int32_t)30));
		// private static readonly Vector2 defaultWindowRotation = new Vector2(10.0f, 20.0f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (10.0f), (20.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_defaultWindowRotation_8(L_0);
		// private static readonly Vector3 defaultWindowScale = new Vector3(0.2f, 0.04f, 1.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.2f), (0.04f), (1.0f), /*hidden argument*/NULL);
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_defaultWindowScale_9(L_1);
		// private static readonly Vector3[] backgroundScales = { new Vector3(1.0f, 1.0f, 1.0f), new Vector3(1.0f, 0.5f, 1.0f), new Vector3(1.0f, 0.25f, 1.0f) };
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_4);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), (1.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_6);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), (1.0f), (0.25f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_8);
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_backgroundScales_10(L_7);
		// private static readonly Vector3[] backgroundOffsets = { new Vector3(0.0f, 0.0f, 0.0f), new Vector3(0.0f, 0.25f, 0.0f), new Vector3(0.0f, 0.375f, 0.0f) };
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = L_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_11);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_12 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (0.0f), (0.25f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_13);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), (0.0f), (0.375f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_15);
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_backgroundOffsets_11(L_14);
		// private static readonly string usedMemoryString = "Used: ";
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_usedMemoryString_12(_stringLiteral0085F04FFAF54410F314A1739CA00743371D3A5B);
		// private static readonly string peakMemoryString = "Peak: ";
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_peakMemoryString_13(_stringLiteralEFDD3FFFDEBF8938E0ACF2BA36C21ADB990D938B);
		// private static readonly string limitMemoryString = "Limit: ";
		((MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E_il2cpp_TypeInfo_var))->set_limitMemoryString_14(_stringLiteral5E044C5A2E8F3D4F49006EA5361F7FEB04CD498F);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::ToggleProfiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_ToggleProfiler_m10E4F6837DC4AA7C0BC8C4772235E76EB9DF4D20 (VisualProfilerControl_t371B3920551CA89ADA1510C809BFE7200BF3F24C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualProfilerControl_ToggleProfiler_m10E4F6837DC4AA7C0BC8C4772235E76EB9DF4D20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = !CoreServices.DiagnosticsSystem.ShowProfiler;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		RuntimeObject* L_2 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::get_ShowProfiler() */, IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::SetProfilerVisibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl_SetProfilerVisibility_m0B3B0F362CA0473A40B19FEE24513321EBF8D9FC (VisualProfilerControl_t371B3920551CA89ADA1510C809BFE7200BF3F24C * __this, bool ___isVisible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualProfilerControl_SetProfilerVisibility_m0B3B0F362CA0473A40B19FEE24513321EBF8D9FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CoreServices.DiagnosticsSystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// CoreServices.DiagnosticsSystem.ShowProfiler = isVisible;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_DiagnosticsSystem_m5068EE5E024F91A4A4207F4D93960481DBC00BA4(/*hidden argument*/NULL);
		bool L_2 = ___isVisible0;
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsSystem::set_ShowProfiler(System.Boolean) */, IMixedRealityDiagnosticsSystem_tE5E9DF4258176D9FE9B9AFFE7558672862E53F57_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Diagnostics.VisualProfilerControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualProfilerControl__ctor_m7A72F42F09CFACFE8A6FA0B06502ECFD2109AB78 (VisualProfilerControl_t371B3920551CA89ADA1510C809BFE7200BF3F24C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  SpeechEventData_get_Command_mAEDE76389095DA584E6CDAF6C52BFE2FD85757CB_inline (SpeechEventData_t2685134E52470CBB7B109AD8D9CF95BE4295AD83 * __this, const RuntimeMethod* method)
{
	{
		// public SpeechCommands Command { get; private set; }
		SpeechCommands_t8F72FD607D15F57FC333F346756339847FB93353  L_0 = __this->get_U3CCommandU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m6588B33F12F54F3CDADCE9D455164EBF8E6D1A75_inline (BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowDiagnostics_mA72EC79B40C73FD5BD032463D81D65C8B6016F81_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return showDiagnostics; }
		bool L_0 = __this->get_showDiagnostics_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowParent_m50E6AEAA487C78034A4DCD70368C894B07F51024_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CWindowParentU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowProfiler_mBEB50047A407F93678618D29C58DC2CCFF762C1F_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return showProfiler;
		bool L_0 = __this->get_showProfiler_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_IsVisible_m8A9408532076499A6D6AF1E8565FDBFC44CE563A_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { isVisible = value; }
		bool L_0 = ___value0;
		__this->set_isVisible_16(L_0);
		// set { isVisible = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowFrameInfo_mAB8F7B120A4B698EA436122F1285E1BD0DCBDCFD_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameInfoVisible_m8D205CD94056846C05AEA8D96AAF631B8CE7A4BD_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { frameInfoVisible = value; }
		bool L_0 = ___value0;
		__this->set_frameInfoVisible_17(L_0);
		// set { frameInfoVisible = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsSystem_get_ShowMemoryStats_mDA8F638CF88631244B26D5CCB1B149692F53393E_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_MemoryStatsVisible_mF5BF6E7D15A5EA793BA9132260D1537BC9DF8AAB_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { memoryStatsVisible = value; }
		bool L_0 = ___value0;
		__this->set_memoryStatsVisible_18(L_0);
		// set { memoryStatsVisible = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_FrameSampleRate_m09BE9F07637D13FA591844233586EF15DDA4469D_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// return frameSampleRate;
		float L_0 = __this->get_frameSampleRate_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_FrameSampleRate_m523DDCAB3CFBEB0C022B832EFB2FE21270FAB0DB_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { frameSampleRate = value; }
		float L_0 = ___value0;
		__this->set_frameSampleRate_19(L_0);
		// set { frameSampleRate = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsSystem_get_WindowAnchor_mA832D6EEAB140ED745F1BCB65DA8FFC55D6E1D3F_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowAnchor; }
		int32_t L_0 = __this->get_windowAnchor_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowAnchor_m50D12A011DF5B139ABB0247BA7BE19F7FE57EA94_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { windowAnchor = value; }
		int32_t L_0 = ___value0;
		__this->set_windowAnchor_20(L_0);
		// set { windowAnchor = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsSystem_get_WindowOffset_mC89E1DCFA279D26BBAFA9445DFD35BDB5C18B3E8_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowOffset; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityToolkitVisualProfiler_set_WindowOffset_mD6B90405F9930ED4E5BA3F1F3D904E678B119B0F_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// set { windowOffset = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_windowOffset_21(L_0);
		// set { windowOffset = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowScale_mFDEA534CECEE3C2E440840E2D5E4427109352A77_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowScale; }
		float L_0 = __this->get_windowScale_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsSystem_get_WindowFollowSpeed_mEA6FD6E7762717F455469B222AE36D24AD665314_inline (MixedRealityDiagnosticsSystem_tB2FA046EA4052471C340EDEBC00283E103E90764 * __this, const RuntimeMethod* method)
{
	{
		// get { return windowFollowSpeed; }
		float L_0 = __this->get_windowFollowSpeed_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowDiagnostics_m0B592F14159ADA473A63992AEFD3E73289410B79_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowDiagnostics => showDiagnostics;
		bool L_0 = __this->get_showDiagnostics_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowProfiler_mEF72E96840D11DB574DF9DDC266186F3ED66CC90_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowProfiler => showProfiler;
		bool L_0 = __this->get_showProfiler_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowFrameInfo_m491162593C4F951FAD87637C428DA1AF7CC3753F_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowFrameInfo => showFrameInfo;
		bool L_0 = __this->get_showFrameInfo_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityDiagnosticsProfile_get_ShowMemoryStats_mC2B1ADF49D79384554FFEACFCC161C5D26A8C616_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowMemoryStats => showMemoryStats;
		bool L_0 = __this->get_showMemoryStats_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_FrameSampleRate_m6677821C573D96A3C57F768A078E4011DF2CAAD0_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public float FrameSampleRate => frameSampleRate;
		float L_0 = __this->get_frameSampleRate_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityDiagnosticsProfile_get_WindowAnchor_m2618DBA5D791DFD9AFA1734E4E8BB40CA4C910E2_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public TextAnchor WindowAnchor => windowAnchor;
		int32_t L_0 = __this->get_windowAnchor_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityDiagnosticsProfile_get_WindowOffset_m94AA80E762902234A3178FB97EF78F9054C81DE2_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 WindowOffset => windowOffset;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_windowOffset_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowScale_m7554343EE37046B3B7A235D5540B987EF950954C_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowScale => windowScale;
		float L_0 = __this->get_windowScale_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityDiagnosticsProfile_get_WindowFollowSpeed_mE4D5939D4B319D3BD4A24F0428426091B582A015_inline (MixedRealityDiagnosticsProfile_t61724D88DAFD5F1A63C317CCAB2F707980ED7394 * __this, const RuntimeMethod* method)
{
	{
		// public float WindowFollowSpeed => windowFollowSpeed;
		float L_0 = __this->get_windowFollowSpeed_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * MixedRealityToolkitVisualProfiler_get_WindowParent_m1DED2011000F4D9A303C2D320B39A2806B4FFED5_inline (MixedRealityToolkitVisualProfiler_t639B90B5CA42DBEFA9EA1266C0B4AB9EE748370E * __this, const RuntimeMethod* method)
{
	{
		// public Transform WindowParent { get; set; } = null;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CWindowParentU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
