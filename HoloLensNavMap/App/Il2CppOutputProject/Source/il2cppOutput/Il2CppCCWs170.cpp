#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aD=>
struct Dictionary_2_t9C4AE7647757A769B59918C81809D1A8F5C3E673;
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aaF=>
struct Dictionary_2_tCCDCA6FEB397FF22484719482A3D6A9E10A95F31;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t1AE23F4D3D321D7695075A3C81EC2AB26204FA50;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t5D07FFB9094D6CF593075DC67233D177AD9F8DC2;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t1AD0B13A6C9E87756E9980A557EF726815646301;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_t4C7434B09BD407FF7193894E537456F39FAA48B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_t47AC0CA0F2337AA39F27937A93E09259A52F0FE9;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t5FE3A6A222CE641E04F2B28EFC93AD998392590A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tD728E53F6F38DFD621432ACE9DD5EC771409D7E3;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_t4D18BCC4B98A6A810DEB13D7989E324460D6B8D6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_t202CFD58AAF87392CDBCEC3211FD7746C46244AF;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_t509A95506CAFAA7303381C8825768207BE7952AB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB;
// System.EventHandler`1<Microsoft.Maps.Unity.MapSession>
struct EventHandler_1_t64ACA999BE1F9C475C79234A6A8063C3F42A5516;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t97900A99093675AC7781A6DDC6BC936AC06D65DD;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tD231B0FE8E12F9063AFA90264554E168AFF9ED49;
// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin>
struct HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t3320F8F0904D167AE5ADA44348F6A89AD5006F5B;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t7457B291BC78E35EDF08153E6AC310B7B09AB66C;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t1C9407D0615672403CAB8C08C4373FDBC3CFB671;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_t43C745E119B1CCB4D5B6DE207D56E331F5B4D63B;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t4293B466715ACFF964D3D46A1144413025DFD899;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t00A6CDFCDE793F6944C6F28A85C8022BF58457A5;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t2641CF17115B06E5528E3C9A50B92A2DAE6DA588;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t09956FF02C66B5173B30068F6456F4CE01282864;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tE727936D4AE10BF3A16839F8BF3E2E9354B63A95;
// System.Collections.Generic.List`1<=aBd=>
struct List_1_tAB900087BFDB10510EA560D44CD8C44340BA488E;
// System.Collections.Generic.List`1<=aaC=>
struct List_1_t6F1E18116D3E03E7EB30BE7619135E5FC33F0522;
// System.Collections.Generic.List`1<=aaD=>
struct List_1_t749B78137B15D528DC4249E3D709BEC399DCC586;
// System.Collections.Generic.List`1<=aab=>
struct List_1_t8D1CC7B7BD9A25A0AEFAB75788513F0E6872A8F6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_tCF13D7861A6FB8C60CDFBFC1228172335BB3754D;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin>
struct List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer>
struct List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId>
struct List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tD37785780113893966C5FB49790E7B98696247F2;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tC583F3A3AF345462CAF35F8FE172B48BA424ACFB;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t3374D0423813BCA5A08E4DDA8E84E939503410DD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t306EFD6435FC406790B17DC7E152F70669D3C819;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t2CD7CC2A4AA5E71C2E7D773BCA2529DBB0F07B2C;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t4455D4E130088AD7C19203DE19C44E699C673E6F;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.Geospatial.TileId[]
struct TileIdU5BU5D_t03BEEEB0BEEF0C5D175E1C9B69C38D44C785789F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// =a6=
struct U3Da6U3D_tAEAD9548B52A0E1928D781B2254F3BA2F1E5412C;
// =a8=
struct U3Da8U3D_tB6F7B2F742BE37491EDAE69896FC975A67F34078;
// =aBf=
struct U3DaBfU3D_t9CF2E9A72E89269EA1C29A51A567CBE27FE1041B;
// =aF=
struct U3DaFU3D_tEC50DC43ED2470AD2E709033786613EF4C82FAEE;
// =aa9=
struct U3Daa9U3D_t04EFE5AA72545535FFF8A884A41F01D28E147E92;
// =aaF=
struct U3DaaFU3D_tC1D9DBCE9418F650E7646068C965CC6D33660C31;
// =abC=
struct U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_tF780662C7B1706F07B08E465B3C7B369A49B8B01;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t14CA00A16EB6EF4161094AC72689655FF3D474A6;
// Microsoft.Maps.Unity.ElevationTileLayerList
struct ElevationTileLayerList_tE014081A6E790BF0005445B0C40964255F9EDB2D;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t4E05B07D0BE457E9D27A57B8F1EF9BE8F5B73C11;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t219F33CCB967AA80D2EA2F888342B5DE31C43252;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.Maps.Unity.IMapSceneAnimationController
struct IMapSceneAnimationController_t7AC166DE2CEE7970CFEAB67CFB1F81946ADD3148;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA6A5223849E94E7BBC5A2BDEE52EB17833FF035D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t29C1107590D9A4409221ECE1EB08A403A563A69F;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tD549E6AD9FA9F1348EBC41610823323ED8A4E5B1;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tEF148754379FEB16FF4BCBFB1280F49BFD2AB1A4;
// Microsoft.Maps.Unity.MapLabelLayer
struct MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658;
// Microsoft.Maps.Unity.MapSession
struct MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t08874FAB7781FECD60F54E1D6C552112FBBEFAD8;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t2EF86D6B6C74CF0455D77C65EB30461A4A32158C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t4EF597EF9317F1830A4A9B0D5075CEEACFF2FA11;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tE45D76E1A8D9BA494BF55C4278B07085F596531C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t69E4835EE1FAFD2F3C032C959845B30467D44C63;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t861BA49287DDBBACF90D98A7396BC1B150BE0E4C;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_tA16848594AEDA529C825F5C7224751D40A2FA089;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tD73ADFF5066F275CBDDB12927E84451896BB64AF;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tAF399F59110AF3A8878F299D2ECFD95DE6E489BA;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Microsoft.Maps.Unity.TextureTileLayerList
struct TextureTileLayerList_t14A736DC406E2836989D5D5B351F22C666926E30;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker
struct SceneContentTracker_t429B30003A9812393D9C2AACF496368C8E515D9C;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor
struct SceneLightingExecutor_t5BAED6D57903EE115F169B963F4F69EE6A38663C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::_matches
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;

public:
	inline static int32_t get_offset_of__regex_0() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____regex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_0() const { return ____regex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_0() { return &____regex_0; }
	inline void set__regex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_0), (void*)value);
	}

	inline static int32_t get_offset_of__matches_1() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____matches_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__matches_1() const { return ____matches_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__matches_1() { return &____matches_1; }
	inline void set__matches_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____matches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_1), (void*)value);
	}

	inline static int32_t get_offset_of__done_2() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____done_2)); }
	inline bool get__done_2() const { return ____done_2; }
	inline bool* get_address_of__done_2() { return &____done_2; }
	inline void set__done_2(bool value)
	{
		____done_2 = value;
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____input_3)); }
	inline String_t* get__input_3() const { return ____input_3; }
	inline String_t** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(String_t* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of__beginning_4() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____beginning_4)); }
	inline int32_t get__beginning_4() const { return ____beginning_4; }
	inline int32_t* get_address_of__beginning_4() { return &____beginning_4; }
	inline void set__beginning_4(int32_t value)
	{
		____beginning_4 = value;
	}

	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__startat_6() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____startat_6)); }
	inline int32_t get__startat_6() const { return ____startat_6; }
	inline int32_t* get_address_of__startat_6() { return &____startat_6; }
	inline void set__startat_6(int32_t value)
	{
		____startat_6 = value;
	}

	inline static int32_t get_offset_of__prevlen_7() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____prevlen_7)); }
	inline int32_t get__prevlen_7() const { return ____prevlen_7; }
	inline int32_t* get_address_of__prevlen_7() { return &____prevlen_7; }
	inline void set__prevlen_7(int32_t value)
	{
		____prevlen_7 = value;
	}
};

struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection::infinite
	int32_t ___infinite_8;

public:
	inline static int32_t get_offset_of_infinite_8() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields, ___infinite_8)); }
	inline int32_t get_infinite_8() const { return ___infinite_8; }
	inline int32_t* get_address_of_infinite_8() { return &___infinite_8; }
	inline void set_infinite_8(int32_t value)
	{
		___infinite_8 = value;
	}
};


// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IntPtr
struct IntPtr_t 
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


// Microsoft.Geospatial.LatLon
struct LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E 
{
public:
	// System.Double Microsoft.Geospatial.LatLon::<LongitudeInDegrees>k__BackingField
	double ___U3CLongitudeInDegreesU3Ek__BackingField_8;
	// System.Double Microsoft.Geospatial.LatLon::<LatitudeInDegrees>k__BackingField
	double ___U3CLatitudeInDegreesU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CLongitudeInDegreesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E, ___U3CLongitudeInDegreesU3Ek__BackingField_8)); }
	inline double get_U3CLongitudeInDegreesU3Ek__BackingField_8() const { return ___U3CLongitudeInDegreesU3Ek__BackingField_8; }
	inline double* get_address_of_U3CLongitudeInDegreesU3Ek__BackingField_8() { return &___U3CLongitudeInDegreesU3Ek__BackingField_8; }
	inline void set_U3CLongitudeInDegreesU3Ek__BackingField_8(double value)
	{
		___U3CLongitudeInDegreesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLatitudeInDegreesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E, ___U3CLatitudeInDegreesU3Ek__BackingField_9)); }
	inline double get_U3CLatitudeInDegreesU3Ek__BackingField_9() const { return ___U3CLatitudeInDegreesU3Ek__BackingField_9; }
	inline double* get_address_of_U3CLatitudeInDegreesU3Ek__BackingField_9() { return &___U3CLatitudeInDegreesU3Ek__BackingField_9; }
	inline void set_U3CLatitudeInDegreesU3Ek__BackingField_9(double value)
	{
		___U3CLatitudeInDegreesU3Ek__BackingField_9 = value;
	}
};

struct LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E_StaticFields
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MinValue
	LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  ___MinValue_4;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MaxValue
	LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  ___MaxValue_5;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::Origin
	LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  ___Origin_7;

public:
	inline static int32_t get_offset_of_MinValue_4() { return static_cast<int32_t>(offsetof(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E_StaticFields, ___MinValue_4)); }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  get_MinValue_4() const { return ___MinValue_4; }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E * get_address_of_MinValue_4() { return &___MinValue_4; }
	inline void set_MinValue_4(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  value)
	{
		___MinValue_4 = value;
	}

	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E_StaticFields, ___MaxValue_5)); }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  get_MaxValue_5() const { return ___MaxValue_5; }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_Origin_7() { return static_cast<int32_t>(offsetof(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E_StaticFields, ___Origin_7)); }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  get_Origin_7() const { return ___Origin_7; }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E * get_address_of_Origin_7() { return &___Origin_7; }
	inline void set_Origin_7(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  value)
	{
		___Origin_7 = value;
	}
};


// Microsoft.Maps.Unity.LatLonWrapper
struct LatLonWrapper_t8515839182AF59DD53D8C18525788BA3C20C403C 
{
public:
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_latitude
	double ____latitude_0;
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_longitude
	double ____longitude_1;

public:
	inline static int32_t get_offset_of__latitude_0() { return static_cast<int32_t>(offsetof(LatLonWrapper_t8515839182AF59DD53D8C18525788BA3C20C403C, ____latitude_0)); }
	inline double get__latitude_0() const { return ____latitude_0; }
	inline double* get_address_of__latitude_0() { return &____latitude_0; }
	inline void set__latitude_0(double value)
	{
		____latitude_0 = value;
	}

	inline static int32_t get_offset_of__longitude_1() { return static_cast<int32_t>(offsetof(LatLonWrapper_t8515839182AF59DD53D8C18525788BA3C20C403C, ____longitude_1)); }
	inline double get__longitude_1() const { return ____longitude_1; }
	inline double* get_address_of__longitude_1() { return &____longitude_1; }
	inline void set__longitude_1(double value)
	{
		____longitude_1 = value;
	}
};


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// Microsoft.Geospatial.MercatorCoordinate
struct MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 
{
public:
	// System.Double Microsoft.Geospatial.MercatorCoordinate::<X>k__BackingField
	double ___U3CXU3Ek__BackingField_5;
	// System.Double Microsoft.Geospatial.MercatorCoordinate::<Y>k__BackingField
	double ___U3CYU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681, ___U3CXU3Ek__BackingField_5)); }
	inline double get_U3CXU3Ek__BackingField_5() const { return ___U3CXU3Ek__BackingField_5; }
	inline double* get_address_of_U3CXU3Ek__BackingField_5() { return &___U3CXU3Ek__BackingField_5; }
	inline void set_U3CXU3Ek__BackingField_5(double value)
	{
		___U3CXU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681, ___U3CYU3Ek__BackingField_6)); }
	inline double get_U3CYU3Ek__BackingField_6() const { return ___U3CYU3Ek__BackingField_6; }
	inline double* get_address_of_U3CYU3Ek__BackingField_6() { return &___U3CYU3Ek__BackingField_6; }
	inline void set_U3CYU3Ek__BackingField_6(double value)
	{
		___U3CYU3Ek__BackingField_6 = value;
	}
};

struct MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681_StaticFields
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorCoordinate::Origin
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___Origin_4;

public:
	inline static int32_t get_offset_of_Origin_4() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681_StaticFields, ___Origin_4)); }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  get_Origin_4() const { return ___Origin_4; }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 * get_address_of_Origin_4() { return &___Origin_4; }
	inline void set_Origin_4(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  value)
	{
		___Origin_4 = value;
	}
};


// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalReturnKeys_4), (void*)value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalExceptionKeys_5), (void*)value);
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// Microsoft.Geospatial.TileLevelOfDetail
struct TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B 
{
public:
	// System.Int16 Microsoft.Geospatial.TileLevelOfDetail::=dbDF=
	int16_t ___U3DdbDFU3D_7;

public:
	inline static int32_t get_offset_of_U3DdbDFU3D_7() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B, ___U3DdbDFU3D_7)); }
	inline int16_t get_U3DdbDFU3D_7() const { return ___U3DdbDFU3D_7; }
	inline int16_t* get_address_of_U3DdbDFU3D_7() { return &___U3DdbDFU3D_7; }
	inline void set_U3DdbDFU3D_7(int16_t value)
	{
		___U3DdbDFU3D_7 = value;
	}
};

struct TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B_StaticFields
{
public:
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Geospatial.TileLevelOfDetail::Null
	TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  ___Null_3;
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Geospatial.TileLevelOfDetail::Max
	TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  ___Max_4;
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Geospatial.TileLevelOfDetail::Min
	TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  ___Min_5;

public:
	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B_StaticFields, ___Null_3)); }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  get_Null_3() const { return ___Null_3; }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_Max_4() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B_StaticFields, ___Max_4)); }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  get_Max_4() const { return ___Max_4; }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B * get_address_of_Max_4() { return &___Max_4; }
	inline void set_Max_4(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  value)
	{
		___Max_4 = value;
	}

	inline static int32_t get_offset_of_Min_5() { return static_cast<int32_t>(offsetof(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B_StaticFields, ___Min_5)); }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  get_Min_5() const { return ___Min_5; }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B * get_address_of_Min_5() { return &___Min_5; }
	inline void set_Min_5(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  value)
	{
		___Min_5 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1E3C0C2B054B1CD814F0762F6A05651AC9A8A858(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m740A9BA185E218E3527C4DE14F1EB29861C09B34(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tE24FAA22F8E22E9D21293A6ACB7EEE8AD9674E2E * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution
struct ClippingVolumeDistanceTextureResolution_t966DE7F3941A28462F1139112E0F271740CCBA89 
{
public:
	// System.Int32 Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClippingVolumeDistanceTextureResolution_t966DE7F3941A28462F1139112E0F271740CCBA89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_t72D38CD158A2DB2C5809896ACA5F7A6DD78C8620 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t72D38CD158A2DB2C5809896ACA5F7A6DD78C8620, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Geospatial.GeoBoundingBox
struct GeoBoundingBox_t0CE69569583F109F53DFE9212627BDDEE5F4A70E 
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::<BottomLeft>k__BackingField
	LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  ___U3CBottomLeftU3Ek__BackingField_1;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::<TopRight>k__BackingField
	LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  ___U3CTopRightU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CBottomLeftU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t0CE69569583F109F53DFE9212627BDDEE5F4A70E, ___U3CBottomLeftU3Ek__BackingField_1)); }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  get_U3CBottomLeftU3Ek__BackingField_1() const { return ___U3CBottomLeftU3Ek__BackingField_1; }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E * get_address_of_U3CBottomLeftU3Ek__BackingField_1() { return &___U3CBottomLeftU3Ek__BackingField_1; }
	inline void set_U3CBottomLeftU3Ek__BackingField_1(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  value)
	{
		___U3CBottomLeftU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTopRightU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t0CE69569583F109F53DFE9212627BDDEE5F4A70E, ___U3CTopRightU3Ek__BackingField_2)); }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  get_U3CTopRightU3Ek__BackingField_2() const { return ___U3CTopRightU3Ek__BackingField_2; }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E * get_address_of_U3CTopRightU3Ek__BackingField_2() { return &___U3CTopRightU3Ek__BackingField_2; }
	inline void set_U3CTopRightU3Ek__BackingField_2(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  value)
	{
		___U3CTopRightU3Ek__BackingField_2 = value;
	}
};


// Microsoft.Maps.Unity.MapColliderType
struct MapColliderType_t50ECEC85558C122CDD9EEFAA9658F04979AFA65C 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapColliderType_t50ECEC85558C122CDD9EEFAA9658F04979AFA65C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapShape
struct MapShape_tEAF58E632DCC894C30E1E008EBDB101C0A19E34B 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapShape::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapShape_tEAF58E632DCC894C30E1E008EBDB101C0A19E34B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapTerrainType
struct MapTerrainType_t7754D9A882E0BC0EE0BB7C8ECF21B4D7C75A803A 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapTerrainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapTerrainType_t7754D9A882E0BC0EE0BB7C8ECF21B4D7C75A803A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// Microsoft.Geospatial.MercatorBoundingBox
struct MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::<BottomLeft>k__BackingField
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3CBottomLeftU3Ek__BackingField_0;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::<TopRight>k__BackingField
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3CTopRightU3Ek__BackingField_1;
	// System.Double Microsoft.Geospatial.MercatorBoundingBox::<Width>k__BackingField
	double ___U3CWidthU3Ek__BackingField_2;
	// System.Double Microsoft.Geospatial.MercatorBoundingBox::<Height>k__BackingField
	double ___U3CHeightU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBottomLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8, ___U3CBottomLeftU3Ek__BackingField_0)); }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  get_U3CBottomLeftU3Ek__BackingField_0() const { return ___U3CBottomLeftU3Ek__BackingField_0; }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 * get_address_of_U3CBottomLeftU3Ek__BackingField_0() { return &___U3CBottomLeftU3Ek__BackingField_0; }
	inline void set_U3CBottomLeftU3Ek__BackingField_0(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  value)
	{
		___U3CBottomLeftU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTopRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8, ___U3CTopRightU3Ek__BackingField_1)); }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  get_U3CTopRightU3Ek__BackingField_1() const { return ___U3CTopRightU3Ek__BackingField_1; }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 * get_address_of_U3CTopRightU3Ek__BackingField_1() { return &___U3CTopRightU3Ek__BackingField_1; }
	inline void set_U3CTopRightU3Ek__BackingField_1(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  value)
	{
		___U3CTopRightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8, ___U3CWidthU3Ek__BackingField_2)); }
	inline double get_U3CWidthU3Ek__BackingField_2() const { return ___U3CWidthU3Ek__BackingField_2; }
	inline double* get_address_of_U3CWidthU3Ek__BackingField_2() { return &___U3CWidthU3Ek__BackingField_2; }
	inline void set_U3CWidthU3Ek__BackingField_2(double value)
	{
		___U3CWidthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8, ___U3CHeightU3Ek__BackingField_3)); }
	inline double get_U3CHeightU3Ek__BackingField_3() const { return ___U3CHeightU3Ek__BackingField_3; }
	inline double* get_address_of_U3CHeightU3Ek__BackingField_3() { return &___U3CHeightU3Ek__BackingField_3; }
	inline void set_U3CHeightU3Ek__BackingField_3(double value)
	{
		___U3CHeightU3Ek__BackingField_3 = value;
	}
};


// Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::<Center>k__BackingField
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3CCenterU3Ek__BackingField_0;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::<Radius>k__BackingField
	double ___U3CRadiusU3Ek__BackingField_1;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::=daC8=
	double ___U3DdaC8U3D_2;
	// System.Boolean Microsoft.Geospatial.MercatorBoundingCircle::=daC9=
	bool ___U3DdaC9U3D_3;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::=dacA=
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3DdacAU3D_4;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251, ___U3CCenterU3Ek__BackingField_0)); }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251, ___U3CRadiusU3Ek__BackingField_1)); }
	inline double get_U3CRadiusU3Ek__BackingField_1() const { return ___U3CRadiusU3Ek__BackingField_1; }
	inline double* get_address_of_U3CRadiusU3Ek__BackingField_1() { return &___U3CRadiusU3Ek__BackingField_1; }
	inline void set_U3CRadiusU3Ek__BackingField_1(double value)
	{
		___U3CRadiusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3DdaC8U3D_2() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251, ___U3DdaC8U3D_2)); }
	inline double get_U3DdaC8U3D_2() const { return ___U3DdaC8U3D_2; }
	inline double* get_address_of_U3DdaC8U3D_2() { return &___U3DdaC8U3D_2; }
	inline void set_U3DdaC8U3D_2(double value)
	{
		___U3DdaC8U3D_2 = value;
	}

	inline static int32_t get_offset_of_U3DdaC9U3D_3() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251, ___U3DdaC9U3D_3)); }
	inline bool get_U3DdaC9U3D_3() const { return ___U3DdaC9U3D_3; }
	inline bool* get_address_of_U3DdaC9U3D_3() { return &___U3DdaC9U3D_3; }
	inline void set_U3DdaC9U3D_3(bool value)
	{
		___U3DdaC9U3D_3 = value;
	}

	inline static int32_t get_offset_of_U3DdacAU3D_4() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251, ___U3DdacAU3D_4)); }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  get_U3DdacAU3D_4() const { return ___U3DdacAU3D_4; }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 * get_address_of_U3DdacAU3D_4() { return &___U3DdacAU3D_4; }
	inline void set_U3DdacAU3D_4(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  value)
	{
		___U3DdacAU3D_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251_marshaled_pinvoke
{
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3CCenterU3Ek__BackingField_0;
	double ___U3CRadiusU3Ek__BackingField_1;
	double ___U3DdaC8U3D_2;
	int32_t ___U3DdaC9U3D_3;
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3DdacAU3D_4;
};
// Native definition for COM marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251_marshaled_com
{
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3CCenterU3Ek__BackingField_0;
	double ___U3CRadiusU3Ek__BackingField_1;
	double ___U3DdaC8U3D_2;
	int32_t ___U3DdaC9U3D_3;
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3DdacAU3D_4;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m99BCDB4E86496E052D36F5CB4941B1AC15F472B2(int32_t* comReturnValue) = 0;
};

// =ae=
struct U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B 
{
public:
	// UnityEngine.Vector3 =ae=::=daa=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3DdaaU3D_8;
	// System.Single =ae=::=daB=
	float ___U3DdaBU3D_9;
	// UnityEngine.Vector3 =ae=::=dab=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3DdabU3D_10;
	// UnityEngine.Plane =ae=::=daC=
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U3DdaCU3D_11;
	// UnityEngine.Plane =ae=::=dac=
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U3DdacU3D_12;
	// UnityEngine.Vector2 =ae=::=dda7=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3Ddda7U3D_13;
	// UnityEngine.Vector2 =ae=::=dda8=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3Ddda8U3D_14;

public:
	inline static int32_t get_offset_of_U3DdaaU3D_8() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B, ___U3DdaaU3D_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3DdaaU3D_8() const { return ___U3DdaaU3D_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3DdaaU3D_8() { return &___U3DdaaU3D_8; }
	inline void set_U3DdaaU3D_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3DdaaU3D_8 = value;
	}

	inline static int32_t get_offset_of_U3DdaBU3D_9() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B, ___U3DdaBU3D_9)); }
	inline float get_U3DdaBU3D_9() const { return ___U3DdaBU3D_9; }
	inline float* get_address_of_U3DdaBU3D_9() { return &___U3DdaBU3D_9; }
	inline void set_U3DdaBU3D_9(float value)
	{
		___U3DdaBU3D_9 = value;
	}

	inline static int32_t get_offset_of_U3DdabU3D_10() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B, ___U3DdabU3D_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3DdabU3D_10() const { return ___U3DdabU3D_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3DdabU3D_10() { return &___U3DdabU3D_10; }
	inline void set_U3DdabU3D_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3DdabU3D_10 = value;
	}

	inline static int32_t get_offset_of_U3DdaCU3D_11() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B, ___U3DdaCU3D_11)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U3DdaCU3D_11() const { return ___U3DdaCU3D_11; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U3DdaCU3D_11() { return &___U3DdaCU3D_11; }
	inline void set_U3DdaCU3D_11(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U3DdaCU3D_11 = value;
	}

	inline static int32_t get_offset_of_U3DdacU3D_12() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B, ___U3DdacU3D_12)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U3DdacU3D_12() const { return ___U3DdacU3D_12; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U3DdacU3D_12() { return &___U3DdacU3D_12; }
	inline void set_U3DdacU3D_12(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U3DdacU3D_12 = value;
	}

	inline static int32_t get_offset_of_U3Ddda7U3D_13() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B, ___U3Ddda7U3D_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3Ddda7U3D_13() const { return ___U3Ddda7U3D_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3Ddda7U3D_13() { return &___U3Ddda7U3D_13; }
	inline void set_U3Ddda7U3D_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3Ddda7U3D_13 = value;
	}

	inline static int32_t get_offset_of_U3Ddda8U3D_14() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B, ___U3Ddda8U3D_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3Ddda8U3D_14() const { return ___U3Ddda8U3D_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3Ddda8U3D_14() { return &___U3Ddda8U3D_14; }
	inline void set_U3Ddda8U3D_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3Ddda8U3D_14 = value;
	}
};

