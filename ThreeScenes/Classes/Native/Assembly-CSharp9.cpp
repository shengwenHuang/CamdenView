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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// DataFetcher
struct DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191;
// DataFetcherParameters
struct DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17;
// Mapbox.Directions.Directions
struct Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732;
// Mapbox.Geocoding.Geocoder
struct Geocoder_tE880599FC95DD6293DED4A92151328F14956C677;
// Mapbox.Map.Tile
struct Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0;
// Mapbox.Map.TileErrorEventArgs
struct TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4;
// Mapbox.Map.VectorTile
struct VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687;
// Mapbox.MapMatching.MapMatcher
struct MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06;
// Mapbox.Platform.Cache.CachingWebFileSource
struct CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204;
// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t83AE426641B96D7F5F4F8635DCB0D33D1470F205;
// Mapbox.Platform.IFileSource
struct IFileSource_t41112CB9331B15ABEF849F1D8A37FA942C8AD0DE;
// Mapbox.Platform.TilesetTileJSON.TileJSON
struct TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742;
// Mapbox.Tokens.MapboxTokenApi
struct MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805;
// Mapbox.Unity.Map.Style
struct Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714;
// Mapbox.Unity.MapboxAccess
struct MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D;
// Mapbox.Unity.MapboxAccess/TokenValidationEvent
struct TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9;
// Mapbox.Unity.MapboxConfiguration
struct MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9;
// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923;
// Mapbox.Unity.Telemetry.ITelemetryLibrary
struct ITelemetryLibrary_t6035C35B96700C5E2EDABBFE5C3AF39B3A7B8C34;
// Mapbox.VectorTile.VectorTile
struct VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile>
struct Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78;
// System.Action`1<UnityARInterface.BoundedPlane>
struct Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB;
// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t79A79A556E69BA20A09771D2D61B0440B6F4EFBA;
// System.Collections.Generic.List`1<Mapbox.Map.Tile>
struct List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t4C99617DAC31689CEC0EDB09B067A65E80E1C3EA;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
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
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.iOS.ConnectToEditor
struct ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9;
// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A;
// UnityEngine.XR.iOS.UnityARUtility
struct UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1;
// UnityEngine.XR.iOS.UnityARVideo
struct UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845;
// UnityEngine.XR.iOS.UnityRemoteVideo
struct UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222;
// UnityPointCloudExample
struct UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3;
// UpdateShaderCoordinatesByARPlane
struct UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001;
// Utils.SerializableVector4
struct SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F;
// Utils.serializableARKitInit
struct serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42;
// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4;
// Utils.serializableFromEditorMessage
struct serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51;
// Utils.serializablePointCloud
struct serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0;
// Utils.serializableSHC
struct serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6;
// Utils.serializableUnityARCamera
struct serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513;
// Utils.serializableUnityARLightData
struct serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436;
// VectorDataFetcher
struct VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357;
// VectorDataFetcher/<>c
struct U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A;
// VectorDataFetcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15;
// VectorDataFetcherParameters
struct VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88;

IL2CPP_EXTERN_C RuntimeClass* ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3D4152882C54B77C712688E910390D5C8E030463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D;
IL2CPP_EXTERN_C String_t* _stringLiteral46999A5B8887944E62AB3C2144EDD9235A5159E9;
IL2CPP_EXTERN_C String_t* _stringLiteral5513D890E768122B081B730418BAD293383E095A;
IL2CPP_EXTERN_C String_t* _stringLiteral5F52003496E7C27A6D8707B8169E47FA25595618;
IL2CPP_EXTERN_C String_t* _stringLiteralB47C8620D1381A3181147DEA2D2E302F0FA40A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF79EA505459F01F984988600F23CC4756E4537;
IL2CPP_EXTERN_C String_t* _stringLiteralFDCD5EFE7A08C827D52108E870EDE9535214D9ED;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m167F97C6FEB835ACE2CCD5FE7899D663310D04CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityARUserAnchorComponent_AnchorRemoved_m0DDE3D431A9774171AA6E61D4990B805360F45BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityARUserAnchorComponent_GameObjectAnchorUpdated_mD3A2CC3107BD88233768B1D1EECFF40907BD4316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityARVideo_UpdateFrame_m239D2B517EB1D0CF4B87C04C7A9B432A992656CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_m63496C2B26C679351D74B8628C328046DC19E2DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityRemoteVideo_UpdateCamera_m05BB20AFF4E577D43557274E536242F58E7E8940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UpdateShaderCoordinatesByARPlane_CheckCoordinates_mFC15BBCE0669A3D17DD980F7727DD0D7FC4DC138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UpdateShaderCoordinatesByARPlane_ResetShaderValues_m0206FE447BCC93D0315D3D64474E826F7B1A3B76_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ObjectSerializationExtension_SerializeToByteArray_mA1B5407DA79B2DBBA1B8951221B162965AED521B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializableVector4_ToString_m31845B5920AFBED4AF92F221B45AF4A9DD3CE3E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUserAnchorComponent_AnchorRemoved_m0DDE3D431A9774171AA6E61D4990B805360F45BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUserAnchorComponent_Awake_mAFC3D5326A9FF3E7BBFAD32407C381CB1FD6419F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUserAnchorComponent_OnDestroy_mF19FA96A6D107DFC8BFC7EFF3C0306C453217E9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m6DDFFAD7A05F40E01F59C67DCFBCA6F7D47A79DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUserAnchorData_get_identifierStr_mBE6C8E204E500D89AA66826657E04D4183E1F461_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUtility_CreatePlaneInScene_m41D3A647F8B0C44E5119DAF01FACCA347CF657DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUtility_InitializePlanePrefab_m1F81C4EA6B023C77A415CAEAE1AC6B13F2FA3C34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUtility_UpdatePlaneWithAnchorTransform_mB3988A33B6DAB4B18934BC08E8B4C45A6BBAA000_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARUtility__cctor_m41B8D68B08BA86ED559394A6A8AA1ABBBDD9A898_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARVideo_InitializeCommandBuffer_m8745BF76E0CC672472C21AEFB40635B258324657_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARVideo_OnDestroy_m10E7F8C50E59A6EE542C5AB448589E35AC5768BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARVideo_OnPreRender_m92818B6D10E3292222822885E418054A9CDA58D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityARVideo_Start_m795556CB9D92762F4299246B05BC0752A79E1520_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityMarshalLightData_op_Implicit_mAB2E438F89C9A7AD564DDF148171BFB91F1D75AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityPointCloudExample_Start_mBBFD6C7EA992F831E0FDF4C552791DA990344B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityPointCloudExample_Update_m17378257B82327F087B521E4E4432699317EFA7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRemoteVideo_InitializeTextures_m2E2664708F6FE67C5689AC6315BCC641B0490ED7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRemoteVideo_OnDestroy_m8315C1794230FED9A6528612EA301FD2D787722C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRemoteVideo_OnPreRender_m85C59CC1F25A37344F93BF533D2935B98755F048_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRemoteVideo_Start_mA1EDE93715AC9D6770A7168BC677196AD43E6FA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRemoteVideo_UpdateCamera_m05BB20AFF4E577D43557274E536242F58E7E8940_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateShaderCoordinatesByARPlane_CheckCoordinates_mFC15BBCE0669A3D17DD980F7727DD0D7FC4DC138_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateShaderCoordinatesByARPlane_OnDisable_mE0A491E255F143342D6C57A71E98A32C30625090_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateShaderCoordinatesByARPlane_Start_mFD848147893FC32C7C21661C4949F8030BA55512_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m03312DE8A1EFA4C080E4C9E2DD49B56F31FA63C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t internal_ARUserAnchorRemoved_BeginInvoke_m6E434F182F18A213EB9218B8027B33AF38208753_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t internal_ARUserAnchorUpdated_BeginInvoke_mCF355A9422DCC77F89D5B5BFA73292EAE73DDE80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mapbox.Unity.Map.Style
struct  Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714  : public RuntimeObject
{
public:
	// System.String Mapbox.Unity.Map.Style::Name
	String_t* ___Name_0;
	// System.String Mapbox.Unity.Map.Style::Id
	String_t* ___Id_1;
	// System.String Mapbox.Unity.Map.Style::Modified
	String_t* ___Modified_2;
	// System.String Mapbox.Unity.Map.Style::UserName
	String_t* ___UserName_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_Modified_2() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___Modified_2)); }
	inline String_t* get_Modified_2() const { return ___Modified_2; }
	inline String_t** get_address_of_Modified_2() { return &___Modified_2; }
	inline void set_Modified_2(String_t* value)
	{
		___Modified_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Modified_2), (void*)value);
	}

	inline static int32_t get_offset_of_UserName_3() { return static_cast<int32_t>(offsetof(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714, ___UserName_3)); }
	inline String_t* get_UserName_3() const { return ___UserName_3; }
	inline String_t** get_address_of_UserName_3() { return &___UserName_3; }
	inline void set_UserName_3(String_t* value)
	{
		___UserName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserName_3), (void*)value);
	}
};


// Mapbox.Unity.MapboxAccess
struct  MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D  : public RuntimeObject
{
public:
	// Mapbox.Unity.Telemetry.ITelemetryLibrary Mapbox.Unity.MapboxAccess::_telemetryLibrary
	RuntimeObject* ____telemetryLibrary_0;
	// Mapbox.Platform.Cache.CachingWebFileSource Mapbox.Unity.MapboxAccess::_fileSource
	CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * ____fileSource_1;
	// Mapbox.Unity.MapboxAccess_TokenValidationEvent Mapbox.Unity.MapboxAccess::OnTokenValidation
	TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * ___OnTokenValidation_2;
	// Mapbox.Unity.MapboxConfiguration Mapbox.Unity.MapboxAccess::_configuration
	MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * ____configuration_6;
	// System.String Mapbox.Unity.MapboxAccess::_tokenNotSetErrorMessage
	String_t* ____tokenNotSetErrorMessage_7;
	// Mapbox.Geocoding.Geocoder Mapbox.Unity.MapboxAccess::_geocoder
	Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * ____geocoder_8;
	// Mapbox.Directions.Directions Mapbox.Unity.MapboxAccess::_directions
	Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * ____directions_9;
	// Mapbox.MapMatching.MapMatcher Mapbox.Unity.MapboxAccess::_mapMatcher
	MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * ____mapMatcher_10;
	// Mapbox.Tokens.MapboxTokenApi Mapbox.Unity.MapboxAccess::_tokenValidator
	MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * ____tokenValidator_11;
	// Mapbox.Platform.TilesetTileJSON.TileJSON Mapbox.Unity.MapboxAccess::_tileJson
	TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * ____tileJson_12;

public:
	inline static int32_t get_offset_of__telemetryLibrary_0() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____telemetryLibrary_0)); }
	inline RuntimeObject* get__telemetryLibrary_0() const { return ____telemetryLibrary_0; }
	inline RuntimeObject** get_address_of__telemetryLibrary_0() { return &____telemetryLibrary_0; }
	inline void set__telemetryLibrary_0(RuntimeObject* value)
	{
		____telemetryLibrary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____telemetryLibrary_0), (void*)value);
	}

	inline static int32_t get_offset_of__fileSource_1() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____fileSource_1)); }
	inline CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * get__fileSource_1() const { return ____fileSource_1; }
	inline CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 ** get_address_of__fileSource_1() { return &____fileSource_1; }
	inline void set__fileSource_1(CachingWebFileSource_t3CF8E61401439CCAA9C0B901D0E5C53C028FB204 * value)
	{
		____fileSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnTokenValidation_2() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ___OnTokenValidation_2)); }
	inline TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * get_OnTokenValidation_2() const { return ___OnTokenValidation_2; }
	inline TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 ** get_address_of_OnTokenValidation_2() { return &___OnTokenValidation_2; }
	inline void set_OnTokenValidation_2(TokenValidationEvent_t7976BC807B44C60368F969D5EAA6AFE740F8F7C9 * value)
	{
		___OnTokenValidation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTokenValidation_2), (void*)value);
	}

	inline static int32_t get_offset_of__configuration_6() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____configuration_6)); }
	inline MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * get__configuration_6() const { return ____configuration_6; }
	inline MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 ** get_address_of__configuration_6() { return &____configuration_6; }
	inline void set__configuration_6(MapboxConfiguration_t70F7DD27DEDB42C48E185ECB0EF1F2C322FFFDD9 * value)
	{
		____configuration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____configuration_6), (void*)value);
	}

	inline static int32_t get_offset_of__tokenNotSetErrorMessage_7() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tokenNotSetErrorMessage_7)); }
	inline String_t* get__tokenNotSetErrorMessage_7() const { return ____tokenNotSetErrorMessage_7; }
	inline String_t** get_address_of__tokenNotSetErrorMessage_7() { return &____tokenNotSetErrorMessage_7; }
	inline void set__tokenNotSetErrorMessage_7(String_t* value)
	{
		____tokenNotSetErrorMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenNotSetErrorMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of__geocoder_8() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____geocoder_8)); }
	inline Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * get__geocoder_8() const { return ____geocoder_8; }
	inline Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 ** get_address_of__geocoder_8() { return &____geocoder_8; }
	inline void set__geocoder_8(Geocoder_tE880599FC95DD6293DED4A92151328F14956C677 * value)
	{
		____geocoder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____geocoder_8), (void*)value);
	}

	inline static int32_t get_offset_of__directions_9() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____directions_9)); }
	inline Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * get__directions_9() const { return ____directions_9; }
	inline Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 ** get_address_of__directions_9() { return &____directions_9; }
	inline void set__directions_9(Directions_t8F5C07EB6A48451A11CC08B1174B242DD5ECE732 * value)
	{
		____directions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____directions_9), (void*)value);
	}

	inline static int32_t get_offset_of__mapMatcher_10() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____mapMatcher_10)); }
	inline MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * get__mapMatcher_10() const { return ____mapMatcher_10; }
	inline MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 ** get_address_of__mapMatcher_10() { return &____mapMatcher_10; }
	inline void set__mapMatcher_10(MapMatcher_t31A67F9AC99431D9E7C2C7A3C15BAC34DC812A06 * value)
	{
		____mapMatcher_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapMatcher_10), (void*)value);
	}

	inline static int32_t get_offset_of__tokenValidator_11() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tokenValidator_11)); }
	inline MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * get__tokenValidator_11() const { return ____tokenValidator_11; }
	inline MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 ** get_address_of__tokenValidator_11() { return &____tokenValidator_11; }
	inline void set__tokenValidator_11(MapboxTokenApi_tB24ABC01CE47DD5D1F677ED719D7DFD4D0EC1805 * value)
	{
		____tokenValidator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenValidator_11), (void*)value);
	}

	inline static int32_t get_offset_of__tileJson_12() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D, ____tileJson_12)); }
	inline TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * get__tileJson_12() const { return ____tileJson_12; }
	inline TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 ** get_address_of__tileJson_12() { return &____tileJson_12; }
	inline void set__tileJson_12(TileJSON_t97CD8E989003FD78D5DDACED7D6879E219006742 * value)
	{
		____tileJson_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tileJson_12), (void*)value);
	}
};

struct MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields
{
public:
	// Mapbox.Unity.MapboxAccess Mapbox.Unity.MapboxAccess::_instance
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____instance_3;
	// System.Boolean Mapbox.Unity.MapboxAccess::Configured
	bool ___Configured_4;
	// System.String Mapbox.Unity.MapboxAccess::ConfigurationJSON
	String_t* ___ConfigurationJSON_5;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ____instance_3)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__instance_3() const { return ____instance_3; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_3), (void*)value);
	}

	inline static int32_t get_offset_of_Configured_4() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ___Configured_4)); }
	inline bool get_Configured_4() const { return ___Configured_4; }
	inline bool* get_address_of_Configured_4() { return &___Configured_4; }
	inline void set_Configured_4(bool value)
	{
		___Configured_4 = value;
	}

	inline static int32_t get_offset_of_ConfigurationJSON_5() { return static_cast<int32_t>(offsetof(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D_StaticFields, ___ConfigurationJSON_5)); }
	inline String_t* get_ConfigurationJSON_5() const { return ___ConfigurationJSON_5; }
	inline String_t** get_address_of_ConfigurationJSON_5() { return &___ConfigurationJSON_5; }
	inline void set_ConfigurationJSON_5(String_t* value)
	{
		___ConfigurationJSON_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConfigurationJSON_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t3D4152882C54B77C712688E910390D5C8E030463  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3D4152882C54B77C712688E910390D5C8E030463_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1  : public RuntimeObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1, ___meshCollider_0)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshCollider_0), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1, ___meshFilter_1)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_1), (void*)value);
	}
};

struct UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_StaticFields, ___planePrefab_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planePrefab_2), (void*)value);
	}
};


// Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_tF9AA06D5AF96EB20B859B4592184A0042F3E17F3  : public RuntimeObject
{
public:

public:
};


// Utils.SerializableVector4
struct  SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// Utils.serializablePointCloud
struct  serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0, ___pointCloudData_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloudData_0), (void*)value);
	}
};


// Utils.serializableSHC
struct  serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializableSHC::shcData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___shcData_0;

public:
	inline static int32_t get_offset_of_shcData_0() { return static_cast<int32_t>(offsetof(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6, ___shcData_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_shcData_0() const { return ___shcData_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_shcData_0() { return &___shcData_0; }
	inline void set_shcData_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___shcData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shcData_0), (void*)value);
	}
};


// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column0_0)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column0_0), (void*)value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column1_1)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column1_1), (void*)value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column2_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column2_2), (void*)value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9, ___column3_3)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___column3_3), (void*)value);
	}
};


// VectorDataFetcher_<>c
struct  U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields
{
public:
	// VectorDataFetcher_<>c VectorDataFetcher_<>c::<>9
	U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * ___U3CU3E9_0;
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher_<>c::<>9__3_0
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * ___U3CU3E9__3_0_1;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher_<>c::<>9__3_1
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * ___U3CU3E9__3_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields, ___U3CU3E9__3_1_2)); }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * get_U3CU3E9__3_1_2() const { return ___U3CU3E9__3_1_2; }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E ** get_address_of_U3CU3E9__3_1_2() { return &___U3CU3E9__3_1_2; }
	inline void set_U3CU3E9__3_1_2(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * value)
	{
		___U3CU3E9__3_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_2), (void*)value);
	}
};


// VectorDataFetcher_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15  : public RuntimeObject
{
public:
	// VectorDataFetcherParameters VectorDataFetcher_<>c__DisplayClass2_0::vectorDaraParameters
	VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * ___vectorDaraParameters_0;
	// Mapbox.Map.VectorTile VectorDataFetcher_<>c__DisplayClass2_0::vectorTile
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___vectorTile_1;
	// VectorDataFetcher VectorDataFetcher_<>c__DisplayClass2_0::<>4__this
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_vectorDaraParameters_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___vectorDaraParameters_0)); }
	inline VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * get_vectorDaraParameters_0() const { return ___vectorDaraParameters_0; }
	inline VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 ** get_address_of_vectorDaraParameters_0() { return &___vectorDaraParameters_0; }
	inline void set_vectorDaraParameters_0(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * value)
	{
		___vectorDaraParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorDaraParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of_vectorTile_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___vectorTile_1)); }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * get_vectorTile_1() const { return ___vectorTile_1; }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 ** get_address_of_vectorTile_1() { return &___vectorTile_1; }
	inline void set_vectorTile_1(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * value)
	{
		___vectorTile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorTile_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15, ___U3CU3E4__this_2)); }
	inline VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Mapbox.Map.CanonicalTileId
struct  CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF 
{
public:
	// System.Int32 Mapbox.Map.CanonicalTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.CanonicalTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.CanonicalTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};


// Mapbox.Map.UnwrappedTileId
struct  UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711 
{
public:
	// System.Int32 Mapbox.Map.UnwrappedTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.UnwrappedTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.UnwrappedTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};


// Mapbox.Utils.Vector2d
struct  Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 
{
public:
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// System.Guid
struct  Guid_t 
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
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

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
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// UnityEngine.Resolution
struct  Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
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


// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};


// DataFetcherParameters
struct  DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId DataFetcherParameters::canonicalTileId
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___canonicalTileId_0;
	// System.String DataFetcherParameters::mapid
	String_t* ___mapid_1;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile DataFetcherParameters::tile
	UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___tile_2;

public:
	inline static int32_t get_offset_of_canonicalTileId_0() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___canonicalTileId_0)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_canonicalTileId_0() const { return ___canonicalTileId_0; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_canonicalTileId_0() { return &___canonicalTileId_0; }
	inline void set_canonicalTileId_0(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___canonicalTileId_0 = value;
	}

	inline static int32_t get_offset_of_mapid_1() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___mapid_1)); }
	inline String_t* get_mapid_1() const { return ___mapid_1; }
	inline String_t** get_address_of_mapid_1() { return &___mapid_1; }
	inline void set_mapid_1(String_t* value)
	{
		___mapid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapid_1), (void*)value);
	}

	inline static int32_t get_offset_of_tile_2() { return static_cast<int32_t>(offsetof(DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17, ___tile_2)); }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * get_tile_2() const { return ___tile_2; }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 ** get_address_of_tile_2() { return &___tile_2; }
	inline void set_tile_2(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * value)
	{
		___tile_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tile_2), (void*)value);
	}
};


// Mapbox.Map.Tile_State
struct  State_t4B0EDD195F30E28F8177FF3E62BC2B7429D9015D 
{
public:
	// System.Int32 Mapbox.Map.Tile_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t4B0EDD195F30E28F8177FF3E62BC2B7429D9015D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Map.TileErrorEventArgs
struct  TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.TileErrorEventArgs::TileId
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___TileId_1;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.TileErrorEventArgs::Exceptions
	List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ___Exceptions_2;
	// Mapbox.Unity.MeshGeneration.Data.UnityTile Mapbox.Map.TileErrorEventArgs::UnityTileInstance
	UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___UnityTileInstance_3;
	// System.Type Mapbox.Map.TileErrorEventArgs::TileType
	Type_t * ___TileType_4;

public:
	inline static int32_t get_offset_of_TileId_1() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___TileId_1)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_TileId_1() const { return ___TileId_1; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_TileId_1() { return &___TileId_1; }
	inline void set_TileId_1(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___TileId_1 = value;
	}

	inline static int32_t get_offset_of_Exceptions_2() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___Exceptions_2)); }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * get_Exceptions_2() const { return ___Exceptions_2; }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A ** get_address_of_Exceptions_2() { return &___Exceptions_2; }
	inline void set_Exceptions_2(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * value)
	{
		___Exceptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exceptions_2), (void*)value);
	}

	inline static int32_t get_offset_of_UnityTileInstance_3() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___UnityTileInstance_3)); }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * get_UnityTileInstance_3() const { return ___UnityTileInstance_3; }
	inline UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 ** get_address_of_UnityTileInstance_3() { return &___UnityTileInstance_3; }
	inline void set_UnityTileInstance_3(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * value)
	{
		___UnityTileInstance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityTileInstance_3), (void*)value);
	}

	inline static int32_t get_offset_of_TileType_4() { return static_cast<int32_t>(offsetof(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4, ___TileType_4)); }
	inline Type_t * get_TileType_4() const { return ___TileType_4; }
	inline Type_t ** get_address_of_TileType_4() { return &___TileType_4; }
	inline void set_TileType_4(Type_t * value)
	{
		___TileType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TileType_4), (void*)value);
	}
};