struct U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields
{
public:
	// System.Int32 =ae=::=d4=
	int32_t ___U3Dd4U3D_1;
	// System.Int32 =ae=::=d5=
	int32_t ___U3Dd5U3D_2;
	// System.Int32 =ae=::=d6=
	int32_t ___U3Dd6U3D_3;
	// System.Int32 =ae=::=d7=
	int32_t ___U3Dd7U3D_4;
	// System.Int32 =ae=::=d8=
	int32_t ___U3Dd8U3D_5;
	// System.Int32 =ae=::=d9=
	int32_t ___U3Dd9U3D_6;
	// UnityEngine.Vector4[] =ae=::=daA=
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U3DdaAU3D_7;

public:
	inline static int32_t get_offset_of_U3Dd4U3D_1() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields, ___U3Dd4U3D_1)); }
	inline int32_t get_U3Dd4U3D_1() const { return ___U3Dd4U3D_1; }
	inline int32_t* get_address_of_U3Dd4U3D_1() { return &___U3Dd4U3D_1; }
	inline void set_U3Dd4U3D_1(int32_t value)
	{
		___U3Dd4U3D_1 = value;
	}

	inline static int32_t get_offset_of_U3Dd5U3D_2() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields, ___U3Dd5U3D_2)); }
	inline int32_t get_U3Dd5U3D_2() const { return ___U3Dd5U3D_2; }
	inline int32_t* get_address_of_U3Dd5U3D_2() { return &___U3Dd5U3D_2; }
	inline void set_U3Dd5U3D_2(int32_t value)
	{
		___U3Dd5U3D_2 = value;
	}

	inline static int32_t get_offset_of_U3Dd6U3D_3() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields, ___U3Dd6U3D_3)); }
	inline int32_t get_U3Dd6U3D_3() const { return ___U3Dd6U3D_3; }
	inline int32_t* get_address_of_U3Dd6U3D_3() { return &___U3Dd6U3D_3; }
	inline void set_U3Dd6U3D_3(int32_t value)
	{
		___U3Dd6U3D_3 = value;
	}

	inline static int32_t get_offset_of_U3Dd7U3D_4() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields, ___U3Dd7U3D_4)); }
	inline int32_t get_U3Dd7U3D_4() const { return ___U3Dd7U3D_4; }
	inline int32_t* get_address_of_U3Dd7U3D_4() { return &___U3Dd7U3D_4; }
	inline void set_U3Dd7U3D_4(int32_t value)
	{
		___U3Dd7U3D_4 = value;
	}

	inline static int32_t get_offset_of_U3Dd8U3D_5() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields, ___U3Dd8U3D_5)); }
	inline int32_t get_U3Dd8U3D_5() const { return ___U3Dd8U3D_5; }
	inline int32_t* get_address_of_U3Dd8U3D_5() { return &___U3Dd8U3D_5; }
	inline void set_U3Dd8U3D_5(int32_t value)
	{
		___U3Dd8U3D_5 = value;
	}

	inline static int32_t get_offset_of_U3Dd9U3D_6() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields, ___U3Dd9U3D_6)); }
	inline int32_t get_U3Dd9U3D_6() const { return ___U3Dd9U3D_6; }
	inline int32_t* get_address_of_U3Dd9U3D_6() { return &___U3Dd9U3D_6; }
	inline void set_U3Dd9U3D_6(int32_t value)
	{
		___U3Dd9U3D_6 = value;
	}

	inline static int32_t get_offset_of_U3DdaAU3D_7() { return static_cast<int32_t>(offsetof(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B_StaticFields, ___U3DdaAU3D_7)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U3DdaAU3D_7() const { return ___U3DdaAU3D_7; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U3DdaAU3D_7() { return &___U3DdaAU3D_7; }
	inline void set_U3DdaAU3D_7(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U3DdaAU3D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdaAU3D_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70  : public BaseService_t733670D8846AD5EBDED6EC897F11190F756CDD6C
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_9;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_10;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tE727936D4AE10BF3A16839F8BF3E2E9354B63A95 * ___postponedActions_11;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t09956FF02C66B5173B30068F6456F4CE01282864 * ___postponedObjectActions_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t1AE23F4D3D321D7695075A3C81EC2AB26204FA50 * ___U3CEventHandlersByTypeU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70, ___eventExecutionDepth_9)); }
	inline int32_t get_eventExecutionDepth_9() const { return ___eventExecutionDepth_9; }
	inline int32_t* get_address_of_eventExecutionDepth_9() { return &___eventExecutionDepth_9; }
	inline void set_eventExecutionDepth_9(int32_t value)
	{
		___eventExecutionDepth_9 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70, ___eventSystemHandlerType_10)); }
	inline Type_t * get_eventSystemHandlerType_10() const { return ___eventSystemHandlerType_10; }
	inline Type_t ** get_address_of_eventSystemHandlerType_10() { return &___eventSystemHandlerType_10; }
	inline void set_eventSystemHandlerType_10(Type_t * value)
	{
		___eventSystemHandlerType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_10), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70, ___postponedActions_11)); }
	inline List_1_tE727936D4AE10BF3A16839F8BF3E2E9354B63A95 * get_postponedActions_11() const { return ___postponedActions_11; }
	inline List_1_tE727936D4AE10BF3A16839F8BF3E2E9354B63A95 ** get_address_of_postponedActions_11() { return &___postponedActions_11; }
	inline void set_postponedActions_11(List_1_tE727936D4AE10BF3A16839F8BF3E2E9354B63A95 * value)
	{
		___postponedActions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_11), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70, ___postponedObjectActions_12)); }
	inline List_1_t09956FF02C66B5173B30068F6456F4CE01282864 * get_postponedObjectActions_12() const { return ___postponedObjectActions_12; }
	inline List_1_t09956FF02C66B5173B30068F6456F4CE01282864 ** get_address_of_postponedObjectActions_12() { return &___postponedObjectActions_12; }
	inline void set_postponedObjectActions_12(List_1_t09956FF02C66B5173B30068F6456F4CE01282864 * value)
	{
		___postponedObjectActions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70, ___U3CEventHandlersByTypeU3Ek__BackingField_13)); }
	inline Dictionary_2_t1AE23F4D3D321D7695075A3C81EC2AB26204FA50 * get_U3CEventHandlersByTypeU3Ek__BackingField_13() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline Dictionary_2_t1AE23F4D3D321D7695075A3C81EC2AB26204FA50 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return &___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_13(Dictionary_2_t1AE23F4D3D321D7695075A3C81EC2AB26204FA50 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70, ___U3CEventListenersU3Ek__BackingField_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_14() const { return ___U3CEventListenersU3Ek__BackingField_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_14() { return &___U3CEventListenersU3Ek__BackingField_14; }
	inline void set_U3CEventListenersU3Ek__BackingField_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_14), (void*)value);
	}
};

struct BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_15;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70_StaticFields, ___enableDanglingHandlerDiagnostics_8)); }
	inline bool get_enableDanglingHandlerDiagnostics_8() const { return ___enableDanglingHandlerDiagnostics_8; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_8() { return &___enableDanglingHandlerDiagnostics_8; }
	inline void set_enableDanglingHandlerDiagnostics_8(bool value)
	{
		___enableDanglingHandlerDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_15() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_15 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t7AF1FC99FE6D9CD6195A0673C2293FC74AFAC0FA  : public BaseEventSystem_t49917739E9C7137D86026A06967F008E8F593B70
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t7AF1FC99FE6D9CD6195A0673C2293FC74AFAC0FA, ___U3CRegistrarU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_16() const { return ___U3CRegistrarU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_16() { return &___U3CRegistrarU3Ek__BackingField_16; }
	inline void set_U3CRegistrarU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_16), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB  : public BaseCoreSystem_t7AF1FC99FE6D9CD6195A0673C2293FC74AFAC0FA
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_tCF13D7861A6FB8C60CDFBFC1228172335BB3754D * ___dataProviders_17;

public:
	inline static int32_t get_offset_of_dataProviders_17() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB, ___dataProviders_17)); }
	inline List_1_tCF13D7861A6FB8C60CDFBFC1228172335BB3754D * get_dataProviders_17() const { return ___dataProviders_17; }
	inline List_1_tCF13D7861A6FB8C60CDFBFC1228172335BB3754D ** get_address_of_dataProviders_17() { return &___dataProviders_17; }
	inline void set_dataProviders_17(List_1_tCF13D7861A6FB8C60CDFBFC1228172335BB3754D * value)
	{
		___dataProviders_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_17), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_19;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_18() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB_StaticFields, ___UpdatePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_18() const { return ___UpdatePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_18() { return &___UpdatePerfMarker_18; }
	inline void set_UpdatePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB_StaticFields, ___LateUpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_19() const { return ___LateUpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_19() { return &___LateUpdatePerfMarker_19; }
	inline void set_LateUpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_19 = value;
	}
};


// MapRaycastProvider
struct MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0  : public BaseCoreSystem_t7AF1FC99FE6D9CD6195A0673C2293FC74AFAC0FA
{
public:
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer> MapRaycastProvider::_mapRenderers
	List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * ____mapRenderers_17;

public:
	inline static int32_t get_offset_of__mapRenderers_17() { return static_cast<int32_t>(offsetof(MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0, ____mapRenderers_17)); }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * get__mapRenderers_17() const { return ____mapRenderers_17; }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 ** get_address_of__mapRenderers_17() { return &____mapRenderers_17; }
	inline void set__mapRenderers_17(List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * value)
	{
		____mapRenderers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapRenderers_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0  : public BaseCoreSystem_t7AF1FC99FE6D9CD6195A0673C2293FC74AFAC0FA
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_18;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_tA16848594AEDA529C825F5C7224751D40A2FA089 * ___visualProfiler_19;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t08874FAB7781FECD60F54E1D6C552112FBBEFAD8 * ___diagnosticsSystemProfile_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_24;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_25;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_tF780662C7B1706F07B08E465B3C7B369A49B8B01 * ___eventData_26;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_29;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_30;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_31;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_33;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___diagnosticVisualizationParent_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_18() const { return ___diagnosticVisualizationParent_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_18() { return &___diagnosticVisualizationParent_18; }
	inline void set_diagnosticVisualizationParent_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_18), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___visualProfiler_19)); }
	inline MixedRealityToolkitVisualProfiler_tA16848594AEDA529C825F5C7224751D40A2FA089 * get_visualProfiler_19() const { return ___visualProfiler_19; }
	inline MixedRealityToolkitVisualProfiler_tA16848594AEDA529C825F5C7224751D40A2FA089 ** get_address_of_visualProfiler_19() { return &___visualProfiler_19; }
	inline void set_visualProfiler_19(MixedRealityToolkitVisualProfiler_tA16848594AEDA529C825F5C7224751D40A2FA089 * value)
	{
		___visualProfiler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_19), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___diagnosticsSystemProfile_20)); }
	inline MixedRealityDiagnosticsProfile_t08874FAB7781FECD60F54E1D6C552112FBBEFAD8 * get_diagnosticsSystemProfile_20() const { return ___diagnosticsSystemProfile_20; }
	inline MixedRealityDiagnosticsProfile_t08874FAB7781FECD60F54E1D6C552112FBBEFAD8 ** get_address_of_diagnosticsSystemProfile_20() { return &___diagnosticsSystemProfile_20; }
	inline void set_diagnosticsSystemProfile_20(MixedRealityDiagnosticsProfile_t08874FAB7781FECD60F54E1D6C552112FBBEFAD8 * value)
	{
		___diagnosticsSystemProfile_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_20), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___showDiagnostics_21)); }
	inline bool get_showDiagnostics_21() const { return ___showDiagnostics_21; }
	inline bool* get_address_of_showDiagnostics_21() { return &___showDiagnostics_21; }
	inline void set_showDiagnostics_21(bool value)
	{
		___showDiagnostics_21 = value;
	}

	inline static int32_t get_offset_of_showProfiler_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___showProfiler_22)); }
	inline bool get_showProfiler_22() const { return ___showProfiler_22; }
	inline bool* get_address_of_showProfiler_22() { return &___showProfiler_22; }
	inline void set_showProfiler_22(bool value)
	{
		___showProfiler_22 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___showFrameInfo_23)); }
	inline bool get_showFrameInfo_23() const { return ___showFrameInfo_23; }
	inline bool* get_address_of_showFrameInfo_23() { return &___showFrameInfo_23; }
	inline void set_showFrameInfo_23(bool value)
	{
		___showFrameInfo_23 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___showMemoryStats_24)); }
	inline bool get_showMemoryStats_24() const { return ___showMemoryStats_24; }
	inline bool* get_address_of_showMemoryStats_24() { return &___showMemoryStats_24; }
	inline void set_showMemoryStats_24(bool value)
	{
		___showMemoryStats_24 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___frameSampleRate_25)); }
	inline float get_frameSampleRate_25() const { return ___frameSampleRate_25; }
	inline float* get_address_of_frameSampleRate_25() { return &___frameSampleRate_25; }
	inline void set_frameSampleRate_25(float value)
	{
		___frameSampleRate_25 = value;
	}

	inline static int32_t get_offset_of_eventData_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___eventData_26)); }
	inline DiagnosticsEventData_tF780662C7B1706F07B08E465B3C7B369A49B8B01 * get_eventData_26() const { return ___eventData_26; }
	inline DiagnosticsEventData_tF780662C7B1706F07B08E465B3C7B369A49B8B01 ** get_address_of_eventData_26() { return &___eventData_26; }
	inline void set_eventData_26(DiagnosticsEventData_tF780662C7B1706F07B08E465B3C7B369A49B8B01 * value)
	{
		___eventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___windowAnchor_29)); }
	inline int32_t get_windowAnchor_29() const { return ___windowAnchor_29; }
	inline int32_t* get_address_of_windowAnchor_29() { return &___windowAnchor_29; }
	inline void set_windowAnchor_29(int32_t value)
	{
		___windowAnchor_29 = value;
	}

	inline static int32_t get_offset_of_windowOffset_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___windowOffset_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_30() const { return ___windowOffset_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_30() { return &___windowOffset_30; }
	inline void set_windowOffset_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_30 = value;
	}

	inline static int32_t get_offset_of_windowScale_31() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___windowScale_31)); }
	inline float get_windowScale_31() const { return ___windowScale_31; }
	inline float* get_address_of_windowScale_31() { return &___windowScale_31; }
	inline void set_windowScale_31(float value)
	{
		___windowScale_31 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_32() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___windowFollowSpeed_32)); }
	inline float get_windowFollowSpeed_32() const { return ___windowFollowSpeed_32; }
	inline float* get_address_of_windowFollowSpeed_32() { return &___windowFollowSpeed_32; }
	inline void set_windowFollowSpeed_32(float value)
	{
		___windowFollowSpeed_32 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_33() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0, ___showProfilerDuringMRC_33)); }
	inline bool get_showProfilerDuringMRC_33() const { return ___showProfilerDuringMRC_33; }
	inline bool* get_address_of_showProfilerDuringMRC_33() { return &___showProfilerDuringMRC_33; }
	inline void set_showProfilerDuringMRC_33(bool value)
	{
		___showProfilerDuringMRC_33 = value;
	}
};