// Mapbox.Unity.Map.TileTerrainType
struct  TileTerrainType_t121D5B31F2465640E0DC347739778806136AAC71 
{
public:
	// System.Int32 Mapbox.Unity.Map.TileTerrainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileTerrainType_t121D5B31F2465640E0DC347739778806136AAC71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState
struct  TilePropertyState_t41B6A29E067AAD6644607DB63AA168EECB0C0933 
{
public:
	// System.Int32 Mapbox.Unity.MeshGeneration.Enums.TilePropertyState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TilePropertyState_t41B6A29E067AAD6644607DB63AA168EECB0C0933, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mapbox.Utils.RectD
struct  RectD_t43C10C8617E7747A0A298175DED993296095CBFC 
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Min>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CMinU3Ek__BackingField_0;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Max>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CMaxU3Ek__BackingField_1;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Size>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CSizeU3Ek__BackingField_2;
	// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Center>k__BackingField
	Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  ___U3CCenterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMinU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CMinU3Ek__BackingField_0)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CMinU3Ek__BackingField_0() const { return ___U3CMinU3Ek__BackingField_0; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CMinU3Ek__BackingField_0() { return &___U3CMinU3Ek__BackingField_0; }
	inline void set_U3CMinU3Ek__BackingField_0(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CMinU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CMaxU3Ek__BackingField_1)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CMaxU3Ek__BackingField_1() const { return ___U3CMaxU3Ek__BackingField_1; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CMaxU3Ek__BackingField_1() { return &___U3CMaxU3Ek__BackingField_1; }
	inline void set_U3CMaxU3Ek__BackingField_1(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CMaxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CSizeU3Ek__BackingField_2)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CSizeU3Ek__BackingField_2() const { return ___U3CSizeU3Ek__BackingField_2; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CSizeU3Ek__BackingField_2() { return &___U3CSizeU3Ek__BackingField_2; }
	inline void set_U3CSizeU3Ek__BackingField_2(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RectD_t43C10C8617E7747A0A298175DED993296095CBFC, ___U3CCenterU3Ek__BackingField_3)); }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  get_U3CCenterU3Ek__BackingField_3() const { return ___U3CCenterU3Ek__BackingField_3; }
	inline Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483 * get_address_of_U3CCenterU3Ek__BackingField_3() { return &___U3CCenterU3Ek__BackingField_3; }
	inline void set_U3CCenterU3Ek__BackingField_3(Vector2d_t2ADEAAB6D75A1150A40E77811906A94E955E5483  value)
	{
		___U3CCenterU3Ek__BackingField_3 = value;
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

// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_tA1E8A300026362A0AE091830C5DBDEFCBCD5213A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_tFEF4ABC0D7DE012B1C0976F196E45600568D67AF 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tFEF4ABC0D7DE012B1C0976F196E45600568D67AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t8FC0F5849147B01F3EB6E3B876E06B3022E0C59A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t8FC0F5849147B01F3EB6E3B876E06B3022E0C59A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityARInterface.BoundedPlane
struct  BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F 
{
public:
	// System.String UnityARInterface.BoundedPlane::id
	String_t* ___id_0;
	// UnityEngine.Vector3 UnityARInterface.BoundedPlane::center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_1;
	// UnityEngine.Vector2 UnityARInterface.BoundedPlane::extents
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___extents_2;
	// UnityEngine.Quaternion UnityARInterface.BoundedPlane::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F, ___center_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_center_1() const { return ___center_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___center_1 = value;
	}

	inline static int32_t get_offset_of_extents_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F, ___extents_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_extents_2() const { return ___extents_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_extents_2() { return &___extents_2; }
	inline void set_extents_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___extents_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F, ___rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityARInterface.BoundedPlane
struct BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F_marshaled_pinvoke
{
	char* ___id_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_1;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___extents_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
};
// Native definition for COM marshalling of UnityARInterface.BoundedPlane
struct BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F_marshaled_com
{
	Il2CppChar* ___id_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_1;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___extents_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
};

// UnityEngine.CubemapFace
struct  CubemapFace_t74DD9C86D8A5E5F782F136F8753580668F96FFB9 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74DD9C86D8A5E5F782F136F8753580668F96FFB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FilterMode
struct  FilterMode_t6590B4B0BAE2BBBCABA8E1E93FA07A052B3261AF 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_t6590B4B0BAE2BBBCABA8E1E93FA07A052B3261AF, ___value___2)); }
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

// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t6ECEE9FF62E815D7ED640D057EEA84C0FD145D01 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t6ECEE9FF62E815D7ED640D057EEA84C0FD145D01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CameraEvent
struct  CameraEvent_t4EEF32937F0C44471D8ED5E6D8B04C73055E9CB5 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraEvent_t4EEF32937F0C44471D8ED5E6D8B04C73055E9CB5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t8AC763BD80806A9175C6AA8D33D6BABAD83E950F 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t8AC763BD80806A9175C6AA8D33D6BABAD83E950F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARTextureHandles
struct  ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureY
	intptr_t ___textureY_0;
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureCbCr
	intptr_t ___textureCbCr_1;

public:
	inline static int32_t get_offset_of_textureY_0() { return static_cast<int32_t>(offsetof(ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2, ___textureY_0)); }
	inline intptr_t get_textureY_0() const { return ___textureY_0; }
	inline intptr_t* get_address_of_textureY_0() { return &___textureY_0; }
	inline void set_textureY_0(intptr_t value)
	{
		___textureY_0 = value;
	}

	inline static int32_t get_offset_of_textureCbCr_1() { return static_cast<int32_t>(offsetof(ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2, ___textureCbCr_1)); }
	inline intptr_t get_textureCbCr_1() const { return ___textureCbCr_1; }
	inline intptr_t* get_address_of_textureCbCr_1() { return &___textureCbCr_1; }
	inline void set_textureCbCr_1(intptr_t value)
	{
		___textureCbCr_1 = value;
	}
};


// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452, ___transform_1)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___transform_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
};

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	intptr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___primaryDirAndIntensity_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline intptr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline intptr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(intptr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};


// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARAlignment_tBF31DEB8CE1A352963601C233FC63CBAA562054F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct  UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___primaryLightDirection_0;
	// System.Single UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::primaryLightIntensity
	float ___primaryLightIntensity_1;
	// System.Single[] UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::sphericalHarmonicsCoefficients
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___sphericalHarmonicsCoefficients_2;

public:
	inline static int32_t get_offset_of_primaryLightDirection_0() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___primaryLightDirection_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_primaryLightDirection_0() const { return ___primaryLightDirection_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_primaryLightDirection_0() { return &___primaryLightDirection_0; }
	inline void set_primaryLightDirection_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___primaryLightDirection_0 = value;
	}

	inline static int32_t get_offset_of_primaryLightIntensity_1() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___primaryLightIntensity_1)); }
	inline float get_primaryLightIntensity_1() const { return ___primaryLightIntensity_1; }
	inline float* get_address_of_primaryLightIntensity_1() { return &___primaryLightIntensity_1; }
	inline void set_primaryLightIntensity_1(float value)
	{
		___primaryLightIntensity_1 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicsCoefficients_2() { return static_cast<int32_t>(offsetof(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9, ___sphericalHarmonicsCoefficients_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_sphericalHarmonicsCoefficients_2() const { return ___sphericalHarmonicsCoefficients_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_sphericalHarmonicsCoefficients_2() { return &___sphericalHarmonicsCoefficients_2; }
	inline void set_sphericalHarmonicsCoefficients_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___sphericalHarmonicsCoefficients_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sphericalHarmonicsCoefficients_2), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column0_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column0_0() const { return ___column0_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column1_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column1_1() const { return ___column1_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column2_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column2_2() const { return ___column2_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column3_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column3_3() const { return ___column3_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column3_3 = value;
	}
};


// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t2B0A97EC1392ACCE7B07E691202B9CD10C972A22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t727FF292E082186FACC7FF0DB653ACCE553F3247, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};


// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51  : public RuntimeObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arkitConfigMsg_1), (void*)value);
	}
};


// Mapbox.Map.Tile
struct  Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::_id
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ____id_0;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Map.Tile::_exceptions
	List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * ____exceptions_1;
	// Mapbox.Map.Tile_State Mapbox.Map.Tile::_state
	int32_t ____state_2;
	// Mapbox.Platform.IAsyncRequest Mapbox.Map.Tile::_request
	RuntimeObject* ____request_3;
	// System.Action Mapbox.Map.Tile::_callback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____callback_4;
	// System.Collections.Generic.List`1<System.String> Mapbox.Map.Tile::ids
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___ids_5;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____id_0)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get__id_0() const { return ____id_0; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__exceptions_1() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____exceptions_1)); }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * get__exceptions_1() const { return ____exceptions_1; }
	inline List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A ** get_address_of__exceptions_1() { return &____exceptions_1; }
	inline void set__exceptions_1(List_1_t864E43C85FFFD16A2A0685F30AC877138E106F2A * value)
	{
		____exceptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exceptions_1), (void*)value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__request_3() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____request_3)); }
	inline RuntimeObject* get__request_3() const { return ____request_3; }
	inline RuntimeObject** get_address_of__request_3() { return &____request_3; }
	inline void set__request_3(RuntimeObject* value)
	{
		____request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____request_3), (void*)value);
	}

	inline static int32_t get_offset_of__callback_4() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ____callback_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get__callback_4() const { return ____callback_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of__callback_4() { return &____callback_4; }
	inline void set__callback_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		____callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_ids_5() { return static_cast<int32_t>(offsetof(Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0, ___ids_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_ids_5() const { return ___ids_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_ids_5() { return &___ids_5; }
	inline void set_ids_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___ids_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ids_5), (void*)value);
	}
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

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
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


// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
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

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___transform_1)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___center_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_center_3() const { return ___center_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___extent_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_extent_4() const { return ___extent_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___extent_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	int64_t ___alignment_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transform_1;
	int64_t ___alignment_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extent_4;
};

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arDirectonalLightEstimate_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}
};


// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};


// Utils.serializableARKitInit
struct  serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42  : public RuntimeObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42, ___config_0)); }
	inline serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_0), (void*)value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};


// Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};


// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// Utils.serializableUnityARLightData Utils.serializableUnityARCamera::lightData
	serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___lightData_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionMatrix_1), (void*)value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___lightData_5)); }
	inline serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * get_lightData_5() const { return ___lightData_5; }
	inline serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 ** get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightData_5), (void*)value);
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___pointCloud_6)); }
	inline serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloud_6), (void*)value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayTransform_7), (void*)value);
	}
};


// Utils.serializableUnityARLightData
struct  serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.LightDataType Utils.serializableUnityARLightData::whichLight
	int32_t ___whichLight_0;
	// Utils.serializableSHC Utils.serializableUnityARLightData::lightSHC
	serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___lightSHC_1;
	// Utils.SerializableVector4 Utils.serializableUnityARLightData::primaryLightDirAndIntensity
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___primaryLightDirAndIntensity_2;
	// System.Single Utils.serializableUnityARLightData::ambientIntensity
	float ___ambientIntensity_3;
	// System.Single Utils.serializableUnityARLightData::ambientColorTemperature
	float ___ambientColorTemperature_4;

public:
	inline static int32_t get_offset_of_whichLight_0() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___whichLight_0)); }
	inline int32_t get_whichLight_0() const { return ___whichLight_0; }
	inline int32_t* get_address_of_whichLight_0() { return &___whichLight_0; }
	inline void set_whichLight_0(int32_t value)
	{
		___whichLight_0 = value;
	}

	inline static int32_t get_offset_of_lightSHC_1() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___lightSHC_1)); }
	inline serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * get_lightSHC_1() const { return ___lightSHC_1; }
	inline serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 ** get_address_of_lightSHC_1() { return &___lightSHC_1; }
	inline void set_lightSHC_1(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * value)
	{
		___lightSHC_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightSHC_1), (void*)value);
	}

	inline static int32_t get_offset_of_primaryLightDirAndIntensity_2() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___primaryLightDirAndIntensity_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_primaryLightDirAndIntensity_2() const { return ___primaryLightDirAndIntensity_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_primaryLightDirAndIntensity_2() { return &___primaryLightDirAndIntensity_2; }
	inline void set_primaryLightDirAndIntensity_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___primaryLightDirAndIntensity_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryLightDirAndIntensity_2), (void*)value);
	}

	inline static int32_t get_offset_of_ambientIntensity_3() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___ambientIntensity_3)); }
	inline float get_ambientIntensity_3() const { return ___ambientIntensity_3; }
	inline float* get_address_of_ambientIntensity_3() { return &___ambientIntensity_3; }
	inline void set_ambientIntensity_3(float value)
	{
		___ambientIntensity_3 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_4() { return static_cast<int32_t>(offsetof(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0, ___ambientColorTemperature_4)); }
	inline float get_ambientColorTemperature_4() const { return ___ambientColorTemperature_4; }
	inline float* get_address_of_ambientColorTemperature_4() { return &___ambientColorTemperature_4; }
	inline void set_ambientColorTemperature_4(float value)
	{
		___ambientColorTemperature_4 = value;
	}
};


// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___center_1)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___center_1), (void*)value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___extent_2)); }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extent_2), (void*)value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436, ___identifierStr_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifierStr_4), (void*)value);
	}
};


// VectorDataFetcherParameters
struct  VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88  : public DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17
{
public:
	// System.Boolean VectorDataFetcherParameters::useOptimizedStyle
	bool ___useOptimizedStyle_3;
	// Mapbox.Unity.Map.Style VectorDataFetcherParameters::style
	Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * ___style_4;

public:
	inline static int32_t get_offset_of_useOptimizedStyle_3() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88, ___useOptimizedStyle_3)); }
	inline bool get_useOptimizedStyle_3() const { return ___useOptimizedStyle_3; }
	inline bool* get_address_of_useOptimizedStyle_3() { return &___useOptimizedStyle_3; }
	inline void set_useOptimizedStyle_3(bool value)
	{
		___useOptimizedStyle_3 = value;
	}

	inline static int32_t get_offset_of_style_4() { return static_cast<int32_t>(offsetof(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88, ___style_4)); }
	inline Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * get_style_4() const { return ___style_4; }
	inline Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 ** get_address_of_style_4() { return &___style_4; }
	inline void set_style_4(Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * value)
	{
		___style_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_4), (void*)value);
	}
};


// DataFetcher
struct  DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Mapbox.Unity.MapboxAccess DataFetcher::_fileSource
	MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * ____fileSource_4;

public:
	inline static int32_t get_offset_of__fileSource_4() { return static_cast<int32_t>(offsetof(DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191, ____fileSource_4)); }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * get__fileSource_4() const { return ____fileSource_4; }
	inline MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D ** get_address_of__fileSource_4() { return &____fileSource_4; }
	inline void set__fileSource_4(MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * value)
	{
		____fileSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileSource_4), (void*)value);
	}
};


// Mapbox.Map.VectorTile
struct  VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687  : public Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0
{
public:
	// Mapbox.VectorTile.VectorTile Mapbox.Map.VectorTile::data
	VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * ___data_6;
	// System.Boolean Mapbox.Map.VectorTile::_isStyleOptimized
	bool ____isStyleOptimized_7;
	// System.String Mapbox.Map.VectorTile::_optimizedStyleId
	String_t* ____optimizedStyleId_8;
	// System.String Mapbox.Map.VectorTile::_modifiedDate
	String_t* ____modifiedDate_9;
	// System.Boolean Mapbox.Map.VectorTile::isDisposed
	bool ___isDisposed_10;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ___data_6)); }
	inline VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * get_data_6() const { return ___data_6; }
	inline VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 ** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(VectorTile_tA4C1CD2ADDFB88832FA731A992C40E64352745A0 * value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_6), (void*)value);
	}

	inline static int32_t get_offset_of__isStyleOptimized_7() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____isStyleOptimized_7)); }
	inline bool get__isStyleOptimized_7() const { return ____isStyleOptimized_7; }
	inline bool* get_address_of__isStyleOptimized_7() { return &____isStyleOptimized_7; }
	inline void set__isStyleOptimized_7(bool value)
	{
		____isStyleOptimized_7 = value;
	}

	inline static int32_t get_offset_of__optimizedStyleId_8() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____optimizedStyleId_8)); }
	inline String_t* get__optimizedStyleId_8() const { return ____optimizedStyleId_8; }
	inline String_t** get_address_of__optimizedStyleId_8() { return &____optimizedStyleId_8; }
	inline void set__optimizedStyleId_8(String_t* value)
	{
		____optimizedStyleId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optimizedStyleId_8), (void*)value);
	}

	inline static int32_t get_offset_of__modifiedDate_9() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ____modifiedDate_9)); }
	inline String_t* get__modifiedDate_9() const { return ____modifiedDate_9; }
	inline String_t** get_address_of__modifiedDate_9() { return &____modifiedDate_9; }
	inline void set__modifiedDate_9(String_t* value)
	{
		____modifiedDate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____modifiedDate_9), (void*)value);
	}

	inline static int32_t get_offset_of_isDisposed_10() { return static_cast<int32_t>(offsetof(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687, ___isDisposed_10)); }
	inline bool get_isDisposed_10() const { return ___isDisposed_10; }
	inline bool* get_address_of_isDisposed_10() { return &___isDisposed_10; }
	inline void set_isDisposed_10(bool value)
	{
		___isDisposed_10 = value;
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityARInterface.BoundedPlane>
struct  Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>
struct  Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>
struct  Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_context_1)); }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_binder_2)); }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_tB5EBAF328371FB7CF23E37F5984D8412762CFFA4 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tDF0B764EEAE1242A344103EC40130E5D891C6934 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
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


// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___lightData_5)); }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  value)
	{
		___lightData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lightData_5))->___arDirectonalLightEstimate_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___pointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloudData_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_pinvoke
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_com
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};

// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorRemoved
struct  ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorUpdated
struct  ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___lightData_5)); }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_14;

public:
	inline static int32_t get_offset_of_m_NativeARSession_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760, ___m_NativeARSession_14)); }
	inline intptr_t get_m_NativeARSession_14() const { return ___m_NativeARSession_14; }
	inline intptr_t* get_address_of_m_NativeARSession_14() { return &___m_NativeARSession_14; }
	inline void set_m_NativeARSession_14(intptr_t value)
	{
		___m_NativeARSession_14 = value;
	}
};

struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * ___ARSessionFailedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessionInterruptedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessioninterruptionEndedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * ___ARSessionTrackingChangedEvent_13;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___s_Camera_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___s_UnityARSessionNativeInterface_16;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFrameUpdatedEvent_0), (void*)value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARAnchorAddedEvent_1), (void*)value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARAnchorUpdatedEvent_2), (void*)value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARAnchorRemovedEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARUserAnchorAddedEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARUserAnchorUpdatedEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARUserAnchorRemovedEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFaceAnchorAddedEvent_7), (void*)value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFaceAnchorUpdatedEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFaceAnchorRemovedEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionFailedEvent_10)); }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * get_ARSessionFailedEvent_10() const { return ___ARSessionFailedEvent_10; }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 ** get_address_of_ARSessionFailedEvent_10() { return &___ARSessionFailedEvent_10; }
	inline void set_ARSessionFailedEvent_10(ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * value)
	{
		___ARSessionFailedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessionFailedEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionInterruptedEvent_11)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessionInterruptedEvent_11() const { return ___ARSessionInterruptedEvent_11; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessionInterruptedEvent_11() { return &___ARSessionInterruptedEvent_11; }
	inline void set_ARSessionInterruptedEvent_11(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessionInterruptedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessionInterruptedEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessioninterruptionEndedEvent_12)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessioninterruptionEndedEvent_12() const { return ___ARSessioninterruptionEndedEvent_12; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessioninterruptionEndedEvent_12() { return &___ARSessioninterruptionEndedEvent_12; }
	inline void set_ARSessioninterruptionEndedEvent_12(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessioninterruptionEndedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessioninterruptionEndedEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionTrackingChangedEvent_13)); }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * get_ARSessionTrackingChangedEvent_13() const { return ___ARSessionTrackingChangedEvent_13; }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 ** get_address_of_ARSessionTrackingChangedEvent_13() { return &___ARSessionTrackingChangedEvent_13; }
	inline void set_ARSessionTrackingChangedEvent_13(ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * value)
	{
		___ARSessionTrackingChangedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARSessionTrackingChangedEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_Camera_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_Camera_15)); }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  get_s_Camera_15() const { return ___s_Camera_15; }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 * get_address_of_s_Camera_15() { return &___s_Camera_15; }
	inline void set_s_Camera_15(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  value)
	{
		___s_Camera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_Camera_15))->___lightData_5))->___arDirectonalLightEstimate_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Camera_15))->___pointCloudData_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_UnityARSessionNativeInterface_16)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_s_UnityARSessionNativeInterface_16() const { return ___s_UnityARSessionNativeInterface_16; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_s_UnityARSessionNativeInterface_16() { return &___s_UnityARSessionNativeInterface_16; }
	inline void set_s_UnityARSessionNativeInterface_16(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___s_UnityARSessionNativeInterface_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UnityARSessionNativeInterface_16), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate
struct  ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67  : public MulticastDelegate_t
{
public:

public:
};


// VectorDataFetcher
struct  VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357  : public DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191
{
public:
	// System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile> VectorDataFetcher::DataRecieved
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * ___DataRecieved_5;
	// System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs> VectorDataFetcher::FetchingError
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * ___FetchingError_6;

public:
	inline static int32_t get_offset_of_DataRecieved_5() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357, ___DataRecieved_5)); }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * get_DataRecieved_5() const { return ___DataRecieved_5; }
	inline Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 ** get_address_of_DataRecieved_5() { return &___DataRecieved_5; }
	inline void set_DataRecieved_5(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * value)
	{
		___DataRecieved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataRecieved_5), (void*)value);
	}

	inline static int32_t get_offset_of_FetchingError_6() { return static_cast<int32_t>(offsetof(VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357, ___FetchingError_6)); }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * get_FetchingError_6() const { return ___FetchingError_6; }
	inline Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E ** get_address_of_FetchingError_6() { return &___FetchingError_6; }
	inline void set_FetchingError_6(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * value)
	{
		___FetchingError_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FetchingError_6), (void*)value);
	}
};