struct MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_tD728E53F6F38DFD621432ACE9DD5EC771409D7E3 * ___OnDiagnosticsChanged_28;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_StaticFields, ___OnDiagnosticsChangedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_27() const { return ___OnDiagnosticsChangedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_27() { return &___OnDiagnosticsChangedPerfMarker_27; }
	inline void set_OnDiagnosticsChangedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_StaticFields, ___OnDiagnosticsChanged_28)); }
	inline EventFunction_1_tD728E53F6F38DFD621432ACE9DD5EC771409D7E3 * get_OnDiagnosticsChanged_28() const { return ___OnDiagnosticsChanged_28; }
	inline EventFunction_1_tD728E53F6F38DFD621432ACE9DD5EC771409D7E3 ** get_address_of_OnDiagnosticsChanged_28() { return &___OnDiagnosticsChanged_28; }
	inline void set_OnDiagnosticsChanged_28(EventFunction_1_tD728E53F6F38DFD621432ACE9DD5EC771409D7E3 * value)
	{
		___OnDiagnosticsChanged_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_28), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0  : public BaseCoreSystem_t7AF1FC99FE6D9CD6195A0673C2293FC74AFAC0FA
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpInProgress
	bool ___managerSceneOpInProgress_18;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpProgress
	float ___managerSceneOpProgress_19;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::contentTracker
	SceneContentTracker_t429B30003A9812393D9C2AACF496368C8E515D9C * ___contentTracker_20;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::lightingExecutor
	SceneLightingExecutor_t5BAED6D57903EE115F169B963F4F69EE6A38663C * ___lightingExecutor_21;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_22;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillLoadContentU3Ek__BackingField_23;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentLoaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentLoadedU3Ek__BackingField_24;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillUnloadContentU3Ek__BackingField_25;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentUnloaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentUnloadedU3Ek__BackingField_26;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadLightingU3Ek__BackingField_27;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingLoadedU3Ek__BackingField_28;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadLightingU3Ek__BackingField_29;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingUnloadedU3Ek__BackingField_30;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadSceneU3Ek__BackingField_31;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneLoadedU3Ek__BackingField_32;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadSceneU3Ek__BackingField_33;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneUnloadedU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationInProgress>k__BackingField
	bool ___U3CSceneOperationInProgressU3Ek__BackingField_35;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationProgress>k__BackingField
	float ___U3CSceneOperationProgressU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationInProgress>k__BackingField
	bool ___U3CLightingOperationInProgressU3Ek__BackingField_37;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationProgress>k__BackingField
	float ___U3CLightingOperationProgressU3Ek__BackingField_38;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<ActiveLightingScene>k__BackingField
	String_t* ___U3CActiveLightingSceneU3Ek__BackingField_39;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<WaitingToProceed>k__BackingField
	bool ___U3CWaitingToProceedU3Ek__BackingField_40;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_41;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_managerSceneOpInProgress_18() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___managerSceneOpInProgress_18)); }
	inline bool get_managerSceneOpInProgress_18() const { return ___managerSceneOpInProgress_18; }
	inline bool* get_address_of_managerSceneOpInProgress_18() { return &___managerSceneOpInProgress_18; }
	inline void set_managerSceneOpInProgress_18(bool value)
	{
		___managerSceneOpInProgress_18 = value;
	}

	inline static int32_t get_offset_of_managerSceneOpProgress_19() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___managerSceneOpProgress_19)); }
	inline float get_managerSceneOpProgress_19() const { return ___managerSceneOpProgress_19; }
	inline float* get_address_of_managerSceneOpProgress_19() { return &___managerSceneOpProgress_19; }
	inline void set_managerSceneOpProgress_19(float value)
	{
		___managerSceneOpProgress_19 = value;
	}

	inline static int32_t get_offset_of_contentTracker_20() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___contentTracker_20)); }
	inline SceneContentTracker_t429B30003A9812393D9C2AACF496368C8E515D9C * get_contentTracker_20() const { return ___contentTracker_20; }
	inline SceneContentTracker_t429B30003A9812393D9C2AACF496368C8E515D9C ** get_address_of_contentTracker_20() { return &___contentTracker_20; }
	inline void set_contentTracker_20(SceneContentTracker_t429B30003A9812393D9C2AACF496368C8E515D9C * value)
	{
		___contentTracker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTracker_20), (void*)value);
	}

	inline static int32_t get_offset_of_lightingExecutor_21() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___lightingExecutor_21)); }
	inline SceneLightingExecutor_t5BAED6D57903EE115F169B963F4F69EE6A38663C * get_lightingExecutor_21() const { return ___lightingExecutor_21; }
	inline SceneLightingExecutor_t5BAED6D57903EE115F169B963F4F69EE6A38663C ** get_address_of_lightingExecutor_21() { return &___lightingExecutor_21; }
	inline void set_lightingExecutor_21(SceneLightingExecutor_t5BAED6D57903EE115F169B963F4F69EE6A38663C * value)
	{
		___lightingExecutor_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightingExecutor_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CNameU3Ek__BackingField_22() const { return ___U3CNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_22() { return &___U3CNameU3Ek__BackingField_22; }
	inline void set_U3CNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadContentU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnWillLoadContentU3Ek__BackingField_23)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillLoadContentU3Ek__BackingField_23() const { return ___U3COnWillLoadContentU3Ek__BackingField_23; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillLoadContentU3Ek__BackingField_23() { return &___U3COnWillLoadContentU3Ek__BackingField_23; }
	inline void set_U3COnWillLoadContentU3Ek__BackingField_23(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillLoadContentU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadContentU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentLoadedU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnContentLoadedU3Ek__BackingField_24)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentLoadedU3Ek__BackingField_24() const { return ___U3COnContentLoadedU3Ek__BackingField_24; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentLoadedU3Ek__BackingField_24() { return &___U3COnContentLoadedU3Ek__BackingField_24; }
	inline void set_U3COnContentLoadedU3Ek__BackingField_24(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentLoadedU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentLoadedU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadContentU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnWillUnloadContentU3Ek__BackingField_25)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillUnloadContentU3Ek__BackingField_25() const { return ___U3COnWillUnloadContentU3Ek__BackingField_25; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillUnloadContentU3Ek__BackingField_25() { return &___U3COnWillUnloadContentU3Ek__BackingField_25; }
	inline void set_U3COnWillUnloadContentU3Ek__BackingField_25(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillUnloadContentU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadContentU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentUnloadedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnContentUnloadedU3Ek__BackingField_26)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentUnloadedU3Ek__BackingField_26() const { return ___U3COnContentUnloadedU3Ek__BackingField_26; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentUnloadedU3Ek__BackingField_26() { return &___U3COnContentUnloadedU3Ek__BackingField_26; }
	inline void set_U3COnContentUnloadedU3Ek__BackingField_26(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentUnloadedU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentUnloadedU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadLightingU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnWillLoadLightingU3Ek__BackingField_27)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadLightingU3Ek__BackingField_27() const { return ___U3COnWillLoadLightingU3Ek__BackingField_27; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadLightingU3Ek__BackingField_27() { return &___U3COnWillLoadLightingU3Ek__BackingField_27; }
	inline void set_U3COnWillLoadLightingU3Ek__BackingField_27(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadLightingU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadLightingU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingLoadedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnLightingLoadedU3Ek__BackingField_28)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingLoadedU3Ek__BackingField_28() const { return ___U3COnLightingLoadedU3Ek__BackingField_28; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingLoadedU3Ek__BackingField_28() { return &___U3COnLightingLoadedU3Ek__BackingField_28; }
	inline void set_U3COnLightingLoadedU3Ek__BackingField_28(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingLoadedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingLoadedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadLightingU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnWillUnloadLightingU3Ek__BackingField_29)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadLightingU3Ek__BackingField_29() const { return ___U3COnWillUnloadLightingU3Ek__BackingField_29; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadLightingU3Ek__BackingField_29() { return &___U3COnWillUnloadLightingU3Ek__BackingField_29; }
	inline void set_U3COnWillUnloadLightingU3Ek__BackingField_29(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadLightingU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadLightingU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingUnloadedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnLightingUnloadedU3Ek__BackingField_30)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingUnloadedU3Ek__BackingField_30() const { return ___U3COnLightingUnloadedU3Ek__BackingField_30; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingUnloadedU3Ek__BackingField_30() { return &___U3COnLightingUnloadedU3Ek__BackingField_30; }
	inline void set_U3COnLightingUnloadedU3Ek__BackingField_30(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingUnloadedU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingUnloadedU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadSceneU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnWillLoadSceneU3Ek__BackingField_31)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadSceneU3Ek__BackingField_31() const { return ___U3COnWillLoadSceneU3Ek__BackingField_31; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadSceneU3Ek__BackingField_31() { return &___U3COnWillLoadSceneU3Ek__BackingField_31; }
	inline void set_U3COnWillLoadSceneU3Ek__BackingField_31(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadSceneU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadSceneU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneLoadedU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnSceneLoadedU3Ek__BackingField_32)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneLoadedU3Ek__BackingField_32() const { return ___U3COnSceneLoadedU3Ek__BackingField_32; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneLoadedU3Ek__BackingField_32() { return &___U3COnSceneLoadedU3Ek__BackingField_32; }
	inline void set_U3COnSceneLoadedU3Ek__BackingField_32(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneLoadedU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneLoadedU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadSceneU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnWillUnloadSceneU3Ek__BackingField_33)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadSceneU3Ek__BackingField_33() const { return ___U3COnWillUnloadSceneU3Ek__BackingField_33; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadSceneU3Ek__BackingField_33() { return &___U3COnWillUnloadSceneU3Ek__BackingField_33; }
	inline void set_U3COnWillUnloadSceneU3Ek__BackingField_33(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadSceneU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadSceneU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneUnloadedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3COnSceneUnloadedU3Ek__BackingField_34)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneUnloadedU3Ek__BackingField_34() const { return ___U3COnSceneUnloadedU3Ek__BackingField_34; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneUnloadedU3Ek__BackingField_34() { return &___U3COnSceneUnloadedU3Ek__BackingField_34; }
	inline void set_U3COnSceneUnloadedU3Ek__BackingField_34(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneUnloadedU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneUnloadedU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneOperationInProgressU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CSceneOperationInProgressU3Ek__BackingField_35)); }
	inline bool get_U3CSceneOperationInProgressU3Ek__BackingField_35() const { return ___U3CSceneOperationInProgressU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CSceneOperationInProgressU3Ek__BackingField_35() { return &___U3CSceneOperationInProgressU3Ek__BackingField_35; }
	inline void set_U3CSceneOperationInProgressU3Ek__BackingField_35(bool value)
	{
		___U3CSceneOperationInProgressU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CSceneOperationProgressU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CSceneOperationProgressU3Ek__BackingField_36)); }
	inline float get_U3CSceneOperationProgressU3Ek__BackingField_36() const { return ___U3CSceneOperationProgressU3Ek__BackingField_36; }
	inline float* get_address_of_U3CSceneOperationProgressU3Ek__BackingField_36() { return &___U3CSceneOperationProgressU3Ek__BackingField_36; }
	inline void set_U3CSceneOperationProgressU3Ek__BackingField_36(float value)
	{
		___U3CSceneOperationProgressU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationInProgressU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CLightingOperationInProgressU3Ek__BackingField_37)); }
	inline bool get_U3CLightingOperationInProgressU3Ek__BackingField_37() const { return ___U3CLightingOperationInProgressU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CLightingOperationInProgressU3Ek__BackingField_37() { return &___U3CLightingOperationInProgressU3Ek__BackingField_37; }
	inline void set_U3CLightingOperationInProgressU3Ek__BackingField_37(bool value)
	{
		___U3CLightingOperationInProgressU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationProgressU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CLightingOperationProgressU3Ek__BackingField_38)); }
	inline float get_U3CLightingOperationProgressU3Ek__BackingField_38() const { return ___U3CLightingOperationProgressU3Ek__BackingField_38; }
	inline float* get_address_of_U3CLightingOperationProgressU3Ek__BackingField_38() { return &___U3CLightingOperationProgressU3Ek__BackingField_38; }
	inline void set_U3CLightingOperationProgressU3Ek__BackingField_38(float value)
	{
		___U3CLightingOperationProgressU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CActiveLightingSceneU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CActiveLightingSceneU3Ek__BackingField_39)); }
	inline String_t* get_U3CActiveLightingSceneU3Ek__BackingField_39() const { return ___U3CActiveLightingSceneU3Ek__BackingField_39; }
	inline String_t** get_address_of_U3CActiveLightingSceneU3Ek__BackingField_39() { return &___U3CActiveLightingSceneU3Ek__BackingField_39; }
	inline void set_U3CActiveLightingSceneU3Ek__BackingField_39(String_t* value)
	{
		___U3CActiveLightingSceneU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveLightingSceneU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWaitingToProceedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CWaitingToProceedU3Ek__BackingField_40)); }
	inline bool get_U3CWaitingToProceedU3Ek__BackingField_40() const { return ___U3CWaitingToProceedU3Ek__BackingField_40; }
	inline bool* get_address_of_U3CWaitingToProceedU3Ek__BackingField_40() { return &___U3CWaitingToProceedU3Ek__BackingField_40; }
	inline void set_U3CWaitingToProceedU3Ek__BackingField_40(bool value)
	{
		___U3CWaitingToProceedU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CSourceIdU3Ek__BackingField_41)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_41() const { return ___U3CSourceIdU3Ek__BackingField_41; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_41() { return &___U3CSourceIdU3Ek__BackingField_41; }
	inline void set_U3CSourceIdU3Ek__BackingField_41(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0, ___U3CSourceNameU3Ek__BackingField_42)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_42() const { return ___U3CSourceNameU3Ek__BackingField_42; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_42() { return &___U3CSourceNameU3Ek__BackingField_42; }
	inline void set_U3CSourceNameU3Ek__BackingField_42(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_42), (void*)value);
	}
};

struct MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_43;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadNextContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadNextContentPerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadPrevContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadPrevContentPerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentByTagPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentByTagPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoadedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsContentLoadedPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetLightingScenePerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetManagerScenePerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadScenesInternalPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadScenesInternalPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeLoadedActionsPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillLoadActionsPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillUnloadActionsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeUnloadedActionsPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetScenePerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetLoadedContentScenesPerfMarker_60;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_43() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___UpdatePerfMarker_43)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_43() const { return ___UpdatePerfMarker_43; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_43() { return &___UpdatePerfMarker_43; }
	inline void set_UpdatePerfMarker_43(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_43 = value;
	}

	inline static int32_t get_offset_of_LoadNextContentPerfMarker_44() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___LoadNextContentPerfMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadNextContentPerfMarker_44() const { return ___LoadNextContentPerfMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadNextContentPerfMarker_44() { return &___LoadNextContentPerfMarker_44; }
	inline void set_LoadNextContentPerfMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadNextContentPerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_LoadPrevContentPerfMarker_45() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___LoadPrevContentPerfMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadPrevContentPerfMarker_45() const { return ___LoadPrevContentPerfMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadPrevContentPerfMarker_45() { return &___LoadPrevContentPerfMarker_45; }
	inline void set_LoadPrevContentPerfMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadPrevContentPerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_LoadContentByTagPerfMarker_46() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___LoadContentByTagPerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentByTagPerfMarker_46() const { return ___LoadContentByTagPerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentByTagPerfMarker_46() { return &___LoadContentByTagPerfMarker_46; }
	inline void set_LoadContentByTagPerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentByTagPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_UnloadContentByTagPerfMarker_47() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___UnloadContentByTagPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentByTagPerfMarker_47() const { return ___UnloadContentByTagPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentByTagPerfMarker_47() { return &___UnloadContentByTagPerfMarker_47; }
	inline void set_UnloadContentByTagPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentByTagPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_LoadContentPerfMarker_48() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___LoadContentPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_48() const { return ___LoadContentPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_48() { return &___LoadContentPerfMarker_48; }
	inline void set_LoadContentPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_UnloadContentPerfMarker_49() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___UnloadContentPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentPerfMarker_49() const { return ___UnloadContentPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentPerfMarker_49() { return &___UnloadContentPerfMarker_49; }
	inline void set_UnloadContentPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_IsContentLoadedPerfMarker_50() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___IsContentLoadedPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsContentLoadedPerfMarker_50() const { return ___IsContentLoadedPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsContentLoadedPerfMarker_50() { return &___IsContentLoadedPerfMarker_50; }
	inline void set_IsContentLoadedPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsContentLoadedPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_SetLightingScenePerfMarker_51() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___SetLightingScenePerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetLightingScenePerfMarker_51() const { return ___SetLightingScenePerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetLightingScenePerfMarker_51() { return &___SetLightingScenePerfMarker_51; }
	inline void set_SetLightingScenePerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetLightingScenePerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_SetManagerScenePerfMarker_52() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___SetManagerScenePerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetManagerScenePerfMarker_52() const { return ___SetManagerScenePerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetManagerScenePerfMarker_52() { return &___SetManagerScenePerfMarker_52; }
	inline void set_SetManagerScenePerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetManagerScenePerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_LoadScenesInternalPerfMarker_53() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___LoadScenesInternalPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadScenesInternalPerfMarker_53() const { return ___LoadScenesInternalPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadScenesInternalPerfMarker_53() { return &___LoadScenesInternalPerfMarker_53; }
	inline void set_LoadScenesInternalPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadScenesInternalPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_UnloadScenesInternalPerfMarker_54() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___UnloadScenesInternalPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadScenesInternalPerfMarker_54() const { return ___UnloadScenesInternalPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadScenesInternalPerfMarker_54() { return &___UnloadScenesInternalPerfMarker_54; }
	inline void set_UnloadScenesInternalPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadScenesInternalPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_InvokeLoadedActionsPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___InvokeLoadedActionsPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeLoadedActionsPerfMarker_55() const { return ___InvokeLoadedActionsPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeLoadedActionsPerfMarker_55() { return &___InvokeLoadedActionsPerfMarker_55; }
	inline void set_InvokeLoadedActionsPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeLoadedActionsPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_InvokeWillLoadActionsPerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___InvokeWillLoadActionsPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillLoadActionsPerfMarker_56() const { return ___InvokeWillLoadActionsPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillLoadActionsPerfMarker_56() { return &___InvokeWillLoadActionsPerfMarker_56; }
	inline void set_InvokeWillLoadActionsPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillLoadActionsPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_InvokeWillUnloadActionsPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___InvokeWillUnloadActionsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillUnloadActionsPerfMarker_57() const { return ___InvokeWillUnloadActionsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillUnloadActionsPerfMarker_57() { return &___InvokeWillUnloadActionsPerfMarker_57; }
	inline void set_InvokeWillUnloadActionsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillUnloadActionsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_InvokeUnloadedActionsPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___InvokeUnloadedActionsPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeUnloadedActionsPerfMarker_58() const { return ___InvokeUnloadedActionsPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeUnloadedActionsPerfMarker_58() { return &___InvokeUnloadedActionsPerfMarker_58; }
	inline void set_InvokeUnloadedActionsPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeUnloadedActionsPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_GetScenePerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___GetScenePerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetScenePerfMarker_59() const { return ___GetScenePerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetScenePerfMarker_59() { return &___GetScenePerfMarker_59; }
	inline void set_GetScenePerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetScenePerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_GetLoadedContentScenesPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_StaticFields, ___GetLoadedContentScenesPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetLoadedContentScenesPerfMarker_60() const { return ___GetLoadedContentScenesPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetLoadedContentScenesPerfMarker_60() { return &___GetLoadedContentScenesPerfMarker_60; }
	inline void set_GetLoadedContentScenesPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetLoadedContentScenesPerfMarker_60 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.Maps.Unity.MapRendererBase
struct MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Mesh> Microsoft.Maps.Unity.MapRendererBase::=dCB=
	List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * ___U3DdCBU3D_7;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=dCD=
	bool ___U3DdCDU3D_11;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::_version
	int32_t ____version_13;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::_mapSession
	MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 * ____mapSession_14;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::=dCd=
	MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 * ___U3DdCdU3D_15;
	// System.String Microsoft.Maps.Unity.MapRendererBase::<Copyright>k__BackingField
	String_t* ___U3CCopyrightU3Ek__BackingField_16;
	// UnityEngine.Color Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____mapEdgeColor_17;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColorFadeDistance
	float ____mapEdgeColorFadeDistance_18;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_detailOffset
	float ____detailOffset_19;
	// System.Int16 Microsoft.Maps.Unity.MapRendererBase::_numElevationTileFallbackLods
	int16_t ____numElevationTileFallbackLods_20;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_requestTilesAroundView
	bool ____requestTilesAroundView_21;
	// Microsoft.Maps.Unity.LatLonWrapper Microsoft.Maps.Unity.MapRendererBase::_center
	LatLonWrapper_t8515839182AF59DD53D8C18525788BA3C20C403C  ____center_22;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_zoomLevel
	float ____zoomLevel_23;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_minimumZoomLevel
	float ____minimumZoomLevel_24;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_maximumZoomLevel
	float ____maximumZoomLevel_25;
	// Microsoft.Maps.Unity.MapTerrainType Microsoft.Maps.Unity.MapRendererBase::_mapTerrainType
	int32_t ____mapTerrainType_26;
	// Microsoft.Maps.Unity.MapShape Microsoft.Maps.Unity.MapRendererBase::_mapShape
	int32_t ____mapShape_27;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::<ElevationBaseline>k__BackingField
	double ___U3CElevationBaselineU3Ek__BackingField_28;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::_localMapDimension
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____localMapDimension_29;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapRadius
	float ____localMapRadius_30;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapBaseHeight
	float ____localMapBaseHeight_31;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::<LocalMapHeight>k__BackingField
	float ___U3CLocalMapHeightU3Ek__BackingField_32;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCE=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCEU3D_33;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCe=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCeU3D_34;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCF=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCFU3D_35;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::=dCf=
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3DdCfU3D_36;
	// Microsoft.Geospatial.GeoBoundingBox Microsoft.Maps.Unity.MapRendererBase::<Bounds>k__BackingField
	GeoBoundingBox_t0CE69569583F109F53DFE9212627BDDEE5F4A70E  ___U3CBoundsU3Ek__BackingField_37;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::=dC0=
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3DdC0U3D_38;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::=ddbC=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3DddbCU3D_39;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_elevationScale
	float ____elevationScale_40;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_castShadows
	bool ____castShadows_41;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_receiveShadows
	bool ____receiveShadows_42;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_enableMrtkMaterialIntegration
	bool ____enableMrtkMaterialIntegration_43;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_terrainMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____terrainMaterial_44;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC1=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC1U3D_45;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC2=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC2U3D_46;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC3=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC3U3D_47;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_isClippingVolumeWallEnabled
	bool ____isClippingVolumeWallEnabled_48;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____clippingVolumeMaterial_49;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC4=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC4U3D_50;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC5=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC5U3D_51;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC6=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC6U3D_52;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC7=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC7U3D_53;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC8=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC8U3D_54;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dC9=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdC9U3D_55;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dcA=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdcAU3D_56;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dca=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdcaU3D_57;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::=dcB=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3DdcBU3D_58;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeDistanceTextureResolution
	int32_t ____clippingVolumeDistanceTextureResolution_59;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::=dcb=
	int32_t ___U3DdcbU3D_60;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::_clippingDistanceLayer
	int32_t ____clippingDistanceLayer_61;
	// Microsoft.Maps.Unity.TextureTileLayerList Microsoft.Maps.Unity.MapRendererBase::_textureTileLayers
	TextureTileLayerList_t14A736DC406E2836989D5D5B351F22C666926E30 * ____textureTileLayers_62;
	// Microsoft.Maps.Unity.ElevationTileLayerList Microsoft.Maps.Unity.MapRendererBase::_elevationTileLayers
	ElevationTileLayerList_tE014081A6E790BF0005445B0C40964255F9EDB2D * ____elevationTileLayers_64;
	// =aa9= Microsoft.Maps.Unity.MapRendererBase::=dcC=
	U3Daa9U3D_t04EFE5AA72545535FFF8A884A41F01D28E147E92 * ___U3DdcCU3D_65;
	// System.Nullable`1<System.Boolean> Microsoft.Maps.Unity.MapRendererBase::=dcc=
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3DdccU3D_66;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_hideTileLayerComponents
	bool ____hideTileLayerComponents_67;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::=dEDa=
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___U3DdEDaU3D_68;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::AfterOnDisable
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AfterOnDisable_69;
	// System.EventHandler`1<Microsoft.Maps.Unity.MapSession> Microsoft.Maps.Unity.MapRendererBase::MapSessionChanged
	EventHandler_1_t64ACA999BE1F9C475C79234A6A8063C3F42A5516 * ___MapSessionChanged_70;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::=dcD=
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U3DdcDU3D_71;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::=dcd=
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U3DdcdU3D_72;
	// UnityEngine.RenderTextureFormat Microsoft.Maps.Unity.MapRendererBase::=dcF=
	int32_t ___U3DdcFU3D_75;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::=dcf=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3DdcfU3D_76;
	// UnityEngine.RenderTexture Microsoft.Maps.Unity.MapRendererBase::=dc0=
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___U3Ddc0U3D_77;
	// System.Object Microsoft.Maps.Unity.MapRendererBase::=dc1=
	RuntimeObject * ___U3Ddc1U3D_78;
	// =aBf= Microsoft.Maps.Unity.MapRendererBase::=dc2=
	U3DaBfU3D_t9CF2E9A72E89269EA1C29A51A567CBE27FE1041B * ___U3Ddc2U3D_79;
	// =abC= Microsoft.Maps.Unity.MapRendererBase::=dc3=
	U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 * ___U3Ddc3U3D_80;
	// =a6= Microsoft.Maps.Unity.MapRendererBase::=dc4=
	U3Da6U3D_tAEAD9548B52A0E1928D781B2254F3BA2F1E5412C * ___U3Ddc4U3D_81;
	// =a8= Microsoft.Maps.Unity.MapRendererBase::=dc5=
	U3Da8U3D_tB6F7B2F742BE37491EDAE69896FC975A67F34078 * ___U3Ddc5U3D_82;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=dc6=
	bool ___U3Ddc6U3D_83;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::=dc7=
	MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 * ___U3Ddc7U3D_84;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::=dc8=
	MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 * ___U3Ddc8U3D_85;
	// =abC= Microsoft.Maps.Unity.MapRendererBase::=dc9=
	U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 * ___U3Ddc9U3D_86;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dDA=
	int32_t ___U3DdDAU3D_87;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::<MercatorBoundingBox>k__BackingField
	MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8  ___U3CMercatorBoundingBoxU3Ek__BackingField_88;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::=dDa=
	MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8  ___U3DdDaU3D_89;
	// Microsoft.Geospatial.MercatorBoundingCircle Microsoft.Maps.Unity.MapRendererBase::<MercatorBoundingCircle>k__BackingField
	MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251  ___U3CMercatorBoundingCircleU3Ek__BackingField_90;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::=dDB=
	List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 * ___U3DdDBU3D_91;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDb=
	double ___U3DdDbU3D_92;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDC=
	double ___U3DdDCU3D_93;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::=dDc=
	LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  ___U3DdDcU3D_94;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::=dDD=
	LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  ___U3DdDDU3D_95;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::=dDd=
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3DdDdU3D_96;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::=dDE=
	MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  ___U3DdDEU3D_97;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDe=
	double ___U3DdDeU3D_98;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDF=
	double ___U3DdDFU3D_99;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dDf=
	double ___U3DdDfU3D_100;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::=dD0=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3DdD0U3D_101;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD1=
	float ___U3DdD1U3D_102;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD2=
	float ___U3DdD2U3D_103;
	// UnityEngine.Vector3 Microsoft.Maps.Unity.MapRendererBase::=dD3=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3DdD3U3D_104;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dD4=
	double ___U3DdD4U3D_105;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::=dD5=
	double ___U3DdD5U3D_106;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD6=
	float ___U3DdD6U3D_107;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::=dD7=
	float ___U3DdD7U3D_108;
	// =ae= Microsoft.Maps.Unity.MapRendererBase::=dD8=
	U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B  ___U3DdD8U3D_109;
	// Microsoft.Geospatial.TileLevelOfDetail Microsoft.Maps.Unity.MapRendererBase::=dD9=
	TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  ___U3DdD9U3D_110;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::=ddA=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3DddAU3D_111;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::=dda=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3DddaU3D_112;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=ddB=
	bool ___U3DddBU3D_113;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddb=
	int32_t ___U3DddbU3D_114;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddC=
	int32_t ___U3DddCU3D_115;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddc=
	int32_t ___U3DddcU3D_116;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddD=
	int32_t ___U3DddDU3D_117;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddd=
	int32_t ___U3DdddU3D_118;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddE=
	int32_t ___U3DddEU3D_119;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dde=
	int32_t ___U3DddeU3D_120;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddF=
	int32_t ___U3DddFU3D_121;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=ddf=
	int32_t ___U3DddfU3D_122;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd0=
	int32_t ___U3Ddd0U3D_123;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd1=
	int32_t ___U3Ddd1U3D_124;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd2=
	int32_t ___U3Ddd2U3D_125;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd3=
	int32_t ___U3Ddd3U3D_126;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd4=
	int32_t ___U3Ddd4U3D_127;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd5=
	int32_t ___U3Ddd5U3D_128;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dd6=
	int32_t ___U3Ddd6U3D_129;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::=dd7=
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3Ddd7U3D_130;
	// =aF= Microsoft.Maps.Unity.MapRendererBase::=dd8=
	U3DaFU3D_tEC50DC43ED2470AD2E709033786613EF4C82FAEE * ___U3Ddd8U3D_131;
	// System.Collections.Generic.List`1<=aaD=> Microsoft.Maps.Unity.MapRendererBase::=dd9=
	List_1_t749B78137B15D528DC4249E3D709BEC399DCC586 * ___U3Ddd9U3D_132;
	// System.Collections.Generic.List`1<=aab=> Microsoft.Maps.Unity.MapRendererBase::=dEA=
	List_1_t8D1CC7B7BD9A25A0AEFAB75788513F0E6872A8F6 * ___U3DdEAU3D_133;
	// System.Collections.Generic.List`1<=aBd=> Microsoft.Maps.Unity.MapRendererBase::=dEa=
	List_1_tAB900087BFDB10510EA560D44CD8C44340BA488E * ___U3DdEaU3D_134;
	// System.Collections.Generic.List`1<=aaC=> Microsoft.Maps.Unity.MapRendererBase::=dEB=
	List_1_t6F1E18116D3E03E7EB30BE7619135E5FC33F0522 * ___U3DdEBU3D_135;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::=dEb=
	List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 * ___U3DdEbU3D_136;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::=dEC=
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U3DdECU3D_137;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aD=> Microsoft.Maps.Unity.MapRendererBase::=dEc=
	Dictionary_2_t9C4AE7647757A769B59918C81809D1A8F5C3E673 * ___U3DdEcU3D_138;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,=aaF=> Microsoft.Maps.Unity.MapRendererBase::=dED=
	Dictionary_2_tCCDCA6FEB397FF22484719482A3D6A9E10A95F31 * ___U3DdEDU3D_139;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::=dEd=
	bool ___U3DdEdU3D_140;

public:
	inline static int32_t get_offset_of_U3DdCBU3D_7() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdCBU3D_7)); }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * get_U3DdCBU3D_7() const { return ___U3DdCBU3D_7; }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B ** get_address_of_U3DdCBU3D_7() { return &___U3DdCBU3D_7; }
	inline void set_U3DdCBU3D_7(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * value)
	{
		___U3DdCBU3D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCBU3D_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCDU3D_11() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdCDU3D_11)); }
	inline bool get_U3DdCDU3D_11() const { return ___U3DdCDU3D_11; }
	inline bool* get_address_of_U3DdCDU3D_11() { return &___U3DdCDU3D_11; }
	inline void set_U3DdCDU3D_11(bool value)
	{
		___U3DdCDU3D_11 = value;
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__mapSession_14() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____mapSession_14)); }
	inline MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 * get__mapSession_14() const { return ____mapSession_14; }
	inline MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 ** get_address_of__mapSession_14() { return &____mapSession_14; }
	inline void set__mapSession_14(MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 * value)
	{
		____mapSession_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapSession_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCdU3D_15() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdCdU3D_15)); }
	inline MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 * get_U3DdCdU3D_15() const { return ___U3DdCdU3D_15; }
	inline MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 ** get_address_of_U3DdCdU3D_15() { return &___U3DdCdU3D_15; }
	inline void set_U3DdCdU3D_15(MapSession_tD40A80DBC3EB81ABA59080E7DA1402752B873963 * value)
	{
		___U3DdCdU3D_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCdU3D_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCopyrightU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3CCopyrightU3Ek__BackingField_16)); }
	inline String_t* get_U3CCopyrightU3Ek__BackingField_16() const { return ___U3CCopyrightU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CCopyrightU3Ek__BackingField_16() { return &___U3CCopyrightU3Ek__BackingField_16; }
	inline void set_U3CCopyrightU3Ek__BackingField_16(String_t* value)
	{
		___U3CCopyrightU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCopyrightU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of__mapEdgeColor_17() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____mapEdgeColor_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__mapEdgeColor_17() const { return ____mapEdgeColor_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__mapEdgeColor_17() { return &____mapEdgeColor_17; }
	inline void set__mapEdgeColor_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____mapEdgeColor_17 = value;
	}

	inline static int32_t get_offset_of__mapEdgeColorFadeDistance_18() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____mapEdgeColorFadeDistance_18)); }
	inline float get__mapEdgeColorFadeDistance_18() const { return ____mapEdgeColorFadeDistance_18; }
	inline float* get_address_of__mapEdgeColorFadeDistance_18() { return &____mapEdgeColorFadeDistance_18; }
	inline void set__mapEdgeColorFadeDistance_18(float value)
	{
		____mapEdgeColorFadeDistance_18 = value;
	}

	inline static int32_t get_offset_of__detailOffset_19() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____detailOffset_19)); }
	inline float get__detailOffset_19() const { return ____detailOffset_19; }
	inline float* get_address_of__detailOffset_19() { return &____detailOffset_19; }
	inline void set__detailOffset_19(float value)
	{
		____detailOffset_19 = value;
	}

	inline static int32_t get_offset_of__numElevationTileFallbackLods_20() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____numElevationTileFallbackLods_20)); }
	inline int16_t get__numElevationTileFallbackLods_20() const { return ____numElevationTileFallbackLods_20; }
	inline int16_t* get_address_of__numElevationTileFallbackLods_20() { return &____numElevationTileFallbackLods_20; }
	inline void set__numElevationTileFallbackLods_20(int16_t value)
	{
		____numElevationTileFallbackLods_20 = value;
	}

	inline static int32_t get_offset_of__requestTilesAroundView_21() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____requestTilesAroundView_21)); }
	inline bool get__requestTilesAroundView_21() const { return ____requestTilesAroundView_21; }
	inline bool* get_address_of__requestTilesAroundView_21() { return &____requestTilesAroundView_21; }
	inline void set__requestTilesAroundView_21(bool value)
	{
		____requestTilesAroundView_21 = value;
	}

	inline static int32_t get_offset_of__center_22() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____center_22)); }
	inline LatLonWrapper_t8515839182AF59DD53D8C18525788BA3C20C403C  get__center_22() const { return ____center_22; }
	inline LatLonWrapper_t8515839182AF59DD53D8C18525788BA3C20C403C * get_address_of__center_22() { return &____center_22; }
	inline void set__center_22(LatLonWrapper_t8515839182AF59DD53D8C18525788BA3C20C403C  value)
	{
		____center_22 = value;
	}

	inline static int32_t get_offset_of__zoomLevel_23() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____zoomLevel_23)); }
	inline float get__zoomLevel_23() const { return ____zoomLevel_23; }
	inline float* get_address_of__zoomLevel_23() { return &____zoomLevel_23; }
	inline void set__zoomLevel_23(float value)
	{
		____zoomLevel_23 = value;
	}

	inline static int32_t get_offset_of__minimumZoomLevel_24() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____minimumZoomLevel_24)); }
	inline float get__minimumZoomLevel_24() const { return ____minimumZoomLevel_24; }
	inline float* get_address_of__minimumZoomLevel_24() { return &____minimumZoomLevel_24; }
	inline void set__minimumZoomLevel_24(float value)
	{
		____minimumZoomLevel_24 = value;
	}

	inline static int32_t get_offset_of__maximumZoomLevel_25() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____maximumZoomLevel_25)); }
	inline float get__maximumZoomLevel_25() const { return ____maximumZoomLevel_25; }
	inline float* get_address_of__maximumZoomLevel_25() { return &____maximumZoomLevel_25; }
	inline void set__maximumZoomLevel_25(float value)
	{
		____maximumZoomLevel_25 = value;
	}

	inline static int32_t get_offset_of__mapTerrainType_26() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____mapTerrainType_26)); }
	inline int32_t get__mapTerrainType_26() const { return ____mapTerrainType_26; }
	inline int32_t* get_address_of__mapTerrainType_26() { return &____mapTerrainType_26; }
	inline void set__mapTerrainType_26(int32_t value)
	{
		____mapTerrainType_26 = value;
	}

	inline static int32_t get_offset_of__mapShape_27() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____mapShape_27)); }
	inline int32_t get__mapShape_27() const { return ____mapShape_27; }
	inline int32_t* get_address_of__mapShape_27() { return &____mapShape_27; }
	inline void set__mapShape_27(int32_t value)
	{
		____mapShape_27 = value;
	}

	inline static int32_t get_offset_of_U3CElevationBaselineU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3CElevationBaselineU3Ek__BackingField_28)); }
	inline double get_U3CElevationBaselineU3Ek__BackingField_28() const { return ___U3CElevationBaselineU3Ek__BackingField_28; }
	inline double* get_address_of_U3CElevationBaselineU3Ek__BackingField_28() { return &___U3CElevationBaselineU3Ek__BackingField_28; }
	inline void set_U3CElevationBaselineU3Ek__BackingField_28(double value)
	{
		___U3CElevationBaselineU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of__localMapDimension_29() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____localMapDimension_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__localMapDimension_29() const { return ____localMapDimension_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__localMapDimension_29() { return &____localMapDimension_29; }
	inline void set__localMapDimension_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____localMapDimension_29 = value;
	}

	inline static int32_t get_offset_of__localMapRadius_30() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____localMapRadius_30)); }
	inline float get__localMapRadius_30() const { return ____localMapRadius_30; }
	inline float* get_address_of__localMapRadius_30() { return &____localMapRadius_30; }
	inline void set__localMapRadius_30(float value)
	{
		____localMapRadius_30 = value;
	}

	inline static int32_t get_offset_of__localMapBaseHeight_31() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____localMapBaseHeight_31)); }
	inline float get__localMapBaseHeight_31() const { return ____localMapBaseHeight_31; }
	inline float* get_address_of__localMapBaseHeight_31() { return &____localMapBaseHeight_31; }
	inline void set__localMapBaseHeight_31(float value)
	{
		____localMapBaseHeight_31 = value;
	}

	inline static int32_t get_offset_of_U3CLocalMapHeightU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3CLocalMapHeightU3Ek__BackingField_32)); }
	inline float get_U3CLocalMapHeightU3Ek__BackingField_32() const { return ___U3CLocalMapHeightU3Ek__BackingField_32; }
	inline float* get_address_of_U3CLocalMapHeightU3Ek__BackingField_32() { return &___U3CLocalMapHeightU3Ek__BackingField_32; }
	inline void set_U3CLocalMapHeightU3Ek__BackingField_32(float value)
	{
		___U3CLocalMapHeightU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3DdCEU3D_33() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdCEU3D_33)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCEU3D_33() const { return ___U3DdCEU3D_33; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCEU3D_33() { return &___U3DdCEU3D_33; }
	inline void set_U3DdCEU3D_33(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCEU3D_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCEU3D_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCeU3D_34() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdCeU3D_34)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCeU3D_34() const { return ___U3DdCeU3D_34; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCeU3D_34() { return &___U3DdCeU3D_34; }
	inline void set_U3DdCeU3D_34(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCeU3D_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCeU3D_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCFU3D_35() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdCFU3D_35)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCFU3D_35() const { return ___U3DdCFU3D_35; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCFU3D_35() { return &___U3DdCFU3D_35; }
	inline void set_U3DdCFU3D_35(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCFU3D_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCFU3D_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCfU3D_36() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdCfU3D_36)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3DdCfU3D_36() const { return ___U3DdCfU3D_36; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3DdCfU3D_36() { return &___U3DdCfU3D_36; }
	inline void set_U3DdCfU3D_36(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3DdCfU3D_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCfU3D_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3CBoundsU3Ek__BackingField_37)); }
	inline GeoBoundingBox_t0CE69569583F109F53DFE9212627BDDEE5F4A70E  get_U3CBoundsU3Ek__BackingField_37() const { return ___U3CBoundsU3Ek__BackingField_37; }
	inline GeoBoundingBox_t0CE69569583F109F53DFE9212627BDDEE5F4A70E * get_address_of_U3CBoundsU3Ek__BackingField_37() { return &___U3CBoundsU3Ek__BackingField_37; }
	inline void set_U3CBoundsU3Ek__BackingField_37(GeoBoundingBox_t0CE69569583F109F53DFE9212627BDDEE5F4A70E  value)
	{
		___U3CBoundsU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3DdC0U3D_38() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC0U3D_38)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3DdC0U3D_38() const { return ___U3DdC0U3D_38; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3DdC0U3D_38() { return &___U3DdC0U3D_38; }
	inline void set_U3DdC0U3D_38(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3DdC0U3D_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC0U3D_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3DddbCU3D_39() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddbCU3D_39)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3DddbCU3D_39() const { return ___U3DddbCU3D_39; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3DddbCU3D_39() { return &___U3DddbCU3D_39; }
	inline void set_U3DddbCU3D_39(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3DddbCU3D_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DddbCU3D_39), (void*)value);
	}

	inline static int32_t get_offset_of__elevationScale_40() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____elevationScale_40)); }
	inline float get__elevationScale_40() const { return ____elevationScale_40; }
	inline float* get_address_of__elevationScale_40() { return &____elevationScale_40; }
	inline void set__elevationScale_40(float value)
	{
		____elevationScale_40 = value;
	}

	inline static int32_t get_offset_of__castShadows_41() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____castShadows_41)); }
	inline bool get__castShadows_41() const { return ____castShadows_41; }
	inline bool* get_address_of__castShadows_41() { return &____castShadows_41; }
	inline void set__castShadows_41(bool value)
	{
		____castShadows_41 = value;
	}

	inline static int32_t get_offset_of__receiveShadows_42() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____receiveShadows_42)); }
	inline bool get__receiveShadows_42() const { return ____receiveShadows_42; }
	inline bool* get_address_of__receiveShadows_42() { return &____receiveShadows_42; }
	inline void set__receiveShadows_42(bool value)
	{
		____receiveShadows_42 = value;
	}

	inline static int32_t get_offset_of__enableMrtkMaterialIntegration_43() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____enableMrtkMaterialIntegration_43)); }
	inline bool get__enableMrtkMaterialIntegration_43() const { return ____enableMrtkMaterialIntegration_43; }
	inline bool* get_address_of__enableMrtkMaterialIntegration_43() { return &____enableMrtkMaterialIntegration_43; }
	inline void set__enableMrtkMaterialIntegration_43(bool value)
	{
		____enableMrtkMaterialIntegration_43 = value;
	}

	inline static int32_t get_offset_of__terrainMaterial_44() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____terrainMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__terrainMaterial_44() const { return ____terrainMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__terrainMaterial_44() { return &____terrainMaterial_44; }
	inline void set__terrainMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____terrainMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____terrainMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC1U3D_45() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC1U3D_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC1U3D_45() const { return ___U3DdC1U3D_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC1U3D_45() { return &___U3DdC1U3D_45; }
	inline void set_U3DdC1U3D_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC1U3D_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC1U3D_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC2U3D_46() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC2U3D_46)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC2U3D_46() const { return ___U3DdC2U3D_46; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC2U3D_46() { return &___U3DdC2U3D_46; }
	inline void set_U3DdC2U3D_46(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC2U3D_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC2U3D_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC3U3D_47() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC3U3D_47)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC3U3D_47() const { return ___U3DdC3U3D_47; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC3U3D_47() { return &___U3DdC3U3D_47; }
	inline void set_U3DdC3U3D_47(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC3U3D_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC3U3D_47), (void*)value);
	}

	inline static int32_t get_offset_of__isClippingVolumeWallEnabled_48() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____isClippingVolumeWallEnabled_48)); }
	inline bool get__isClippingVolumeWallEnabled_48() const { return ____isClippingVolumeWallEnabled_48; }
	inline bool* get_address_of__isClippingVolumeWallEnabled_48() { return &____isClippingVolumeWallEnabled_48; }
	inline void set__isClippingVolumeWallEnabled_48(bool value)
	{
		____isClippingVolumeWallEnabled_48 = value;
	}

	inline static int32_t get_offset_of__clippingVolumeMaterial_49() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____clippingVolumeMaterial_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__clippingVolumeMaterial_49() const { return ____clippingVolumeMaterial_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__clippingVolumeMaterial_49() { return &____clippingVolumeMaterial_49; }
	inline void set__clippingVolumeMaterial_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____clippingVolumeMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clippingVolumeMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC4U3D_50() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC4U3D_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC4U3D_50() const { return ___U3DdC4U3D_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC4U3D_50() { return &___U3DdC4U3D_50; }
	inline void set_U3DdC4U3D_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC4U3D_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC4U3D_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC5U3D_51() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC5U3D_51)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC5U3D_51() const { return ___U3DdC5U3D_51; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC5U3D_51() { return &___U3DdC5U3D_51; }
	inline void set_U3DdC5U3D_51(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC5U3D_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC5U3D_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC6U3D_52() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC6U3D_52)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC6U3D_52() const { return ___U3DdC6U3D_52; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC6U3D_52() { return &___U3DdC6U3D_52; }
	inline void set_U3DdC6U3D_52(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC6U3D_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC6U3D_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC7U3D_53() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC7U3D_53)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC7U3D_53() const { return ___U3DdC7U3D_53; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC7U3D_53() { return &___U3DdC7U3D_53; }
	inline void set_U3DdC7U3D_53(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC7U3D_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC7U3D_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC8U3D_54() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC8U3D_54)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC8U3D_54() const { return ___U3DdC8U3D_54; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC8U3D_54() { return &___U3DdC8U3D_54; }
	inline void set_U3DdC8U3D_54(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC8U3D_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC8U3D_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdC9U3D_55() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdC9U3D_55)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdC9U3D_55() const { return ___U3DdC9U3D_55; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdC9U3D_55() { return &___U3DdC9U3D_55; }
	inline void set_U3DdC9U3D_55(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdC9U3D_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdC9U3D_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcAU3D_56() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcAU3D_56)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdcAU3D_56() const { return ___U3DdcAU3D_56; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdcAU3D_56() { return &___U3DdcAU3D_56; }
	inline void set_U3DdcAU3D_56(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdcAU3D_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcAU3D_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcaU3D_57() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcaU3D_57)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdcaU3D_57() const { return ___U3DdcaU3D_57; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdcaU3D_57() { return &___U3DdcaU3D_57; }
	inline void set_U3DdcaU3D_57(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdcaU3D_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcaU3D_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcBU3D_58() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcBU3D_58)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3DdcBU3D_58() const { return ___U3DdcBU3D_58; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3DdcBU3D_58() { return &___U3DdcBU3D_58; }
	inline void set_U3DdcBU3D_58(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3DdcBU3D_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcBU3D_58), (void*)value);
	}

	inline static int32_t get_offset_of__clippingVolumeDistanceTextureResolution_59() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____clippingVolumeDistanceTextureResolution_59)); }
	inline int32_t get__clippingVolumeDistanceTextureResolution_59() const { return ____clippingVolumeDistanceTextureResolution_59; }
	inline int32_t* get_address_of__clippingVolumeDistanceTextureResolution_59() { return &____clippingVolumeDistanceTextureResolution_59; }
	inline void set__clippingVolumeDistanceTextureResolution_59(int32_t value)
	{
		____clippingVolumeDistanceTextureResolution_59 = value;
	}

	inline static int32_t get_offset_of_U3DdcbU3D_60() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcbU3D_60)); }
	inline int32_t get_U3DdcbU3D_60() const { return ___U3DdcbU3D_60; }
	inline int32_t* get_address_of_U3DdcbU3D_60() { return &___U3DdcbU3D_60; }
	inline void set_U3DdcbU3D_60(int32_t value)
	{
		___U3DdcbU3D_60 = value;
	}

	inline static int32_t get_offset_of__clippingDistanceLayer_61() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____clippingDistanceLayer_61)); }
	inline int32_t get__clippingDistanceLayer_61() const { return ____clippingDistanceLayer_61; }
	inline int32_t* get_address_of__clippingDistanceLayer_61() { return &____clippingDistanceLayer_61; }
	inline void set__clippingDistanceLayer_61(int32_t value)
	{
		____clippingDistanceLayer_61 = value;
	}

	inline static int32_t get_offset_of__textureTileLayers_62() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____textureTileLayers_62)); }
	inline TextureTileLayerList_t14A736DC406E2836989D5D5B351F22C666926E30 * get__textureTileLayers_62() const { return ____textureTileLayers_62; }
	inline TextureTileLayerList_t14A736DC406E2836989D5D5B351F22C666926E30 ** get_address_of__textureTileLayers_62() { return &____textureTileLayers_62; }
	inline void set__textureTileLayers_62(TextureTileLayerList_t14A736DC406E2836989D5D5B351F22C666926E30 * value)
	{
		____textureTileLayers_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textureTileLayers_62), (void*)value);
	}

	inline static int32_t get_offset_of__elevationTileLayers_64() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____elevationTileLayers_64)); }
	inline ElevationTileLayerList_tE014081A6E790BF0005445B0C40964255F9EDB2D * get__elevationTileLayers_64() const { return ____elevationTileLayers_64; }
	inline ElevationTileLayerList_tE014081A6E790BF0005445B0C40964255F9EDB2D ** get_address_of__elevationTileLayers_64() { return &____elevationTileLayers_64; }
	inline void set__elevationTileLayers_64(ElevationTileLayerList_tE014081A6E790BF0005445B0C40964255F9EDB2D * value)
	{
		____elevationTileLayers_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevationTileLayers_64), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcCU3D_65() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcCU3D_65)); }
	inline U3Daa9U3D_t04EFE5AA72545535FFF8A884A41F01D28E147E92 * get_U3DdcCU3D_65() const { return ___U3DdcCU3D_65; }
	inline U3Daa9U3D_t04EFE5AA72545535FFF8A884A41F01D28E147E92 ** get_address_of_U3DdcCU3D_65() { return &___U3DdcCU3D_65; }
	inline void set_U3DdcCU3D_65(U3Daa9U3D_t04EFE5AA72545535FFF8A884A41F01D28E147E92 * value)
	{
		___U3DdcCU3D_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcCU3D_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdccU3D_66() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdccU3D_66)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3DdccU3D_66() const { return ___U3DdccU3D_66; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3DdccU3D_66() { return &___U3DdccU3D_66; }
	inline void set_U3DdccU3D_66(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3DdccU3D_66 = value;
	}

	inline static int32_t get_offset_of__hideTileLayerComponents_67() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ____hideTileLayerComponents_67)); }
	inline bool get__hideTileLayerComponents_67() const { return ____hideTileLayerComponents_67; }
	inline bool* get_address_of__hideTileLayerComponents_67() { return &____hideTileLayerComponents_67; }
	inline void set__hideTileLayerComponents_67(bool value)
	{
		____hideTileLayerComponents_67 = value;
	}

	inline static int32_t get_offset_of_U3DdEDaU3D_68() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEDaU3D_68)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_U3DdEDaU3D_68() const { return ___U3DdEDaU3D_68; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_U3DdEDaU3D_68() { return &___U3DdEDaU3D_68; }
	inline void set_U3DdEDaU3D_68(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___U3DdEDaU3D_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEDaU3D_68), (void*)value);
	}

	inline static int32_t get_offset_of_AfterOnDisable_69() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___AfterOnDisable_69)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AfterOnDisable_69() const { return ___AfterOnDisable_69; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AfterOnDisable_69() { return &___AfterOnDisable_69; }
	inline void set_AfterOnDisable_69(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AfterOnDisable_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AfterOnDisable_69), (void*)value);
	}

	inline static int32_t get_offset_of_MapSessionChanged_70() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___MapSessionChanged_70)); }
	inline EventHandler_1_t64ACA999BE1F9C475C79234A6A8063C3F42A5516 * get_MapSessionChanged_70() const { return ___MapSessionChanged_70; }
	inline EventHandler_1_t64ACA999BE1F9C475C79234A6A8063C3F42A5516 ** get_address_of_MapSessionChanged_70() { return &___MapSessionChanged_70; }
	inline void set_MapSessionChanged_70(EventHandler_1_t64ACA999BE1F9C475C79234A6A8063C3F42A5516 * value)
	{
		___MapSessionChanged_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MapSessionChanged_70), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcDU3D_71() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcDU3D_71)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U3DdcDU3D_71() const { return ___U3DdcDU3D_71; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U3DdcDU3D_71() { return &___U3DdcDU3D_71; }
	inline void set_U3DdcDU3D_71(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U3DdcDU3D_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcDU3D_71), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcdU3D_72() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcdU3D_72)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U3DdcdU3D_72() const { return ___U3DdcdU3D_72; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U3DdcdU3D_72() { return &___U3DdcdU3D_72; }
	inline void set_U3DdcdU3D_72(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U3DdcdU3D_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcdU3D_72), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcFU3D_75() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcFU3D_75)); }
	inline int32_t get_U3DdcFU3D_75() const { return ___U3DdcFU3D_75; }
	inline int32_t* get_address_of_U3DdcFU3D_75() { return &___U3DdcFU3D_75; }
	inline void set_U3DdcFU3D_75(int32_t value)
	{
		___U3DdcFU3D_75 = value;
	}

	inline static int32_t get_offset_of_U3DdcfU3D_76() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdcfU3D_76)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3DdcfU3D_76() const { return ___U3DdcfU3D_76; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3DdcfU3D_76() { return &___U3DdcfU3D_76; }
	inline void set_U3DdcfU3D_76(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3DdcfU3D_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcfU3D_76), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc0U3D_77() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc0U3D_77)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_U3Ddc0U3D_77() const { return ___U3Ddc0U3D_77; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_U3Ddc0U3D_77() { return &___U3Ddc0U3D_77; }
	inline void set_U3Ddc0U3D_77(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___U3Ddc0U3D_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc0U3D_77), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc1U3D_78() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc1U3D_78)); }
	inline RuntimeObject * get_U3Ddc1U3D_78() const { return ___U3Ddc1U3D_78; }
	inline RuntimeObject ** get_address_of_U3Ddc1U3D_78() { return &___U3Ddc1U3D_78; }
	inline void set_U3Ddc1U3D_78(RuntimeObject * value)
	{
		___U3Ddc1U3D_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc1U3D_78), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc2U3D_79() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc2U3D_79)); }
	inline U3DaBfU3D_t9CF2E9A72E89269EA1C29A51A567CBE27FE1041B * get_U3Ddc2U3D_79() const { return ___U3Ddc2U3D_79; }
	inline U3DaBfU3D_t9CF2E9A72E89269EA1C29A51A567CBE27FE1041B ** get_address_of_U3Ddc2U3D_79() { return &___U3Ddc2U3D_79; }
	inline void set_U3Ddc2U3D_79(U3DaBfU3D_t9CF2E9A72E89269EA1C29A51A567CBE27FE1041B * value)
	{
		___U3Ddc2U3D_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc2U3D_79), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc3U3D_80() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc3U3D_80)); }
	inline U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 * get_U3Ddc3U3D_80() const { return ___U3Ddc3U3D_80; }
	inline U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 ** get_address_of_U3Ddc3U3D_80() { return &___U3Ddc3U3D_80; }
	inline void set_U3Ddc3U3D_80(U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 * value)
	{
		___U3Ddc3U3D_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc3U3D_80), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc4U3D_81() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc4U3D_81)); }
	inline U3Da6U3D_tAEAD9548B52A0E1928D781B2254F3BA2F1E5412C * get_U3Ddc4U3D_81() const { return ___U3Ddc4U3D_81; }
	inline U3Da6U3D_tAEAD9548B52A0E1928D781B2254F3BA2F1E5412C ** get_address_of_U3Ddc4U3D_81() { return &___U3Ddc4U3D_81; }
	inline void set_U3Ddc4U3D_81(U3Da6U3D_tAEAD9548B52A0E1928D781B2254F3BA2F1E5412C * value)
	{
		___U3Ddc4U3D_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc4U3D_81), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc5U3D_82() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc5U3D_82)); }
	inline U3Da8U3D_tB6F7B2F742BE37491EDAE69896FC975A67F34078 * get_U3Ddc5U3D_82() const { return ___U3Ddc5U3D_82; }
	inline U3Da8U3D_tB6F7B2F742BE37491EDAE69896FC975A67F34078 ** get_address_of_U3Ddc5U3D_82() { return &___U3Ddc5U3D_82; }
	inline void set_U3Ddc5U3D_82(U3Da8U3D_tB6F7B2F742BE37491EDAE69896FC975A67F34078 * value)
	{
		___U3Ddc5U3D_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc5U3D_82), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc6U3D_83() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc6U3D_83)); }
	inline bool get_U3Ddc6U3D_83() const { return ___U3Ddc6U3D_83; }
	inline bool* get_address_of_U3Ddc6U3D_83() { return &___U3Ddc6U3D_83; }
	inline void set_U3Ddc6U3D_83(bool value)
	{
		___U3Ddc6U3D_83 = value;
	}

	inline static int32_t get_offset_of_U3Ddc7U3D_84() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc7U3D_84)); }
	inline MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 * get_U3Ddc7U3D_84() const { return ___U3Ddc7U3D_84; }
	inline MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 ** get_address_of_U3Ddc7U3D_84() { return &___U3Ddc7U3D_84; }
	inline void set_U3Ddc7U3D_84(MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 * value)
	{
		___U3Ddc7U3D_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc7U3D_84), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc8U3D_85() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc8U3D_85)); }
	inline MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 * get_U3Ddc8U3D_85() const { return ___U3Ddc8U3D_85; }
	inline MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 ** get_address_of_U3Ddc8U3D_85() { return &___U3Ddc8U3D_85; }
	inline void set_U3Ddc8U3D_85(MapLabelLayer_t4443F125D4F43CFC29D773ADC5C66CA80A29B658 * value)
	{
		___U3Ddc8U3D_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc8U3D_85), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddc9U3D_86() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddc9U3D_86)); }
	inline U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 * get_U3Ddc9U3D_86() const { return ___U3Ddc9U3D_86; }
	inline U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 ** get_address_of_U3Ddc9U3D_86() { return &___U3Ddc9U3D_86; }
	inline void set_U3Ddc9U3D_86(U3DabCU3D_t5F3B82D93C5A049D42A86933827F49B493116AE4 * value)
	{
		___U3Ddc9U3D_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddc9U3D_86), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdDAU3D_87() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDAU3D_87)); }
	inline int32_t get_U3DdDAU3D_87() const { return ___U3DdDAU3D_87; }
	inline int32_t* get_address_of_U3DdDAU3D_87() { return &___U3DdDAU3D_87; }
	inline void set_U3DdDAU3D_87(int32_t value)
	{
		___U3DdDAU3D_87 = value;
	}

	inline static int32_t get_offset_of_U3CMercatorBoundingBoxU3Ek__BackingField_88() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3CMercatorBoundingBoxU3Ek__BackingField_88)); }
	inline MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8  get_U3CMercatorBoundingBoxU3Ek__BackingField_88() const { return ___U3CMercatorBoundingBoxU3Ek__BackingField_88; }
	inline MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8 * get_address_of_U3CMercatorBoundingBoxU3Ek__BackingField_88() { return &___U3CMercatorBoundingBoxU3Ek__BackingField_88; }
	inline void set_U3CMercatorBoundingBoxU3Ek__BackingField_88(MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8  value)
	{
		___U3CMercatorBoundingBoxU3Ek__BackingField_88 = value;
	}

	inline static int32_t get_offset_of_U3DdDaU3D_89() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDaU3D_89)); }
	inline MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8  get_U3DdDaU3D_89() const { return ___U3DdDaU3D_89; }
	inline MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8 * get_address_of_U3DdDaU3D_89() { return &___U3DdDaU3D_89; }
	inline void set_U3DdDaU3D_89(MercatorBoundingBox_tAC088ECCDC1D277E4271C80CA0C5B8D33B44ADA8  value)
	{
		___U3DdDaU3D_89 = value;
	}

	inline static int32_t get_offset_of_U3CMercatorBoundingCircleU3Ek__BackingField_90() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3CMercatorBoundingCircleU3Ek__BackingField_90)); }
	inline MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251  get_U3CMercatorBoundingCircleU3Ek__BackingField_90() const { return ___U3CMercatorBoundingCircleU3Ek__BackingField_90; }
	inline MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251 * get_address_of_U3CMercatorBoundingCircleU3Ek__BackingField_90() { return &___U3CMercatorBoundingCircleU3Ek__BackingField_90; }
	inline void set_U3CMercatorBoundingCircleU3Ek__BackingField_90(MercatorBoundingCircle_t887AB9213B35C00FFEEA0A64DA75A7C581BEF251  value)
	{
		___U3CMercatorBoundingCircleU3Ek__BackingField_90 = value;
	}

	inline static int32_t get_offset_of_U3DdDBU3D_91() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDBU3D_91)); }
	inline List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 * get_U3DdDBU3D_91() const { return ___U3DdDBU3D_91; }
	inline List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 ** get_address_of_U3DdDBU3D_91() { return &___U3DdDBU3D_91; }
	inline void set_U3DdDBU3D_91(List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 * value)
	{
		___U3DdDBU3D_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdDBU3D_91), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdDbU3D_92() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDbU3D_92)); }
	inline double get_U3DdDbU3D_92() const { return ___U3DdDbU3D_92; }
	inline double* get_address_of_U3DdDbU3D_92() { return &___U3DdDbU3D_92; }
	inline void set_U3DdDbU3D_92(double value)
	{
		___U3DdDbU3D_92 = value;
	}

	inline static int32_t get_offset_of_U3DdDCU3D_93() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDCU3D_93)); }
	inline double get_U3DdDCU3D_93() const { return ___U3DdDCU3D_93; }
	inline double* get_address_of_U3DdDCU3D_93() { return &___U3DdDCU3D_93; }
	inline void set_U3DdDCU3D_93(double value)
	{
		___U3DdDCU3D_93 = value;
	}

	inline static int32_t get_offset_of_U3DdDcU3D_94() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDcU3D_94)); }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  get_U3DdDcU3D_94() const { return ___U3DdDcU3D_94; }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E * get_address_of_U3DdDcU3D_94() { return &___U3DdDcU3D_94; }
	inline void set_U3DdDcU3D_94(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  value)
	{
		___U3DdDcU3D_94 = value;
	}

	inline static int32_t get_offset_of_U3DdDDU3D_95() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDDU3D_95)); }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  get_U3DdDDU3D_95() const { return ___U3DdDDU3D_95; }
	inline LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E * get_address_of_U3DdDDU3D_95() { return &___U3DdDDU3D_95; }
	inline void set_U3DdDDU3D_95(LatLon_t87DC086005ADE0FEB453543C8B54BF638CD0B46E  value)
	{
		___U3DdDDU3D_95 = value;
	}

	inline static int32_t get_offset_of_U3DdDdU3D_96() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDdU3D_96)); }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  get_U3DdDdU3D_96() const { return ___U3DdDdU3D_96; }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 * get_address_of_U3DdDdU3D_96() { return &___U3DdDdU3D_96; }
	inline void set_U3DdDdU3D_96(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  value)
	{
		___U3DdDdU3D_96 = value;
	}

	inline static int32_t get_offset_of_U3DdDEU3D_97() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDEU3D_97)); }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  get_U3DdDEU3D_97() const { return ___U3DdDEU3D_97; }
	inline MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681 * get_address_of_U3DdDEU3D_97() { return &___U3DdDEU3D_97; }
	inline void set_U3DdDEU3D_97(MercatorCoordinate_tC955FA836C357E532F2D7C8CD0595F4D5EBEF681  value)
	{
		___U3DdDEU3D_97 = value;
	}

	inline static int32_t get_offset_of_U3DdDeU3D_98() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDeU3D_98)); }
	inline double get_U3DdDeU3D_98() const { return ___U3DdDeU3D_98; }
	inline double* get_address_of_U3DdDeU3D_98() { return &___U3DdDeU3D_98; }
	inline void set_U3DdDeU3D_98(double value)
	{
		___U3DdDeU3D_98 = value;
	}

	inline static int32_t get_offset_of_U3DdDFU3D_99() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDFU3D_99)); }
	inline double get_U3DdDFU3D_99() const { return ___U3DdDFU3D_99; }
	inline double* get_address_of_U3DdDFU3D_99() { return &___U3DdDFU3D_99; }
	inline void set_U3DdDFU3D_99(double value)
	{
		___U3DdDFU3D_99 = value;
	}

	inline static int32_t get_offset_of_U3DdDfU3D_100() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdDfU3D_100)); }
	inline double get_U3DdDfU3D_100() const { return ___U3DdDfU3D_100; }
	inline double* get_address_of_U3DdDfU3D_100() { return &___U3DdDfU3D_100; }
	inline void set_U3DdDfU3D_100(double value)
	{
		___U3DdDfU3D_100 = value;
	}

	inline static int32_t get_offset_of_U3DdD0U3D_101() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD0U3D_101)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3DdD0U3D_101() const { return ___U3DdD0U3D_101; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3DdD0U3D_101() { return &___U3DdD0U3D_101; }
	inline void set_U3DdD0U3D_101(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3DdD0U3D_101 = value;
	}

	inline static int32_t get_offset_of_U3DdD1U3D_102() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD1U3D_102)); }
	inline float get_U3DdD1U3D_102() const { return ___U3DdD1U3D_102; }
	inline float* get_address_of_U3DdD1U3D_102() { return &___U3DdD1U3D_102; }
	inline void set_U3DdD1U3D_102(float value)
	{
		___U3DdD1U3D_102 = value;
	}

	inline static int32_t get_offset_of_U3DdD2U3D_103() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD2U3D_103)); }
	inline float get_U3DdD2U3D_103() const { return ___U3DdD2U3D_103; }
	inline float* get_address_of_U3DdD2U3D_103() { return &___U3DdD2U3D_103; }
	inline void set_U3DdD2U3D_103(float value)
	{
		___U3DdD2U3D_103 = value;
	}

	inline static int32_t get_offset_of_U3DdD3U3D_104() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD3U3D_104)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3DdD3U3D_104() const { return ___U3DdD3U3D_104; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3DdD3U3D_104() { return &___U3DdD3U3D_104; }
	inline void set_U3DdD3U3D_104(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3DdD3U3D_104 = value;
	}

	inline static int32_t get_offset_of_U3DdD4U3D_105() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD4U3D_105)); }
	inline double get_U3DdD4U3D_105() const { return ___U3DdD4U3D_105; }
	inline double* get_address_of_U3DdD4U3D_105() { return &___U3DdD4U3D_105; }
	inline void set_U3DdD4U3D_105(double value)
	{
		___U3DdD4U3D_105 = value;
	}

	inline static int32_t get_offset_of_U3DdD5U3D_106() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD5U3D_106)); }
	inline double get_U3DdD5U3D_106() const { return ___U3DdD5U3D_106; }
	inline double* get_address_of_U3DdD5U3D_106() { return &___U3DdD5U3D_106; }
	inline void set_U3DdD5U3D_106(double value)
	{
		___U3DdD5U3D_106 = value;
	}

	inline static int32_t get_offset_of_U3DdD6U3D_107() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD6U3D_107)); }
	inline float get_U3DdD6U3D_107() const { return ___U3DdD6U3D_107; }
	inline float* get_address_of_U3DdD6U3D_107() { return &___U3DdD6U3D_107; }
	inline void set_U3DdD6U3D_107(float value)
	{
		___U3DdD6U3D_107 = value;
	}

	inline static int32_t get_offset_of_U3DdD7U3D_108() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD7U3D_108)); }
	inline float get_U3DdD7U3D_108() const { return ___U3DdD7U3D_108; }
	inline float* get_address_of_U3DdD7U3D_108() { return &___U3DdD7U3D_108; }
	inline void set_U3DdD7U3D_108(float value)
	{
		___U3DdD7U3D_108 = value;
	}

	inline static int32_t get_offset_of_U3DdD8U3D_109() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD8U3D_109)); }
	inline U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B  get_U3DdD8U3D_109() const { return ___U3DdD8U3D_109; }
	inline U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B * get_address_of_U3DdD8U3D_109() { return &___U3DdD8U3D_109; }
	inline void set_U3DdD8U3D_109(U3DaeU3D_t16BDFA54299B880A1B4BF921AED717D77BE0A80B  value)
	{
		___U3DdD8U3D_109 = value;
	}

	inline static int32_t get_offset_of_U3DdD9U3D_110() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdD9U3D_110)); }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  get_U3DdD9U3D_110() const { return ___U3DdD9U3D_110; }
	inline TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B * get_address_of_U3DdD9U3D_110() { return &___U3DdD9U3D_110; }
	inline void set_U3DdD9U3D_110(TileLevelOfDetail_t378FD724DC8CE056319B00B167A1CDB52FA98F7B  value)
	{
		___U3DdD9U3D_110 = value;
	}

	inline static int32_t get_offset_of_U3DddAU3D_111() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddAU3D_111)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3DddAU3D_111() const { return ___U3DddAU3D_111; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3DddAU3D_111() { return &___U3DddAU3D_111; }
	inline void set_U3DddAU3D_111(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3DddAU3D_111 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DddAU3D_111), (void*)value);
	}

	inline static int32_t get_offset_of_U3DddaU3D_112() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddaU3D_112)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3DddaU3D_112() const { return ___U3DddaU3D_112; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3DddaU3D_112() { return &___U3DddaU3D_112; }
	inline void set_U3DddaU3D_112(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3DddaU3D_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DddaU3D_112), (void*)value);
	}

	inline static int32_t get_offset_of_U3DddBU3D_113() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddBU3D_113)); }
	inline bool get_U3DddBU3D_113() const { return ___U3DddBU3D_113; }
	inline bool* get_address_of_U3DddBU3D_113() { return &___U3DddBU3D_113; }
	inline void set_U3DddBU3D_113(bool value)
	{
		___U3DddBU3D_113 = value;
	}

	inline static int32_t get_offset_of_U3DddbU3D_114() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddbU3D_114)); }
	inline int32_t get_U3DddbU3D_114() const { return ___U3DddbU3D_114; }
	inline int32_t* get_address_of_U3DddbU3D_114() { return &___U3DddbU3D_114; }
	inline void set_U3DddbU3D_114(int32_t value)
	{
		___U3DddbU3D_114 = value;
	}

	inline static int32_t get_offset_of_U3DddCU3D_115() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddCU3D_115)); }
	inline int32_t get_U3DddCU3D_115() const { return ___U3DddCU3D_115; }
	inline int32_t* get_address_of_U3DddCU3D_115() { return &___U3DddCU3D_115; }
	inline void set_U3DddCU3D_115(int32_t value)
	{
		___U3DddCU3D_115 = value;
	}

	inline static int32_t get_offset_of_U3DddcU3D_116() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddcU3D_116)); }
	inline int32_t get_U3DddcU3D_116() const { return ___U3DddcU3D_116; }
	inline int32_t* get_address_of_U3DddcU3D_116() { return &___U3DddcU3D_116; }
	inline void set_U3DddcU3D_116(int32_t value)
	{
		___U3DddcU3D_116 = value;
	}

	inline static int32_t get_offset_of_U3DddDU3D_117() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddDU3D_117)); }
	inline int32_t get_U3DddDU3D_117() const { return ___U3DddDU3D_117; }
	inline int32_t* get_address_of_U3DddDU3D_117() { return &___U3DddDU3D_117; }
	inline void set_U3DddDU3D_117(int32_t value)
	{
		___U3DddDU3D_117 = value;
	}

	inline static int32_t get_offset_of_U3DdddU3D_118() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdddU3D_118)); }
	inline int32_t get_U3DdddU3D_118() const { return ___U3DdddU3D_118; }
	inline int32_t* get_address_of_U3DdddU3D_118() { return &___U3DdddU3D_118; }
	inline void set_U3DdddU3D_118(int32_t value)
	{
		___U3DdddU3D_118 = value;
	}

	inline static int32_t get_offset_of_U3DddEU3D_119() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddEU3D_119)); }
	inline int32_t get_U3DddEU3D_119() const { return ___U3DddEU3D_119; }
	inline int32_t* get_address_of_U3DddEU3D_119() { return &___U3DddEU3D_119; }
	inline void set_U3DddEU3D_119(int32_t value)
	{
		___U3DddEU3D_119 = value;
	}

	inline static int32_t get_offset_of_U3DddeU3D_120() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddeU3D_120)); }
	inline int32_t get_U3DddeU3D_120() const { return ___U3DddeU3D_120; }
	inline int32_t* get_address_of_U3DddeU3D_120() { return &___U3DddeU3D_120; }
	inline void set_U3DddeU3D_120(int32_t value)
	{
		___U3DddeU3D_120 = value;
	}

	inline static int32_t get_offset_of_U3DddFU3D_121() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddFU3D_121)); }
	inline int32_t get_U3DddFU3D_121() const { return ___U3DddFU3D_121; }
	inline int32_t* get_address_of_U3DddFU3D_121() { return &___U3DddFU3D_121; }
	inline void set_U3DddFU3D_121(int32_t value)
	{
		___U3DddFU3D_121 = value;
	}

	inline static int32_t get_offset_of_U3DddfU3D_122() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DddfU3D_122)); }
	inline int32_t get_U3DddfU3D_122() const { return ___U3DddfU3D_122; }
	inline int32_t* get_address_of_U3DddfU3D_122() { return &___U3DddfU3D_122; }
	inline void set_U3DddfU3D_122(int32_t value)
	{
		___U3DddfU3D_122 = value;
	}

	inline static int32_t get_offset_of_U3Ddd0U3D_123() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd0U3D_123)); }
	inline int32_t get_U3Ddd0U3D_123() const { return ___U3Ddd0U3D_123; }
	inline int32_t* get_address_of_U3Ddd0U3D_123() { return &___U3Ddd0U3D_123; }
	inline void set_U3Ddd0U3D_123(int32_t value)
	{
		___U3Ddd0U3D_123 = value;
	}

	inline static int32_t get_offset_of_U3Ddd1U3D_124() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd1U3D_124)); }
	inline int32_t get_U3Ddd1U3D_124() const { return ___U3Ddd1U3D_124; }
	inline int32_t* get_address_of_U3Ddd1U3D_124() { return &___U3Ddd1U3D_124; }
	inline void set_U3Ddd1U3D_124(int32_t value)
	{
		___U3Ddd1U3D_124 = value;
	}

	inline static int32_t get_offset_of_U3Ddd2U3D_125() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd2U3D_125)); }
	inline int32_t get_U3Ddd2U3D_125() const { return ___U3Ddd2U3D_125; }
	inline int32_t* get_address_of_U3Ddd2U3D_125() { return &___U3Ddd2U3D_125; }
	inline void set_U3Ddd2U3D_125(int32_t value)
	{
		___U3Ddd2U3D_125 = value;
	}

	inline static int32_t get_offset_of_U3Ddd3U3D_126() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd3U3D_126)); }
	inline int32_t get_U3Ddd3U3D_126() const { return ___U3Ddd3U3D_126; }
	inline int32_t* get_address_of_U3Ddd3U3D_126() { return &___U3Ddd3U3D_126; }
	inline void set_U3Ddd3U3D_126(int32_t value)
	{
		___U3Ddd3U3D_126 = value;
	}

	inline static int32_t get_offset_of_U3Ddd4U3D_127() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd4U3D_127)); }
	inline int32_t get_U3Ddd4U3D_127() const { return ___U3Ddd4U3D_127; }
	inline int32_t* get_address_of_U3Ddd4U3D_127() { return &___U3Ddd4U3D_127; }
	inline void set_U3Ddd4U3D_127(int32_t value)
	{
		___U3Ddd4U3D_127 = value;
	}

	inline static int32_t get_offset_of_U3Ddd5U3D_128() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd5U3D_128)); }
	inline int32_t get_U3Ddd5U3D_128() const { return ___U3Ddd5U3D_128; }
	inline int32_t* get_address_of_U3Ddd5U3D_128() { return &___U3Ddd5U3D_128; }
	inline void set_U3Ddd5U3D_128(int32_t value)
	{
		___U3Ddd5U3D_128 = value;
	}

	inline static int32_t get_offset_of_U3Ddd6U3D_129() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd6U3D_129)); }
	inline int32_t get_U3Ddd6U3D_129() const { return ___U3Ddd6U3D_129; }
	inline int32_t* get_address_of_U3Ddd6U3D_129() { return &___U3Ddd6U3D_129; }
	inline void set_U3Ddd6U3D_129(int32_t value)
	{
		___U3Ddd6U3D_129 = value;
	}

	inline static int32_t get_offset_of_U3Ddd7U3D_130() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd7U3D_130)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3Ddd7U3D_130() const { return ___U3Ddd7U3D_130; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3Ddd7U3D_130() { return &___U3Ddd7U3D_130; }
	inline void set_U3Ddd7U3D_130(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3Ddd7U3D_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddd7U3D_130), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddd8U3D_131() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd8U3D_131)); }
	inline U3DaFU3D_tEC50DC43ED2470AD2E709033786613EF4C82FAEE * get_U3Ddd8U3D_131() const { return ___U3Ddd8U3D_131; }
	inline U3DaFU3D_tEC50DC43ED2470AD2E709033786613EF4C82FAEE ** get_address_of_U3Ddd8U3D_131() { return &___U3Ddd8U3D_131; }
	inline void set_U3Ddd8U3D_131(U3DaFU3D_tEC50DC43ED2470AD2E709033786613EF4C82FAEE * value)
	{
		___U3Ddd8U3D_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddd8U3D_131), (void*)value);
	}

	inline static int32_t get_offset_of_U3Ddd9U3D_132() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3Ddd9U3D_132)); }
	inline List_1_t749B78137B15D528DC4249E3D709BEC399DCC586 * get_U3Ddd9U3D_132() const { return ___U3Ddd9U3D_132; }
	inline List_1_t749B78137B15D528DC4249E3D709BEC399DCC586 ** get_address_of_U3Ddd9U3D_132() { return &___U3Ddd9U3D_132; }
	inline void set_U3Ddd9U3D_132(List_1_t749B78137B15D528DC4249E3D709BEC399DCC586 * value)
	{
		___U3Ddd9U3D_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Ddd9U3D_132), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEAU3D_133() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEAU3D_133)); }
	inline List_1_t8D1CC7B7BD9A25A0AEFAB75788513F0E6872A8F6 * get_U3DdEAU3D_133() const { return ___U3DdEAU3D_133; }
	inline List_1_t8D1CC7B7BD9A25A0AEFAB75788513F0E6872A8F6 ** get_address_of_U3DdEAU3D_133() { return &___U3DdEAU3D_133; }
	inline void set_U3DdEAU3D_133(List_1_t8D1CC7B7BD9A25A0AEFAB75788513F0E6872A8F6 * value)
	{
		___U3DdEAU3D_133 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEAU3D_133), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEaU3D_134() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEaU3D_134)); }
	inline List_1_tAB900087BFDB10510EA560D44CD8C44340BA488E * get_U3DdEaU3D_134() const { return ___U3DdEaU3D_134; }
	inline List_1_tAB900087BFDB10510EA560D44CD8C44340BA488E ** get_address_of_U3DdEaU3D_134() { return &___U3DdEaU3D_134; }
	inline void set_U3DdEaU3D_134(List_1_tAB900087BFDB10510EA560D44CD8C44340BA488E * value)
	{
		___U3DdEaU3D_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEaU3D_134), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEBU3D_135() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEBU3D_135)); }
	inline List_1_t6F1E18116D3E03E7EB30BE7619135E5FC33F0522 * get_U3DdEBU3D_135() const { return ___U3DdEBU3D_135; }
	inline List_1_t6F1E18116D3E03E7EB30BE7619135E5FC33F0522 ** get_address_of_U3DdEBU3D_135() { return &___U3DdEBU3D_135; }
	inline void set_U3DdEBU3D_135(List_1_t6F1E18116D3E03E7EB30BE7619135E5FC33F0522 * value)
	{
		___U3DdEBU3D_135 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEBU3D_135), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEbU3D_136() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEbU3D_136)); }
	inline List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 * get_U3DdEbU3D_136() const { return ___U3DdEbU3D_136; }
	inline List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 ** get_address_of_U3DdEbU3D_136() { return &___U3DdEbU3D_136; }
	inline void set_U3DdEbU3D_136(List_1_t920D54C5AD6FAE355BC73ECF4D86013BFB9FEF20 * value)
	{
		___U3DdEbU3D_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEbU3D_136), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdECU3D_137() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdECU3D_137)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U3DdECU3D_137() const { return ___U3DdECU3D_137; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U3DdECU3D_137() { return &___U3DdECU3D_137; }
	inline void set_U3DdECU3D_137(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U3DdECU3D_137 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdECU3D_137), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEcU3D_138() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEcU3D_138)); }
	inline Dictionary_2_t9C4AE7647757A769B59918C81809D1A8F5C3E673 * get_U3DdEcU3D_138() const { return ___U3DdEcU3D_138; }
	inline Dictionary_2_t9C4AE7647757A769B59918C81809D1A8F5C3E673 ** get_address_of_U3DdEcU3D_138() { return &___U3DdEcU3D_138; }
	inline void set_U3DdEcU3D_138(Dictionary_2_t9C4AE7647757A769B59918C81809D1A8F5C3E673 * value)
	{
		___U3DdEcU3D_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEcU3D_138), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEDU3D_139() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEDU3D_139)); }
	inline Dictionary_2_tCCDCA6FEB397FF22484719482A3D6A9E10A95F31 * get_U3DdEDU3D_139() const { return ___U3DdEDU3D_139; }
	inline Dictionary_2_tCCDCA6FEB397FF22484719482A3D6A9E10A95F31 ** get_address_of_U3DdEDU3D_139() { return &___U3DdEDU3D_139; }
	inline void set_U3DdEDU3D_139(Dictionary_2_tCCDCA6FEB397FF22484719482A3D6A9E10A95F31 * value)
	{
		___U3DdEDU3D_139 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEDU3D_139), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEdU3D_140() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8, ___U3DdEdU3D_140)); }
	inline bool get_U3DdEdU3D_140() const { return ___U3DdEdU3D_140; }
	inline bool* get_address_of_U3DdEdU3D_140() { return &___U3DdEdU3D_140; }
	inline void set_U3DdEdU3D_140(bool value)
	{
		___U3DdEdU3D_140 = value;
	}
};

struct MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::=dCa=
	int32_t ___U3DdCaU3D_6;
	// UnityEngine.Vector4 Microsoft.Maps.Unity.MapRendererBase::=dCb=
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___U3DdCbU3D_8;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::=dCC=
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U3DdCCU3D_9;
	// Microsoft.Geospatial.TileId[] Microsoft.Maps.Unity.MapRendererBase::=dCc=
	TileIdU5BU5D_t03BEEEB0BEEF0C5D175E1C9B69C38D44C785789F* ___U3DdCcU3D_10;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::=dcE=
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3DdcEU3D_73;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::=dce=
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3DdceU3D_74;
	// UnityEngine.Vector3[] Microsoft.Maps.Unity.MapRendererBase::=dEE=
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3DdEEU3D_141;
	// =aaF= Microsoft.Maps.Unity.MapRendererBase::=dEe=
	U3DaaFU3D_tC1D9DBCE9418F650E7646068C965CC6D33660C31 * ___U3DdEeU3D_142;
	// UnityEngine.Vector2[] Microsoft.Maps.Unity.MapRendererBase::=dEf=
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3DdEfU3D_144;

public:
	inline static int32_t get_offset_of_U3DdCaU3D_6() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdCaU3D_6)); }
	inline int32_t get_U3DdCaU3D_6() const { return ___U3DdCaU3D_6; }
	inline int32_t* get_address_of_U3DdCaU3D_6() { return &___U3DdCaU3D_6; }
	inline void set_U3DdCaU3D_6(int32_t value)
	{
		___U3DdCaU3D_6 = value;
	}

	inline static int32_t get_offset_of_U3DdCbU3D_8() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdCbU3D_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_U3DdCbU3D_8() const { return ___U3DdCbU3D_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_U3DdCbU3D_8() { return &___U3DdCbU3D_8; }
	inline void set_U3DdCbU3D_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___U3DdCbU3D_8 = value;
	}

	inline static int32_t get_offset_of_U3DdCCU3D_9() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdCCU3D_9)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U3DdCCU3D_9() const { return ___U3DdCCU3D_9; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U3DdCCU3D_9() { return &___U3DdCCU3D_9; }
	inline void set_U3DdCCU3D_9(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U3DdCCU3D_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCCU3D_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdCcU3D_10() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdCcU3D_10)); }
	inline TileIdU5BU5D_t03BEEEB0BEEF0C5D175E1C9B69C38D44C785789F* get_U3DdCcU3D_10() const { return ___U3DdCcU3D_10; }
	inline TileIdU5BU5D_t03BEEEB0BEEF0C5D175E1C9B69C38D44C785789F** get_address_of_U3DdCcU3D_10() { return &___U3DdCcU3D_10; }
	inline void set_U3DdCcU3D_10(TileIdU5BU5D_t03BEEEB0BEEF0C5D175E1C9B69C38D44C785789F* value)
	{
		___U3DdCcU3D_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdCcU3D_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdcEU3D_73() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdcEU3D_73)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3DdcEU3D_73() const { return ___U3DdcEU3D_73; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3DdcEU3D_73() { return &___U3DdcEU3D_73; }
	inline void set_U3DdcEU3D_73(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3DdcEU3D_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdcEU3D_73), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdceU3D_74() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdceU3D_74)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3DdceU3D_74() const { return ___U3DdceU3D_74; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3DdceU3D_74() { return &___U3DdceU3D_74; }
	inline void set_U3DdceU3D_74(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3DdceU3D_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdceU3D_74), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEEU3D_141() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdEEU3D_141)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3DdEEU3D_141() const { return ___U3DdEEU3D_141; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3DdEEU3D_141() { return &___U3DdEEU3D_141; }
	inline void set_U3DdEEU3D_141(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3DdEEU3D_141 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEEU3D_141), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEeU3D_142() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdEeU3D_142)); }
	inline U3DaaFU3D_tC1D9DBCE9418F650E7646068C965CC6D33660C31 * get_U3DdEeU3D_142() const { return ___U3DdEeU3D_142; }
	inline U3DaaFU3D_tC1D9DBCE9418F650E7646068C965CC6D33660C31 ** get_address_of_U3DdEeU3D_142() { return &___U3DdEeU3D_142; }
	inline void set_U3DdEeU3D_142(U3DaaFU3D_tC1D9DBCE9418F650E7646068C965CC6D33660C31 * value)
	{
		___U3DdEeU3D_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEeU3D_142), (void*)value);
	}

	inline static int32_t get_offset_of_U3DdEfU3D_144() { return static_cast<int32_t>(offsetof(MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8_StaticFields, ___U3DdEfU3D_144)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3DdEfU3D_144() const { return ___U3DdEfU3D_144; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3DdEfU3D_144() { return &___U3DdEfU3D_144; }
	inline void set_U3DdEfU3D_144(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3DdEfU3D_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3DdEfU3D_144), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018  : public BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_21;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_25;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018, ___U3CSourceIdU3Ek__BackingField_21)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_21() const { return ___U3CSourceIdU3Ek__BackingField_21; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_21() { return &___U3CSourceIdU3Ek__BackingField_21; }
	inline void set_U3CSourceIdU3Ek__BackingField_21(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018, ___U3CSourceNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_22() const { return ___U3CSourceNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_22() { return &___U3CSourceNameU3Ek__BackingField_22; }
	inline void set_U3CSourceNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018, ___currentDisplayType_23)); }
	inline int32_t get_currentDisplayType_23() const { return ___currentDisplayType_23; }
	inline int32_t* get_address_of_currentDisplayType_23() { return &___currentDisplayType_23; }
	inline void set_currentDisplayType_23(int32_t value)
	{
		___currentDisplayType_23 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018, ___cameraOpaqueLastFrame_24)); }
	inline bool get_cameraOpaqueLastFrame_24() const { return ___cameraOpaqueLastFrame_24; }
	inline bool* get_address_of_cameraOpaqueLastFrame_24() { return &___cameraOpaqueLastFrame_24; }
	inline void set_cameraOpaqueLastFrame_24(bool value)
	{
		___cameraOpaqueLastFrame_24 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018, ___useFallbackBehavior_25)); }
	inline bool get_useFallbackBehavior_25() const { return ___useFallbackBehavior_25; }
	inline bool* get_address_of_useFallbackBehavior_25() { return &___useFallbackBehavior_25; }
	inline void set_useFallbackBehavior_25(bool value)
	{
		___useFallbackBehavior_25 = value;
	}
};