// Mapbox.Unity.MeshGeneration.Data.UnityTile
struct  UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mapbox.Unity.Map.TileTerrainType Mapbox.Unity.MeshGeneration.Data.UnityTile::ElevationType
	int32_t ___ElevationType_4;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterData
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____rasterData_5;
	// Mapbox.Map.VectorTile Mapbox.Unity.MeshGeneration.Data.UnityTile::<VectorData>k__BackingField
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___U3CVectorDataU3Ek__BackingField_6;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____heightTexture_7;
	// System.Single[] Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightData
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____heightData_8;
	// UnityEngine.Texture2D Mapbox.Unity.MeshGeneration.Data.UnityTile::_loadingTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____loadingTexture_9;
	// System.Collections.Generic.List`1<Mapbox.Map.Tile> Mapbox.Unity.MeshGeneration.Data.UnityTile::_tiles
	List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * ____tiles_10;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::IsRecycled
	bool ___IsRecycled_11;
	// UnityEngine.MeshRenderer Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ____meshRenderer_12;
	// UnityEngine.MeshFilter Mapbox.Unity.MeshGeneration.Data.UnityTile::_meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ____meshFilter_13;
	// UnityEngine.Collider Mapbox.Unity.MeshGeneration.Data.UnityTile::_collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ____collider_14;
	// Mapbox.Utils.RectD Mapbox.Unity.MeshGeneration.Data.UnityTile::<Rect>k__BackingField
	RectD_t43C10C8617E7747A0A298175DED993296095CBFC  ___U3CRectU3Ek__BackingField_15;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<InitialZoom>k__BackingField
	int32_t ___U3CInitialZoomU3Ek__BackingField_16;
	// System.Int32 Mapbox.Unity.MeshGeneration.Data.UnityTile::<CurrentZoom>k__BackingField
	int32_t ___U3CCurrentZoomU3Ek__BackingField_17;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::<TileScale>k__BackingField
	float ___U3CTileScaleU3Ek__BackingField_18;
	// Mapbox.Map.UnwrappedTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<UnwrappedTileId>k__BackingField
	UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  ___U3CUnwrappedTileIdU3Ek__BackingField_19;
	// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::<CanonicalTileId>k__BackingField
	CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___U3CCanonicalTileIdU3Ek__BackingField_20;
	// System.Single Mapbox.Unity.MeshGeneration.Data.UnityTile::_relativeScale
	float ____relativeScale_21;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_rasterDataState
	int32_t ____rasterDataState_22;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_heightDataState
	int32_t ____heightDataState_23;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_vectorDataState
	int32_t ____vectorDataState_24;
	// Mapbox.Unity.MeshGeneration.Enums.TilePropertyState Mapbox.Unity.MeshGeneration.Data.UnityTile::_tileState
	int32_t ____tileState_25;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnHeightDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnHeightDataChanged_26;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnRasterDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnRasterDataChanged_27;
	// System.Action`1<Mapbox.Unity.MeshGeneration.Data.UnityTile> Mapbox.Unity.MeshGeneration.Data.UnityTile::OnVectorDataChanged
	Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * ___OnVectorDataChanged_28;
	// System.Boolean Mapbox.Unity.MeshGeneration.Data.UnityTile::_isInitialized
	bool ____isInitialized_29;

public:
	inline static int32_t get_offset_of_ElevationType_4() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___ElevationType_4)); }
	inline int32_t get_ElevationType_4() const { return ___ElevationType_4; }
	inline int32_t* get_address_of_ElevationType_4() { return &___ElevationType_4; }
	inline void set_ElevationType_4(int32_t value)
	{
		___ElevationType_4 = value;
	}

	inline static int32_t get_offset_of__rasterData_5() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____rasterData_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__rasterData_5() const { return ____rasterData_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__rasterData_5() { return &____rasterData_5; }
	inline void set__rasterData_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____rasterData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rasterData_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVectorDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CVectorDataU3Ek__BackingField_6)); }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * get_U3CVectorDataU3Ek__BackingField_6() const { return ___U3CVectorDataU3Ek__BackingField_6; }
	inline VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 ** get_address_of_U3CVectorDataU3Ek__BackingField_6() { return &___U3CVectorDataU3Ek__BackingField_6; }
	inline void set_U3CVectorDataU3Ek__BackingField_6(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * value)
	{
		___U3CVectorDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVectorDataU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of__heightTexture_7() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____heightTexture_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__heightTexture_7() const { return ____heightTexture_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__heightTexture_7() { return &____heightTexture_7; }
	inline void set__heightTexture_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____heightTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heightTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of__heightData_8() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____heightData_8)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__heightData_8() const { return ____heightData_8; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__heightData_8() { return &____heightData_8; }
	inline void set__heightData_8(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____heightData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heightData_8), (void*)value);
	}

	inline static int32_t get_offset_of__loadingTexture_9() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____loadingTexture_9)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__loadingTexture_9() const { return ____loadingTexture_9; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__loadingTexture_9() { return &____loadingTexture_9; }
	inline void set__loadingTexture_9(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____loadingTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadingTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of__tiles_10() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tiles_10)); }
	inline List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * get__tiles_10() const { return ____tiles_10; }
	inline List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C ** get_address_of__tiles_10() { return &____tiles_10; }
	inline void set__tiles_10(List_1_t678537742995D5227AFDCA94CA2173F7BB9F9C8C * value)
	{
		____tiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tiles_10), (void*)value);
	}

	inline static int32_t get_offset_of_IsRecycled_11() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___IsRecycled_11)); }
	inline bool get_IsRecycled_11() const { return ___IsRecycled_11; }
	inline bool* get_address_of_IsRecycled_11() { return &___IsRecycled_11; }
	inline void set_IsRecycled_11(bool value)
	{
		___IsRecycled_11 = value;
	}

	inline static int32_t get_offset_of__meshRenderer_12() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____meshRenderer_12)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get__meshRenderer_12() const { return ____meshRenderer_12; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of__meshRenderer_12() { return &____meshRenderer_12; }
	inline void set__meshRenderer_12(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		____meshRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of__meshFilter_13() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____meshFilter_13)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get__meshFilter_13() const { return ____meshFilter_13; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of__meshFilter_13() { return &____meshFilter_13; }
	inline void set__meshFilter_13(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		____meshFilter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____meshFilter_13), (void*)value);
	}

	inline static int32_t get_offset_of__collider_14() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____collider_14)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get__collider_14() const { return ____collider_14; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of__collider_14() { return &____collider_14; }
	inline void set__collider_14(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		____collider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collider_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRectU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CRectU3Ek__BackingField_15)); }
	inline RectD_t43C10C8617E7747A0A298175DED993296095CBFC  get_U3CRectU3Ek__BackingField_15() const { return ___U3CRectU3Ek__BackingField_15; }
	inline RectD_t43C10C8617E7747A0A298175DED993296095CBFC * get_address_of_U3CRectU3Ek__BackingField_15() { return &___U3CRectU3Ek__BackingField_15; }
	inline void set_U3CRectU3Ek__BackingField_15(RectD_t43C10C8617E7747A0A298175DED993296095CBFC  value)
	{
		___U3CRectU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CInitialZoomU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CInitialZoomU3Ek__BackingField_16)); }
	inline int32_t get_U3CInitialZoomU3Ek__BackingField_16() const { return ___U3CInitialZoomU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CInitialZoomU3Ek__BackingField_16() { return &___U3CInitialZoomU3Ek__BackingField_16; }
	inline void set_U3CInitialZoomU3Ek__BackingField_16(int32_t value)
	{
		___U3CInitialZoomU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentZoomU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CCurrentZoomU3Ek__BackingField_17)); }
	inline int32_t get_U3CCurrentZoomU3Ek__BackingField_17() const { return ___U3CCurrentZoomU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CCurrentZoomU3Ek__BackingField_17() { return &___U3CCurrentZoomU3Ek__BackingField_17; }
	inline void set_U3CCurrentZoomU3Ek__BackingField_17(int32_t value)
	{
		___U3CCurrentZoomU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CTileScaleU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CTileScaleU3Ek__BackingField_18)); }
	inline float get_U3CTileScaleU3Ek__BackingField_18() const { return ___U3CTileScaleU3Ek__BackingField_18; }
	inline float* get_address_of_U3CTileScaleU3Ek__BackingField_18() { return &___U3CTileScaleU3Ek__BackingField_18; }
	inline void set_U3CTileScaleU3Ek__BackingField_18(float value)
	{
		___U3CTileScaleU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CUnwrappedTileIdU3Ek__BackingField_19)); }
	inline UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  get_U3CUnwrappedTileIdU3Ek__BackingField_19() const { return ___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711 * get_address_of_U3CUnwrappedTileIdU3Ek__BackingField_19() { return &___U3CUnwrappedTileIdU3Ek__BackingField_19; }
	inline void set_U3CUnwrappedTileIdU3Ek__BackingField_19(UnwrappedTileId_t7A984360DFE28AF32D37C14DE08CF3E905588711  value)
	{
		___U3CUnwrappedTileIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___U3CCanonicalTileIdU3Ek__BackingField_20)); }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  get_U3CCanonicalTileIdU3Ek__BackingField_20() const { return ___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF * get_address_of_U3CCanonicalTileIdU3Ek__BackingField_20() { return &___U3CCanonicalTileIdU3Ek__BackingField_20; }
	inline void set_U3CCanonicalTileIdU3Ek__BackingField_20(CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  value)
	{
		___U3CCanonicalTileIdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of__relativeScale_21() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____relativeScale_21)); }
	inline float get__relativeScale_21() const { return ____relativeScale_21; }
	inline float* get_address_of__relativeScale_21() { return &____relativeScale_21; }
	inline void set__relativeScale_21(float value)
	{
		____relativeScale_21 = value;
	}

	inline static int32_t get_offset_of__rasterDataState_22() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____rasterDataState_22)); }
	inline int32_t get__rasterDataState_22() const { return ____rasterDataState_22; }
	inline int32_t* get_address_of__rasterDataState_22() { return &____rasterDataState_22; }
	inline void set__rasterDataState_22(int32_t value)
	{
		____rasterDataState_22 = value;
	}

	inline static int32_t get_offset_of__heightDataState_23() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____heightDataState_23)); }
	inline int32_t get__heightDataState_23() const { return ____heightDataState_23; }
	inline int32_t* get_address_of__heightDataState_23() { return &____heightDataState_23; }
	inline void set__heightDataState_23(int32_t value)
	{
		____heightDataState_23 = value;
	}

	inline static int32_t get_offset_of__vectorDataState_24() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____vectorDataState_24)); }
	inline int32_t get__vectorDataState_24() const { return ____vectorDataState_24; }
	inline int32_t* get_address_of__vectorDataState_24() { return &____vectorDataState_24; }
	inline void set__vectorDataState_24(int32_t value)
	{
		____vectorDataState_24 = value;
	}

	inline static int32_t get_offset_of__tileState_25() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____tileState_25)); }
	inline int32_t get__tileState_25() const { return ____tileState_25; }
	inline int32_t* get_address_of__tileState_25() { return &____tileState_25; }
	inline void set__tileState_25(int32_t value)
	{
		____tileState_25 = value;
	}

	inline static int32_t get_offset_of_OnHeightDataChanged_26() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnHeightDataChanged_26)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnHeightDataChanged_26() const { return ___OnHeightDataChanged_26; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnHeightDataChanged_26() { return &___OnHeightDataChanged_26; }
	inline void set_OnHeightDataChanged_26(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnHeightDataChanged_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHeightDataChanged_26), (void*)value);
	}

	inline static int32_t get_offset_of_OnRasterDataChanged_27() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnRasterDataChanged_27)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnRasterDataChanged_27() const { return ___OnRasterDataChanged_27; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnRasterDataChanged_27() { return &___OnRasterDataChanged_27; }
	inline void set_OnRasterDataChanged_27(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnRasterDataChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRasterDataChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_OnVectorDataChanged_28() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ___OnVectorDataChanged_28)); }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * get_OnVectorDataChanged_28() const { return ___OnVectorDataChanged_28; }
	inline Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 ** get_address_of_OnVectorDataChanged_28() { return &___OnVectorDataChanged_28; }
	inline void set_OnVectorDataChanged_28(Action_1_t59AF80789306C74233A6FFBAAB31ACF3EB259B78 * value)
	{
		___OnVectorDataChanged_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVectorDataChanged_28), (void*)value);
	}

	inline static int32_t get_offset_of__isInitialized_29() { return static_cast<int32_t>(offsetof(UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923, ____isInitialized_29)); }
	inline bool get__isInitialized_29() const { return ____isInitialized_29; }
	inline bool* get_address_of__isInitialized_29() { return &____isInitialized_29; }
	inline void set__isInitialized_29(bool value)
	{
		____isInitialized_29 = value;
	}
};


// UnityARInterface.ARPlaneHandler
struct  ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityARInterface.ARPlaneHandler::_planeId
	String_t* ____planeId_6;
	// UnityARInterface.BoundedPlane UnityARInterface.ARPlaneHandler::_cachedARPlane
	BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  ____cachedARPlane_7;

public:
	inline static int32_t get_offset_of__planeId_6() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A, ____planeId_6)); }
	inline String_t* get__planeId_6() const { return ____planeId_6; }
	inline String_t** get_address_of__planeId_6() { return &____planeId_6; }
	inline void set__planeId_6(String_t* value)
	{
		____planeId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____planeId_6), (void*)value);
	}

	inline static int32_t get_offset_of__cachedARPlane_7() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A, ____cachedARPlane_7)); }
	inline BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  get__cachedARPlane_7() const { return ____cachedARPlane_7; }
	inline BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F * get_address_of__cachedARPlane_7() { return &____cachedARPlane_7; }
	inline void set__cachedARPlane_7(BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  value)
	{
		____cachedARPlane_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cachedARPlane_7))->___id_0), (void*)NULL);
	}
};

struct ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields
{
public:
	// System.Action UnityARInterface.ARPlaneHandler::resetARPlane
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___resetARPlane_4;
	// System.Action`1<UnityARInterface.BoundedPlane> UnityARInterface.ARPlaneHandler::returnARPlane
	Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * ___returnARPlane_5;

public:
	inline static int32_t get_offset_of_resetARPlane_4() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields, ___resetARPlane_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_resetARPlane_4() const { return ___resetARPlane_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_resetARPlane_4() { return &___resetARPlane_4; }
	inline void set_resetARPlane_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___resetARPlane_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resetARPlane_4), (void*)value);
	}

	inline static int32_t get_offset_of_returnARPlane_5() { return static_cast<int32_t>(offsetof(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields, ___returnARPlane_5)); }
	inline Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * get_returnARPlane_5() const { return ___returnARPlane_5; }
	inline Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB ** get_address_of_returnARPlane_5() { return &___returnARPlane_5; }
	inline void set_returnARPlane_5(Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * value)
	{
		___returnARPlane_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___returnARPlane_5), (void*)value);
	}
};


// UnityEngine.XR.iOS.ConnectToEditor
struct  ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.XR.iOS.ConnectToEditor::playerConnection
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * ___playerConnection_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.ConnectToEditor::m_session
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___m_session_5;
	// System.Int32 UnityEngine.XR.iOS.ConnectToEditor::editorID
	int32_t ___editorID_6;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.ConnectToEditor::frameBufferTex
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___frameBufferTex_7;

public:
	inline static int32_t get_offset_of_playerConnection_4() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___playerConnection_4)); }
	inline PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * get_playerConnection_4() const { return ___playerConnection_4; }
	inline PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA ** get_address_of_playerConnection_4() { return &___playerConnection_4; }
	inline void set_playerConnection_4(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * value)
	{
		___playerConnection_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerConnection_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_session_5() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___m_session_5)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_m_session_5() const { return ___m_session_5; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_m_session_5() { return &___m_session_5; }
	inline void set_m_session_5(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___m_session_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_session_5), (void*)value);
	}

	inline static int32_t get_offset_of_editorID_6() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___editorID_6)); }
	inline int32_t get_editorID_6() const { return ___editorID_6; }
	inline int32_t* get_address_of_editorID_6() { return &___editorID_6; }
	inline void set_editorID_6(int32_t value)
	{
		___editorID_6 = value;
	}

	inline static int32_t get_offset_of_frameBufferTex_7() { return static_cast<int32_t>(offsetof(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3, ___frameBufferTex_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_frameBufferTex_7() const { return ___frameBufferTex_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_frameBufferTex_7() { return &___frameBufferTex_7; }
	inline void set_frameBufferTex_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___frameBufferTex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameBufferTex_7), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_4;

public:
	inline static int32_t get_offset_of_m_AnchorId_4() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A, ___m_AnchorId_4)); }
	inline String_t* get_m_AnchorId_4() const { return ___m_AnchorId_4; }
	inline String_t** get_address_of_m_AnchorId_4() { return &___m_AnchorId_4; }
	inline void set_m_AnchorId_4(String_t* value)
	{
		___m_AnchorId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnchorId_4), (void*)value);
	}
};


// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_ClearMaterial_4;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___m_VideoCommandBuffer_5;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____videoTextureY_6;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____videoTextureCbCr_7;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARVideo::_displayTransform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ____displayTransform_8;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_9;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845, ___m_ClearMaterial_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_ClearMaterial_4() const { return ___m_ClearMaterial_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_ClearMaterial_4() { return &___m_ClearMaterial_4; }
	inline void set_m_ClearMaterial_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_ClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClearMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845, ___m_VideoCommandBuffer_5)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_m_VideoCommandBuffer_5() const { return ___m_VideoCommandBuffer_5; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_m_VideoCommandBuffer_5() { return &___m_VideoCommandBuffer_5; }
	inline void set_m_VideoCommandBuffer_5(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___m_VideoCommandBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VideoCommandBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__videoTextureY_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845, ____videoTextureY_6)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__videoTextureY_6() const { return ____videoTextureY_6; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__videoTextureY_6() { return &____videoTextureY_6; }
	inline void set__videoTextureY_6(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____videoTextureY_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoTextureY_6), (void*)value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845, ____videoTextureCbCr_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__videoTextureCbCr_7() const { return ____videoTextureCbCr_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__videoTextureCbCr_7() { return &____videoTextureCbCr_7; }
	inline void set__videoTextureCbCr_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____videoTextureCbCr_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoTextureCbCr_7), (void*)value);
	}

	inline static int32_t get_offset_of__displayTransform_8() { return static_cast<int32_t>(offsetof(UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845, ____displayTransform_8)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get__displayTransform_8() const { return ____displayTransform_8; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of__displayTransform_8() { return &____displayTransform_8; }
	inline void set__displayTransform_8(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		____displayTransform_8 = value;
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_9() { return static_cast<int32_t>(offsetof(UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845, ___bCommandBufferInitialized_9)); }
	inline bool get_bCommandBufferInitialized_9() const { return ___bCommandBufferInitialized_9; }
	inline bool* get_address_of_bCommandBufferInitialized_9() { return &___bCommandBufferInitialized_9; }
	inline void set_bCommandBufferInitialized_9(bool value)
	{
		___bCommandBufferInitialized_9 = value;
	}
};


// UnityEngine.XR.iOS.UnityRemoteVideo
struct  UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.XR.iOS.ConnectToEditor UnityEngine.XR.iOS.UnityRemoteVideo::connectToEditor
	ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * ___connectToEditor_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityRemoteVideo::m_Session
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___m_Session_5;
	// System.Boolean UnityEngine.XR.iOS.UnityRemoteVideo::bTexturesInitialized
	bool ___bTexturesInitialized_6;
	// System.Int32 UnityEngine.XR.iOS.UnityRemoteVideo::currentFrameIndex
	int32_t ___currentFrameIndex_7;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_textureYBytes_8;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_textureUVBytes_9;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes2
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_textureYBytes2_10;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes2
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_textureUVBytes2_11;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedYArray
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_pinnedYArray_12;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedUVArray
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_pinnedUVArray_13;

public:
	inline static int32_t get_offset_of_connectToEditor_4() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___connectToEditor_4)); }
	inline ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * get_connectToEditor_4() const { return ___connectToEditor_4; }
	inline ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 ** get_address_of_connectToEditor_4() { return &___connectToEditor_4; }
	inline void set_connectToEditor_4(ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * value)
	{
		___connectToEditor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectToEditor_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Session_5() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_Session_5)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_m_Session_5() const { return ___m_Session_5; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_m_Session_5() { return &___m_Session_5; }
	inline void set_m_Session_5(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___m_Session_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Session_5), (void*)value);
	}

	inline static int32_t get_offset_of_bTexturesInitialized_6() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___bTexturesInitialized_6)); }
	inline bool get_bTexturesInitialized_6() const { return ___bTexturesInitialized_6; }
	inline bool* get_address_of_bTexturesInitialized_6() { return &___bTexturesInitialized_6; }
	inline void set_bTexturesInitialized_6(bool value)
	{
		___bTexturesInitialized_6 = value;
	}

	inline static int32_t get_offset_of_currentFrameIndex_7() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___currentFrameIndex_7)); }
	inline int32_t get_currentFrameIndex_7() const { return ___currentFrameIndex_7; }
	inline int32_t* get_address_of_currentFrameIndex_7() { return &___currentFrameIndex_7; }
	inline void set_currentFrameIndex_7(int32_t value)
	{
		___currentFrameIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_textureYBytes_8() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureYBytes_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_textureYBytes_8() const { return ___m_textureYBytes_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_textureYBytes_8() { return &___m_textureYBytes_8; }
	inline void set_m_textureYBytes_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_textureYBytes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textureYBytes_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes_9() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureUVBytes_9)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_textureUVBytes_9() const { return ___m_textureUVBytes_9; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_textureUVBytes_9() { return &___m_textureUVBytes_9; }
	inline void set_m_textureUVBytes_9(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_textureUVBytes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textureUVBytes_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textureYBytes2_10() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureYBytes2_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_textureYBytes2_10() const { return ___m_textureYBytes2_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_textureYBytes2_10() { return &___m_textureYBytes2_10; }
	inline void set_m_textureYBytes2_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_textureYBytes2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textureYBytes2_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes2_11() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_textureUVBytes2_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_textureUVBytes2_11() const { return ___m_textureUVBytes2_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_textureUVBytes2_11() { return &___m_textureUVBytes2_11; }
	inline void set_m_textureUVBytes2_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_textureUVBytes2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textureUVBytes2_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_pinnedYArray_12() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_pinnedYArray_12)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_m_pinnedYArray_12() const { return ___m_pinnedYArray_12; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_m_pinnedYArray_12() { return &___m_pinnedYArray_12; }
	inline void set_m_pinnedYArray_12(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___m_pinnedYArray_12 = value;
	}

	inline static int32_t get_offset_of_m_pinnedUVArray_13() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222, ___m_pinnedUVArray_13)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_m_pinnedUVArray_13() const { return ___m_pinnedUVArray_13; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_m_pinnedUVArray_13() { return &___m_pinnedUVArray_13; }
	inline void set_m_pinnedUVArray_13(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___m_pinnedUVArray_13 = value;
	}
};


// UnityPointCloudExample
struct  UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_4;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PointCloudPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___pointCloudObjects_6;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_PointCloudData_7;

public:
	inline static int32_t get_offset_of_numPointsToShow_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___numPointsToShow_4)); }
	inline uint32_t get_numPointsToShow_4() const { return ___numPointsToShow_4; }
	inline uint32_t* get_address_of_numPointsToShow_4() { return &___numPointsToShow_4; }
	inline void set_numPointsToShow_4(uint32_t value)
	{
		___numPointsToShow_4 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___PointCloudPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PointCloudPrefab_5() const { return ___PointCloudPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PointCloudPrefab_5() { return &___PointCloudPrefab_5; }
	inline void set_PointCloudPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PointCloudPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointCloudPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_6() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___pointCloudObjects_6)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_pointCloudObjects_6() const { return ___pointCloudObjects_6; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_pointCloudObjects_6() { return &___pointCloudObjects_6; }
	inline void set_pointCloudObjects_6(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___pointCloudObjects_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloudObjects_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointCloudData_7), (void*)value);
	}
};