struct MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_StaticFields, ___ApplySettingsForOpaquePerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_27() const { return ___ApplySettingsForOpaquePerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_27() { return &___ApplySettingsForOpaquePerfMarker_27; }
	inline void set_ApplySettingsForOpaquePerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_StaticFields, ___ApplySettingsForTransparentPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_28() const { return ___ApplySettingsForTransparentPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_28() { return &___ApplySettingsForTransparentPerfMarker_28; }
	inline void set_ApplySettingsForTransparentPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0  : public BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputEnabled_22;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputDisabled_23;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_tD231B0FE8E12F9063AFA90264554E168AFF9ED49 * ___U3CDetectedInputSourcesU3Ek__BackingField_24;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_t97900A99093675AC7781A6DDC6BC936AC06D65DD * ___U3CDetectedControllersU3Ek__BackingField_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_tE45D76E1A8D9BA494BF55C4278B07085F596531C * ___inputSystemProfile_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_28;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___modalInputStack_29;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___fallbackInputStack_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_32;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_tD73ADFF5066F275CBDDB12927E84451896BB64AF * ___sourceStateEventData_33;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_t306EFD6435FC406790B17DC7E152F70669D3C819 * ___sourceTrackingEventData_34;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_t2CD7CC2A4AA5E71C2E7D773BCA2529DBB0F07B2C * ___sourceVector2EventData_35;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_t4455D4E130088AD7C19203DE19C44E699C673E6F * ___sourcePositionEventData_36;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_t3374D0423813BCA5A08E4DDA8E84E939503410DD * ___sourceRotationEventData_37;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_tC583F3A3AF345462CAF35F8FE172B48BA424ACFB * ___sourcePoseEventData_38;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_t4E05B07D0BE457E9D27A57B8F1EF9BE8F5B73C11 * ___focusEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_tEF148754379FEB16FF4BCBFB1280F49BFD2AB1A4 * ___inputEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_t69E4835EE1FAFD2F3C032C959845B30467D44C63 * ___pointerEventData_41;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_t4293B466715ACFF964D3D46A1144413025DFD899 * ___floatInputEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t00A6CDFCDE793F6944C6F28A85C8022BF58457A5 * ___vector2InputEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_t2641CF17115B06E5528E3C9A50B92A2DAE6DA588 * ___positionInputEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_t43C745E119B1CCB4D5B6DE207D56E331F5B4D63B * ___rotationInputEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_t1C9407D0615672403CAB8C08C4373FDBC3CFB671 * ___poseInputEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_t3320F8F0904D167AE5ADA44348F6A89AD5006F5B * ___jointPoseInputEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_t7457B291BC78E35EDF08153E6AC310B7B09AB66C * ___handMeshInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_tAF399F59110AF3A8878F299D2ECFD95DE6E489BA * ___speechEventData_49;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_t14CA00A16EB6EF4161094AC72689655FF3D474A6 * ___dictationEventData_50;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_t219F33CCB967AA80D2EA2F888342B5DE31C43252 * ___handTrackingInputEventData_51;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_t2EF86D6B6C74CF0455D77C65EB30461A4A32158C * ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModuleChecked
	bool ___inputModuleChecked_53;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModule
	MixedRealityInputModule_t4EF597EF9317F1830A4A9B0D5075CEEACFF2FA11 * ___inputModule_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___U3CNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CNameU3Ek__BackingField_21() const { return ___U3CNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_21() { return &___U3CNameU3Ek__BackingField_21; }
	inline void set_U3CNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_InputEnabled_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___InputEnabled_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputEnabled_22() const { return ___InputEnabled_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputEnabled_22() { return &___InputEnabled_22; }
	inline void set_InputEnabled_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputEnabled_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputEnabled_22), (void*)value);
	}