// UpdateShaderCoordinatesByARPlane
struct  UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Quaternion UpdateShaderCoordinatesByARPlane::_rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____rotation_4;
	// UnityEngine.Vector3 UpdateShaderCoordinatesByARPlane::_localScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____localScale_5;
	// UnityEngine.Vector3 UpdateShaderCoordinatesByARPlane::_position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____position_6;

public:
	inline static int32_t get_offset_of__rotation_4() { return static_cast<int32_t>(offsetof(UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001, ____rotation_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__rotation_4() const { return ____rotation_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__rotation_4() { return &____rotation_4; }
	inline void set__rotation_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____rotation_4 = value;
	}

	inline static int32_t get_offset_of__localScale_5() { return static_cast<int32_t>(offsetof(UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001, ____localScale_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__localScale_5() const { return ____localScale_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__localScale_5() { return &____localScale_5; }
	inline void set__localScale_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____localScale_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001, ____position_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__position_6() const { return ____position_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____position_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mF2869D54987BDCEE9F39FF2F62D1FB1016744718_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityARInterface.BoundedPlane>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487_gshared (Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m5972EA183DBCD8D6EEB01F5ECB57DD97AF4F2517_gshared (Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Invoke_m8F56028EA729FE3B484C3C6FEC090C1891362C22_gshared (Action_3_tD3B1A7ECF5E5121DF8258649B7DB64B0A9F52FD7 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);

// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUserAnchorUpdated__ctor_mF79DCBED3C1E687CA42DBE5DEC14A6517716039A (ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m26AC4CE71FD01EE7EA9285F12470CB9BC7BF1619 (ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUserAnchorRemoved__ctor_m2BC6F4E48538F7D1C4D59F382815CFB06D1CD0B1 (ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m663FF0651B68835D363346451CDD36BE1115776B (ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARSessionNativeInterface::AddUserAnchorFromGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  UnityARSessionNativeInterface_AddUserAnchorFromGameObject_m0ACF362C54F8604F1C75DC1FD430A87A03D6B3DD (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, const RuntimeMethod* method);
// System.String UnityEngine.XR.iOS.UnityARUserAnchorData::get_identifierStr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityARUserAnchorData_get_identifierStr_mBE6C8E204E500D89AA66826657E04D4183E1F461 (UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m9DCA0315BCE2D1F95877900CDA720D791FC47851 (ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARUserAnchorRemovedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m76DA1B28AD19D4E442EF966998A77C6A0E70EFF9 (ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::RemoveUserAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_RemoveUserAnchor_m48108F05EAA15CC2150B9BA8BD93C1BFB71A8720 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, String_t* ___anchorIdentifier0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_mEB58737930C2F57CFE9E32B03524D7210DB94027 (intptr_t ___ptr0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::UpdatePlaneWithAnchorTransform(UnityEngine.GameObject,UnityEngine.XR.iOS.ARPlaneAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UnityARUtility_UpdatePlaneWithAnchorTransform_mB3988A33B6DAB4B18934BC08E8B4C45A6BBAA000 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___plane0, ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  ___arPlaneAnchor1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARMatrixOps::GetPosition(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityARMatrixOps_GetPosition_m54E6ADA8EBCA4AE705C6C12768F187D3D41B419C (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.iOS.UnityARMatrixOps::GetRotation(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityARMatrixOps_GetRotation_m4F9DBC8D43E2027273AFEA83C4590995154CDD27 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponentInChildren_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m167F97C6FEB835ACE2CCD5FE7899D663310D04CF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mF2869D54987BDCEE9F39FF2F62D1FB1016744718_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461 (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_m8AFBFEE401780B02DC32B58BF8FCE9AAA34C7F88 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column1, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m4394F7E41C9BB751E382A8CAFA38B19F69E03890 (CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  RenderTargetIdentifier_op_Implicit_m080A48CE8A898732E2554818DD3BF66004369D1B (int32_t ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m0922EC09A8E32FBEE2CEE938328AB618128283E9 (CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___source0, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___dest1, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_AddCommandBuffer_mA3A1341F6C15A1C9DEF1BA7471726238797880B7 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___evt0, CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___buffer1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_RemoveCommandBuffer_m323F15CA3AB7E38DB77C73930A9B517400403320 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___evt0, CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___buffer1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::remove_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_mB19CB3DB613EA5AB905C1C946618F509607F8A3A (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARTextureHandles UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARVideoTextureHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  UnityARSessionNativeInterface_GetARVideoTextureHandles_m709A401A9D8AD29E6DF4FF5B46B9A3A9081CA886 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARVideo::InitializeCommandBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARVideo_InitializeCommandBuffer_m8745BF76E0CC672472C21AEFB40635B258324657 (UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845 * __this, const RuntimeMethod* method);
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_m6254A0489C2CCB1574E4D98E45009DDE5212655C (Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_m5141CDF13E8C1ADEF47AEB5155AD72BD13121CCD (Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::CreateExternalTexture(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2D_CreateExternalTexture_m292548AA116AA5176E8CA03AFBBC088E3B698DE4 (int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipChain3, bool ___linear4, intptr_t ___nativeTex5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mB9AC927A527EFE95771B9B438E2CFB9EDA84AF01 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_UpdateExternalTexture_m8A3486B0779454739624888EFD6D9EC42D30874F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, intptr_t ___nativeTex0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_mE3D3FA75DA02FED1B97E2BECA258F45399715764 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityMarshalLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.MarshalDirectionalLightEstimate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMarshalLightData__ctor_m154473D64955A8ADC69ABA460F5D514C604EED04 (UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___mdle2, const RuntimeMethod* method);
// System.Single[] UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::get_SphericalHarmonicCoefficients()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* MarshalDirectionalLightEstimate_get_SphericalHarmonicCoefficients_m418595AFDCBE1863684E53901F7B3B81077DA2A5 (MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARDirectionalLightEstimate::.ctor(System.Single[],UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARDirectionalLightEstimate__ctor_mF4132E3E0A3BF152E060E07F064D5DA8C27796F1 (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___SHC0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, float ___intensity2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARDirectionalLightEstimate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARLightData__ctor_m3F910A4326A4E9B02F36CA12D1379A2341616DB1 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___udle2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRemoteVideo_InitializeTextures_m2E2664708F6FE67C5689AC6315BCC641B0490ED7 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UnityRemoteVideo_ByteArrayForFrame_m6A617F087DE38CC509B3346DEA6BBB64457D63A0 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array01, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array12, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::SetCapturePixelData(System.Boolean,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_SetCapturePixelData_m4B39FF92753FBB8B8CB82D6243A585535640D923 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, bool ___enable0, intptr_t ___pYByteArray1, intptr_t ___pUVByteArray2, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UnityRemoteVideo_YByteArrayForFrame_m9B4974F36C6D7AA239580AF30ED1DCC0D035DF38 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandle&,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityRemoteVideo_PinByteArray_mF16DBDE4E157BEE061F603070F1E14EC0BC3FEB7 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * ___handle0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UnityRemoteVideo_UVByteArrayForFrame_m73E6D19EF2F9DE76DB080C8FD95E7E82CB48D67A (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureYMsgId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  ConnectionMessageIds_get_screenCaptureYMsgId_mFB8168198A26B726DE46045595AB13037FE4D0BA (const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ConnectToEditor::SendToEditor(System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToEditor_SendToEditor_mF3C53F34AE54490437DCA885A06A4F2B40843D83 (ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * __this, Guid_t  ___msgId0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.iOS.ConnectionMessageIds::get_screenCaptureUVMsgId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  ConnectionMessageIds_get_screenCaptureUVMsgId_m8AF17F3F71B2306F17833D7592FA9AF942CF5535 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6 (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_inline (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Void System.Action`1<UnityARInterface.BoundedPlane>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487 (Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// System.Void UpdateShaderCoordinatesByARPlane::UpdateShaderValues(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m03312DE8A1EFA4C080E4C9E2DD49B56F31FA63C1 (UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localScale1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_m831AF6E05F7ADEBE49AC4C6EE043E10B86900B76 (String_t* ___name0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_mEA8ADD359BFAC7D9E9B6183FDC1C5C80E0F29806 (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2 (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mBA2FB6DB94D34F42E14DF7D788056FCF0CF41D52 (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___serializationStream0, RuntimeObject * ___graph1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method);
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m36736F31230CF4ACD3F8946AAAD6BEDD537DF5E0 (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitWorldTrackingSessionConfiguration__ctor_mA7201B6352F4142BF235A5A597D4EA9C1DFF910B (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03 * __this, int32_t ___alignment0, int32_t ___planeDetection1, bool ___getPointCloudData2, bool ___enableLightEstimation3, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF (float ___value0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputPoints0, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputSHCData0, const RuntimeMethod* method);
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___rValue0, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rValue0, const RuntimeMethod* method);
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vecPointCloud0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m1B7A5C6C40A0BE7DED39C690207F191E25F0AE95 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___dt6, serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc7, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___rValue0, const RuntimeMethod* method);
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARCamera__ctor_m83D5679FBC374A1A369C75BB85718BBF7F22B46D (UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 * __this, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___wt0, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___dt6, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pointCloud7, const RuntimeMethod* method);
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___floatsSHC0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * __this, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARLightEstimate::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARLightEstimate__ctor_m6FDE1D59522BACB96C86498314B4112E048FE18C (UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * __this, float ___intensity0, float ___temperature1, const RuntimeMethod* method);
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7 (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___spc0, const RuntimeMethod* method);
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rValue0, const RuntimeMethod* method);
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * __this, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v00, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v11, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v22, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v33, const RuntimeMethod* method);
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___rValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARMatrix4x4__ctor_mCEF59FBC04B24A43578F178FE9740AE7A4DDC0B5 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c00, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c11, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c22, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___c33, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_mC7C5A4F0791B2A3ADAFE1E6C491B7705B6492B12 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column00, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column11, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column22, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column33, const RuntimeMethod* method);
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rValue0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m834695FEBC5C5CBB0ACC0FCBDC36E5C81A253B7B (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ctr1, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ext2, int64_t ___apaa3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___idstr4, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method);
// System.Void VectorDataFetcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorTile__ctor_m2275A9D738A4FF18395A59BCB41069263B03E58C (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.VectorTile::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorTile__ctor_mE5F5D290EDC3E470D0D26E6F77479EE7E3BE83A1 (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * __this, String_t* ___styleId0, String_t* ___modifiedDate1, const RuntimeMethod* method);
// System.Void Mapbox.Unity.MeshGeneration.Data.UnityTile::AddTile(Mapbox.Map.Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTile_AddTile_mB9B6E64A7668B08A82FA710755EEA53821FB2784 (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * ___tile0, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Unity.MeshGeneration.Data.UnityTile::get_CanonicalTileId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.Tile::Initialize(Mapbox.Platform.IFileSource,Mapbox.Map.CanonicalTileId,System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Initialize_m7566350DAAE0C8BE6CC52B59BB8C896F1D315317 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, RuntimeObject* ___fileSource0, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___canonicalTileId1, String_t* ___mapId2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___p3, const RuntimeMethod* method);
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72 (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605 (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m5972EA183DBCD8D6EEB01F5ECB57DD97AF4F2517_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DataFetcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFetcher__ctor_mDAA10269126BA86DED88C5BA39054B183310832E (DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191 * __this, const RuntimeMethod* method);
// System.Void VectorDataFetcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, const RuntimeMethod* method);
// Mapbox.Map.CanonicalTileId Mapbox.Map.Tile::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.CanonicalTileId::op_Inequality(Mapbox.Map.CanonicalTileId,Mapbox.Map.CanonicalTileId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanonicalTileId_op_Inequality_mC52A003988402DCFD52EBE655D878483296C80AF (CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___a0, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___b1, const RuntimeMethod* method);
// System.Boolean Mapbox.Map.Tile::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_get_HasError_m8E593E00E9229C94EE929355548E504827A4C9A3 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> Mapbox.Map.Tile::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * Tile_get_Exceptions_mCA16D18707C716D4A2DC1EAFC839D20F8AE03795 (Tile_tD9F2865CA8BF9E351C84FB332120112659C303F0 * __this, const RuntimeMethod* method);
// System.Void Mapbox.Map.TileErrorEventArgs::.ctor(Mapbox.Map.CanonicalTileId,System.Type,Mapbox.Unity.MeshGeneration.Data.UnityTile,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileErrorEventArgs__ctor_mCB4A03C25D37C5FEBA1B3AAC0182641AFC28F4AC (TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * __this, CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  ___TileId0, Type_t * ___TileType1, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___UnityTileInstance2, ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * ___Exceptions3, const RuntimeMethod* method);
// System.Void System.Action`3<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569 (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___arg10, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___arg21, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *, const RuntimeMethod*))Action_3_Invoke_m8F56028EA729FE3B484C3C6FEC090C1891362C22_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Void System.Action`2<Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile>::Invoke(!0,!1)
inline void Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___arg10, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 *, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *, const RuntimeMethod*))Action_2_Invoke_m1738FFAE74BE5E599FD42520FA2BEF69D1AC4709_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void DataFetcherParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFetcherParameters__ctor_m0432969655FC36B4367F64D9210913D2A0A26DDB (DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 (internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * __this, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorRemoved::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void internal_ARUserAnchorRemoved__ctor_m9197FA1ED5C0B627B4FF88F29EB59B7612B8287B (internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorRemoved::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void internal_ARUserAnchorRemoved_Invoke_mA59C9EC0C3B3DE4C29B773670D1DCA1C83158F87 (internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * __this, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchorData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorRemoved::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* internal_ARUserAnchorRemoved_BeginInvoke_m6E434F182F18A213EB9218B8027B33AF38208753 (internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * __this, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchorData0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorRemoved_BeginInvoke_m6E434F182F18A213EB9218B8027B33AF38208753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorRemoved::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void internal_ARUserAnchorRemoved_EndInvoke_mD0236F9E70D12FE4E06D85F6764D89E0FBFC1EA7 (internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 (internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * __this, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchorData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___anchorData0);

}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorUpdated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void internal_ARUserAnchorUpdated__ctor_mB7B90793458F83055F76EEC119EA767120ACA308 (internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorUpdated::Invoke(UnityEngine.XR.iOS.UnityARUserAnchorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void internal_ARUserAnchorUpdated_Invoke_m2A84A7BC3C6BF621E3028A40E642394E0CB963B0 (internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * __this, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchorData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___anchorData0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(targetMethod, targetThis, ___anchorData0);
					else
						GenericVirtActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(targetMethod, targetThis, ___anchorData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___anchorData0);
					else
						VirtActionInvoker1< UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___anchorData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___anchorData0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorUpdated::BeginInvoke(UnityEngine.XR.iOS.UnityARUserAnchorData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* internal_ARUserAnchorUpdated_BeginInvoke_mCF355A9422DCC77F89D5B5BFA73292EAE73DDE80 (internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * __this, UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  ___anchorData0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (internal_ARUserAnchorUpdated_BeginInvoke_mCF355A9422DCC77F89D5B5BFA73292EAE73DDE80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671_il2cpp_TypeInfo_var, &___anchorData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorUpdated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void internal_ARUserAnchorUpdated_EndInvoke_m732AE80337F9DCA8140D06AF04F9AE8F577DCC58 (internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::get_AnchorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityARUserAnchorComponent_get_AnchorId_m901219615CEF21891AE411F3B302F8505A0C2F8E (UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string AnchorId  { get { return m_AnchorId; } }
		String_t* L_0 = __this->get_m_AnchorId_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string AnchorId  { get { return m_AnchorId; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_Awake_mAFC3D5326A9FF3E7BBFAD32407C381CB1FD6419F (UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_Awake_mAFC3D5326A9FF3E7BBFAD32407C381CB1FD6419F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UnityARSessionNativeInterface.ARUserAnchorUpdatedEvent += GameObjectAnchorUpdated;
		ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * L_0 = (ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F *)il2cpp_codegen_object_new(ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated__ctor_mF79DCBED3C1E687CA42DBE5DEC14A6517716039A(L_0, __this, (intptr_t)((intptr_t)UnityARUserAnchorComponent_GameObjectAnchorUpdated_mD3A2CC3107BD88233768B1D1EECFF40907BD4316_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARUserAnchorUpdatedEvent_m26AC4CE71FD01EE7EA9285F12470CB9BC7BF1619(L_0, /*hidden argument*/NULL);
		// UnityARSessionNativeInterface.ARUserAnchorRemovedEvent += AnchorRemoved;
		ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * L_1 = (ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 *)il2cpp_codegen_object_new(ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved__ctor_m2BC6F4E48538F7D1C4D59F382815CFB06D1CD0B1(L_1, __this, (intptr_t)((intptr_t)UnityARUserAnchorComponent_AnchorRemoved_m0DDE3D431A9774171AA6E61D4990B805360F45BC_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARUserAnchorRemovedEvent_m663FF0651B68835D363346451CDD36BE1115776B(L_1, /*hidden argument*/NULL);
		// this.m_AnchorId = UnityARSessionNativeInterface.GetARSessionNativeInterface ().AddUserAnchorFromGameObject(this.gameObject).identifierStr;
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_2 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  L_4 = UnityARSessionNativeInterface_AddUserAnchorFromGameObject_m0ACF362C54F8604F1C75DC1FD430A87A03D6B3DD(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = UnityARUserAnchorData_get_identifierStr_mBE6C8E204E500D89AA66826657E04D4183E1F461((UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_AnchorId_4(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_Start_mA5DA3F06798067806914BA12D88EE66D1008583E (UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::AnchorRemoved(UnityEngine.XR.iOS.ARUserAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_AnchorRemoved_m0DDE3D431A9774171AA6E61D4990B805360F45BC (UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A * __this, ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452  ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_AnchorRemoved_m0DDE3D431A9774171AA6E61D4990B805360F45BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (anchor.identifier.Equals(m_AnchorId))
		ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452  L_0 = ___anchor0;
		String_t* L_1 = L_0.get_identifier_0();
		String_t* L_2 = __this->get_m_AnchorId_4();
		NullCheck(L_1);
		bool L_3 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_OnDestroy_mF19FA96A6D107DFC8BFC7EFF3C0306C453217E9E (UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorComponent_OnDestroy_mF19FA96A6D107DFC8BFC7EFF3C0306C453217E9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityARSessionNativeInterface.ARUserAnchorUpdatedEvent -= GameObjectAnchorUpdated;
		ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * L_0 = (ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F *)il2cpp_codegen_object_new(ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F_il2cpp_TypeInfo_var);
		ARUserAnchorUpdated__ctor_mF79DCBED3C1E687CA42DBE5DEC14A6517716039A(L_0, __this, (intptr_t)((intptr_t)UnityARUserAnchorComponent_GameObjectAnchorUpdated_mD3A2CC3107BD88233768B1D1EECFF40907BD4316_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARUserAnchorUpdatedEvent_m9DCA0315BCE2D1F95877900CDA720D791FC47851(L_0, /*hidden argument*/NULL);
		// UnityARSessionNativeInterface.ARUserAnchorRemovedEvent -= AnchorRemoved;
		ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * L_1 = (ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 *)il2cpp_codegen_object_new(ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411_il2cpp_TypeInfo_var);
		ARUserAnchorRemoved__ctor_m2BC6F4E48538F7D1C4D59F382815CFB06D1CD0B1(L_1, __this, (intptr_t)((intptr_t)UnityARUserAnchorComponent_AnchorRemoved_m0DDE3D431A9774171AA6E61D4990B805360F45BC_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityARSessionNativeInterface_remove_ARUserAnchorRemovedEvent_m76DA1B28AD19D4E442EF966998A77C6A0E70EFF9(L_1, /*hidden argument*/NULL);
		// UnityARSessionNativeInterface.GetARSessionNativeInterface ().RemoveUserAnchor(this.m_AnchorId);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_2 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		String_t* L_3 = __this->get_m_AnchorId_4();
		NullCheck(L_2);
		UnityARSessionNativeInterface_RemoveUserAnchor_m48108F05EAA15CC2150B9BA8BD93C1BFB71A8720(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::GameObjectAnchorUpdated(UnityEngine.XR.iOS.ARUserAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent_GameObjectAnchorUpdated_mD3A2CC3107BD88233768B1D1EECFF40907BD4316 (UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A * __this, ARUserAnchor_tD992F8EA1A8A17856CE43420E6A9F07F3C55F452  ___anchor0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUserAnchorComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUserAnchorComponent__ctor_mF316BF61FCE90844AE87F02FDD65EFF62B88B54F (UnityARUserAnchorComponent_t6D613E3AEE03300CD9F06DF64E4AAA31CB80C42A * __this, const RuntimeMethod* method)
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
// System.String UnityEngine.XR.iOS.UnityARUserAnchorData::get_identifierStr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityARUserAnchorData_get_identifierStr_mBE6C8E204E500D89AA66826657E04D4183E1F461 (UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorData_get_identifierStr_mBE6C8E204E500D89AA66826657E04D4183E1F461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public string identifierStr { get { return Marshal.PtrToStringAuto(this.ptrIdentifier); } }
		intptr_t L_0 = __this->get_ptrIdentifier_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAuto_mEB58737930C2F57CFE9E32B03524D7210DB94027((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public string identifierStr { get { return Marshal.PtrToStringAuto(this.ptrIdentifier); } }
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* UnityARUserAnchorData_get_identifierStr_mBE6C8E204E500D89AA66826657E04D4183E1F461_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 * _thisAdjusted = reinterpret_cast<UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 *>(__this + 1);
	return UnityARUserAnchorData_get_identifierStr_mBE6C8E204E500D89AA66826657E04D4183E1F461(_thisAdjusted, method);
}
// UnityEngine.XR.iOS.UnityARUserAnchorData UnityEngine.XR.iOS.UnityARUserAnchorData::UnityARUserAnchorDataFromGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m6DDFFAD7A05F40E01F59C67DCFBCA6F7D47A79DF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUserAnchorData_UnityARUserAnchorDataFromGameObject_m6DDFFAD7A05F40E01F59C67DCFBCA6F7D47A79DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Matrix4x4 matrix = Matrix4x4.TRS(go.transform.position, go.transform.rotation, go.transform.localScale);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___go0;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___go0;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = ___go0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_9 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// UnityARUserAnchorData ad = new UnityARUserAnchorData();
		il2cpp_codegen_initobj((&V_1), sizeof(UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671 ));
		// ad.transform.column0 = matrix.GetColumn(0);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * L_10 = (&V_1)->get_address_of_transform_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 0, /*hidden argument*/NULL);
		L_10->set_column0_0(L_11);
		// ad.transform.column1 = matrix.GetColumn(1);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * L_12 = (&V_1)->get_address_of_transform_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 1, /*hidden argument*/NULL);
		L_12->set_column1_1(L_13);
		// ad.transform.column2 = matrix.GetColumn(2);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * L_14 = (&V_1)->get_address_of_transform_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_15 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 2, /*hidden argument*/NULL);
		L_14->set_column2_2(L_15);
		// ad.transform.column3 = matrix.GetColumn(3);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * L_16 = (&V_1)->get_address_of_transform_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_17 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), 3, /*hidden argument*/NULL);
		L_16->set_column3_3(L_17);
		// return ad;
		UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  L_18 = V_1;
		V_2 = L_18;
		goto IL_0084;
	}

IL_0084:
	{
		// }
		UnityARUserAnchorData_t9CDEC5EC99A64714ABCBF0BC573951ABFEC44671  L_19 = V_2;
		return L_19;
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
// System.Void UnityEngine.XR.iOS.UnityARUtility::InitializePlanePrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUtility_InitializePlanePrefab_m1F81C4EA6B023C77A415CAEAE1AC6B13F2FA3C34 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_InitializePlanePrefab_m1F81C4EA6B023C77A415CAEAE1AC6B13F2FA3C34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// planePrefab = go;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___go0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var);
		((UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var))->set_planePrefab_2(L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::CreatePlaneInScene(UnityEngine.XR.iOS.ARPlaneAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UnityARUtility_CreatePlaneInScene_m41D3A647F8B0C44E5119DAF01FACCA347CF657DF (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  ___arPlaneAnchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_CreatePlaneInScene_m41D3A647F8B0C44E5119DAF01FACCA347CF657DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	bool V_1 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		// if (planePrefab != null) {
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var))->get_planePrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// plane = GameObject.Instantiate(planePrefab);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ((UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var))->get_planePrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_0027;
	}

IL_001f:
	{
		// plane = new GameObject (); //put in a blank gameObject to get at least a transform to manipulate
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0027:
	{
		// plane.name = arPlaneAnchor.identifier;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_7 = ___arPlaneAnchor0;
		String_t* L_8 = L_7.get_identifier_0();
		NullCheck(L_6);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_6, L_8, /*hidden argument*/NULL);
		// return UpdatePlaneWithAnchorTransform(plane, arPlaneAnchor);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_0;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_10 = ___arPlaneAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = UnityARUtility_UpdatePlaneWithAnchorTransform_mB3988A33B6DAB4B18934BC08E8B4C45A6BBAA000(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::UpdatePlaneWithAnchorTransform(UnityEngine.GameObject,UnityEngine.XR.iOS.ARPlaneAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UnityARUtility_UpdatePlaneWithAnchorTransform_mB3988A33B6DAB4B18934BC08E8B4C45A6BBAA000 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___plane0, ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  ___arPlaneAnchor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility_UpdatePlaneWithAnchorTransform_mB3988A33B6DAB4B18934BC08E8B4C45A6BBAA000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_0 = NULL;
	bool V_1 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		// plane.transform.position = UnityARMatrixOps.GetPosition (arPlaneAnchor.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___plane0;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_2 = ___arPlaneAnchor1;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = L_2.get_transform_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = UnityARMatrixOps_GetPosition_m54E6ADA8EBCA4AE705C6C12768F187D3D41B419C(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_1, L_4, /*hidden argument*/NULL);
		// plane.transform.rotation = UnityARMatrixOps.GetRotation (arPlaneAnchor.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ___plane0;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_7 = ___arPlaneAnchor1;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_8 = L_7.get_transform_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = UnityARMatrixOps_GetRotation_m4F9DBC8D43E2027273AFEA83C4590995154CDD27(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_6, L_9, /*hidden argument*/NULL);
		// MeshFilter mf = plane.GetComponentInChildren<MeshFilter> ();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = ___plane0;
		NullCheck(L_10);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_11 = GameObject_GetComponentInChildren_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m167F97C6FEB835ACE2CCD5FE7899D663310D04CF(L_10, /*hidden argument*/GameObject_GetComponentInChildren_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m167F97C6FEB835ACE2CCD5FE7899D663310D04CF_RuntimeMethod_var);
		V_0 = L_11;
		// if (mf != null) {
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00c7;
		}
	}
	{
		// mf.gameObject.transform.localScale = new Vector3(arPlaneAnchor.extent.x * 0.1f ,arPlaneAnchor.extent.y * 0.1f ,arPlaneAnchor.extent.z * 0.1f );
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_15 = V_0;
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_18 = ___arPlaneAnchor1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = L_18.get_extent_4();
		float L_20 = L_19.get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_21 = ___arPlaneAnchor1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = L_21.get_extent_4();
		float L_23 = L_22.get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_24 = ___arPlaneAnchor1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = L_24.get_extent_4();
		float L_26 = L_25.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_27), ((float)il2cpp_codegen_multiply((float)L_20, (float)(0.1f))), ((float)il2cpp_codegen_multiply((float)L_23, (float)(0.1f))), ((float)il2cpp_codegen_multiply((float)L_26, (float)(0.1f))), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_17, L_27, /*hidden argument*/NULL);
		// mf.gameObject.transform.localPosition = new Vector3(arPlaneAnchor.center.x,arPlaneAnchor.center.y, -arPlaneAnchor.center.z);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_28 = V_0;
		NullCheck(L_28);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_31 = ___arPlaneAnchor1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = L_31.get_center_3();
		float L_33 = L_32.get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_34 = ___arPlaneAnchor1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = L_34.get_center_3();
		float L_36 = L_35.get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_37 = ___arPlaneAnchor1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = L_37.get_center_3();
		float L_39 = L_38.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_40), L_33, L_36, ((-L_39)), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_30, L_40, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// return plane;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = ___plane0;
		V_2 = L_41;
		goto IL_00cb;
	}

IL_00cb:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = V_2;
		return L_42;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUtility__ctor_m47C9C31A9513B947E6FBEF003623C2FC56255170 (UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARUtility__cctor_m41B8D68B08BA86ED559394A6A8AA1ABBBDD9A898 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARUtility__cctor_m41B8D68B08BA86ED559394A6A8AA1ABBBDD9A898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static GameObject planePrefab = null;
		((UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_StaticFields*)il2cpp_codegen_static_fields_for(UnityARUtility_tC499C2F6B6E8087861555C0B78963033747408D1_il2cpp_TypeInfo_var))->set_planePrefab_2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
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
// System.Void UnityEngine.XR.iOS.UnityARVideo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARVideo_Start_m795556CB9D92762F4299246B05BC0752A79E1520 (UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_Start_m795556CB9D92762F4299246B05BC0752A79E1520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityARSessionNativeInterface.ARFrameUpdatedEvent += UpdateFrame;
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_0, __this, (intptr_t)((intptr_t)UnityARVideo_UpdateFrame_m239D2B517EB1D0CF4B87C04C7A9B432A992656CB_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461(L_0, /*hidden argument*/NULL);
		// bCommandBufferInitialized = false;
		__this->set_bCommandBufferInitialized_9((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::UpdateFrame(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARVideo_UpdateFrame_m239D2B517EB1D0CF4B87C04C7A9B432A992656CB (UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___cam0, const RuntimeMethod* method)
{
	{
		// _displayTransform = new Matrix4x4();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_0 = __this->get_address_of__displayTransform_8();
		il2cpp_codegen_initobj(L_0, sizeof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA ));
		// _displayTransform.SetColumn(0, cam.displayTransform.column0);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_1 = __this->get_address_of__displayTransform_8();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_2 = ___cam0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_3 = L_2.get_displayTransform_6();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = L_3.get_column0_0();
		Matrix4x4_SetColumn_m8AFBFEE401780B02DC32B58BF8FCE9AAA34C7F88((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_1, 0, L_4, /*hidden argument*/NULL);
		// _displayTransform.SetColumn(1, cam.displayTransform.column1);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_5 = __this->get_address_of__displayTransform_8();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_6 = ___cam0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_7 = L_6.get_displayTransform_6();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = L_7.get_column1_1();
		Matrix4x4_SetColumn_m8AFBFEE401780B02DC32B58BF8FCE9AAA34C7F88((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_5, 1, L_8, /*hidden argument*/NULL);
		// _displayTransform.SetColumn(2, cam.displayTransform.column2);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_9 = __this->get_address_of__displayTransform_8();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_10 = ___cam0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_11 = L_10.get_displayTransform_6();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = L_11.get_column2_2();
		Matrix4x4_SetColumn_m8AFBFEE401780B02DC32B58BF8FCE9AAA34C7F88((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_9, 2, L_12, /*hidden argument*/NULL);
		// _displayTransform.SetColumn(3, cam.displayTransform.column3);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_13 = __this->get_address_of__displayTransform_8();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_14 = ___cam0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_15 = L_14.get_displayTransform_6();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = L_15.get_column3_3();
		Matrix4x4_SetColumn_m8AFBFEE401780B02DC32B58BF8FCE9AAA34C7F88((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_13, 3, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::InitializeCommandBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARVideo_InitializeCommandBuffer_m8745BF76E0CC672472C21AEFB40635B258324657 (UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_InitializeCommandBuffer_m8745BF76E0CC672472C21AEFB40635B258324657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoCommandBuffer = new CommandBuffer();
		CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * L_0 = (CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD *)il2cpp_codegen_object_new(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_m4394F7E41C9BB751E382A8CAFA38B19F69E03890(L_0, /*hidden argument*/NULL);
		__this->set_m_VideoCommandBuffer_5(L_0);
		// m_VideoCommandBuffer.Blit(null, BuiltinRenderTextureType.CurrentActive, m_ClearMaterial);
		CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * L_1 = __this->get_m_VideoCommandBuffer_5();
		RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  L_2 = RenderTargetIdentifier_op_Implicit_m080A48CE8A898732E2554818DD3BF66004369D1B(1, /*hidden argument*/NULL);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = __this->get_m_ClearMaterial_4();
		NullCheck(L_1);
		CommandBuffer_Blit_m0922EC09A8E32FBEE2CEE938328AB618128283E9(L_1, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)NULL, L_2, L_3, /*hidden argument*/NULL);
		// GetComponent<Camera>().AddCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var);
		CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * L_5 = __this->get_m_VideoCommandBuffer_5();
		NullCheck(L_4);
		Camera_AddCommandBuffer_mA3A1341F6C15A1C9DEF1BA7471726238797880B7(L_4, ((int32_t)10), L_5, /*hidden argument*/NULL);
		// bCommandBufferInitialized = true;
		__this->set_bCommandBufferInitialized_9((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARVideo_OnDestroy_m10E7F8C50E59A6EE542C5AB448589E35AC5768BD (UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_OnDestroy_m10E7F8C50E59A6EE542C5AB448589E35AC5768BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Camera>().RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, m_VideoCommandBuffer);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var);
		CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * L_1 = __this->get_m_VideoCommandBuffer_5();
		NullCheck(L_0);
		Camera_RemoveCommandBuffer_m323F15CA3AB7E38DB77C73930A9B517400403320(L_0, ((int32_t)10), L_1, /*hidden argument*/NULL);
		// UnityARSessionNativeInterface.ARFrameUpdatedEvent -= UpdateFrame;
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_2 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_2, __this, (intptr_t)((intptr_t)UnityARVideo_UpdateFrame_m239D2B517EB1D0CF4B87C04C7A9B432A992656CB_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_mB19CB3DB613EA5AB905C1C946618F509607F8A3A(L_2, /*hidden argument*/NULL);
		// bCommandBufferInitialized = false;
		__this->set_bCommandBufferInitialized_9((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARVideo_OnPreRender_m92818B6D10E3292222822885E418054A9CDA58D1 (UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityARVideo_OnPreRender_m92818B6D10E3292222822885E418054A9CDA58D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// ARTextureHandles handles = UnityARSessionNativeInterface.GetARSessionNativeInterface ().GetARVideoTextureHandles();
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		NullCheck(L_0);
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_1 = UnityARSessionNativeInterface_GetARVideoTextureHandles_m709A401A9D8AD29E6DF4FF5B46B9A3A9081CA886(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (handles.textureY == System.IntPtr.Zero || handles.textureCbCr == System.IntPtr.Zero)
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_2 = V_0;
		intptr_t L_3 = L_2.get_textureY_0();
		bool L_4 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_5 = V_0;
		intptr_t L_6 = L_5.get_textureCbCr_1();
		bool L_7 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
	}

IL_0031:
	{
		V_2 = (bool)G_B3_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		// return;
		goto IL_0162;
	}

IL_003b:
	{
		// if (!bCommandBufferInitialized) {
		bool L_9 = __this->get_bCommandBufferInitialized_9();
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		// InitializeCommandBuffer ();
		UnityARVideo_InitializeCommandBuffer_m8745BF76E0CC672472C21AEFB40635B258324657(__this, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// Resolution currentResolution = Screen.currentResolution;
		Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  L_11 = Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A(/*hidden argument*/NULL);
		V_1 = L_11;
		// if (_videoTextureY == null) {
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = __this->get__videoTextureY_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_00bf;
		}
	}
	{
		// _videoTextureY = Texture2D.CreateExternalTexture(currentResolution.width, currentResolution.height,
		//     TextureFormat.R8, false, false, (System.IntPtr)handles.textureY);
		int32_t L_15 = Resolution_get_width_m6254A0489C2CCB1574E4D98E45009DDE5212655C((Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_16 = Resolution_get_height_m5141CDF13E8C1ADEF47AEB5155AD72BD13121CCD((Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 *)(&V_1), /*hidden argument*/NULL);
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_17 = V_0;
		intptr_t L_18 = L_17.get_textureY_0();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = Texture2D_CreateExternalTexture_m292548AA116AA5176E8CA03AFBBC088E3B698DE4(L_15, L_16, ((int32_t)63), (bool)0, (bool)0, (intptr_t)L_18, /*hidden argument*/NULL);
		__this->set__videoTextureY_6(L_19);
		// _videoTextureY.filterMode = FilterMode.Bilinear;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_20 = __this->get__videoTextureY_6();
		NullCheck(L_20);
		Texture_set_filterMode_mB9AC927A527EFE95771B9B438E2CFB9EDA84AF01(L_20, 1, /*hidden argument*/NULL);
		// _videoTextureY.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = __this->get__videoTextureY_6();
		NullCheck(L_21);
		Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC(L_21, 0, /*hidden argument*/NULL);
		// m_ClearMaterial.SetTexture("_textureY", _videoTextureY);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_22 = __this->get_m_ClearMaterial_4();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_23 = __this->get__videoTextureY_6();
		NullCheck(L_22);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_22, _stringLiteralFCF79EA505459F01F984988600F23CC4756E4537, L_23, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// if (_videoTextureCbCr == null) {
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_24 = __this->get__videoTextureCbCr_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_24, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_25;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0127;
		}
	}
	{
		// _videoTextureCbCr = Texture2D.CreateExternalTexture(currentResolution.width, currentResolution.height,
		//     TextureFormat.RG16, false, false, (System.IntPtr)handles.textureCbCr);
		int32_t L_27 = Resolution_get_width_m6254A0489C2CCB1574E4D98E45009DDE5212655C((Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_28 = Resolution_get_height_m5141CDF13E8C1ADEF47AEB5155AD72BD13121CCD((Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 *)(&V_1), /*hidden argument*/NULL);
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_29 = V_0;
		intptr_t L_30 = L_29.get_textureCbCr_1();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_31 = Texture2D_CreateExternalTexture_m292548AA116AA5176E8CA03AFBBC088E3B698DE4(L_27, L_28, ((int32_t)62), (bool)0, (bool)0, (intptr_t)L_30, /*hidden argument*/NULL);
		__this->set__videoTextureCbCr_7(L_31);
		// _videoTextureCbCr.filterMode = FilterMode.Bilinear;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_32 = __this->get__videoTextureCbCr_7();
		NullCheck(L_32);
		Texture_set_filterMode_mB9AC927A527EFE95771B9B438E2CFB9EDA84AF01(L_32, 1, /*hidden argument*/NULL);
		// _videoTextureCbCr.wrapMode = TextureWrapMode.Repeat;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_33 = __this->get__videoTextureCbCr_7();
		NullCheck(L_33);
		Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC(L_33, 0, /*hidden argument*/NULL);
		// m_ClearMaterial.SetTexture("_textureCbCr", _videoTextureCbCr);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_34 = __this->get_m_ClearMaterial_4();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_35 = __this->get__videoTextureCbCr_7();
		NullCheck(L_34);
		Material_SetTexture_mAA0F00FACFE40CFE4BE28A11162E5EEFCC5F5A61(L_34, _stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D, L_35, /*hidden argument*/NULL);
	}

IL_0127:
	{
		// _videoTextureY.UpdateExternalTexture(handles.textureY);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_36 = __this->get__videoTextureY_6();
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_37 = V_0;
		intptr_t L_38 = L_37.get_textureY_0();
		NullCheck(L_36);
		Texture2D_UpdateExternalTexture_m8A3486B0779454739624888EFD6D9EC42D30874F(L_36, (intptr_t)L_38, /*hidden argument*/NULL);
		// _videoTextureCbCr.UpdateExternalTexture(handles.textureCbCr);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_39 = __this->get__videoTextureCbCr_7();
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_40 = V_0;
		intptr_t L_41 = L_40.get_textureCbCr_1();
		NullCheck(L_39);
		Texture2D_UpdateExternalTexture_m8A3486B0779454739624888EFD6D9EC42D30874F(L_39, (intptr_t)L_41, /*hidden argument*/NULL);
		// m_ClearMaterial.SetMatrix("_DisplayTransform", _displayTransform);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_42 = __this->get_m_ClearMaterial_4();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_43 = __this->get__displayTransform_8();
		NullCheck(L_42);
		Material_SetMatrix_mE3D3FA75DA02FED1B97E2BECA258F45399715764(L_42, _stringLiteralB47C8620D1381A3181147DEA2D2E302F0FA40A1B, L_43, /*hidden argument*/NULL);
	}

IL_0162:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityARVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityARVideo__ctor_m8F11D5D61F36DFEBEAAB43F3A9DAC0D38E073225 (UnityARVideo_t0D8EA0D1C2EC6A3A08F800187EA24F81B0587845 * __this, const RuntimeMethod* method)
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
// System.Void UnityEngine.XR.iOS.UnityMarshalLightData::.ctor(UnityEngine.XR.iOS.LightDataType,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.MarshalDirectionalLightEstimate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMarshalLightData__ctor_m154473D64955A8ADC69ABA460F5D514C604EED04 (UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___mdle2, const RuntimeMethod* method)
{
	{
		// arLightingType = ldt;
		int32_t L_0 = ___ldt0;
		__this->set_arLightingType_0(L_0);
		// arLightEstimate = ule;
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_1 = ___ule1;
		__this->set_arLightEstimate_1(L_1);
		// arDirectonalLightEstimate = mdle;
		MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  L_2 = ___mdle2;
		__this->set_arDirectonalLightEstimate_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnityMarshalLightData__ctor_m154473D64955A8ADC69ABA460F5D514C604EED04_AdjustorThunk (RuntimeObject * __this, int32_t ___ldt0, UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___ule1, MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___mdle2, const RuntimeMethod* method)
{
	UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * _thisAdjusted = reinterpret_cast<UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C *>(__this + 1);
	UnityMarshalLightData__ctor_m154473D64955A8ADC69ABA460F5D514C604EED04(_thisAdjusted, ___ldt0, ___ule1, ___mdle2, method);
}
// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityMarshalLightData::op_Implicit(UnityEngine.XR.iOS.UnityMarshalLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  UnityMarshalLightData_op_Implicit_mAB2E438F89C9A7AD564DDF148171BFB91F1D75AF (UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityMarshalLightData_op_Implicit_mAB2E438F89C9A7AD564DDF148171BFB91F1D75AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * V_0 = NULL;
	bool V_1 = false;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_4 = NULL;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// UnityARDirectionalLightEstimate udle = null;
		V_0 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)NULL;
		// if (rValue.arLightingType == LightDataType.DirectionalLightEstimate) {
		UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  L_0 = ___rValue0;
		int32_t L_1 = L_0.get_arLightingType_0();
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// Vector4 lightDirAndIntensity = rValue.arDirectonalLightEstimate.primaryDirAndIntensity;
		UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  L_3 = ___rValue0;
		MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  L_4 = L_3.get_arDirectonalLightEstimate_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = L_4.get_primaryDirAndIntensity_0();
		V_2 = L_5;
		// Vector3 lightDir = new Vector3 (lightDirAndIntensity.x, lightDirAndIntensity.y, lightDirAndIntensity.z);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = V_2;
		float L_7 = L_6.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = V_2;
		float L_9 = L_8.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = V_2;
		float L_11 = L_10.get_z_3();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), L_7, L_9, L_11, /*hidden argument*/NULL);
		// float[] shc = rValue.arDirectonalLightEstimate.SphericalHarmonicCoefficients;
		MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * L_12 = (&___rValue0)->get_address_of_arDirectonalLightEstimate_2();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_13 = MarshalDirectionalLightEstimate_get_SphericalHarmonicCoefficients_m418595AFDCBE1863684E53901F7B3B81077DA2A5((MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 *)L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// udle = new UnityARDirectionalLightEstimate (shc, lightDir, lightDirAndIntensity.w);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_14 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_3;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = V_2;
		float L_17 = L_16.get_w_4();
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_18 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_mF4132E3E0A3BF152E060E07F064D5DA8C27796F1(L_18, L_14, L_15, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_0054:
	{
		// return new UnityARLightData(rValue.arLightingType, rValue.arLightEstimate, udle);
		UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  L_19 = ___rValue0;
		int32_t L_20 = L_19.get_arLightingType_0();
		UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  L_21 = ___rValue0;
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_22 = L_21.get_arLightEstimate_1();
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_23 = V_0;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_24;
		memset((&L_24), 0, sizeof(L_24));
		UnityARLightData__ctor_m3F910A4326A4E9B02F36CA12D1379A2341616DB1((&L_24), L_20, L_22, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_25 = V_5;
		return L_25;
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
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRemoteVideo_Start_mA1EDE93715AC9D6770A7168BC677196AD43E6FA8 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_Start_mA1EDE93715AC9D6770A7168BC677196AD43E6FA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Session = UnityARSessionNativeInterface.GetARSessionNativeInterface ();
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		__this->set_m_Session_5(L_0);
		// UnityARSessionNativeInterface.ARFrameUpdatedEvent += UpdateCamera;
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_1 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_1, __this, (intptr_t)((intptr_t)UnityRemoteVideo_UpdateCamera_m05BB20AFF4E577D43557274E536242F58E7E8940_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461(L_1, /*hidden argument*/NULL);
		// currentFrameIndex = 0;
		__this->set_currentFrameIndex_7(0);
		// bTexturesInitialized = false;
		__this->set_bTexturesInitialized_6((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::UpdateCamera(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRemoteVideo_UpdateCamera_m05BB20AFF4E577D43557274E536242F58E7E8940 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_UpdateCamera_m05BB20AFF4E577D43557274E536242F58E7E8940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!bTexturesInitialized) {
		bool L_0 = __this->get_bTexturesInitialized_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// InitializeTextures (camera);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_2 = ___camera0;
		UnityRemoteVideo_InitializeTextures_m2E2664708F6FE67C5689AC6315BCC641B0490ED7(__this, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// UnityARSessionNativeInterface.ARFrameUpdatedEvent -= UpdateCamera;
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_3 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_3, __this, (intptr_t)((intptr_t)UnityRemoteVideo_UpdateCamera_m05BB20AFF4E577D43557274E536242F58E7E8940_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_remove_ARFrameUpdatedEvent_mB19CB3DB613EA5AB905C1C946618F509607F8A3A(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::InitializeTextures(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRemoteVideo_InitializeTextures_m2E2664708F6FE67C5689AC6315BCC641B0490ED7 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_InitializeTextures_m2E2664708F6FE67C5689AC6315BCC641B0490ED7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int numYBytes = camera.videoParams.yWidth * camera.videoParams.yHeight;
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_0 = ___camera0;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_1 = L_0.get_videoParams_4();
		int32_t L_2 = L_1.get_yWidth_0();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_3 = ___camera0;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_4 = L_3.get_videoParams_4();
		int32_t L_5 = L_4.get_yHeight_1();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_5));
		// int numUVBytes = camera.videoParams.yWidth * camera.videoParams.yHeight / 2; //quarter resolution, but two bytes per pixel
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_6 = ___camera0;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_7 = L_6.get_videoParams_4();
		int32_t L_8 = L_7.get_yWidth_0();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_9 = ___camera0;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_10 = L_9.get_videoParams_4();
		int32_t L_11 = L_10.get_yHeight_1();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_11))/(int32_t)2));
		// m_textureYBytes = new byte[numYBytes];
		int32_t L_12 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->set_m_textureYBytes_8(L_13);
		// m_textureUVBytes = new byte[numUVBytes];
		int32_t L_14 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->set_m_textureUVBytes_9(L_15);
		// m_textureYBytes2 = new byte[numYBytes];
		int32_t L_16 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->set_m_textureYBytes2_10(L_17);
		// m_textureUVBytes2 = new byte[numUVBytes];
		int32_t L_18 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->set_m_textureUVBytes2_11(L_19);
		// m_pinnedYArray = GCHandle.Alloc (m_textureYBytes);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = __this->get_m_textureYBytes_8();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_21 = GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F((RuntimeObject *)(RuntimeObject *)L_20, /*hidden argument*/NULL);
		__this->set_m_pinnedYArray_12(L_21);
		// m_pinnedUVArray = GCHandle.Alloc (m_textureUVBytes);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = __this->get_m_textureUVBytes_9();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_23 = GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F((RuntimeObject *)(RuntimeObject *)L_22, /*hidden argument*/NULL);
		__this->set_m_pinnedUVArray_13(L_23);
		// bTexturesInitialized = true;
		__this->set_bTexturesInitialized_6((bool)1);
		// }
		return;
	}
}
// System.IntPtr UnityEngine.XR.iOS.UnityRemoteVideo::PinByteArray(System.Runtime.InteropServices.GCHandle&,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityRemoteVideo_PinByteArray_mF16DBDE4E157BEE061F603070F1E14EC0BC3FEB7 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * ___handle0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// handle.Free ();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_0 = ___handle0;
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_0, /*hidden argument*/NULL);
		// handle = GCHandle.Alloc (array, GCHandleType.Pinned);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_1 = ___handle0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___array1;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_2, 3, /*hidden argument*/NULL);
		*(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_1 = L_3;
		// return handle.AddrOfPinnedObject ();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_4 = ___handle0;
		intptr_t L_5 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::ByteArrayForFrame(System.Int32,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UnityRemoteVideo_ByteArrayForFrame_m6A617F087DE38CC509B3346DEA6BBB64457D63A0 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array01, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array12, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_0 = NULL;
	{
		// return frame == 1 ? array1 : array0;
		int32_t L_0 = ___frame0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___array01;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0008:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___array12;
		G_B3_0 = L_2;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::YByteArrayForFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UnityRemoteVideo_YByteArrayForFrame_m9B4974F36C6D7AA239580AF30ED1DCC0D035DF38 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// return ByteArrayForFrame (frame, m_textureYBytes, m_textureYBytes2);
		int32_t L_0 = ___frame0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_m_textureYBytes_8();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_m_textureYBytes2_10();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = UnityRemoteVideo_ByteArrayForFrame_m6A617F087DE38CC509B3346DEA6BBB64457D63A0(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		return L_4;
	}
}
// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::UVByteArrayForFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UnityRemoteVideo_UVByteArrayForFrame_m73E6D19EF2F9DE76DB080C8FD95E7E82CB48D67A (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, int32_t ___frame0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// return ByteArrayForFrame (frame, m_textureUVBytes, m_textureUVBytes2);
		int32_t L_0 = ___frame0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_m_textureUVBytes_9();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_m_textureUVBytes2_11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = UnityRemoteVideo_ByteArrayForFrame_m6A617F087DE38CC509B3346DEA6BBB64457D63A0(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRemoteVideo_OnDestroy_m8315C1794230FED9A6528612EA301FD2D787722C (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnDestroy_m8315C1794230FED9A6528612EA301FD2D787722C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Session.SetCapturePixelData (false, IntPtr.Zero, IntPtr.Zero);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = __this->get_m_Session_5();
		NullCheck(L_0);
		UnityARSessionNativeInterface_SetCapturePixelData_m4B39FF92753FBB8B8CB82D6243A585535640D923(L_0, (bool)0, (intptr_t)(0), (intptr_t)(0), /*hidden argument*/NULL);
		// m_pinnedYArray.Free ();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_1 = __this->get_address_of_m_pinnedYArray_12();
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_1, /*hidden argument*/NULL);
		// m_pinnedUVArray.Free ();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_2 = __this->get_address_of_m_pinnedUVArray_13();
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRemoteVideo_OnPreRender_m85C59CC1F25A37344F93BF533D2935B98755F048 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRemoteVideo_OnPreRender_m85C59CC1F25A37344F93BF533D2935B98755F048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// ARTextureHandles handles = m_Session.GetARVideoTextureHandles();
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = __this->get_m_Session_5();
		NullCheck(L_0);
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_1 = UnityARSessionNativeInterface_GetARVideoTextureHandles_m709A401A9D8AD29E6DF4FF5B46B9A3A9081CA886(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (handles.textureY == System.IntPtr.Zero || handles.textureCbCr == System.IntPtr.Zero)
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_2 = V_0;
		intptr_t L_3 = L_2.get_textureY_0();
		bool L_4 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		ARTextureHandles_tA5C7ACCAA904CA4A95ED0F5856B44B41171DDBF2  L_5 = V_0;
		intptr_t L_6 = L_5.get_textureCbCr_1();
		bool L_7 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 1;
	}

IL_0032:
	{
		V_2 = (bool)G_B3_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		goto IL_00df;
	}

IL_003c:
	{
		// if (!bTexturesInitialized)
		bool L_9 = __this->get_bTexturesInitialized_6();
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// return;
		goto IL_00df;
	}

IL_004e:
	{
		// currentFrameIndex = (currentFrameIndex + 1) % 2;
		int32_t L_11 = __this->get_currentFrameIndex_7();
		__this->set_currentFrameIndex_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1))%(int32_t)2)));
		// Resolution currentResolution = Screen.currentResolution;
		Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  L_12 = Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A(/*hidden argument*/NULL);
		V_1 = L_12;
		// m_Session.SetCapturePixelData (true, PinByteArray(ref m_pinnedYArray,YByteArrayForFrame(currentFrameIndex)), PinByteArray(ref m_pinnedUVArray,UVByteArrayForFrame(currentFrameIndex)));
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_13 = __this->get_m_Session_5();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_14 = __this->get_address_of_m_pinnedYArray_12();
		int32_t L_15 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = UnityRemoteVideo_YByteArrayForFrame_m9B4974F36C6D7AA239580AF30ED1DCC0D035DF38(__this, L_15, /*hidden argument*/NULL);
		intptr_t L_17 = UnityRemoteVideo_PinByteArray_mF16DBDE4E157BEE061F603070F1E14EC0BC3FEB7(__this, (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_14, L_16, /*hidden argument*/NULL);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_18 = __this->get_address_of_m_pinnedUVArray_13();
		int32_t L_19 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = UnityRemoteVideo_UVByteArrayForFrame_m73E6D19EF2F9DE76DB080C8FD95E7E82CB48D67A(__this, L_19, /*hidden argument*/NULL);
		intptr_t L_21 = UnityRemoteVideo_PinByteArray_mF16DBDE4E157BEE061F603070F1E14EC0BC3FEB7(__this, (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityARSessionNativeInterface_SetCapturePixelData_m4B39FF92753FBB8B8CB82D6243A585535640D923(L_13, (bool)1, (intptr_t)L_17, (intptr_t)L_21, /*hidden argument*/NULL);
		// connectToEditor.SendToEditor (ConnectionMessageIds.screenCaptureYMsgId, YByteArrayForFrame(1-currentFrameIndex));
		ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * L_22 = __this->get_connectToEditor_4();
		Guid_t  L_23 = ConnectionMessageIds_get_screenCaptureYMsgId_mFB8168198A26B726DE46045595AB13037FE4D0BA(/*hidden argument*/NULL);
		int32_t L_24 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = UnityRemoteVideo_YByteArrayForFrame_m9B4974F36C6D7AA239580AF30ED1DCC0D035DF38(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_24)), /*hidden argument*/NULL);
		NullCheck(L_22);
		ConnectToEditor_SendToEditor_mF3C53F34AE54490437DCA885A06A4F2B40843D83(L_22, L_23, L_25, /*hidden argument*/NULL);
		// connectToEditor.SendToEditor (ConnectionMessageIds.screenCaptureUVMsgId, UVByteArrayForFrame(1-currentFrameIndex));
		ConnectToEditor_t8AF91172E7A2EF41FB9994B997C7ADA97C0FF5B3 * L_26 = __this->get_connectToEditor_4();
		Guid_t  L_27 = ConnectionMessageIds_get_screenCaptureUVMsgId_m8AF17F3F71B2306F17833D7592FA9AF942CF5535(/*hidden argument*/NULL);
		int32_t L_28 = __this->get_currentFrameIndex_7();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = UnityRemoteVideo_UVByteArrayForFrame_m73E6D19EF2F9DE76DB080C8FD95E7E82CB48D67A(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_28)), /*hidden argument*/NULL);
		NullCheck(L_26);
		ConnectToEditor_SendToEditor_mF3C53F34AE54490437DCA885A06A4F2B40843D83(L_26, L_27, L_29, /*hidden argument*/NULL);
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.iOS.UnityRemoteVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRemoteVideo__ctor_m036F89EA101723362F3092A97C33125813464BC2 (UnityRemoteVideo_tE1B5CC24F1490A2E00A8213CF27EE54DD7488222 * __this, const RuntimeMethod* method)
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
// System.Void UnityPointCloudExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample_Start_mBBFD6C7EA992F831E0FDF4C552791DA990344B86 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_mBBFD6C7EA992F831E0FDF4C552791DA990344B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// UnityARSessionNativeInterface.ARFrameUpdatedEvent += ARFrameUpdated;
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_m6F45CC484332074A55C8E90A002E14881B72A68A(L_0, __this, (intptr_t)((intptr_t)UnityPointCloudExample_ARFrameUpdated_m63496C2B26C679351D74B8628C328046DC19E2DD_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_m220BDF5002999B98BCF2E6696125C105CB798461(L_0, /*hidden argument*/NULL);
		// if (PointCloudPrefab != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// pointCloudObjects = new List<GameObject> ();
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_4 = (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *)il2cpp_codegen_object_new(List_1_t3D4152882C54B77C712688E910390D5C8E030463_il2cpp_TypeInfo_var);
		List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA(L_4, /*hidden argument*/List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var);
		__this->set_pointCloudObjects_6(L_4);
		// for (int i =0; i < numPointsToShow; i++)
		V_1 = 0;
		goto IL_0050;
	}

IL_0033:
	{
		// pointCloudObjects.Add (Instantiate (PointCloudPrefab));
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_5 = __this->get_pointCloudObjects_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6(L_5, L_7, /*hidden argument*/List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var);
		// for (int i =0; i < numPointsToShow; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0050:
	{
		// for (int i =0; i < numPointsToShow; i++)
		int32_t L_9 = V_1;
		uint32_t L_10 = __this->get_numPointsToShow_4();
		V_2 = (bool)((((int64_t)(((int64_t)((int64_t)L_9)))) < ((int64_t)(((int64_t)((uint64_t)L_10)))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0033;
		}
	}
	{
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample_ARFrameUpdated_m63496C2B26C679351D74B8628C328046DC19E2DD (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	{
		// m_PointCloudData = camera.pointCloudData;
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_0 = ___camera0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = L_0.get_pointCloudData_7();
		__this->set_m_PointCloudData_7(L_1);
		// }
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample_Update_m17378257B82327F087B521E4E4432699317EFA7C (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m17378257B82327F087B521E4E4432699317EFA7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if (PointCloudPrefab != null && m_PointCloudData != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = __this->get_m_PointCloudData_7();
		G_B3_0 = ((!(((RuntimeObject*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_008c;
		}
	}
	{
		// for (int count = 0; count < Math.Min (m_PointCloudData.Length, numPointsToShow); count++)
		V_1 = 0;
		goto IL_006c;
	}

IL_0024:
	{
		// Vector4 vert = m_PointCloudData [count];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = __this->get_m_PointCloudData_7();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// GameObject point = pointCloudObjects [count];
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_9 = __this->get_pointCloudObjects_6();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_RuntimeMethod_var);
		V_3 = L_11;
		// point.transform.position = new Vector3(vert.x, vert.y, vert.z);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = V_3;
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = V_2;
		float L_15 = L_14.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_16 = V_2;
		float L_17 = L_16.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_18 = V_2;
		float L_19 = L_18.get_z_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_20), L_15, L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_13, L_20, /*hidden argument*/NULL);
		// for (int count = 0; count < Math.Min (m_PointCloudData.Length, numPointsToShow); count++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006c:
	{
		// for (int count = 0; count < Math.Min (m_PointCloudData.Length, numPointsToShow); count++)
		int32_t L_22 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_23 = __this->get_m_PointCloudData_7();
		NullCheck(L_23);
		uint32_t L_24 = __this->get_numPointsToShow_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int64_t L_25 = Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3((((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))), (((int64_t)((uint64_t)L_24))), /*hidden argument*/NULL);
		V_4 = (bool)((((int64_t)(((int64_t)((int64_t)L_22)))) < ((int64_t)L_25))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_0024;
		}
	}
	{
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void UnityPointCloudExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPointCloudExample__ctor_m162E5F158FB153964E063235BB0ECCDD6A54DA73 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	{
		// public uint numPointsToShow = 100;
		__this->set_numPointsToShow_4(((int32_t)100));
		// public GameObject PointCloudPrefab = null;
		__this->set_PointCloudPrefab_5((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
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
// System.Void UpdateShaderCoordinatesByARPlane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_Start_mFD848147893FC32C7C21661C4949F8030BA55512 (UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_Start_mFD848147893FC32C7C21661C4949F8030BA55512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARPlaneHandler.returnARPlane += CheckCoordinates;
		Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * L_0 = ((ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_il2cpp_TypeInfo_var))->get_returnARPlane_5();
		Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * L_1 = (Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB *)il2cpp_codegen_object_new(Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB_il2cpp_TypeInfo_var);
		Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487(L_1, __this, (intptr_t)((intptr_t)UpdateShaderCoordinatesByARPlane_CheckCoordinates_mFC15BBCE0669A3D17DD980F7727DD0D7FC4DC138_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487_RuntimeMethod_var);
		Delegate_t * L_2 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_0, L_1, /*hidden argument*/NULL);
		((ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_il2cpp_TypeInfo_var))->set_returnARPlane_5(((Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB *)CastclassSealed((RuntimeObject*)L_2, Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB_il2cpp_TypeInfo_var)));
		// ARPlaneHandler.resetARPlane += ResetShaderValues;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ((ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_il2cpp_TypeInfo_var))->get_resetARPlane_4();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_4, __this, (intptr_t)((intptr_t)UpdateShaderCoordinatesByARPlane_ResetShaderValues_m0206FE447BCC93D0315D3D64474E826F7B1A3B76_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		((ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_il2cpp_TypeInfo_var))->set_resetARPlane_4(((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_5, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::CheckCoordinates(UnityARInterface.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_CheckCoordinates_mFC15BBCE0669A3D17DD980F7727DD0D7FC4DC138 (UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001 * __this, BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  ___plane0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_CheckCoordinates_mFC15BBCE0669A3D17DD980F7727DD0D7FC4DC138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _position = plane.center;
		BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  L_0 = ___plane0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = L_0.get_center_1();
		__this->set__position_6(L_1);
		// _rotation = Quaternion.Inverse(plane.rotation);
		BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  L_2 = ___plane0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = L_2.get_rotation_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_3, /*hidden argument*/NULL);
		__this->set__rotation_4(L_4);
		// _localScale = new Vector3(plane.extents.x, 10, plane.extents.y);
		BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  L_5 = ___plane0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = L_5.get_extents_2();
		float L_7 = L_6.get_x_0();
		BoundedPlane_t49818588613A95C31C88F38AF5CD4A51EE8E4F0F  L_8 = ___plane0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = L_8.get_extents_2();
		float L_10 = L_9.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), L_7, (10.0f), L_10, /*hidden argument*/NULL);
		__this->set__localScale_5(L_11);
		// UpdateShaderValues(_position, _localScale, _rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get__position_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get__localScale_5();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = __this->get__rotation_4();
		UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m03312DE8A1EFA4C080E4C9E2DD49B56F31FA63C1(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::UpdateShaderValues(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m03312DE8A1EFA4C080E4C9E2DD49B56F31FA63C1 (UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localScale1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m03312DE8A1EFA4C080E4C9E2DD49B56F31FA63C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shader.SetGlobalVector("_Origin", new Vector4(
		//       position.x,
		//       position.y,
		//       position.z,
		//       0f));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		float L_1 = L_0.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		float L_3 = L_2.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___position0;
		float L_5 = L_4.get_z_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m831AF6E05F7ADEBE49AC4C6EE043E10B86900B76(_stringLiteral5F52003496E7C27A6D8707B8169E47FA25595618, L_6, /*hidden argument*/NULL);
		// Shader.SetGlobalVector("_BoxRotation", new Vector4(
		//        rotation.eulerAngles.x,
		//        rotation.eulerAngles.y,
		//        rotation.eulerAngles.z,
		//        0f));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation2), /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation2), /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation2), /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_13), L_8, L_10, L_12, (0.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m831AF6E05F7ADEBE49AC4C6EE043E10B86900B76(_stringLiteral46999A5B8887944E62AB3C2144EDD9235A5159E9, L_13, /*hidden argument*/NULL);
		// Shader.SetGlobalVector("_BoxSize", new Vector4(
		//     localScale.x,
		//     localScale.y,
		//     localScale.z,
		//     0f));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ___localScale1;
		float L_15 = L_14.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = ___localScale1;
		float L_17 = L_16.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = ___localScale1;
		float L_19 = L_18.get_z_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_20), L_15, L_17, L_19, (0.0f), /*hidden argument*/NULL);
		Shader_SetGlobalVector_m831AF6E05F7ADEBE49AC4C6EE043E10B86900B76(_stringLiteral5513D890E768122B081B730418BAD293383E095A, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::ResetShaderValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_ResetShaderValues_m0206FE447BCC93D0315D3D64474E826F7B1A3B76 (UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var vZero = new Vector3(0, 0, 0);
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// var qZero = new Quaternion(0, 0, 0, 0);
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// UpdateShaderValues(vZero, vZero, qZero);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_1;
		UpdateShaderCoordinatesByARPlane_UpdateShaderValues_m03312DE8A1EFA4C080E4C9E2DD49B56F31FA63C1(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane_OnDisable_mE0A491E255F143342D6C57A71E98A32C30625090 (UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateShaderCoordinatesByARPlane_OnDisable_mE0A491E255F143342D6C57A71E98A32C30625090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARPlaneHandler.returnARPlane -= CheckCoordinates;
		Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * L_0 = ((ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_il2cpp_TypeInfo_var))->get_returnARPlane_5();
		Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB * L_1 = (Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB *)il2cpp_codegen_object_new(Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB_il2cpp_TypeInfo_var);
		Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487(L_1, __this, (intptr_t)((intptr_t)UpdateShaderCoordinatesByARPlane_CheckCoordinates_mFC15BBCE0669A3D17DD980F7727DD0D7FC4DC138_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9A91659C0873EF04FF353AF55C32C3CFE6EA2487_RuntimeMethod_var);
		Delegate_t * L_2 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_0, L_1, /*hidden argument*/NULL);
		((ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_StaticFields*)il2cpp_codegen_static_fields_for(ARPlaneHandler_t6CC1141F110026EB73FD52C048201F6D4C7C5B8A_il2cpp_TypeInfo_var))->set_returnARPlane_5(((Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB *)CastclassSealed((RuntimeObject*)L_2, Action_1_t50E490B1642662E10E6E9EC317712A99265F64BB_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UpdateShaderCoordinatesByARPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateShaderCoordinatesByARPlane__ctor_mDD406A013630CB73832A218704B957E3B86064F8 (UpdateShaderCoordinatesByARPlane_t0C3067E8AB0112D670C23DE757CFC9A1FACFB001 * __this, const RuntimeMethod* method)
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
// System.Byte[] Utils.ObjectSerializationExtension::SerializeToByteArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ObjectSerializationExtension_SerializeToByteArray_mA1B5407DA79B2DBBA1B8951221B162965AED521B (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectSerializationExtension_SerializeToByteArray_mA1B5407DA79B2DBBA1B8951221B162965AED521B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return null;
		V_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		goto IL_0038;
	}

IL_000e:
	{
		// var bf = new BinaryFormatter();
		BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * L_2 = (BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 *)il2cpp_codegen_object_new(BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_mEA8ADD359BFAC7D9E9B6183FDC1C5C80E0F29806(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// using (var ms = new MemoryStream())
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_3 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9D0F92C76EFEDA651B678A98EB693FD945286DC2(L_3, /*hidden argument*/NULL);
		V_3 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		// bf.Serialize(ms, obj);
		BinaryFormatter_t116398AB9D7E425E4CFF83C37824A46443A2E6D0 * L_4 = V_0;
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_5 = V_3;
		RuntimeObject * L_6 = ___obj0;
		NullCheck(L_4);
		BinaryFormatter_Serialize_mBA2FB6DB94D34F42E14DF7D788056FCF0CF41D52(L_4, L_5, L_6, /*hidden argument*/NULL);
		// return ms.ToArray();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_7 = V_3;
		NullCheck(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_7);
		V_2 = L_8;
		IL2CPP_LEAVE(0x38, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_9 = V_3;
			if (!L_9)
			{
				goto IL_0037;
			}
		}

IL_0030:
		{
			MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_10 = V_3;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
		}

IL_0037:
		{
			IL2CPP_RESET_LEAVE(0x38);
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0038:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_2;
		return L_11;
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
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		// public SerializableVector4(float rX, float rY, float rZ, float rW)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// x = rX;
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		// y = rY;
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		// z = rZ;
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		// w = rW;
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		// }
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableVector4_ToString_m31845B5920AFBED4AF92F221B45AF4A9DD3CE3E9 (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m31845B5920AFBED4AF92F221B45AF4A9DD3CE3E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("[{0}, {1}, {2}, {3}]", x, y, z, w);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		float L_10 = __this->get_z_2();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		float L_14 = __this->get_w_3();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralFDCD5EFE7A08C827D52108E870EDE9535214D9ED, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		String_t* L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___rValue0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector4(rValue.x, rValue.y, rValue.z, rValue.w);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = V_0;
		return L_9;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * V_0 = NULL;
	{
		// return new SerializableVector4(rValue.x, rValue.y, rValue.z, rValue.w);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___rValue0;
		float L_1 = L_0.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___rValue0;
		float L_3 = L_2.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___rValue0;
		float L_5 = L_4.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___rValue0;
		float L_7 = L_6.get_w_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_9 = V_0;
		return L_9;
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
// System.Void Utils.serializableARKitInit::.ctor(Utils.serializableARSessionConfiguration,UnityEngine.XR.iOS.UnityARSessionRunOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableARKitInit__ctor_mEA56B16AD0EA4D1F0DEA598F9A970C6B69757759 (serializableARKitInit_t7F5F65C164CE76F74652C3186631AA1AF968BE42 * __this, serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___cfg0, int32_t ___option1, const RuntimeMethod* method)
{
	{
		// public serializableARKitInit(serializableARSessionConfiguration cfg, UnityARSessionRunOption option)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// config = cfg;
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_0 = ___cfg0;
		__this->set_config_0(L_0);
		// runOption = option;
		int32_t L_1 = ___option1;
		__this->set_runOption_1(L_1);
		// }
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
// System.Void Utils.serializableARSessionConfiguration::.ctor(UnityEngine.XR.iOS.UnityARAlignment,UnityEngine.XR.iOS.UnityARPlaneDetection,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableARSessionConfiguration__ctor_m36736F31230CF4ACD3F8946AAAD6BEDD537DF5E0 (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * __this, int32_t ___align0, int32_t ___planeDet1, bool ___getPtCloud2, bool ___enableLightEst3, const RuntimeMethod* method)
{
	{
		// public serializableARSessionConfiguration(UnityARAlignment align, UnityARPlaneDetection planeDet, bool getPtCloud, bool enableLightEst)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// alignment = align;
		int32_t L_0 = ___align0;
		__this->set_alignment_0(L_0);
		// planeDetection = planeDet;
		int32_t L_1 = ___planeDet1;
		__this->set_planeDetection_1(L_1);
		// getPointCloudData = getPtCloud;
		bool L_2 = ___getPtCloud2;
		__this->set_getPointCloudData_2(L_2);
		// enableLightEstimation = enableLightEst;
		bool L_3 = ___enableLightEst3;
		__this->set_enableLightEstimation_3(L_3);
		// }
		return;
	}
}
// Utils.serializableARSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D (ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  ___awtsc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableARSessionConfiguration_op_Implicit_m83BC36B7D15D91E35CAA2504323417879BFC188D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * V_0 = NULL;
	{
		// return new serializableARSessionConfiguration (awtsc.alignment, awtsc.planeDetection, awtsc.getPointCloudData, awtsc.enableLightEstimation);
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_0 = ___awtsc0;
		int32_t L_1 = L_0.get_alignment_0();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_2 = ___awtsc0;
		int32_t L_3 = L_2.get_planeDetection_1();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_4 = ___awtsc0;
		bool L_5 = L_4.get_getPointCloudData_2();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_6 = ___awtsc0;
		bool L_7 = L_6.get_enableLightEstimation_3();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_8 = (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 *)il2cpp_codegen_object_new(serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4_il2cpp_TypeInfo_var);
		serializableARSessionConfiguration__ctor_m36736F31230CF4ACD3F8946AAAD6BEDD537DF5E0(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration Utils.serializableARSessionConfiguration::op_Implicit(Utils.serializableARSessionConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  serializableARSessionConfiguration_op_Implicit_mC658A108785924A17215A9E3ABDF3916C69B39E5 (serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * ___sasc0, const RuntimeMethod* method)
{
	ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ARKitWorldTrackingSessionConfiguration (sasc.alignment, sasc.planeDetection, sasc.getPointCloudData, sasc.enableLightEstimation);
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_0 = ___sasc0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_alignment_0();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_2 = ___sasc0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_planeDetection_1();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_4 = ___sasc0;
		NullCheck(L_4);
		bool L_5 = L_4->get_getPointCloudData_2();
		serializableARSessionConfiguration_t8F9BB87DFF43C0B7787BB911E7A84B799489E3C4 * L_6 = ___sasc0;
		NullCheck(L_6);
		bool L_7 = L_6->get_enableLightEstimation_3();
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ARKitWorldTrackingSessionConfiguration__ctor_mA7201B6352F4142BF235A5A597D4EA9C1DFF910B((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		ARKitWorldTrackingSessionConfiguration_t0A35F68DD5CDD5DF1722D17A5FF9F1708489FD03  L_9 = V_0;
		return L_9;
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
// System.Void Utils.serializableFromEditorMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableFromEditorMessage__ctor_m38ED635A9032486BD80F0EAB863AFD8478B813E9 (serializableFromEditorMessage_t6279502A409A3B43F37B145CC5102425C96EBA51 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Utils.serializablePointCloud::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputPoints0, const RuntimeMethod* method)
{
	{
		// public serializablePointCloud(byte [] inputPoints)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// pointCloudData = inputPoints;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___inputPoints0;
		__this->set_pointCloudData_0(L_0);
		// }
		return;
	}
}
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vecPointCloud0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * V_5 = NULL;
	{
		// if (vecPointCloud != null)
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___vecPointCloud0;
		V_0 = (bool)((!(((RuntimeObject*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0099;
		}
	}
	{
		// byte [] createBuf = new byte[vecPointCloud.Length * sizeof(float) * 3];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = ___vecPointCloud0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), (int32_t)4)), (int32_t)3)));
		V_1 = L_3;
		// for(int i = 0; i < vecPointCloud.Length; i++)
		V_2 = 0;
		goto IL_0083;
	}

IL_001e:
	{
		// int bufferStart = i * 3;
		int32_t L_4 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)3));
		// Buffer.BlockCopy( BitConverter.GetBytes( vecPointCloud[i].x ), 0, createBuf, (bufferStart)*sizeof(float), sizeof(float) );
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = ___vecPointCloud0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		int32_t L_10 = V_3;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), 4, /*hidden argument*/NULL);
		// Buffer.BlockCopy( BitConverter.GetBytes( vecPointCloud[i].y ), 0, createBuf, (bufferStart+1)*sizeof(float), sizeof(float) );
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = ___vecPointCloud0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		float L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_y_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_1;
		int32_t L_16 = V_3;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_14, 0, (RuntimeArray *)(RuntimeArray *)L_15, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), (int32_t)4)), 4, /*hidden argument*/NULL);
		// Buffer.BlockCopy( BitConverter.GetBytes( vecPointCloud[i].z ), 0, createBuf, (bufferStart+2)*sizeof(float), sizeof(float) );
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = ___vecPointCloud0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		float L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_z_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_19, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_1;
		int32_t L_22 = V_3;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_20, 0, (RuntimeArray *)(RuntimeArray *)L_21, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)2)), (int32_t)4)), 4, /*hidden argument*/NULL);
		// for(int i = 0; i < vecPointCloud.Length; i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0083:
	{
		// for(int i = 0; i < vecPointCloud.Length; i++)
		int32_t L_24 = V_2;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_25 = ___vecPointCloud0;
		NullCheck(L_25);
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))? 1 : 0);
		bool L_26 = V_4;
		if (L_26)
		{
			goto IL_001e;
		}
	}
	{
		// return new serializablePointCloud (createBuf);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = V_1;
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_28 = (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 *)il2cpp_codegen_object_new(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3(L_28, L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		goto IL_00a4;
	}

IL_0099:
	{
		// return new serializablePointCloud(null);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_29 = (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 *)il2cpp_codegen_object_new(serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0_il2cpp_TypeInfo_var);
		serializablePointCloud__ctor_m20D2DB050232D29FB3ACCCF4DF0B46B99C6654E3(L_29, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		V_5 = L_29;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_30 = V_5;
		return L_30;
	}
}
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4 (serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_6 = NULL;
	{
		// if (spc.pointCloudData != null)
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0->get_pointCloudData_0();
		V_0 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0098;
		}
	}
	{
		// int numVectors = spc.pointCloudData.Length / (3 * sizeof(float));
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_3 = ___spc0;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3->get_pointCloudData_0();
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))/(int32_t)((int32_t)12)));
		// Vector3 [] pointCloudVec = new Vector3[numVectors];
		int32_t L_5 = V_1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// for (int i = 0; i < numVectors; i++)
		V_3 = 0;
		goto IL_0089;
	}

IL_0029:
	{
		// int bufferStart = i * 3;
		int32_t L_7 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)3));
		// pointCloudVec [i].x = BitConverter.ToSingle (spc.pointCloudData, (bufferStart) * sizeof(float));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_10 = ___spc0;
		NullCheck(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = L_10->get_pointCloudData_0();
		int32_t L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_13 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_11, ((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)4)), /*hidden argument*/NULL);
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->set_x_2(L_13);
		// pointCloudVec [i].y = BitConverter.ToSingle (spc.pointCloudData, (bufferStart+1) * sizeof(float));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_16 = ___spc0;
		NullCheck(L_16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = L_16->get_pointCloudData_0();
		int32_t L_18 = V_4;
		float L_19 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_17, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), (int32_t)4)), /*hidden argument*/NULL);
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->set_y_3(L_19);
		// pointCloudVec [i].z = BitConverter.ToSingle (spc.pointCloudData, (bufferStart+2) * sizeof(float));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_22 = ___spc0;
		NullCheck(L_22);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = L_22->get_pointCloudData_0();
		int32_t L_24 = V_4;
		float L_25 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_23, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2)), (int32_t)4)), /*hidden argument*/NULL);
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->set_z_4(L_25);
		// for (int i = 0; i < numVectors; i++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0089:
	{
		// for (int i = 0; i < numVectors; i++)
		int32_t L_27 = V_3;
		int32_t L_28 = V_1;
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0029;
		}
	}
	{
		// return pointCloudVec;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_30 = V_2;
		V_6 = L_30;
		goto IL_009e;
	}

IL_0098:
	{
		// return null;
		V_6 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_31 = V_6;
		return L_31;
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
// System.Void Utils.serializableSHC::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inputSHCData0, const RuntimeMethod* method)
{
	{
		// public serializableSHC(byte [] inputSHCData)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// shcData = inputSHCData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___inputSHCData0;
		__this->set_shcData_0(L_0);
		// }
		return;
	}
}
// Utils.serializableSHC Utils.serializableSHC::op_Implicit(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2 (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___floatsSHC0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * V_4 = NULL;
	{
		// if (floatsSHC != null)
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___floatsSHC0;
		V_0 = (bool)((!(((RuntimeObject*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// byte [] createBuf = new byte[floatsSHC.Length * sizeof(float)];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = ___floatsSHC0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), (int32_t)4)));
		V_1 = L_3;
		// for(int i = 0; i < floatsSHC.Length; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0019:
	{
		// Buffer.BlockCopy( BitConverter.GetBytes( floatsSHC[i] ), 0, createBuf, (i)*sizeof(float), sizeof(float) );
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = ___floatsSHC0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		int32_t L_10 = V_2;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)4)), 4, /*hidden argument*/NULL);
		// for(int i = 0; i < floatsSHC.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0033:
	{
		// for(int i = 0; i < floatsSHC.Length; i++)
		int32_t L_12 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_13 = ___floatsSHC0;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0019;
		}
	}
	{
		// return new serializableSHC (createBuf);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_1;
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_16 = (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 *)il2cpp_codegen_object_new(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB(L_16, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		goto IL_0052;
	}

IL_0047:
	{
		// return new serializableSHC(null);
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_17 = (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 *)il2cpp_codegen_object_new(serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6_il2cpp_TypeInfo_var);
		serializableSHC__ctor_m173D9A74E8CA7FD18EB91CC435D1E9D67C2413CB(L_17, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		V_4 = L_17;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_18 = V_4;
		return L_18;
	}
}
// System.Single[] Utils.serializableSHC::op_Implicit(Utils.serializableSHC)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7 (serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * ___spc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_5 = NULL;
	{
		// if (spc.shcData != null)
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_0 = ___spc0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0->get_shcData_0();
		V_0 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// int numFloats = spc.shcData.Length / (sizeof(float));
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_3 = ___spc0;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3->get_shcData_0();
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))/(int32_t)4));
		// float [] shcFloats = new float[numFloats];
		int32_t L_5 = V_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// for (int i = 0; i < numFloats; i++)
		V_3 = 0;
		goto IL_003c;
	}

IL_0025:
	{
		// shcFloats [i] = BitConverter.ToSingle (spc.shcData, i * sizeof(float));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = V_2;
		int32_t L_8 = V_3;
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_9 = ___spc0;
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = L_9->get_shcData_0();
		int32_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_12 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_10, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)4)), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (float)L_12);
		// for (int i = 0; i < numFloats; i++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = 0; i < numFloats; i++)
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0025;
		}
	}
	{
		// return shcFloats;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_17 = V_2;
		V_5 = L_17;
		goto IL_0051;
	}

IL_004b:
	{
		// return null;
		V_5 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)NULL;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_18 = V_5;
		return L_18;
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
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightData,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARCamera__ctor_m1B7A5C6C40A0BE7DED39C690207F191E25F0AE95 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___uvp4, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightDat5, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___dt6, serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * ___spc7, const RuntimeMethod* method)
{
	{
		// public serializableUnityARCamera( serializableUnityARMatrix4x4 wt, serializableUnityARMatrix4x4 pm, ARTrackingState ats, ARTrackingStateReason atsr, UnityVideoParams uvp, UnityARLightData lightDat, serializableUnityARMatrix4x4 dt, serializablePointCloud spc)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// worldTransform = wt;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		// projectionMatrix = pm;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		// trackingState = ats;
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		// trackingReason = atsr;
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		// videoParams = uvp;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		// lightData = lightDat;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_5 = ___lightDat5;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_6 = serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46(L_5, /*hidden argument*/NULL);
		__this->set_lightData_5(L_6);
		// displayTransform = dt;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_7 = ___dt6;
		__this->set_displayTransform_7(L_7);
		// pointCloud = spc;
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_8 = ___spc7;
		__this->set_pointCloud_6(L_8);
		// }
		return;
	}
}
// Utils.serializableUnityARCamera Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.UnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053 (UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARCamera_op_Implicit_m9C95D9E71AEFED1220A52B30AD44FFB0B8988053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * V_0 = NULL;
	{
		// return new serializableUnityARCamera(rValue.worldTransform, rValue.projectionMatrix, rValue.trackingState, rValue.trackingReason, rValue.videoParams, rValue.lightData, rValue.displayTransform, rValue.pointCloudData);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_0 = ___rValue0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_1 = L_0.get_worldTransform_0();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_1, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_3 = ___rValue0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_4 = L_3.get_projectionMatrix_1();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_5 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_4, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_6 = ___rValue0;
		int32_t L_7 = L_6.get_trackingState_2();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_8 = ___rValue0;
		int32_t L_9 = L_8.get_trackingReason_3();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_10 = ___rValue0;
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_11 = L_10.get_videoParams_4();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_12 = ___rValue0;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_13 = L_12.get_lightData_5();
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_14 = ___rValue0;
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_15 = L_14.get_displayTransform_6();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_16 = serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562(L_15, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_17 = ___rValue0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_18 = L_17.get_pointCloudData_7();
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_19 = serializablePointCloud_op_Implicit_m5F0AF059CB5949210D3532C461B8587B55D3330A(L_18, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_20 = (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 *)il2cpp_codegen_object_new(serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513_il2cpp_TypeInfo_var);
		serializableUnityARCamera__ctor_m1B7A5C6C40A0BE7DED39C690207F191E25F0AE95(L_20, L_2, L_5, L_7, L_9, L_11, L_13, L_16, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.XR.iOS.UnityARCamera Utils.serializableUnityARCamera::op_Implicit(Utils.serializableUnityARCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  serializableUnityARCamera_op_Implicit_m71E57DE6423BB31A561F8301FEA6363B5B32AB13 (serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * ___rValue0, const RuntimeMethod* method)
{
	UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new UnityARCamera (rValue.worldTransform, rValue.projectionMatrix, rValue.trackingState, rValue.trackingReason, rValue.videoParams, rValue.lightData, rValue.displayTransform, rValue.pointCloud);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_0 = ___rValue0;
		NullCheck(L_0);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_1 = L_0->get_worldTransform_0();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_2 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_1, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_3 = ___rValue0;
		NullCheck(L_3);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_4 = L_3->get_projectionMatrix_1();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_5 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_4, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_6 = ___rValue0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_trackingState_2();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_8 = ___rValue0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_trackingReason_3();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_10 = ___rValue0;
		NullCheck(L_10);
		UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  L_11 = L_10->get_videoParams_4();
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_12 = ___rValue0;
		NullCheck(L_12);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_13 = L_12->get_lightData_5();
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_14 = serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8(L_13, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_15 = ___rValue0;
		NullCheck(L_15);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_16 = L_15->get_displayTransform_7();
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_17 = serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6(L_16, /*hidden argument*/NULL);
		serializableUnityARCamera_t952DA4E71A676B312CA94BA7B7FCA4F0265A3513 * L_18 = ___rValue0;
		NullCheck(L_18);
		serializablePointCloud_tE1C5FA8BB1D32B8FFD2E5D36BEDDC82571592BD0 * L_19 = L_18->get_pointCloud_6();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_20 = serializablePointCloud_op_Implicit_mB9AC159C0202E314B1EE4490BBABD8A0F73433B4(L_19, /*hidden argument*/NULL);
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_21;
		memset((&L_21), 0, sizeof(L_21));
		UnityARCamera__ctor_m83D5679FBC374A1A369C75BB85718BBF7F22B46D((&L_21), L_2, L_5, L_7, L_9, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  L_22 = V_0;
		return L_22;
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
// System.Void Utils.serializableUnityARLightData::.ctor(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * __this, UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// serializableUnityARLightData(UnityARLightData lightData)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// whichLight = lightData.arLightingType;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_0 = ___lightData0;
		int32_t L_1 = L_0.get_arLightingType_0();
		__this->set_whichLight_0(L_1);
		// if (whichLight == LightDataType.DirectionalLightEstimate) {
		int32_t L_2 = __this->get_whichLight_0();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// lightSHC = lightData.arDirectonalLightEstimate.sphericalHarmonicsCoefficients;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_4 = ___lightData0;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_5 = L_4.get_arDirectonalLightEstimate_2();
		NullCheck(L_5);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = L_5->get_sphericalHarmonicsCoefficients_2();
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_7 = serializableSHC_op_Implicit_m903A8FADA377ED1B1C203DF3BFD2239D8A22C0D2(L_6, /*hidden argument*/NULL);
		__this->set_lightSHC_1(L_7);
		// Vector3 lightDir = lightData.arDirectonalLightEstimate.primaryLightDirection;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_8 = ___lightData0;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_9 = L_8.get_arDirectonalLightEstimate_2();
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = L_9->get_primaryLightDirection_0();
		V_1 = L_10;
		// float lightIntensity = lightData.arDirectonalLightEstimate.primaryLightIntensity;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_11 = ___lightData0;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_12 = L_11.get_arDirectonalLightEstimate_2();
		NullCheck(L_12);
		float L_13 = L_12->get_primaryLightIntensity_1();
		V_2 = L_13;
		// primaryLightDirAndIntensity = new SerializableVector4 (lightDir.x, lightDir.y, lightDir.z, lightIntensity);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_1;
		float L_15 = L_14.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		float L_17 = L_16.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_1;
		float L_19 = L_18.get_z_4();
		float L_20 = V_2;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_21 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_21, L_15, L_17, L_19, L_20, /*hidden argument*/NULL);
		__this->set_primaryLightDirAndIntensity_2(L_21);
		goto IL_0095;
	}

IL_0071:
	{
		// ambientIntensity = lightData.arLightEstimate.ambientIntensity;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_22 = ___lightData0;
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_23 = L_22.get_arLightEstimate_1();
		float L_24 = L_23.get_ambientIntensity_0();
		__this->set_ambientIntensity_3(L_24);
		// ambientColorTemperature = lightData.arLightEstimate.ambientColorTemperature;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_25 = ___lightData0;
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_26 = L_25.get_arLightEstimate_1();
		float L_27 = L_26.get_ambientColorTemperature_1();
		__this->set_ambientColorTemperature_4(L_27);
	}

IL_0095:
	{
		// }
		return;
	}
}
// Utils.serializableUnityARLightData Utils.serializableUnityARLightData::op_Implicit(UnityEngine.XR.iOS.UnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46 (UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_mF0C858C69C394E8BD5A421EDA62B7BE1A0794D46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * V_0 = NULL;
	{
		// return new serializableUnityARLightData(rValue);
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_0 = ___rValue0;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_1 = (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 *)il2cpp_codegen_object_new(serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0_il2cpp_TypeInfo_var);
		serializableUnityARLightData__ctor_m0DF743D49246A58A300FD1B8EA75556A0C90AD33(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.XR.iOS.UnityARLightData Utils.serializableUnityARLightData::op_Implicit(Utils.serializableUnityARLightData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8 (serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARLightData_op_Implicit_mD1E973F622A13B719B7DA3FB4CDC2887C6D4CFE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * V_0 = NULL;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// UnityARDirectionalLightEstimate udle = null;
		V_0 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)NULL;
		// UnityARLightEstimate ule = new UnityARLightEstimate (rValue.ambientIntensity, rValue.ambientColorTemperature);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_ambientIntensity_3();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_ambientColorTemperature_4();
		UnityARLightEstimate__ctor_m6FDE1D59522BACB96C86498314B4112E048FE18C((UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 *)(&V_1), L_1, L_3, /*hidden argument*/NULL);
		// if (rValue.whichLight == LightDataType.DirectionalLightEstimate) {
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_4 = ___rValue0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_whichLight_0();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// Vector3 lightDir = new Vector3 (rValue.primaryLightDirAndIntensity.x, rValue.primaryLightDirAndIntensity.y, rValue.primaryLightDirAndIntensity.z);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = L_7->get_primaryLightDirAndIntensity_2();
		NullCheck(L_8);
		float L_9 = L_8->get_x_0();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_11 = L_10->get_primaryLightDirAndIntensity_2();
		NullCheck(L_11);
		float L_12 = L_11->get_y_1();
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_13 = ___rValue0;
		NullCheck(L_13);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_14 = L_13->get_primaryLightDirAndIntensity_2();
		NullCheck(L_14);
		float L_15 = L_14->get_z_2();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), L_9, L_12, L_15, /*hidden argument*/NULL);
		// udle = new UnityARDirectionalLightEstimate (rValue.lightSHC, lightDir, rValue.primaryLightDirAndIntensity.w);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_16 = ___rValue0;
		NullCheck(L_16);
		serializableSHC_t4FD4A57C32CF5D4577C157F7289A8D76B8A378D6 * L_17 = L_16->get_lightSHC_1();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_18 = serializableSHC_op_Implicit_mEA7A8CED18BA01324D99CCEBDDAA335253AF6DF7(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_3;
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_21 = L_20->get_primaryLightDirAndIntensity_2();
		NullCheck(L_21);
		float L_22 = L_21->get_w_3();
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_23 = (UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 *)il2cpp_codegen_object_new(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9_il2cpp_TypeInfo_var);
		UnityARDirectionalLightEstimate__ctor_mF4132E3E0A3BF152E060E07F064D5DA8C27796F1(L_23, L_18, L_19, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_006a:
	{
		// return new UnityARLightData(rValue.whichLight, ule, udle);
		serializableUnityARLightData_t9674E641CC7F077ED1DCB7E60B70CC79C034F1D0 * L_24 = ___rValue0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_whichLight_0();
		UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  L_26 = V_1;
		UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * L_27 = V_0;
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_28;
		memset((&L_28), 0, sizeof(L_28));
		UnityARLightData__ctor_m3F910A4326A4E9B02F36CA12D1379A2341616DB1((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  L_29 = V_4;
		return L_29;
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
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * __this, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v00, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v11, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v22, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___v33, const RuntimeMethod* method)
{
	{
		// public serializableUnityARMatrix4x4(SerializableVector4 v0, SerializableVector4 v1, SerializableVector4 v2, SerializableVector4 v3)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// column0 = v0;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_0 = ___v00;
		__this->set_column0_0(L_0);
		// column1 = v1;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = ___v11;
		__this->set_column1_1(L_1);
		// column2 = v2;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___v22;
		__this->set_column2_2(L_2);
		// column3 = v3;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_3 = ___v33;
		__this->set_column3_3(L_3);
		// }
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562 (UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m82DFB423FF39467E49DF0A0E59BD746887ED7562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * V_0 = NULL;
	{
		// return new serializableUnityARMatrix4x4(rValue.column0, rValue.column1, rValue.column2, rValue.column3);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_0 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = L_0.get_column0_0();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_1, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_3 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = L_3.get_column1_1();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_4, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_6 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_7 = L_6.get_column2_2();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_7, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_9 = ___rValue0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = L_9.get_column3_3();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_11 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_10, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_12 = (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA(L_12, L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  serializableUnityARMatrix4x4_op_Implicit_m8D48594335CE25C31FA4032091B68CD479CBC9C6 (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method)
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new UnityARMatrix4x4(rValue.column0, rValue.column1, rValue.column2, rValue.column3);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = L_0->get_column0_0();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = L_3->get_column1_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_column2_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_column3_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_12;
		memset((&L_12), 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_mCEF59FBC04B24A43578F178FE9740AE7A4DDC0B5((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  L_13 = V_0;
		return L_13;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * V_0 = NULL;
	{
		// return new serializableUnityARMatrix4x4(rValue.GetColumn(0), rValue.GetColumn(1), rValue.GetColumn(2), rValue.GetColumn(3));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_3 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_2, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_4, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = SerializableVector4_op_Implicit_mE60940B16A517D05380995351EB5DDB635C4786A(L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_8 = (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m2A4756704E519CE250AD681A22EBEB28FC7BE3FA(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A (serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___rValue0, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Matrix4x4(rValue.column0, rValue.column1, rValue.column2, rValue.column3);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = L_0->get_column0_0();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_4 = L_3->get_column1_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_5 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_7 = L_6->get_column2_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_10 = L_9->get_column3_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11 = SerializableVector4_op_Implicit_mA6C0A0C79E276DEDF53424BEC36D58AD4772752A(L_10, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Matrix4x4__ctor_mC7C5A4F0791B2A3ADAFE1E6C491B7705B6492B12((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_13 = V_0;
		return L_13;
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
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m834695FEBC5C5CBB0ACC0FCBDC36E5C81A253B7B (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * __this, serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * ___wt0, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ctr1, SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * ___ext2, int64_t ___apaa3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___idstr4, const RuntimeMethod* method)
{
	{
		// public serializableUnityARPlaneAnchor( serializableUnityARMatrix4x4 wt, SerializableVector4 ctr, SerializableVector4 ext, ARPlaneAnchorAlignment apaa,
		//     byte [] idstr)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// worldTransform = wt;
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		// center = ctr;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		// extent = ext;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		// planeAlignment = apaa;
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		// identifierStr = idstr;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		// }
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m082EE6BB39B0F9867E0D3332F87DF24EE53F7303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * V_0 = NULL;
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * V_1 = NULL;
	SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * V_4 = NULL;
	{
		// serializableUnityARMatrix4x4 wt = rValue.transform;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_0 = ___rValue0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = L_0.get_transform_1();
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_2 = serializableUnityARMatrix4x4_op_Implicit_m9D6A890701A185FF2C9D64F4143E4907605CD7B8(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// SerializableVector4 ctr = new SerializableVector4 (rValue.center.x, rValue.center.y, rValue.center.z, 1.0f);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_3 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = L_3.get_center_3();
		float L_5 = L_4.get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_6 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6.get_center_3();
		float L_8 = L_7.get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_9 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = L_9.get_center_3();
		float L_11 = L_10.get_z_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_12 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_12, L_5, L_8, L_11, (1.0f), /*hidden argument*/NULL);
		V_1 = L_12;
		// SerializableVector4 ext = new SerializableVector4 (rValue.extent.x, rValue.extent.y, rValue.extent.z, 1.0f);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_13 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = L_13.get_extent_4();
		float L_15 = L_14.get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_16 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = L_16.get_extent_4();
		float L_18 = L_17.get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_19 = ___rValue0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = L_19.get_extent_4();
		float L_21 = L_20.get_z_4();
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_22 = (SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F *)il2cpp_codegen_object_new(SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m03D7A0BCF80255FF10A93215985ADF454650191B(L_22, L_15, L_18, L_21, (1.0f), /*hidden argument*/NULL);
		V_2 = L_22;
		// byte[] idstr = Encoding.UTF8.GetBytes (rValue.identifier);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_23 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_24 = ___rValue0;
		String_t* L_25 = L_24.get_identifier_0();
		NullCheck(L_23);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_25);
		V_3 = L_26;
		// return new serializableUnityARPlaneAnchor(wt, ctr, ext, rValue.alignment, idstr);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_27 = V_0;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_28 = V_1;
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_29 = V_2;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_30 = ___rValue0;
		int64_t L_31 = L_30.get_alignment_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = V_3;
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_33 = (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m834695FEBC5C5CBB0ACC0FCBDC36E5C81A253B7B(L_33, L_27, L_28, L_29, L_31, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		goto IL_0089;
	}

IL_0089:
	{
		// }
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_34 = V_4;
		return L_34;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  serializableUnityARPlaneAnchor_op_Implicit_mCD5B7A5D27D88F178DE2397380DCC5B636988815 (serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * ___rValue0, const RuntimeMethod* method)
{
	ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// retValue.identifier = Encoding.UTF8.GetString (rValue.identifierStr);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		// retValue.center = new Vector3 (rValue.center.x, rValue.center.y, rValue.center.z);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		// retValue.extent = new Vector3 (rValue.extent.x, rValue.extent.y, rValue.extent.z);
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t9A7F22848995F36265F0E71E3819E6760EE4572F * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		// retValue.alignment = rValue.planeAlignment;
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		// retValue.transform = rValue.worldTransform;
		serializableUnityARPlaneAnchor_t25B12DF3E16073DBAC49B8672A09C69E4D7B7436 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_tB3845F8BE5B8F05C33D459603914CCF5F9E581C9 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_28 = serializableUnityARMatrix4x4_op_Implicit_mC4CA2EB42165DEF39BC84CD11465F4D63648792A(L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		// return retValue;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_29 = V_0;
		V_1 = L_29;
		goto IL_0095;
	}

IL_0095:
	{
		// }
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  L_30 = V_1;
		return L_30;
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
// System.Void VectorDataFetcher::FetchData(DataFetcherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A (VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * __this, DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher_FetchData_m3A43EA634C8AF6CA43A46037B4420B6F97260F5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * V_0 = NULL;
	bool V_1 = false;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B4_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B3_0 = NULL;
	VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * G_B5_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * G_B5_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_0 = (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		// var vectorDaraParameters = parameters as VectorDataFetcherParameters;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_2 = V_0;
		DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 * L_3 = ___parameters0;
		NullCheck(L_2);
		L_2->set_vectorDaraParameters_0(((VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 *)IsInstClass((RuntimeObject*)L_3, VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88_il2cpp_TypeInfo_var)));
		// if(vectorDaraParameters == null)
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_4 = V_0;
		NullCheck(L_4);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_5 = L_4->get_vectorDaraParameters_0();
		V_1 = (bool)((((RuntimeObject*)(VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		goto IL_00bc;
	}

IL_002d:
	{
		// var vectorTile = (vectorDaraParameters.useOptimizedStyle) ? new VectorTile(vectorDaraParameters.style.Id, vectorDaraParameters.style.Modified) : new VectorTile();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_7 = V_0;
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_8 = V_0;
		NullCheck(L_8);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_9 = L_8->get_vectorDaraParameters_0();
		NullCheck(L_9);
		bool L_10 = L_9->get_useOptimizedStyle_3();
		G_B3_0 = L_7;
		if (L_10)
		{
			G_B4_0 = L_7;
			goto IL_0042;
		}
	}
	{
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_11 = (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *)il2cpp_codegen_object_new(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var);
		VectorTile__ctor_m2275A9D738A4FF18395A59BCB41069263B03E58C(L_11, /*hidden argument*/NULL);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0067;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_12 = V_0;
		NullCheck(L_12);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_13 = L_12->get_vectorDaraParameters_0();
		NullCheck(L_13);
		Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * L_14 = L_13->get_style_4();
		NullCheck(L_14);
		String_t* L_15 = L_14->get_Id_1();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_16 = V_0;
		NullCheck(L_16);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_17 = L_16->get_vectorDaraParameters_0();
		NullCheck(L_17);
		Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 * L_18 = L_17->get_style_4();
		NullCheck(L_18);
		String_t* L_19 = L_18->get_Modified_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_20 = (VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 *)il2cpp_codegen_object_new(VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687_il2cpp_TypeInfo_var);
		VectorTile__ctor_mE5F5D290EDC3E470D0D26E6F77479EE7E3BE83A1(L_20, L_15, L_19, /*hidden argument*/NULL);
		G_B5_0 = L_20;
		G_B5_1 = G_B4_0;
	}

IL_0067:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_vectorTile_1(G_B5_0);
		// vectorDaraParameters.tile.AddTile(vectorTile);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_21 = V_0;
		NullCheck(L_21);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_22 = L_21->get_vectorDaraParameters_0();
		NullCheck(L_22);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_23 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_22)->get_tile_2();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_24 = V_0;
		NullCheck(L_24);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_25 = L_24->get_vectorTile_1();
		NullCheck(L_23);
		UnityTile_AddTile_mB9B6E64A7668B08A82FA710755EEA53821FB2784(L_23, L_25, /*hidden argument*/NULL);
		// vectorTile.Initialize(_fileSource, vectorDaraParameters.tile.CanonicalTileId, vectorDaraParameters.mapid, () =>
		// {
		//     if (vectorDaraParameters.tile.CanonicalTileId != vectorTile.Id)
		//     {
		//         //this means tile object is recycled and reused. Returned data doesn't belong to this tile but probably the previous one. So we're trashing it.
		//         return;
		//     }
		//     if (vectorTile.HasError)
		//     {
		//         FetchingError(vectorDaraParameters.tile, vectorTile, new TileErrorEventArgs(vectorDaraParameters.tile.CanonicalTileId, vectorTile.GetType(), vectorDaraParameters.tile, vectorTile.Exceptions));
		//     }
		//     else
		//     {
		//         DataRecieved(vectorDaraParameters.tile, vectorTile);
		//     }
		// });
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_26 = V_0;
		NullCheck(L_26);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_27 = L_26->get_vectorTile_1();
		MapboxAccess_tAB42DC6DC63A58C26BDEA8121BAC995CDF3F409D * L_28 = ((DataFetcher_tB5C0B0294504250373F5B24F8CF30BC0C54A2191 *)__this)->get__fileSource_4();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_29 = V_0;
		NullCheck(L_29);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_30 = L_29->get_vectorDaraParameters_0();
		NullCheck(L_30);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_31 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_30)->get_tile_2();
		NullCheck(L_31);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_32 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline(L_31, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_33 = V_0;
		NullCheck(L_33);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_34 = L_33->get_vectorDaraParameters_0();
		NullCheck(L_34);
		String_t* L_35 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_34)->get_mapid_1();
		U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * L_36 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_37 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_37, L_36, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		Tile_Initialize_m7566350DAAE0C8BE6CC52B59BB8C896F1D315317(L_27, L_28, L_32, L_35, L_37, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void VectorDataFetcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3 (VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorDataFetcher__ctor_m49D1FCF12019AC76BDF72C8C4A8682AB50FF54D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * G_B2_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B2_1 = NULL;
	Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * G_B1_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B1_1 = NULL;
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * G_B4_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B4_1 = NULL;
	Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * G_B3_0 = NULL;
	VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * G_B3_1 = NULL;
	{
		// public Action<UnityTile, VectorTile> DataRecieved = (t, s) => { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_0 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_2 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_3 = (Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 *)il2cpp_codegen_object_new(Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6_il2cpp_TypeInfo_var);
		Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC0F23977CC07B74B06334D3BCDC1020051C5BA72_RuntimeMethod_var);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_4 = L_3;
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_DataRecieved_5(G_B2_0);
		// public Action<UnityTile, VectorTile, TileErrorEventArgs> FetchingError = (t, r, s) => { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_5 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9__3_1_2();
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_7 = ((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_8 = (Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E *)il2cpp_codegen_object_new(Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E_il2cpp_TypeInfo_var);
		Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mD9C95369BD62BB05F9CCDB42C4984FC91A457605_RuntimeMethod_var);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_9 = L_8;
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9__3_1_2(L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_FetchingError_6(G_B4_0);
		DataFetcher__ctor_mDAA10269126BA86DED88C5BA39054B183310832E(__this, /*hidden argument*/NULL);
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
// System.Void VectorDataFetcher_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m05E35438B00FECAC4D1B34BF2C7CAE524D4993DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * L_0 = (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A *)il2cpp_codegen_object_new(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void VectorDataFetcher_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD78ED7841BA459A01D1A6309B1FF59A9E8FE0ABA (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher_<>c::<.ctor>b__3_0(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_0_mED6C0955A2A27CB62D6011E7EB80A03FE53C7C07 (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___s1, const RuntimeMethod* method)
{
	{
		// public Action<UnityTile, VectorTile> DataRecieved = (t, s) => { };
		return;
	}
}
// System.Void VectorDataFetcher_<>c::<.ctor>b__3_1(Mapbox.Unity.MeshGeneration.Data.UnityTile,Mapbox.Map.VectorTile,Mapbox.Map.TileErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__3_1_m2E1FD7438B1CE92A38959E46395F88B6A07C5524 (U3CU3Ec_t02FC722E4EDC617EAD18CAD550EDF870F0EA865A * __this, UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * ___t0, VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * ___r1, TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * ___s2, const RuntimeMethod* method)
{
	{
		// public Action<UnityTile, VectorTile, TileErrorEventArgs> FetchingError = (t, r, s) => { };
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
// System.Void VectorDataFetcher_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF9509EE3B5E363301F66527C401601185EE153D9 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VectorDataFetcher_<>c__DisplayClass2_0::<FetchData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35 (U3CU3Ec__DisplayClass2_0_t3A55737333A85D48C10CCEF911F25B067EBE1F15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass2_0_U3CFetchDataU3Eb__0_m2F5BA7B2BDB41A5A16C6835E188241A5844C6C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (vectorDaraParameters.tile.CanonicalTileId != vectorTile.Id)
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_0 = __this->get_vectorDaraParameters_0();
		NullCheck(L_0);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_1 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_0)->get_tile_2();
		NullCheck(L_1);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_2 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline(L_1, /*hidden argument*/NULL);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_3 = __this->get_vectorTile_1();
		NullCheck(L_3);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_4 = Tile_get_Id_m21ACF360BA0484663D1BBA5B4B9DFB77B1565112(L_3, /*hidden argument*/NULL);
		bool L_5 = CanonicalTileId_op_Inequality_mC52A003988402DCFD52EBE655D878483296C80AF(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return;
		goto IL_00ba;
	}

IL_002b:
	{
		// if (vectorTile.HasError)
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_7 = __this->get_vectorTile_1();
		NullCheck(L_7);
		bool L_8 = Tile_get_HasError_m8E593E00E9229C94EE929355548E504827A4C9A3(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0096;
		}
	}
	{
		// FetchingError(vectorDaraParameters.tile, vectorTile, new TileErrorEventArgs(vectorDaraParameters.tile.CanonicalTileId, vectorTile.GetType(), vectorDaraParameters.tile, vectorTile.Exceptions));
		VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		Action_3_t738807F0EF3CE6E3DD5530C6CD52B65220E3732E * L_11 = L_10->get_FetchingError_6();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_12 = __this->get_vectorDaraParameters_0();
		NullCheck(L_12);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_13 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_12)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_14 = __this->get_vectorTile_1();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_15 = __this->get_vectorDaraParameters_0();
		NullCheck(L_15);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_16 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_15)->get_tile_2();
		NullCheck(L_16);
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_17 = UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline(L_16, /*hidden argument*/NULL);
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_18 = __this->get_vectorTile_1();
		NullCheck(L_18);
		Type_t * L_19 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_18, /*hidden argument*/NULL);
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_20 = __this->get_vectorDaraParameters_0();
		NullCheck(L_20);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_21 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_20)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_22 = __this->get_vectorTile_1();
		NullCheck(L_22);
		ReadOnlyCollection_1_t6D5AC6FC0BF91A16C9E9159F577DEDA4DD3414C8 * L_23 = Tile_get_Exceptions_mCA16D18707C716D4A2DC1EAFC839D20F8AE03795(L_22, /*hidden argument*/NULL);
		TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 * L_24 = (TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4 *)il2cpp_codegen_object_new(TileErrorEventArgs_tD598A7D6800473218A922AC01516DEB659B34AC4_il2cpp_TypeInfo_var);
		TileErrorEventArgs__ctor_mCB4A03C25D37C5FEBA1B3AAC0182641AFC28F4AC(L_24, L_17, L_19, L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_11);
		Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569(L_11, L_13, L_14, L_24, /*hidden argument*/Action_3_Invoke_mC83F44E557F4365D24741463A40D98DBC77B5569_RuntimeMethod_var);
		goto IL_00ba;
	}

IL_0096:
	{
		// DataRecieved(vectorDaraParameters.tile, vectorTile);
		VectorDataFetcher_t1568D096E570727796455B1159401CA0A4A91357 * L_25 = __this->get_U3CU3E4__this_2();
		NullCheck(L_25);
		Action_2_tC3CE7C5CCD3D058DD2CA324936259C2BA2AC2ED6 * L_26 = L_25->get_DataRecieved_5();
		VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * L_27 = __this->get_vectorDaraParameters_0();
		NullCheck(L_27);
		UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * L_28 = ((DataFetcherParameters_tB8EB5DC7CA92FBDEDDEE7BA4E089F8C917D4BA17 *)L_27)->get_tile_2();
		VectorTile_t22C3892016400718BC49FDF6E6C20C251201C687 * L_29 = __this->get_vectorTile_1();
		NullCheck(L_26);
		Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC(L_26, L_28, L_29, /*hidden argument*/Action_2_Invoke_mD62544C318F61D02056EA6304BCA580B611FF5FC_RuntimeMethod_var);
	}

IL_00ba:
	{
		// });
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
// System.Void VectorDataFetcherParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorDataFetcherParameters__ctor_mF42BBD278B1900C46FD70D163969B12D8405FBD1 (VectorDataFetcherParameters_tEEEAF258998398923237035D42D390F62125BE88 * __this, const RuntimeMethod* method)
{
	{
		// public bool useOptimizedStyle = false;
		__this->set_useOptimizedStyle_3((bool)0);
		// public Style style = null;
		__this->set_style_4((Style_tF269D082EAE3B7FD2AB9D52D4DF25FF959B6D714 *)NULL);
		DataFetcherParameters__ctor_m0432969655FC36B4367F64D9210913D2A0A26DDB(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  UnityTile_get_CanonicalTileId_m5B79FF633BC15E232166948E14AD1F7F70433D90_inline (UnityTile_t9A404CD934CB24363ED0C41B9088C5069BED3923 * __this, const RuntimeMethod* method)
{
	{
		// public CanonicalTileId CanonicalTileId { get; private set; }
		CanonicalTileId_t16BEA9431A7F2AEA5A26147D56F810989CB931EF  L_0 = __this->get_U3CCanonicalTileIdU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