	inline static int32_t get_offset_of_InputDisabled_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___InputDisabled_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputDisabled_23() const { return ___InputDisabled_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputDisabled_23() { return &___InputDisabled_23; }
	inline void set_InputDisabled_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputDisabled_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDisabled_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___U3CDetectedInputSourcesU3Ek__BackingField_24)); }
	inline HashSet_1_tD231B0FE8E12F9063AFA90264554E168AFF9ED49 * get_U3CDetectedInputSourcesU3Ek__BackingField_24() const { return ___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline HashSet_1_tD231B0FE8E12F9063AFA90264554E168AFF9ED49 ** get_address_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return &___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline void set_U3CDetectedInputSourcesU3Ek__BackingField_24(HashSet_1_tD231B0FE8E12F9063AFA90264554E168AFF9ED49 * value)
	{
		___U3CDetectedInputSourcesU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedInputSourcesU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedControllersU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___U3CDetectedControllersU3Ek__BackingField_25)); }
	inline HashSet_1_t97900A99093675AC7781A6DDC6BC936AC06D65DD * get_U3CDetectedControllersU3Ek__BackingField_25() const { return ___U3CDetectedControllersU3Ek__BackingField_25; }
	inline HashSet_1_t97900A99093675AC7781A6DDC6BC936AC06D65DD ** get_address_of_U3CDetectedControllersU3Ek__BackingField_25() { return &___U3CDetectedControllersU3Ek__BackingField_25; }
	inline void set_U3CDetectedControllersU3Ek__BackingField_25(HashSet_1_t97900A99093675AC7781A6DDC6BC936AC06D65DD * value)
	{
		___U3CDetectedControllersU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedControllersU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___inputSystemProfile_26)); }
	inline MixedRealityInputSystemProfile_tE45D76E1A8D9BA494BF55C4278B07085F596531C * get_inputSystemProfile_26() const { return ___inputSystemProfile_26; }
	inline MixedRealityInputSystemProfile_tE45D76E1A8D9BA494BF55C4278B07085F596531C ** get_address_of_inputSystemProfile_26() { return &___inputSystemProfile_26; }
	inline void set_inputSystemProfile_26(MixedRealityInputSystemProfile_tE45D76E1A8D9BA494BF55C4278B07085F596531C * value)
	{
		___inputSystemProfile_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeProviderU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___U3CGazeProviderU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CGazeProviderU3Ek__BackingField_27() const { return ___U3CGazeProviderU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CGazeProviderU3Ek__BackingField_27() { return &___U3CGazeProviderU3Ek__BackingField_27; }
	inline void set_U3CGazeProviderU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CGazeProviderU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeProviderU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___U3CEyeGazeProviderU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEyeGazeProviderU3Ek__BackingField_28() const { return ___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return &___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline void set_U3CEyeGazeProviderU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEyeGazeProviderU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEyeGazeProviderU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_modalInputStack_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___modalInputStack_29)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_modalInputStack_29() const { return ___modalInputStack_29; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_modalInputStack_29() { return &___modalInputStack_29; }
	inline void set_modalInputStack_29(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___modalInputStack_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalInputStack_29), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___fallbackInputStack_30)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_fallbackInputStack_30() const { return ___fallbackInputStack_30; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_fallbackInputStack_30() { return &___fallbackInputStack_30; }
	inline void set_fallbackInputStack_30(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___fallbackInputStack_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackInputStack_30), (void*)value);
	}

	inline static int32_t get_offset_of_disabledRefCount_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___disabledRefCount_31)); }
	inline int32_t get_disabledRefCount_31() const { return ___disabledRefCount_31; }
	inline int32_t* get_address_of_disabledRefCount_31() { return &___disabledRefCount_31; }
	inline void set_disabledRefCount_31(int32_t value)
	{
		___disabledRefCount_31 = value;
	}

	inline static int32_t get_offset_of_isInputModuleAdded_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___isInputModuleAdded_32)); }
	inline bool get_isInputModuleAdded_32() const { return ___isInputModuleAdded_32; }
	inline bool* get_address_of_isInputModuleAdded_32() { return &___isInputModuleAdded_32; }
	inline void set_isInputModuleAdded_32(bool value)
	{
		___isInputModuleAdded_32 = value;
	}

	inline static int32_t get_offset_of_sourceStateEventData_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___sourceStateEventData_33)); }
	inline SourceStateEventData_tD73ADFF5066F275CBDDB12927E84451896BB64AF * get_sourceStateEventData_33() const { return ___sourceStateEventData_33; }
	inline SourceStateEventData_tD73ADFF5066F275CBDDB12927E84451896BB64AF ** get_address_of_sourceStateEventData_33() { return &___sourceStateEventData_33; }
	inline void set_sourceStateEventData_33(SourceStateEventData_tD73ADFF5066F275CBDDB12927E84451896BB64AF * value)
	{
		___sourceStateEventData_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceStateEventData_33), (void*)value);
	}

	inline static int32_t get_offset_of_sourceTrackingEventData_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___sourceTrackingEventData_34)); }
	inline SourcePoseEventData_1_t306EFD6435FC406790B17DC7E152F70669D3C819 * get_sourceTrackingEventData_34() const { return ___sourceTrackingEventData_34; }
	inline SourcePoseEventData_1_t306EFD6435FC406790B17DC7E152F70669D3C819 ** get_address_of_sourceTrackingEventData_34() { return &___sourceTrackingEventData_34; }
	inline void set_sourceTrackingEventData_34(SourcePoseEventData_1_t306EFD6435FC406790B17DC7E152F70669D3C819 * value)
	{
		___sourceTrackingEventData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceTrackingEventData_34), (void*)value);
	}

	inline static int32_t get_offset_of_sourceVector2EventData_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___sourceVector2EventData_35)); }
	inline SourcePoseEventData_1_t2CD7CC2A4AA5E71C2E7D773BCA2529DBB0F07B2C * get_sourceVector2EventData_35() const { return ___sourceVector2EventData_35; }
	inline SourcePoseEventData_1_t2CD7CC2A4AA5E71C2E7D773BCA2529DBB0F07B2C ** get_address_of_sourceVector2EventData_35() { return &___sourceVector2EventData_35; }
	inline void set_sourceVector2EventData_35(SourcePoseEventData_1_t2CD7CC2A4AA5E71C2E7D773BCA2529DBB0F07B2C * value)
	{
		___sourceVector2EventData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceVector2EventData_35), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___sourcePositionEventData_36)); }
	inline SourcePoseEventData_1_t4455D4E130088AD7C19203DE19C44E699C673E6F * get_sourcePositionEventData_36() const { return ___sourcePositionEventData_36; }
	inline SourcePoseEventData_1_t4455D4E130088AD7C19203DE19C44E699C673E6F ** get_address_of_sourcePositionEventData_36() { return &___sourcePositionEventData_36; }
	inline void set_sourcePositionEventData_36(SourcePoseEventData_1_t4455D4E130088AD7C19203DE19C44E699C673E6F * value)
	{
		___sourcePositionEventData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePositionEventData_36), (void*)value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___sourceRotationEventData_37)); }
	inline SourcePoseEventData_1_t3374D0423813BCA5A08E4DDA8E84E939503410DD * get_sourceRotationEventData_37() const { return ___sourceRotationEventData_37; }
	inline SourcePoseEventData_1_t3374D0423813BCA5A08E4DDA8E84E939503410DD ** get_address_of_sourceRotationEventData_37() { return &___sourceRotationEventData_37; }
	inline void set_sourceRotationEventData_37(SourcePoseEventData_1_t3374D0423813BCA5A08E4DDA8E84E939503410DD * value)
	{
		___sourceRotationEventData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceRotationEventData_37), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePoseEventData_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___sourcePoseEventData_38)); }
	inline SourcePoseEventData_1_tC583F3A3AF345462CAF35F8FE172B48BA424ACFB * get_sourcePoseEventData_38() const { return ___sourcePoseEventData_38; }
	inline SourcePoseEventData_1_tC583F3A3AF345462CAF35F8FE172B48BA424ACFB ** get_address_of_sourcePoseEventData_38() { return &___sourcePoseEventData_38; }
	inline void set_sourcePoseEventData_38(SourcePoseEventData_1_tC583F3A3AF345462CAF35F8FE172B48BA424ACFB * value)
	{
		___sourcePoseEventData_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePoseEventData_38), (void*)value);
	}

	inline static int32_t get_offset_of_focusEventData_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___focusEventData_39)); }
	inline FocusEventData_t4E05B07D0BE457E9D27A57B8F1EF9BE8F5B73C11 * get_focusEventData_39() const { return ___focusEventData_39; }
	inline FocusEventData_t4E05B07D0BE457E9D27A57B8F1EF9BE8F5B73C11 ** get_address_of_focusEventData_39() { return &___focusEventData_39; }
	inline void set_focusEventData_39(FocusEventData_t4E05B07D0BE457E9D27A57B8F1EF9BE8F5B73C11 * value)
	{
		___focusEventData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusEventData_39), (void*)value);
	}

	inline static int32_t get_offset_of_inputEventData_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___inputEventData_40)); }
	inline InputEventData_tEF148754379FEB16FF4BCBFB1280F49BFD2AB1A4 * get_inputEventData_40() const { return ___inputEventData_40; }
	inline InputEventData_tEF148754379FEB16FF4BCBFB1280F49BFD2AB1A4 ** get_address_of_inputEventData_40() { return &___inputEventData_40; }
	inline void set_inputEventData_40(InputEventData_tEF148754379FEB16FF4BCBFB1280F49BFD2AB1A4 * value)
	{
		___inputEventData_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEventData_40), (void*)value);
	}

	inline static int32_t get_offset_of_pointerEventData_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___pointerEventData_41)); }
	inline MixedRealityPointerEventData_t69E4835EE1FAFD2F3C032C959845B30467D44C63 * get_pointerEventData_41() const { return ___pointerEventData_41; }
	inline MixedRealityPointerEventData_t69E4835EE1FAFD2F3C032C959845B30467D44C63 ** get_address_of_pointerEventData_41() { return &___pointerEventData_41; }
	inline void set_pointerEventData_41(MixedRealityPointerEventData_t69E4835EE1FAFD2F3C032C959845B30467D44C63 * value)
	{
		___pointerEventData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerEventData_41), (void*)value);
	}

	inline static int32_t get_offset_of_floatInputEventData_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___floatInputEventData_42)); }
	inline InputEventData_1_t4293B466715ACFF964D3D46A1144413025DFD899 * get_floatInputEventData_42() const { return ___floatInputEventData_42; }
	inline InputEventData_1_t4293B466715ACFF964D3D46A1144413025DFD899 ** get_address_of_floatInputEventData_42() { return &___floatInputEventData_42; }
	inline void set_floatInputEventData_42(InputEventData_1_t4293B466715ACFF964D3D46A1144413025DFD899 * value)
	{
		___floatInputEventData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatInputEventData_42), (void*)value);
	}

	inline static int32_t get_offset_of_vector2InputEventData_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___vector2InputEventData_43)); }
	inline InputEventData_1_t00A6CDFCDE793F6944C6F28A85C8022BF58457A5 * get_vector2InputEventData_43() const { return ___vector2InputEventData_43; }
	inline InputEventData_1_t00A6CDFCDE793F6944C6F28A85C8022BF58457A5 ** get_address_of_vector2InputEventData_43() { return &___vector2InputEventData_43; }
	inline void set_vector2InputEventData_43(InputEventData_1_t00A6CDFCDE793F6944C6F28A85C8022BF58457A5 * value)
	{
		___vector2InputEventData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2InputEventData_43), (void*)value);
	}

	inline static int32_t get_offset_of_positionInputEventData_44() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___positionInputEventData_44)); }
	inline InputEventData_1_t2641CF17115B06E5528E3C9A50B92A2DAE6DA588 * get_positionInputEventData_44() const { return ___positionInputEventData_44; }
	inline InputEventData_1_t2641CF17115B06E5528E3C9A50B92A2DAE6DA588 ** get_address_of_positionInputEventData_44() { return &___positionInputEventData_44; }
	inline void set_positionInputEventData_44(InputEventData_1_t2641CF17115B06E5528E3C9A50B92A2DAE6DA588 * value)
	{
		___positionInputEventData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInputEventData_44), (void*)value);
	}

	inline static int32_t get_offset_of_rotationInputEventData_45() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___rotationInputEventData_45)); }
	inline InputEventData_1_t43C745E119B1CCB4D5B6DE207D56E331F5B4D63B * get_rotationInputEventData_45() const { return ___rotationInputEventData_45; }
	inline InputEventData_1_t43C745E119B1CCB4D5B6DE207D56E331F5B4D63B ** get_address_of_rotationInputEventData_45() { return &___rotationInputEventData_45; }
	inline void set_rotationInputEventData_45(InputEventData_1_t43C745E119B1CCB4D5B6DE207D56E331F5B4D63B * value)
	{
		___rotationInputEventData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationInputEventData_45), (void*)value);
	}

	inline static int32_t get_offset_of_poseInputEventData_46() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___poseInputEventData_46)); }
	inline InputEventData_1_t1C9407D0615672403CAB8C08C4373FDBC3CFB671 * get_poseInputEventData_46() const { return ___poseInputEventData_46; }
	inline InputEventData_1_t1C9407D0615672403CAB8C08C4373FDBC3CFB671 ** get_address_of_poseInputEventData_46() { return &___poseInputEventData_46; }
	inline void set_poseInputEventData_46(InputEventData_1_t1C9407D0615672403CAB8C08C4373FDBC3CFB671 * value)
	{
		___poseInputEventData_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseInputEventData_46), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoseInputEventData_47() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___jointPoseInputEventData_47)); }
	inline InputEventData_1_t3320F8F0904D167AE5ADA44348F6A89AD5006F5B * get_jointPoseInputEventData_47() const { return ___jointPoseInputEventData_47; }
	inline InputEventData_1_t3320F8F0904D167AE5ADA44348F6A89AD5006F5B ** get_address_of_jointPoseInputEventData_47() { return &___jointPoseInputEventData_47; }
	inline void set_jointPoseInputEventData_47(InputEventData_1_t3320F8F0904D167AE5ADA44348F6A89AD5006F5B * value)
	{
		___jointPoseInputEventData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoseInputEventData_47), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInputEventData_48() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___handMeshInputEventData_48)); }
	inline InputEventData_1_t7457B291BC78E35EDF08153E6AC310B7B09AB66C * get_handMeshInputEventData_48() const { return ___handMeshInputEventData_48; }
	inline InputEventData_1_t7457B291BC78E35EDF08153E6AC310B7B09AB66C ** get_address_of_handMeshInputEventData_48() { return &___handMeshInputEventData_48; }
	inline void set_handMeshInputEventData_48(InputEventData_1_t7457B291BC78E35EDF08153E6AC310B7B09AB66C * value)
	{
		___handMeshInputEventData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInputEventData_48), (void*)value);
	}

	inline static int32_t get_offset_of_speechEventData_49() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___speechEventData_49)); }
	inline SpeechEventData_tAF399F59110AF3A8878F299D2ECFD95DE6E489BA * get_speechEventData_49() const { return ___speechEventData_49; }
	inline SpeechEventData_tAF399F59110AF3A8878F299D2ECFD95DE6E489BA ** get_address_of_speechEventData_49() { return &___speechEventData_49; }
	inline void set_speechEventData_49(SpeechEventData_tAF399F59110AF3A8878F299D2ECFD95DE6E489BA * value)
	{
		___speechEventData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEventData_49), (void*)value);
	}

	inline static int32_t get_offset_of_dictationEventData_50() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___dictationEventData_50)); }
	inline DictationEventData_t14CA00A16EB6EF4161094AC72689655FF3D474A6 * get_dictationEventData_50() const { return ___dictationEventData_50; }
	inline DictationEventData_t14CA00A16EB6EF4161094AC72689655FF3D474A6 ** get_address_of_dictationEventData_50() { return &___dictationEventData_50; }
	inline void set_dictationEventData_50(DictationEventData_t14CA00A16EB6EF4161094AC72689655FF3D474A6 * value)
	{
		___dictationEventData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEventData_50), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingInputEventData_51() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___handTrackingInputEventData_51)); }
	inline HandTrackingInputEventData_t219F33CCB967AA80D2EA2F888342B5DE31C43252 * get_handTrackingInputEventData_51() const { return ___handTrackingInputEventData_51; }
	inline HandTrackingInputEventData_t219F33CCB967AA80D2EA2F888342B5DE31C43252 ** get_address_of_handTrackingInputEventData_51() { return &___handTrackingInputEventData_51; }
	inline void set_handTrackingInputEventData_51(HandTrackingInputEventData_t219F33CCB967AA80D2EA2F888342B5DE31C43252 * value)
	{
		___handTrackingInputEventData_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingInputEventData_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52)); }
	inline MixedRealityInputActionRulesProfile_t2EF86D6B6C74CF0455D77C65EB30461A4A32158C * get_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() const { return ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline MixedRealityInputActionRulesProfile_t2EF86D6B6C74CF0455D77C65EB30461A4A32158C ** get_address_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return &___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline void set_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52(MixedRealityInputActionRulesProfile_t2EF86D6B6C74CF0455D77C65EB30461A4A32158C * value)
	{
		___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_inputModuleChecked_53() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___inputModuleChecked_53)); }
	inline bool get_inputModuleChecked_53() const { return ___inputModuleChecked_53; }
	inline bool* get_address_of_inputModuleChecked_53() { return &___inputModuleChecked_53; }
	inline void set_inputModuleChecked_53(bool value)
	{
		___inputModuleChecked_53 = value;
	}

	inline static int32_t get_offset_of_inputModule_54() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0, ___inputModule_54)); }
	inline MixedRealityInputModule_t4EF597EF9317F1830A4A9B0D5075CEEACFF2FA11 * get_inputModule_54() const { return ___inputModule_54; }
	inline MixedRealityInputModule_t4EF597EF9317F1830A4A9B0D5075CEEACFF2FA11 ** get_address_of_inputModule_54() { return &___inputModule_54; }
	inline void set_inputModule_54(MixedRealityInputModule_t4EF597EF9317F1830A4A9B0D5075CEEACFF2FA11 * value)
	{
		___inputModule_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputModule_54), (void*)value);
	}
};

struct MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteHierarchyPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusChangedEventsPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusEventPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandlePointerEventPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToGlobalListenersPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToFallbackHandlersPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToObjectFocusedPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchModalEventPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_63;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F * ___OnSourceDetectedEventHandler_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceLostPerfMarker_65;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F * ___OnSourceLostEventHandler_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceTrackingStateChangedPerfMarker_67;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * ___OnSourceTrackingChangedEventHandler_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePositionChangedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * ___OnSourcePoseVector2ChangedEventHandler_70;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * ___OnSourcePositionChangedEventHandler_71;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceRotationChangedPerfMarker_72;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * ___OnSourceRotationChangedEventHandler_73;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePoseChangedPerfMarker_74;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * ___OnSourcePoseChangedEventHandler_75;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePreFocusChangedPerfMarker_76;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C * ___OnPreFocusChangedHandler_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusChangedPerfMarker_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C * ___OnFocusChangedHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusEnterPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D * ___OnFocusEnterEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusExitPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D * ___OnFocusExitEventHandler_83;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * ___OnPointerDownEventHandler_84;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDownPerfMarker_85;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * ___OnPointerDraggedEventHandler_86;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDraggedPerfMarker_87;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * ___OnInputClickedEventHandler_88;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerClickedPerfMarker_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * ___OnPointerUpEventHandler_90;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerUpPerfMarker_91;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 * ___OnInputDownEventHandler_92;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * ___OnInputDownWithActionEventHandler_93;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputDownPerfMarker_94;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 * ___OnInputUpEventHandler_95;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * ___OnInputUpWithActionEventHandler_96;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputUpPerfMarker_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_t4C7434B09BD407FF7193894E537456F39FAA48B5 * ___OnFloatInputChanged_98;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFloatInputChangedPerfMarker_99;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_t47AC0CA0F2337AA39F27937A93E09259A52F0FE9 * ___OnTwoDoFInputChanged_100;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePositionInputChangedPerfMarker_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_t5FE3A6A222CE641E04F2B28EFC93AD998392590A * ___OnPositionInputChanged_102;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_t1AD0B13A6C9E87756E9980A557EF726815646301 * ___OnRotationInputChanged_103;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseRotationInputChangedPerfMarker_104;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_t5D07FFB9094D6CF593075DC67233D177AD9F8DC2 * ___OnPoseInputChanged_105;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePoseInputChangedPerfMarker_106;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * ___OnGestureStarted_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * ___OnGestureStartedWithAction_108;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureStartedPerfMarker_109;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * ___OnGestureUpdated_110;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureUpdatedPerfMarker_111;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F * ___OnGestureVector2PositionUpdated_112;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 * ___OnGesturePositionUpdated_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 * ___OnGestureRotationUpdated_114;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B * ___OnGesturePoseUpdated_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * ___OnGestureCompleted_116;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * ___OnGestureCompletedWithAction_117;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCompletedPerfMarker_118;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F * ___OnGestureVector2PositionCompleted_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 * ___OnGesturePositionCompleted_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 * ___OnGestureRotationCompleted_121;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B * ___OnGesturePoseCompleted_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * ___OnGestureCanceled_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCanceledPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t509A95506CAFAA7303381C8825768207BE7952AB * ___OnSpeechKeywordRecognizedEventHandler_125;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * ___OnSpeechKeywordRecognizedWithActionEventHandler_126;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSpeechCommandRecognizedPerfMarker_127;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * ___OnDictationHypothesisEventHandler_128;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationHypothesisPerfMarker_129;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * ___OnDictationResultEventHandler_130;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationResultPerfMarker_131;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * ___OnDictationCompleteEventHandler_132;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationCompletePerfMarker_133;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * ___OnDictationErrorEventHandler_134;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationErrorPerfMarker_135;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_t4D18BCC4B98A6A810DEB13D7989E324460D6B8D6 * ___OnHandJointsUpdatedEventHandler_136;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandJointsUpdatedPerfMarker_137;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_t202CFD58AAF87392CDBCEC3211FD7746C46244AF * ___OnHandMeshUpdatedEventHandler_138;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandMeshUpdatedPerfMarker_139;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * ___OnTouchStartedEventHandler_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchStartedPerfMarker_141;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * ___OnTouchCompletedEventHandler_142;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchCompletedPerfMarker_143;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * ___OnTouchUpdatedEventHandler_144;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchUpdatedPerfMarker_145;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessRulesInternalPerfMarker_146;

public:
	inline static int32_t get_offset_of_ExecuteHierarchyPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___ExecuteHierarchyPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteHierarchyPerfMarker_20() const { return ___ExecuteHierarchyPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteHierarchyPerfMarker_20() { return &___ExecuteHierarchyPerfMarker_20; }
	inline void set_ExecuteHierarchyPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteHierarchyPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_HandleEventPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___HandleEventPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_55() const { return ___HandleEventPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_55() { return &___HandleEventPerfMarker_55; }
	inline void set_HandleEventPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_HandleFocusChangedEventsPerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___HandleFocusChangedEventsPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusChangedEventsPerfMarker_56() const { return ___HandleFocusChangedEventsPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusChangedEventsPerfMarker_56() { return &___HandleFocusChangedEventsPerfMarker_56; }
	inline void set_HandleFocusChangedEventsPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusChangedEventsPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_HandleFocusEventPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___HandleFocusEventPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusEventPerfMarker_57() const { return ___HandleFocusEventPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusEventPerfMarker_57() { return &___HandleFocusEventPerfMarker_57; }
	inline void set_HandleFocusEventPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusEventPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_HandlePointerEventPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___HandlePointerEventPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandlePointerEventPerfMarker_58() const { return ___HandlePointerEventPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandlePointerEventPerfMarker_58() { return &___HandlePointerEventPerfMarker_58; }
	inline void set_HandlePointerEventPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandlePointerEventPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToGlobalListenersPerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___DispatchEventToGlobalListenersPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToGlobalListenersPerfMarker_59() const { return ___DispatchEventToGlobalListenersPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToGlobalListenersPerfMarker_59() { return &___DispatchEventToGlobalListenersPerfMarker_59; }
	inline void set_DispatchEventToGlobalListenersPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToGlobalListenersPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToFallbackHandlersPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___DispatchEventToFallbackHandlersPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToFallbackHandlersPerfMarker_60() const { return ___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToFallbackHandlersPerfMarker_60() { return &___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline void set_DispatchEventToFallbackHandlersPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToFallbackHandlersPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToObjectFocusedPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___DispatchEventToObjectFocusedPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToObjectFocusedPerfMarker_61() const { return ___DispatchEventToObjectFocusedPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToObjectFocusedPerfMarker_61() { return &___DispatchEventToObjectFocusedPerfMarker_61; }
	inline void set_DispatchEventToObjectFocusedPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToObjectFocusedPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_DispatchModalEventPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___DispatchModalEventPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchModalEventPerfMarker_62() const { return ___DispatchModalEventPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchModalEventPerfMarker_62() { return &___DispatchModalEventPerfMarker_62; }
	inline void set_DispatchModalEventPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchModalEventPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseSourceDetectedPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_63() const { return ___RaiseSourceDetectedPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_63() { return &___RaiseSourceDetectedPerfMarker_63; }
	inline void set_RaiseSourceDetectedPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_64() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSourceDetectedEventHandler_64)); }
	inline EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F * get_OnSourceDetectedEventHandler_64() const { return ___OnSourceDetectedEventHandler_64; }
	inline EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F ** get_address_of_OnSourceDetectedEventHandler_64() { return &___OnSourceDetectedEventHandler_64; }
	inline void set_OnSourceDetectedEventHandler_64(EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F * value)
	{
		___OnSourceDetectedEventHandler_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceDetectedEventHandler_64), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceLostPerfMarker_65() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseSourceLostPerfMarker_65)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceLostPerfMarker_65() const { return ___RaiseSourceLostPerfMarker_65; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceLostPerfMarker_65() { return &___RaiseSourceLostPerfMarker_65; }
	inline void set_RaiseSourceLostPerfMarker_65(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceLostPerfMarker_65 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_66() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSourceLostEventHandler_66)); }
	inline EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F * get_OnSourceLostEventHandler_66() const { return ___OnSourceLostEventHandler_66; }
	inline EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F ** get_address_of_OnSourceLostEventHandler_66() { return &___OnSourceLostEventHandler_66; }
	inline void set_OnSourceLostEventHandler_66(EventFunction_1_t497590FB5EE4C5015C9B6532CF79939BCD7FFF5F * value)
	{
		___OnSourceLostEventHandler_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceLostEventHandler_66), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseSourceTrackingStateChangedPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceTrackingStateChangedPerfMarker_67() const { return ___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return &___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline void set_RaiseSourceTrackingStateChangedPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceTrackingStateChangedPerfMarker_67 = value;
	}

	inline static int32_t get_offset_of_OnSourceTrackingChangedEventHandler_68() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSourceTrackingChangedEventHandler_68)); }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * get_OnSourceTrackingChangedEventHandler_68() const { return ___OnSourceTrackingChangedEventHandler_68; }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA ** get_address_of_OnSourceTrackingChangedEventHandler_68() { return &___OnSourceTrackingChangedEventHandler_68; }
	inline void set_OnSourceTrackingChangedEventHandler_68(EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * value)
	{
		___OnSourceTrackingChangedEventHandler_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceTrackingChangedEventHandler_68), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePositionChangedPerfMarker_69() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseSourcePositionChangedPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePositionChangedPerfMarker_69() const { return ___RaiseSourcePositionChangedPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePositionChangedPerfMarker_69() { return &___RaiseSourcePositionChangedPerfMarker_69; }
	inline void set_RaiseSourcePositionChangedPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePositionChangedPerfMarker_69 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseVector2ChangedEventHandler_70() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSourcePoseVector2ChangedEventHandler_70)); }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * get_OnSourcePoseVector2ChangedEventHandler_70() const { return ___OnSourcePoseVector2ChangedEventHandler_70; }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA ** get_address_of_OnSourcePoseVector2ChangedEventHandler_70() { return &___OnSourcePoseVector2ChangedEventHandler_70; }
	inline void set_OnSourcePoseVector2ChangedEventHandler_70(EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * value)
	{
		___OnSourcePoseVector2ChangedEventHandler_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseVector2ChangedEventHandler_70), (void*)value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_71() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSourcePositionChangedEventHandler_71)); }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * get_OnSourcePositionChangedEventHandler_71() const { return ___OnSourcePositionChangedEventHandler_71; }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA ** get_address_of_OnSourcePositionChangedEventHandler_71() { return &___OnSourcePositionChangedEventHandler_71; }
	inline void set_OnSourcePositionChangedEventHandler_71(EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * value)
	{
		___OnSourcePositionChangedEventHandler_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePositionChangedEventHandler_71), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceRotationChangedPerfMarker_72() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseSourceRotationChangedPerfMarker_72)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceRotationChangedPerfMarker_72() const { return ___RaiseSourceRotationChangedPerfMarker_72; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceRotationChangedPerfMarker_72() { return &___RaiseSourceRotationChangedPerfMarker_72; }
	inline void set_RaiseSourceRotationChangedPerfMarker_72(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceRotationChangedPerfMarker_72 = value;
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_73() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSourceRotationChangedEventHandler_73)); }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * get_OnSourceRotationChangedEventHandler_73() const { return ___OnSourceRotationChangedEventHandler_73; }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA ** get_address_of_OnSourceRotationChangedEventHandler_73() { return &___OnSourceRotationChangedEventHandler_73; }
	inline void set_OnSourceRotationChangedEventHandler_73(EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * value)
	{
		___OnSourceRotationChangedEventHandler_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceRotationChangedEventHandler_73), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePoseChangedPerfMarker_74() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseSourcePoseChangedPerfMarker_74)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePoseChangedPerfMarker_74() const { return ___RaiseSourcePoseChangedPerfMarker_74; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePoseChangedPerfMarker_74() { return &___RaiseSourcePoseChangedPerfMarker_74; }
	inline void set_RaiseSourcePoseChangedPerfMarker_74(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePoseChangedPerfMarker_74 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseChangedEventHandler_75() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSourcePoseChangedEventHandler_75)); }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * get_OnSourcePoseChangedEventHandler_75() const { return ___OnSourcePoseChangedEventHandler_75; }
	inline EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA ** get_address_of_OnSourcePoseChangedEventHandler_75() { return &___OnSourcePoseChangedEventHandler_75; }
	inline void set_OnSourcePoseChangedEventHandler_75(EventFunction_1_t78C7229C230C625A056C8AE9C870D60E9FB4E8EA * value)
	{
		___OnSourcePoseChangedEventHandler_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseChangedEventHandler_75), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePreFocusChangedPerfMarker_76() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaisePreFocusChangedPerfMarker_76)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePreFocusChangedPerfMarker_76() const { return ___RaisePreFocusChangedPerfMarker_76; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePreFocusChangedPerfMarker_76() { return &___RaisePreFocusChangedPerfMarker_76; }
	inline void set_RaisePreFocusChangedPerfMarker_76(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePreFocusChangedPerfMarker_76 = value;
	}

	inline static int32_t get_offset_of_OnPreFocusChangedHandler_77() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnPreFocusChangedHandler_77)); }
	inline EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C * get_OnPreFocusChangedHandler_77() const { return ___OnPreFocusChangedHandler_77; }
	inline EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C ** get_address_of_OnPreFocusChangedHandler_77() { return &___OnPreFocusChangedHandler_77; }
	inline void set_OnPreFocusChangedHandler_77(EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C * value)
	{
		___OnPreFocusChangedHandler_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreFocusChangedHandler_77), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusChangedPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseFocusChangedPerfMarker_78)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusChangedPerfMarker_78() const { return ___RaiseFocusChangedPerfMarker_78; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusChangedPerfMarker_78() { return &___RaiseFocusChangedPerfMarker_78; }
	inline void set_RaiseFocusChangedPerfMarker_78(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusChangedPerfMarker_78 = value;
	}

	inline static int32_t get_offset_of_OnFocusChangedHandler_79() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnFocusChangedHandler_79)); }
	inline EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C * get_OnFocusChangedHandler_79() const { return ___OnFocusChangedHandler_79; }
	inline EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C ** get_address_of_OnFocusChangedHandler_79() { return &___OnFocusChangedHandler_79; }
	inline void set_OnFocusChangedHandler_79(EventFunction_1_tA6654B76BD24A937F20BFF9F47561B5DF11B6C8C * value)
	{
		___OnFocusChangedHandler_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusChangedHandler_79), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusEnterPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseFocusEnterPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusEnterPerfMarker_80() const { return ___RaiseFocusEnterPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusEnterPerfMarker_80() { return &___RaiseFocusEnterPerfMarker_80; }
	inline void set_RaiseFocusEnterPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusEnterPerfMarker_80 = value;
	}

	inline static int32_t get_offset_of_OnFocusEnterEventHandler_81() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnFocusEnterEventHandler_81)); }
	inline EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D * get_OnFocusEnterEventHandler_81() const { return ___OnFocusEnterEventHandler_81; }
	inline EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D ** get_address_of_OnFocusEnterEventHandler_81() { return &___OnFocusEnterEventHandler_81; }
	inline void set_OnFocusEnterEventHandler_81(EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D * value)
	{
		___OnFocusEnterEventHandler_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusEnterEventHandler_81), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusExitPerfMarker_82() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseFocusExitPerfMarker_82)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusExitPerfMarker_82() const { return ___RaiseFocusExitPerfMarker_82; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusExitPerfMarker_82() { return &___RaiseFocusExitPerfMarker_82; }
	inline void set_RaiseFocusExitPerfMarker_82(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusExitPerfMarker_82 = value;
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_83() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnFocusExitEventHandler_83)); }
	inline EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D * get_OnFocusExitEventHandler_83() const { return ___OnFocusExitEventHandler_83; }
	inline EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D ** get_address_of_OnFocusExitEventHandler_83() { return &___OnFocusExitEventHandler_83; }
	inline void set_OnFocusExitEventHandler_83(EventFunction_1_t21174C3FB7E7B7CE698F6E77A63591D5A956155D * value)
	{
		___OnFocusExitEventHandler_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusExitEventHandler_83), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerDownEventHandler_84() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnPointerDownEventHandler_84)); }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * get_OnPointerDownEventHandler_84() const { return ___OnPointerDownEventHandler_84; }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 ** get_address_of_OnPointerDownEventHandler_84() { return &___OnPointerDownEventHandler_84; }
	inline void set_OnPointerDownEventHandler_84(EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * value)
	{
		___OnPointerDownEventHandler_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDownEventHandler_84), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDownPerfMarker_85() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaisePointerDownPerfMarker_85)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDownPerfMarker_85() const { return ___RaisePointerDownPerfMarker_85; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDownPerfMarker_85() { return &___RaisePointerDownPerfMarker_85; }
	inline void set_RaisePointerDownPerfMarker_85(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDownPerfMarker_85 = value;
	}

	inline static int32_t get_offset_of_OnPointerDraggedEventHandler_86() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnPointerDraggedEventHandler_86)); }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * get_OnPointerDraggedEventHandler_86() const { return ___OnPointerDraggedEventHandler_86; }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 ** get_address_of_OnPointerDraggedEventHandler_86() { return &___OnPointerDraggedEventHandler_86; }
	inline void set_OnPointerDraggedEventHandler_86(EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * value)
	{
		___OnPointerDraggedEventHandler_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDraggedEventHandler_86), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDraggedPerfMarker_87() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaisePointerDraggedPerfMarker_87)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDraggedPerfMarker_87() const { return ___RaisePointerDraggedPerfMarker_87; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDraggedPerfMarker_87() { return &___RaisePointerDraggedPerfMarker_87; }
	inline void set_RaisePointerDraggedPerfMarker_87(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDraggedPerfMarker_87 = value;
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_88() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnInputClickedEventHandler_88)); }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * get_OnInputClickedEventHandler_88() const { return ___OnInputClickedEventHandler_88; }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 ** get_address_of_OnInputClickedEventHandler_88() { return &___OnInputClickedEventHandler_88; }
	inline void set_OnInputClickedEventHandler_88(EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * value)
	{
		___OnInputClickedEventHandler_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputClickedEventHandler_88), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerClickedPerfMarker_89() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaisePointerClickedPerfMarker_89)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerClickedPerfMarker_89() const { return ___RaisePointerClickedPerfMarker_89; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerClickedPerfMarker_89() { return &___RaisePointerClickedPerfMarker_89; }
	inline void set_RaisePointerClickedPerfMarker_89(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerClickedPerfMarker_89 = value;
	}

	inline static int32_t get_offset_of_OnPointerUpEventHandler_90() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnPointerUpEventHandler_90)); }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * get_OnPointerUpEventHandler_90() const { return ___OnPointerUpEventHandler_90; }
	inline EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 ** get_address_of_OnPointerUpEventHandler_90() { return &___OnPointerUpEventHandler_90; }
	inline void set_OnPointerUpEventHandler_90(EventFunction_1_t8A7A15ABE8CAB37A110E03A0A934445577AF0257 * value)
	{
		___OnPointerUpEventHandler_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerUpEventHandler_90), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerUpPerfMarker_91() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaisePointerUpPerfMarker_91)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerUpPerfMarker_91() const { return ___RaisePointerUpPerfMarker_91; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerUpPerfMarker_91() { return &___RaisePointerUpPerfMarker_91; }
	inline void set_RaisePointerUpPerfMarker_91(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerUpPerfMarker_91 = value;
	}

	inline static int32_t get_offset_of_OnInputDownEventHandler_92() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnInputDownEventHandler_92)); }
	inline EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 * get_OnInputDownEventHandler_92() const { return ___OnInputDownEventHandler_92; }
	inline EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 ** get_address_of_OnInputDownEventHandler_92() { return &___OnInputDownEventHandler_92; }
	inline void set_OnInputDownEventHandler_92(EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 * value)
	{
		___OnInputDownEventHandler_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownEventHandler_92), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputDownWithActionEventHandler_93() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnInputDownWithActionEventHandler_93)); }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * get_OnInputDownWithActionEventHandler_93() const { return ___OnInputDownWithActionEventHandler_93; }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 ** get_address_of_OnInputDownWithActionEventHandler_93() { return &___OnInputDownWithActionEventHandler_93; }
	inline void set_OnInputDownWithActionEventHandler_93(EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * value)
	{
		___OnInputDownWithActionEventHandler_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownWithActionEventHandler_93), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputDownPerfMarker_94() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseOnInputDownPerfMarker_94)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputDownPerfMarker_94() const { return ___RaiseOnInputDownPerfMarker_94; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputDownPerfMarker_94() { return &___RaiseOnInputDownPerfMarker_94; }
	inline void set_RaiseOnInputDownPerfMarker_94(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputDownPerfMarker_94 = value;
	}

	inline static int32_t get_offset_of_OnInputUpEventHandler_95() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnInputUpEventHandler_95)); }
	inline EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 * get_OnInputUpEventHandler_95() const { return ___OnInputUpEventHandler_95; }
	inline EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 ** get_address_of_OnInputUpEventHandler_95() { return &___OnInputUpEventHandler_95; }
	inline void set_OnInputUpEventHandler_95(EventFunction_1_t0FD6659E335D60E24510A3C30960A5EDCFE087B9 * value)
	{
		___OnInputUpEventHandler_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpEventHandler_95), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputUpWithActionEventHandler_96() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnInputUpWithActionEventHandler_96)); }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * get_OnInputUpWithActionEventHandler_96() const { return ___OnInputUpWithActionEventHandler_96; }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 ** get_address_of_OnInputUpWithActionEventHandler_96() { return &___OnInputUpWithActionEventHandler_96; }
	inline void set_OnInputUpWithActionEventHandler_96(EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * value)
	{
		___OnInputUpWithActionEventHandler_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpWithActionEventHandler_96), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputUpPerfMarker_97() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseOnInputUpPerfMarker_97)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputUpPerfMarker_97() const { return ___RaiseOnInputUpPerfMarker_97; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputUpPerfMarker_97() { return &___RaiseOnInputUpPerfMarker_97; }
	inline void set_RaiseOnInputUpPerfMarker_97(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputUpPerfMarker_97 = value;
	}

	inline static int32_t get_offset_of_OnFloatInputChanged_98() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnFloatInputChanged_98)); }
	inline EventFunction_1_t4C7434B09BD407FF7193894E537456F39FAA48B5 * get_OnFloatInputChanged_98() const { return ___OnFloatInputChanged_98; }
	inline EventFunction_1_t4C7434B09BD407FF7193894E537456F39FAA48B5 ** get_address_of_OnFloatInputChanged_98() { return &___OnFloatInputChanged_98; }
	inline void set_OnFloatInputChanged_98(EventFunction_1_t4C7434B09BD407FF7193894E537456F39FAA48B5 * value)
	{
		___OnFloatInputChanged_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFloatInputChanged_98), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFloatInputChangedPerfMarker_99() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseFloatInputChangedPerfMarker_99)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFloatInputChangedPerfMarker_99() const { return ___RaiseFloatInputChangedPerfMarker_99; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFloatInputChangedPerfMarker_99() { return &___RaiseFloatInputChangedPerfMarker_99; }
	inline void set_RaiseFloatInputChangedPerfMarker_99(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFloatInputChangedPerfMarker_99 = value;
	}

	inline static int32_t get_offset_of_OnTwoDoFInputChanged_100() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnTwoDoFInputChanged_100)); }
	inline EventFunction_1_t47AC0CA0F2337AA39F27937A93E09259A52F0FE9 * get_OnTwoDoFInputChanged_100() const { return ___OnTwoDoFInputChanged_100; }
	inline EventFunction_1_t47AC0CA0F2337AA39F27937A93E09259A52F0FE9 ** get_address_of_OnTwoDoFInputChanged_100() { return &___OnTwoDoFInputChanged_100; }
	inline void set_OnTwoDoFInputChanged_100(EventFunction_1_t47AC0CA0F2337AA39F27937A93E09259A52F0FE9 * value)
	{
		___OnTwoDoFInputChanged_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTwoDoFInputChanged_100), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePositionInputChangedPerfMarker_101() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaisePositionInputChangedPerfMarker_101)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePositionInputChangedPerfMarker_101() const { return ___RaisePositionInputChangedPerfMarker_101; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePositionInputChangedPerfMarker_101() { return &___RaisePositionInputChangedPerfMarker_101; }
	inline void set_RaisePositionInputChangedPerfMarker_101(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePositionInputChangedPerfMarker_101 = value;
	}

	inline static int32_t get_offset_of_OnPositionInputChanged_102() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnPositionInputChanged_102)); }
	inline EventFunction_1_t5FE3A6A222CE641E04F2B28EFC93AD998392590A * get_OnPositionInputChanged_102() const { return ___OnPositionInputChanged_102; }
	inline EventFunction_1_t5FE3A6A222CE641E04F2B28EFC93AD998392590A ** get_address_of_OnPositionInputChanged_102() { return &___OnPositionInputChanged_102; }
	inline void set_OnPositionInputChanged_102(EventFunction_1_t5FE3A6A222CE641E04F2B28EFC93AD998392590A * value)
	{
		___OnPositionInputChanged_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionInputChanged_102), (void*)value);
	}

	inline static int32_t get_offset_of_OnRotationInputChanged_103() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnRotationInputChanged_103)); }
	inline EventFunction_1_t1AD0B13A6C9E87756E9980A557EF726815646301 * get_OnRotationInputChanged_103() const { return ___OnRotationInputChanged_103; }
	inline EventFunction_1_t1AD0B13A6C9E87756E9980A557EF726815646301 ** get_address_of_OnRotationInputChanged_103() { return &___OnRotationInputChanged_103; }
	inline void set_OnRotationInputChanged_103(EventFunction_1_t1AD0B13A6C9E87756E9980A557EF726815646301 * value)
	{
		___OnRotationInputChanged_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRotationInputChanged_103), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseRotationInputChangedPerfMarker_104() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseRotationInputChangedPerfMarker_104)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseRotationInputChangedPerfMarker_104() const { return ___RaiseRotationInputChangedPerfMarker_104; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseRotationInputChangedPerfMarker_104() { return &___RaiseRotationInputChangedPerfMarker_104; }
	inline void set_RaiseRotationInputChangedPerfMarker_104(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseRotationInputChangedPerfMarker_104 = value;
	}

	inline static int32_t get_offset_of_OnPoseInputChanged_105() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnPoseInputChanged_105)); }
	inline EventFunction_1_t5D07FFB9094D6CF593075DC67233D177AD9F8DC2 * get_OnPoseInputChanged_105() const { return ___OnPoseInputChanged_105; }
	inline EventFunction_1_t5D07FFB9094D6CF593075DC67233D177AD9F8DC2 ** get_address_of_OnPoseInputChanged_105() { return &___OnPoseInputChanged_105; }
	inline void set_OnPoseInputChanged_105(EventFunction_1_t5D07FFB9094D6CF593075DC67233D177AD9F8DC2 * value)
	{
		___OnPoseInputChanged_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPoseInputChanged_105), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePoseInputChangedPerfMarker_106() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaisePoseInputChangedPerfMarker_106)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePoseInputChangedPerfMarker_106() const { return ___RaisePoseInputChangedPerfMarker_106; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePoseInputChangedPerfMarker_106() { return &___RaisePoseInputChangedPerfMarker_106; }
	inline void set_RaisePoseInputChangedPerfMarker_106(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePoseInputChangedPerfMarker_106 = value;
	}

	inline static int32_t get_offset_of_OnGestureStarted_107() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureStarted_107)); }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * get_OnGestureStarted_107() const { return ___OnGestureStarted_107; }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA ** get_address_of_OnGestureStarted_107() { return &___OnGestureStarted_107; }
	inline void set_OnGestureStarted_107(EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * value)
	{
		___OnGestureStarted_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStarted_107), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureStartedWithAction_108() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureStartedWithAction_108)); }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * get_OnGestureStartedWithAction_108() const { return ___OnGestureStartedWithAction_108; }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 ** get_address_of_OnGestureStartedWithAction_108() { return &___OnGestureStartedWithAction_108; }
	inline void set_OnGestureStartedWithAction_108(EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * value)
	{
		___OnGestureStartedWithAction_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStartedWithAction_108), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureStartedPerfMarker_109() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseGestureStartedPerfMarker_109)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureStartedPerfMarker_109() const { return ___RaiseGestureStartedPerfMarker_109; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureStartedPerfMarker_109() { return &___RaiseGestureStartedPerfMarker_109; }
	inline void set_RaiseGestureStartedPerfMarker_109(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureStartedPerfMarker_109 = value;
	}

	inline static int32_t get_offset_of_OnGestureUpdated_110() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureUpdated_110)); }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * get_OnGestureUpdated_110() const { return ___OnGestureUpdated_110; }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA ** get_address_of_OnGestureUpdated_110() { return &___OnGestureUpdated_110; }
	inline void set_OnGestureUpdated_110(EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * value)
	{
		___OnGestureUpdated_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureUpdated_110), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureUpdatedPerfMarker_111() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseGestureUpdatedPerfMarker_111)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureUpdatedPerfMarker_111() const { return ___RaiseGestureUpdatedPerfMarker_111; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureUpdatedPerfMarker_111() { return &___RaiseGestureUpdatedPerfMarker_111; }
	inline void set_RaiseGestureUpdatedPerfMarker_111(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureUpdatedPerfMarker_111 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionUpdated_112() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureVector2PositionUpdated_112)); }
	inline EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F * get_OnGestureVector2PositionUpdated_112() const { return ___OnGestureVector2PositionUpdated_112; }
	inline EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F ** get_address_of_OnGestureVector2PositionUpdated_112() { return &___OnGestureVector2PositionUpdated_112; }
	inline void set_OnGestureVector2PositionUpdated_112(EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F * value)
	{
		___OnGestureVector2PositionUpdated_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionUpdated_112), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionUpdated_113() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGesturePositionUpdated_113)); }
	inline EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 * get_OnGesturePositionUpdated_113() const { return ___OnGesturePositionUpdated_113; }
	inline EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 ** get_address_of_OnGesturePositionUpdated_113() { return &___OnGesturePositionUpdated_113; }
	inline void set_OnGesturePositionUpdated_113(EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 * value)
	{
		___OnGesturePositionUpdated_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionUpdated_113), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationUpdated_114() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureRotationUpdated_114)); }
	inline EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 * get_OnGestureRotationUpdated_114() const { return ___OnGestureRotationUpdated_114; }
	inline EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 ** get_address_of_OnGestureRotationUpdated_114() { return &___OnGestureRotationUpdated_114; }
	inline void set_OnGestureRotationUpdated_114(EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 * value)
	{
		___OnGestureRotationUpdated_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationUpdated_114), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseUpdated_115() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGesturePoseUpdated_115)); }
	inline EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B * get_OnGesturePoseUpdated_115() const { return ___OnGesturePoseUpdated_115; }
	inline EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B ** get_address_of_OnGesturePoseUpdated_115() { return &___OnGesturePoseUpdated_115; }
	inline void set_OnGesturePoseUpdated_115(EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B * value)
	{
		___OnGesturePoseUpdated_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseUpdated_115), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompleted_116() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureCompleted_116)); }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * get_OnGestureCompleted_116() const { return ___OnGestureCompleted_116; }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA ** get_address_of_OnGestureCompleted_116() { return &___OnGestureCompleted_116; }
	inline void set_OnGestureCompleted_116(EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * value)
	{
		___OnGestureCompleted_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompleted_116), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompletedWithAction_117() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureCompletedWithAction_117)); }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * get_OnGestureCompletedWithAction_117() const { return ___OnGestureCompletedWithAction_117; }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 ** get_address_of_OnGestureCompletedWithAction_117() { return &___OnGestureCompletedWithAction_117; }
	inline void set_OnGestureCompletedWithAction_117(EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * value)
	{
		___OnGestureCompletedWithAction_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompletedWithAction_117), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCompletedPerfMarker_118() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseGestureCompletedPerfMarker_118)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCompletedPerfMarker_118() const { return ___RaiseGestureCompletedPerfMarker_118; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCompletedPerfMarker_118() { return &___RaiseGestureCompletedPerfMarker_118; }
	inline void set_RaiseGestureCompletedPerfMarker_118(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCompletedPerfMarker_118 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionCompleted_119() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureVector2PositionCompleted_119)); }
	inline EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F * get_OnGestureVector2PositionCompleted_119() const { return ___OnGestureVector2PositionCompleted_119; }
	inline EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F ** get_address_of_OnGestureVector2PositionCompleted_119() { return &___OnGestureVector2PositionCompleted_119; }
	inline void set_OnGestureVector2PositionCompleted_119(EventFunction_1_t5D083FA9EC8644FBC5FC37DF69988A10DF0B703F * value)
	{
		___OnGestureVector2PositionCompleted_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionCompleted_119), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionCompleted_120() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGesturePositionCompleted_120)); }
	inline EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 * get_OnGesturePositionCompleted_120() const { return ___OnGesturePositionCompleted_120; }
	inline EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 ** get_address_of_OnGesturePositionCompleted_120() { return &___OnGesturePositionCompleted_120; }
	inline void set_OnGesturePositionCompleted_120(EventFunction_1_tF9FD56C3144160404DCBFEC59D0F94785084F776 * value)
	{
		___OnGesturePositionCompleted_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionCompleted_120), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationCompleted_121() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureRotationCompleted_121)); }
	inline EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 * get_OnGestureRotationCompleted_121() const { return ___OnGestureRotationCompleted_121; }
	inline EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 ** get_address_of_OnGestureRotationCompleted_121() { return &___OnGestureRotationCompleted_121; }
	inline void set_OnGestureRotationCompleted_121(EventFunction_1_t49012C47E76692F830351368669DD8618BE2F876 * value)
	{
		___OnGestureRotationCompleted_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationCompleted_121), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseCompleted_122() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGesturePoseCompleted_122)); }
	inline EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B * get_OnGesturePoseCompleted_122() const { return ___OnGesturePoseCompleted_122; }
	inline EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B ** get_address_of_OnGesturePoseCompleted_122() { return &___OnGesturePoseCompleted_122; }
	inline void set_OnGesturePoseCompleted_122(EventFunction_1_t518701D0FCF87FAFE7BC7FBC882C1E5804494D3B * value)
	{
		___OnGesturePoseCompleted_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseCompleted_122), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCanceled_123() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnGestureCanceled_123)); }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * get_OnGestureCanceled_123() const { return ___OnGestureCanceled_123; }
	inline EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA ** get_address_of_OnGestureCanceled_123() { return &___OnGestureCanceled_123; }
	inline void set_OnGestureCanceled_123(EventFunction_1_t476302CE038CE6C8479D3A4ED9B5E54D3196A6FA * value)
	{
		___OnGestureCanceled_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCanceled_123), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCanceledPerfMarker_124() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseGestureCanceledPerfMarker_124)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCanceledPerfMarker_124() const { return ___RaiseGestureCanceledPerfMarker_124; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCanceledPerfMarker_124() { return &___RaiseGestureCanceledPerfMarker_124; }
	inline void set_RaiseGestureCanceledPerfMarker_124(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCanceledPerfMarker_124 = value;
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_125() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_125)); }
	inline EventFunction_1_t509A95506CAFAA7303381C8825768207BE7952AB * get_OnSpeechKeywordRecognizedEventHandler_125() const { return ___OnSpeechKeywordRecognizedEventHandler_125; }
	inline EventFunction_1_t509A95506CAFAA7303381C8825768207BE7952AB ** get_address_of_OnSpeechKeywordRecognizedEventHandler_125() { return &___OnSpeechKeywordRecognizedEventHandler_125; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_125(EventFunction_1_t509A95506CAFAA7303381C8825768207BE7952AB * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedEventHandler_125), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnSpeechKeywordRecognizedWithActionEventHandler_126)); }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * get_OnSpeechKeywordRecognizedWithActionEventHandler_126() const { return ___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 ** get_address_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return &___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline void set_OnSpeechKeywordRecognizedWithActionEventHandler_126(EventFunction_1_tE0E8585F64BD74607BF7668ACDAC1F453F404277 * value)
	{
		___OnSpeechKeywordRecognizedWithActionEventHandler_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedWithActionEventHandler_126), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseSpeechCommandRecognizedPerfMarker_127)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSpeechCommandRecognizedPerfMarker_127() const { return ___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return &___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline void set_RaiseSpeechCommandRecognizedPerfMarker_127(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSpeechCommandRecognizedPerfMarker_127 = value;
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_128() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnDictationHypothesisEventHandler_128)); }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * get_OnDictationHypothesisEventHandler_128() const { return ___OnDictationHypothesisEventHandler_128; }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 ** get_address_of_OnDictationHypothesisEventHandler_128() { return &___OnDictationHypothesisEventHandler_128; }
	inline void set_OnDictationHypothesisEventHandler_128(EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * value)
	{
		___OnDictationHypothesisEventHandler_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationHypothesisEventHandler_128), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationHypothesisPerfMarker_129() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseDictationHypothesisPerfMarker_129)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationHypothesisPerfMarker_129() const { return ___RaiseDictationHypothesisPerfMarker_129; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationHypothesisPerfMarker_129() { return &___RaiseDictationHypothesisPerfMarker_129; }
	inline void set_RaiseDictationHypothesisPerfMarker_129(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationHypothesisPerfMarker_129 = value;
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_130() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnDictationResultEventHandler_130)); }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * get_OnDictationResultEventHandler_130() const { return ___OnDictationResultEventHandler_130; }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 ** get_address_of_OnDictationResultEventHandler_130() { return &___OnDictationResultEventHandler_130; }
	inline void set_OnDictationResultEventHandler_130(EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * value)
	{
		___OnDictationResultEventHandler_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationResultEventHandler_130), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationResultPerfMarker_131() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseDictationResultPerfMarker_131)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationResultPerfMarker_131() const { return ___RaiseDictationResultPerfMarker_131; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationResultPerfMarker_131() { return &___RaiseDictationResultPerfMarker_131; }
	inline void set_RaiseDictationResultPerfMarker_131(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationResultPerfMarker_131 = value;
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_132() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnDictationCompleteEventHandler_132)); }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * get_OnDictationCompleteEventHandler_132() const { return ___OnDictationCompleteEventHandler_132; }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 ** get_address_of_OnDictationCompleteEventHandler_132() { return &___OnDictationCompleteEventHandler_132; }
	inline void set_OnDictationCompleteEventHandler_132(EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * value)
	{
		___OnDictationCompleteEventHandler_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationCompleteEventHandler_132), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationCompletePerfMarker_133() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseDictationCompletePerfMarker_133)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationCompletePerfMarker_133() const { return ___RaiseDictationCompletePerfMarker_133; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationCompletePerfMarker_133() { return &___RaiseDictationCompletePerfMarker_133; }
	inline void set_RaiseDictationCompletePerfMarker_133(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationCompletePerfMarker_133 = value;
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_134() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnDictationErrorEventHandler_134)); }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * get_OnDictationErrorEventHandler_134() const { return ___OnDictationErrorEventHandler_134; }
	inline EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 ** get_address_of_OnDictationErrorEventHandler_134() { return &___OnDictationErrorEventHandler_134; }
	inline void set_OnDictationErrorEventHandler_134(EventFunction_1_t4B806B6A791D69384EFB7B2C16DA8B3C817D8833 * value)
	{
		___OnDictationErrorEventHandler_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationErrorEventHandler_134), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationErrorPerfMarker_135() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseDictationErrorPerfMarker_135)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationErrorPerfMarker_135() const { return ___RaiseDictationErrorPerfMarker_135; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationErrorPerfMarker_135() { return &___RaiseDictationErrorPerfMarker_135; }
	inline void set_RaiseDictationErrorPerfMarker_135(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationErrorPerfMarker_135 = value;
	}

	inline static int32_t get_offset_of_OnHandJointsUpdatedEventHandler_136() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnHandJointsUpdatedEventHandler_136)); }
	inline EventFunction_1_t4D18BCC4B98A6A810DEB13D7989E324460D6B8D6 * get_OnHandJointsUpdatedEventHandler_136() const { return ___OnHandJointsUpdatedEventHandler_136; }
	inline EventFunction_1_t4D18BCC4B98A6A810DEB13D7989E324460D6B8D6 ** get_address_of_OnHandJointsUpdatedEventHandler_136() { return &___OnHandJointsUpdatedEventHandler_136; }
	inline void set_OnHandJointsUpdatedEventHandler_136(EventFunction_1_t4D18BCC4B98A6A810DEB13D7989E324460D6B8D6 * value)
	{
		___OnHandJointsUpdatedEventHandler_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandJointsUpdatedEventHandler_136), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandJointsUpdatedPerfMarker_137() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseHandJointsUpdatedPerfMarker_137)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandJointsUpdatedPerfMarker_137() const { return ___RaiseHandJointsUpdatedPerfMarker_137; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandJointsUpdatedPerfMarker_137() { return &___RaiseHandJointsUpdatedPerfMarker_137; }
	inline void set_RaiseHandJointsUpdatedPerfMarker_137(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandJointsUpdatedPerfMarker_137 = value;
	}

	inline static int32_t get_offset_of_OnHandMeshUpdatedEventHandler_138() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnHandMeshUpdatedEventHandler_138)); }
	inline EventFunction_1_t202CFD58AAF87392CDBCEC3211FD7746C46244AF * get_OnHandMeshUpdatedEventHandler_138() const { return ___OnHandMeshUpdatedEventHandler_138; }
	inline EventFunction_1_t202CFD58AAF87392CDBCEC3211FD7746C46244AF ** get_address_of_OnHandMeshUpdatedEventHandler_138() { return &___OnHandMeshUpdatedEventHandler_138; }
	inline void set_OnHandMeshUpdatedEventHandler_138(EventFunction_1_t202CFD58AAF87392CDBCEC3211FD7746C46244AF * value)
	{
		___OnHandMeshUpdatedEventHandler_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandMeshUpdatedEventHandler_138), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandMeshUpdatedPerfMarker_139() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseHandMeshUpdatedPerfMarker_139)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandMeshUpdatedPerfMarker_139() const { return ___RaiseHandMeshUpdatedPerfMarker_139; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandMeshUpdatedPerfMarker_139() { return &___RaiseHandMeshUpdatedPerfMarker_139; }
	inline void set_RaiseHandMeshUpdatedPerfMarker_139(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandMeshUpdatedPerfMarker_139 = value;
	}

	inline static int32_t get_offset_of_OnTouchStartedEventHandler_140() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnTouchStartedEventHandler_140)); }
	inline EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * get_OnTouchStartedEventHandler_140() const { return ___OnTouchStartedEventHandler_140; }
	inline EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB ** get_address_of_OnTouchStartedEventHandler_140() { return &___OnTouchStartedEventHandler_140; }
	inline void set_OnTouchStartedEventHandler_140(EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * value)
	{
		___OnTouchStartedEventHandler_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStartedEventHandler_140), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchStartedPerfMarker_141() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseOnTouchStartedPerfMarker_141)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchStartedPerfMarker_141() const { return ___RaiseOnTouchStartedPerfMarker_141; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchStartedPerfMarker_141() { return &___RaiseOnTouchStartedPerfMarker_141; }
	inline void set_RaiseOnTouchStartedPerfMarker_141(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchStartedPerfMarker_141 = value;
	}

	inline static int32_t get_offset_of_OnTouchCompletedEventHandler_142() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnTouchCompletedEventHandler_142)); }
	inline EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * get_OnTouchCompletedEventHandler_142() const { return ___OnTouchCompletedEventHandler_142; }
	inline EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB ** get_address_of_OnTouchCompletedEventHandler_142() { return &___OnTouchCompletedEventHandler_142; }
	inline void set_OnTouchCompletedEventHandler_142(EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * value)
	{
		___OnTouchCompletedEventHandler_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchCompletedEventHandler_142), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchCompletedPerfMarker_143() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseOnTouchCompletedPerfMarker_143)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchCompletedPerfMarker_143() const { return ___RaiseOnTouchCompletedPerfMarker_143; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchCompletedPerfMarker_143() { return &___RaiseOnTouchCompletedPerfMarker_143; }
	inline void set_RaiseOnTouchCompletedPerfMarker_143(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchCompletedPerfMarker_143 = value;
	}

	inline static int32_t get_offset_of_OnTouchUpdatedEventHandler_144() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___OnTouchUpdatedEventHandler_144)); }
	inline EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * get_OnTouchUpdatedEventHandler_144() const { return ___OnTouchUpdatedEventHandler_144; }
	inline EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB ** get_address_of_OnTouchUpdatedEventHandler_144() { return &___OnTouchUpdatedEventHandler_144; }
	inline void set_OnTouchUpdatedEventHandler_144(EventFunction_1_t4BA0A6CE12FF4B6D70E1981D1DF3CDCF5D9605AB * value)
	{
		___OnTouchUpdatedEventHandler_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchUpdatedEventHandler_144), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchUpdatedPerfMarker_145() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___RaiseOnTouchUpdatedPerfMarker_145)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchUpdatedPerfMarker_145() const { return ___RaiseOnTouchUpdatedPerfMarker_145; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchUpdatedPerfMarker_145() { return &___RaiseOnTouchUpdatedPerfMarker_145; }
	inline void set_RaiseOnTouchUpdatedPerfMarker_145(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchUpdatedPerfMarker_145 = value;
	}

	inline static int32_t get_offset_of_ProcessRulesInternalPerfMarker_146() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_StaticFields, ___ProcessRulesInternalPerfMarker_146)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessRulesInternalPerfMarker_146() const { return ___ProcessRulesInternalPerfMarker_146; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessRulesInternalPerfMarker_146() { return &___ProcessRulesInternalPerfMarker_146; }
	inline void set_ProcessRulesInternalPerfMarker_146(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessRulesInternalPerfMarker_146 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C  : public BaseDataProviderAccessCoreSystem_tD7700C46D64F9B4732359BDACB4BA4142A6E63BB
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tD37785780113893966C5FB49790E7B98696247F2 * ___meshEventData_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spatialAwarenessObjectParent_22;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_23;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t861BA49287DDBBACF90D98A7396BC1B150BE0E4C * ___spatialAwarenessSystemProfile_24;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_meshEventData_21() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C, ___meshEventData_21)); }
	inline MixedRealitySpatialAwarenessEventData_1_tD37785780113893966C5FB49790E7B98696247F2 * get_meshEventData_21() const { return ___meshEventData_21; }
	inline MixedRealitySpatialAwarenessEventData_1_tD37785780113893966C5FB49790E7B98696247F2 ** get_address_of_meshEventData_21() { return &___meshEventData_21; }
	inline void set_meshEventData_21(MixedRealitySpatialAwarenessEventData_1_tD37785780113893966C5FB49790E7B98696247F2 * value)
	{
		___meshEventData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_21), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_22() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C, ___spatialAwarenessObjectParent_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spatialAwarenessObjectParent_22() const { return ___spatialAwarenessObjectParent_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spatialAwarenessObjectParent_22() { return &___spatialAwarenessObjectParent_22; }
	inline void set_spatialAwarenessObjectParent_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spatialAwarenessObjectParent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessObjectParent_22), (void*)value);
	}

	inline static int32_t get_offset_of_nextSourceId_23() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C, ___nextSourceId_23)); }
	inline uint32_t get_nextSourceId_23() const { return ___nextSourceId_23; }
	inline uint32_t* get_address_of_nextSourceId_23() { return &___nextSourceId_23; }
	inline void set_nextSourceId_23(uint32_t value)
	{
		___nextSourceId_23 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_24() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C, ___spatialAwarenessSystemProfile_24)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t861BA49287DDBBACF90D98A7396BC1B150BE0E4C * get_spatialAwarenessSystemProfile_24() const { return ___spatialAwarenessSystemProfile_24; }
	inline MixedRealitySpatialAwarenessSystemProfile_t861BA49287DDBBACF90D98A7396BC1B150BE0E4C ** get_address_of_spatialAwarenessSystemProfile_24() { return &___spatialAwarenessSystemProfile_24; }
	inline void set_spatialAwarenessSystemProfile_24(MixedRealitySpatialAwarenessSystemProfile_t861BA49287DDBBACF90D98A7396BC1B150BE0E4C * value)
	{
		___spatialAwarenessSystemProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_24), (void*)value);
	}
};

struct MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserversPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserversTPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserverPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserverTPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProvidersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetDataProvidersPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProviderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetDataProviderPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserversPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserversTPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserverPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserversPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserversTPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserverPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsTPerfMarker_38;

public:
	inline static int32_t get_offset_of_GetObserversPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___GetObserversPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserversPerfMarker_25() const { return ___GetObserversPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserversPerfMarker_25() { return &___GetObserversPerfMarker_25; }
	inline void set_GetObserversPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserversPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_GetObserversTPerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___GetObserversTPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserversTPerfMarker_26() const { return ___GetObserversTPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserversTPerfMarker_26() { return &___GetObserversTPerfMarker_26; }
	inline void set_GetObserversTPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserversTPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetObserverPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___GetObserverPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserverPerfMarker_27() const { return ___GetObserverPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserverPerfMarker_27() { return &___GetObserverPerfMarker_27; }
	inline void set_GetObserverPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserverPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_GetObserverTPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___GetObserverTPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserverTPerfMarker_28() const { return ___GetObserverTPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserverTPerfMarker_28() { return &___GetObserverTPerfMarker_28; }
	inline void set_GetObserverTPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserverTPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_GetDataProvidersPerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___GetDataProvidersPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetDataProvidersPerfMarker_29() const { return ___GetDataProvidersPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetDataProvidersPerfMarker_29() { return &___GetDataProvidersPerfMarker_29; }
	inline void set_GetDataProvidersPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetDataProvidersPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_GetDataProviderPerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___GetDataProviderPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetDataProviderPerfMarker_30() const { return ___GetDataProviderPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetDataProviderPerfMarker_30() { return &___GetDataProviderPerfMarker_30; }
	inline void set_GetDataProviderPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetDataProviderPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___ResumeObserversPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserversPerfMarker_31() const { return ___ResumeObserversPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserversPerfMarker_31() { return &___ResumeObserversPerfMarker_31; }
	inline void set_ResumeObserversPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserversPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversTPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___ResumeObserversTPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserversTPerfMarker_32() const { return ___ResumeObserversTPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserversTPerfMarker_32() { return &___ResumeObserversTPerfMarker_32; }
	inline void set_ResumeObserversTPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserversTPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_ResumeObserverPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___ResumeObserverPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserverPerfMarker_33() const { return ___ResumeObserverPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserverPerfMarker_33() { return &___ResumeObserverPerfMarker_33; }
	inline void set_ResumeObserverPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserverPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversPerfMarker_34() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___SuspendObserversPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserversPerfMarker_34() const { return ___SuspendObserversPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserversPerfMarker_34() { return &___SuspendObserversPerfMarker_34; }
	inline void set_SuspendObserversPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserversPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversTPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___SuspendObserversTPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserversTPerfMarker_35() const { return ___SuspendObserversTPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserversTPerfMarker_35() { return &___SuspendObserversTPerfMarker_35; }
	inline void set_SuspendObserversTPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserversTPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_SuspendObserverPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___SuspendObserverPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserverPerfMarker_36() const { return ___SuspendObserverPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserverPerfMarker_36() { return &___SuspendObserverPerfMarker_36; }
	inline void set_SuspendObserverPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserverPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___ClearObservationsPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_37() const { return ___ClearObservationsPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_37() { return &___ClearObservationsPerfMarker_37; }
	inline void set_ClearObservationsPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsTPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_StaticFields, ___ClearObservationsTPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsTPerfMarker_38() const { return ___ClearObservationsTPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsTPerfMarker_38() { return &___ClearObservationsTPerfMarker_38; }
	inline void set_ClearObservationsTPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsTPerfMarker_38 = value;
	}
};


// Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8  : public MapRendererBase_tA41984A3EC2212603ED88A4F4DF96C54A52CD9F8
{
public:
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_mapColliderType
	int32_t ____mapColliderType_145;
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_previousMapColliderType
	int32_t ____previousMapColliderType_146;
	// UnityEngine.Collider Microsoft.Maps.Unity.MapRenderer::_mapCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____mapCollider_147;
	// UnityEngine.BoxCollider Microsoft.Maps.Unity.MapRenderer::_mapBoxCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ____mapBoxCollider_148;
	// Microsoft.Maps.Unity.IMapSceneAnimationController Microsoft.Maps.Unity.MapRenderer::_activeMapSceneAnimationController
	RuntimeObject* ____activeMapSceneAnimationController_149;
	// System.Boolean Microsoft.Maps.Unity.MapRenderer::_checkChildMapPins
	bool ____checkChildMapPins_150;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenSet
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____mapPinChildrenSet_151;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_lastMapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____lastMapPinsInView_152;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinsInView_153;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_currentChildrenMapPins
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____currentChildrenMapPins_154;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenToRemove
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinChildrenToRemove_155;
	// System.EventHandler Microsoft.Maps.Unity.MapRenderer::AfterUpdate
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AfterUpdate_156;

public:
	inline static int32_t get_offset_of__mapColliderType_145() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapColliderType_145)); }
	inline int32_t get__mapColliderType_145() const { return ____mapColliderType_145; }
	inline int32_t* get_address_of__mapColliderType_145() { return &____mapColliderType_145; }
	inline void set__mapColliderType_145(int32_t value)
	{
		____mapColliderType_145 = value;
	}

	inline static int32_t get_offset_of__previousMapColliderType_146() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____previousMapColliderType_146)); }
	inline int32_t get__previousMapColliderType_146() const { return ____previousMapColliderType_146; }
	inline int32_t* get_address_of__previousMapColliderType_146() { return &____previousMapColliderType_146; }
	inline void set__previousMapColliderType_146(int32_t value)
	{
		____previousMapColliderType_146 = value;
	}

	inline static int32_t get_offset_of__mapCollider_147() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapCollider_147)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__mapCollider_147() const { return ____mapCollider_147; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__mapCollider_147() { return &____mapCollider_147; }
	inline void set__mapCollider_147(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____mapCollider_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapCollider_147), (void*)value);
	}

	inline static int32_t get_offset_of__mapBoxCollider_148() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapBoxCollider_148)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get__mapBoxCollider_148() const { return ____mapBoxCollider_148; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of__mapBoxCollider_148() { return &____mapBoxCollider_148; }
	inline void set__mapBoxCollider_148(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		____mapBoxCollider_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapBoxCollider_148), (void*)value);
	}

	inline static int32_t get_offset_of__activeMapSceneAnimationController_149() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____activeMapSceneAnimationController_149)); }
	inline RuntimeObject* get__activeMapSceneAnimationController_149() const { return ____activeMapSceneAnimationController_149; }
	inline RuntimeObject** get_address_of__activeMapSceneAnimationController_149() { return &____activeMapSceneAnimationController_149; }
	inline void set__activeMapSceneAnimationController_149(RuntimeObject* value)
	{
		____activeMapSceneAnimationController_149 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeMapSceneAnimationController_149), (void*)value);
	}

	inline static int32_t get_offset_of__checkChildMapPins_150() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____checkChildMapPins_150)); }
	inline bool get__checkChildMapPins_150() const { return ____checkChildMapPins_150; }
	inline bool* get_address_of__checkChildMapPins_150() { return &____checkChildMapPins_150; }
	inline void set__checkChildMapPins_150(bool value)
	{
		____checkChildMapPins_150 = value;
	}

	inline static int32_t get_offset_of__mapPinChildrenSet_151() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenSet_151)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__mapPinChildrenSet_151() const { return ____mapPinChildrenSet_151; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__mapPinChildrenSet_151() { return &____mapPinChildrenSet_151; }
	inline void set__mapPinChildrenSet_151(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____mapPinChildrenSet_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenSet_151), (void*)value);
	}

	inline static int32_t get_offset_of__lastMapPinsInView_152() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____lastMapPinsInView_152)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__lastMapPinsInView_152() const { return ____lastMapPinsInView_152; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__lastMapPinsInView_152() { return &____lastMapPinsInView_152; }
	inline void set__lastMapPinsInView_152(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____lastMapPinsInView_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastMapPinsInView_152), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinsInView_153() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinsInView_153)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinsInView_153() const { return ____mapPinsInView_153; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinsInView_153() { return &____mapPinsInView_153; }
	inline void set__mapPinsInView_153(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinsInView_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinsInView_153), (void*)value);
	}

	inline static int32_t get_offset_of__currentChildrenMapPins_154() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____currentChildrenMapPins_154)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__currentChildrenMapPins_154() const { return ____currentChildrenMapPins_154; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__currentChildrenMapPins_154() { return &____currentChildrenMapPins_154; }
	inline void set__currentChildrenMapPins_154(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____currentChildrenMapPins_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentChildrenMapPins_154), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinChildrenToRemove_155() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenToRemove_155)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinChildrenToRemove_155() const { return ____mapPinChildrenToRemove_155; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinChildrenToRemove_155() { return &____mapPinChildrenToRemove_155; }
	inline void set__mapPinChildrenToRemove_155(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinChildrenToRemove_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenToRemove_155), (void*)value);
	}

	inline static int32_t get_offset_of_AfterUpdate_156() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ___AfterUpdate_156)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AfterUpdate_156() const { return ___AfterUpdate_156; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AfterUpdate_156() { return &___AfterUpdate_156; }
	inline void set_AfterUpdate_156(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AfterUpdate_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AfterUpdate_156), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for MapRaycastProvider
struct MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRaycastProvider_t889278760F8988F539DE3FBBADA631032DD068F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>, IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m99BCDB4E86496E052D36F5CB4941B1AC15F472B2(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>, IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1E3C0C2B054B1CD814F0762F6A05651AC9A8A858(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 *>(UnBox(GetManagedObjectInline(), Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m740A9BA185E218E3527C4DE14F1EB29861C09B34(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSystem_t64F8543B5FAC3A7400E183719802DA4707681018_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityDiagnosticsSystem_t85D962DEA2092FC3459A12E68EF8D990092DF4C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputSystem_tBD90B68BD88D1A6D2C56AFAAB6BCECCDBAABBAD0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySceneSystem_tF37686BE00696B44E1031C8F6EE80168E40533C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySpatialAwarenessSystem_tCA23F925584AB58B271A79989C6A69A7069C781C_ComCallableWrapper(obj));
}
