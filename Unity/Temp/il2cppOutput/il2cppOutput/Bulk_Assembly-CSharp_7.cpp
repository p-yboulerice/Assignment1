#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// SagoUI.RectangleGraphic
struct RectangleGraphic_t3224142083;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t3839221559;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1234605051;
// SagoUI.RectangleOutline
struct RectangleOutline_t2230321377;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t2440176439;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Object
struct Object_t631007953;
// SagoUtils.BitMaskAttribute
struct BitMaskAttribute_t644927545;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t3677895545;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_t3446625415;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// SagoUtils.CoroutineHelper
struct CoroutineHelper_t2903532903;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>
struct Dictionary_2_t3110615279;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEnumerator[]
struct IEnumeratorU5BU5D_t2446662267;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>
struct KeyCollection_t3300290750;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.List`1<System.Collections.IEnumerator>
struct List_1_t3325358980;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0
struct U3CMultiplexU3Ec__Iterator0_t302329881;
// SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1
struct U3CWaitAsyncU3Ec__Iterator1_t2950487940;
// System.Action
struct Action_t1264377477;
// SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2
struct U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474;
// SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3
struct U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822;
// SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4
struct U3CMultiplexU3Ec__AnonStorey4_t1649747647;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// SagoUtils.DepthGroup
struct DepthGroup_t827469246;
// System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>
struct Action_2_t946994486;
// System.Delegate
struct Delegate_t1188392813;
// System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>
struct List_1_t3091537484;
// SagoUtils.IDepthGroupElement
struct IDepthGroupElement_t1619462742;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2470008838;
// SagoUtils.DepthGroupElement
struct DepthGroupElement_t975669617;
// SagoUtils.DisableAttribute
struct DisableAttribute_t1228211629;
// System.Type
struct Type_t;
// SagoUtils.DisableAttribute/DisableCallback
struct DisableCallback_t2385366335;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// SagoUtils.EnumMaskAttribute
struct EnumMaskAttribute_t4013718542;
// SagoUtils.GameObjectPool
struct GameObjectPool_t652050872;
// System.Collections.Generic.LinkedList`1<UnityEngine.Transform>
struct LinkedList_1_t2440011930;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Collections.Generic.LinkedListNode`1<UnityEngine.Transform>
struct LinkedListNode_1_t3345541024;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t1919752173;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t2825281267;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482;
// SagoUtils.HttpUtility
struct HttpUtility_t2848748789;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// SagoUtils.HttpUtility/HttpEncoder
struct HttpEncoder_t1079200364;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.Stream
struct Stream_t1273022909;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t407452768;
// SagoUtils.HttpUtility/HttpQSCollection
struct HttpQSCollection_t520254410;
// SagoUtils.HttpUtility/Helpers
struct Helpers_t2564985369;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1883568160;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.StringComparer
struct StringComparer_t3301955079;
// System.Collections.Generic.SortedDictionary`2<System.String,System.Char>
struct SortedDictionary_2_t547269768;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t3101716168;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Char>
struct SortedDictionary_2_t2109419753;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t39404347;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t2139255314;
// SagoUtils.UnderscoreLowerCasePropertyNameContractResolver
struct UnderscoreLowerCasePropertyNameContractResolver_t1847614001;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t4193385603;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// SagoUtils.LayerAttribute
struct LayerAttribute_t666607663;
// SagoUtils.MathUtil
struct MathUtil_t1433719625;
// SagoUtils.MinMaxAttribute
struct MinMaxAttribute_t3517683683;
// SagoUtils.PascalCasePropertyNameContractResolver
struct PascalCasePropertyNameContractResolver_t3764767062;
// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t270250618;
// SagoUtils.RandomArrayIndex
struct RandomArrayIndex_t3579152736;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// SagoUtils.ShakeDetector
struct ShakeDetector_t2778083360;
// System.Action`1<SagoUtils.ShakeDetector>
struct Action_1_t2950550955;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// SagoUtils.SimplePooledObject
struct SimplePooledObject_t1040664057;
// SagoUtils.SubmoduleInfo
struct SubmoduleInfo_t4043851990;
// SagoCore.Submodules.SubmoduleInfo
struct SubmoduleInfo_t3488963427;
// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_t412496005;
// System.Attribute
struct Attribute_t861562559;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t1339837472;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t1084128815;
// UnityEngine.CloudBuild.BuildManifestObject
struct BuildManifestObject_t354914896;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Collections.Generic.RBTree
struct RBTree_t4095273678;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.String,System.Char>
struct NodeHelper_t2557658450;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Collections.IEnumerator>[]
struct List_1U5BU5D_t1347279341;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>,System.Collections.DictionaryEntry>
struct Transform_1_t197691057;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2272350267;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// SagoUtils.IDepthGroupElement[]
struct IDepthGroupElementU5BU5D_t2282505107;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1694351041;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t2862426328;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct ThreadSafeStore_2_t2798373182;
// System.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct Func_2_t2217434578;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t1796590042;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32>
struct Func_2_t1808639663;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t2564061104;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t274213469;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t2935836205;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;

extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* ListPool_1_t1287367823_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ListPool_1_Get_m1622481728_RuntimeMethod_var;
extern const RuntimeMethod* ListPool_1_Put_m1533691536_RuntimeMethod_var;
extern const uint32_t RectangleGraphic_OnPopulateMesh_m2901344245_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisGraphic_t1660335611_m1118939870_RuntimeMethod_var;
extern const uint32_t RectangleOutline_get_Graphic_m2743134131_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* RectangleGraphic_t3224142083_il2cpp_TypeInfo_var;
extern const uint32_t RectangleOutline_ModifyMesh_m1010257351_MetadataUsageId;
extern const uint32_t BitMaskAttribute__ctor_m2995985867_MetadataUsageId;
extern const RuntimeMethod* Queue_1_Enqueue_m1950996988_RuntimeMethod_var;
extern const uint32_t ComponentExtensions_EnqueueChildren_m320250991_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3110615279_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m148983829_RuntimeMethod_var;
extern const uint32_t CoroutineHelper__ctor_m2114232289_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2230862294_RuntimeMethod_var;
extern const uint32_t CoroutineHelper_IsRunningCoroutine_m3583608436_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m126213091_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var;
extern const uint32_t CoroutineHelper_StopAllCoroutines_m8591955_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t CoroutineHelper_StopAllCoroutinesExcept_m1658097495_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m3660826981_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2801683601_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2685438156_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3678234787_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m253033870_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m956812504_RuntimeMethod_var;
extern const uint32_t CoroutineHelper_StopCoroutine_m3760196795_MetadataUsageId;
extern RuntimeClass* List_1_t3325358980_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2666686364_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3053246148_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3304847818_RuntimeMethod_var;
extern const uint32_t CoroutineHelper_Run_m291728135_MetadataUsageId;
extern RuntimeClass* U3CMultiplexU3Ec__Iterator0_t302329881_il2cpp_TypeInfo_var;
extern const uint32_t CoroutineHelper_Multiplex_m2968313775_MetadataUsageId;
extern RuntimeClass* U3CWaitAsyncU3Ec__Iterator1_t2950487940_il2cpp_TypeInfo_var;
extern const uint32_t CoroutineHelper_WaitAsync_m4166907781_MetadataUsageId;
extern RuntimeClass* U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474_il2cpp_TypeInfo_var;
extern const uint32_t CoroutineHelper_WaitAndDoActionAsync_m212660141_MetadataUsageId;
extern RuntimeClass* U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822_il2cpp_TypeInfo_var;
extern const uint32_t CoroutineHelper_WaitAndRemoveKeyAsync_m413724311_MetadataUsageId;
extern RuntimeClass* U3CMultiplexU3Ec__AnonStorey4_t1649747647_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CMultiplexU3Ec__AnonStorey4_U3CU3Em__0_m2210382683_RuntimeMethod_var;
extern const uint32_t U3CMultiplexU3Ec__Iterator0_MoveNext_m4206547912_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CMultiplexU3Ec__Iterator0_Reset_m3930232012_MetadataUsageId;
extern const uint32_t U3CWaitAndDoActionAsyncU3Ec__Iterator2_Reset_m825900965_MetadataUsageId;
extern const uint32_t U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_MoveNext_m2936998904_MetadataUsageId;
extern const uint32_t U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_Reset_m1961187883_MetadataUsageId;
extern const uint32_t U3CWaitAsyncU3Ec__Iterator1_Reset_m1367747416_MetadataUsageId;
extern RuntimeClass* Action_2_t946994486_il2cpp_TypeInfo_var;
extern const uint32_t DepthGroup_add_OnAddElement_m3938394985_MetadataUsageId;
extern const uint32_t DepthGroup_remove_OnAddElement_m2062525467_MetadataUsageId;
extern const uint32_t DepthGroup_add_OnRemoveElement_m3491992473_MetadataUsageId;
extern const uint32_t DepthGroup_remove_OnRemoveElement_m3184041379_MetadataUsageId;
extern const uint32_t DepthGroup_add_OnSetElementDepth_m1701309299_MetadataUsageId;
extern const uint32_t DepthGroup_remove_OnSetElementDepth_m2039166803_MetadataUsageId;
extern RuntimeClass* List_1_t3091537484_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m171682946_RuntimeMethod_var;
extern const uint32_t DepthGroup_get_Elements_m1001211316_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var;
extern const uint32_t DepthGroup_get_Transform_m1034343722_MetadataUsageId;
extern RuntimeClass* IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m3392848684_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m4222411856_RuntimeMethod_var;
extern const uint32_t DepthGroup_AddElement_m3285210665_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m1847010743_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m489226418_RuntimeMethod_var;
extern const uint32_t DepthGroup_RemoveElement_m2871942691_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3534679060_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2756413605_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1859525188_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2071237891_RuntimeMethod_var;
extern const uint32_t DepthGroup_CompactElements_m3459018040_MetadataUsageId;
extern const uint32_t DepthGroup_GetElementDepth_m1081185450_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t DepthGroup_SetElementDepth_m2898598668_MetadataUsageId;
extern const uint32_t DepthGroup_ParentElement_m1792267520_MetadataUsageId;
extern const uint32_t DepthGroup_DeparentElement_m1238612792_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m1191187158_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4168911317_RuntimeMethod_var;
extern const uint32_t DepthGroup_get_LastElement_m1291910834_MetadataUsageId;
extern const uint32_t DepthGroupElement_get_Transform_m3530260565_MetadataUsageId;
struct Object_t631007953_marshaled_pinvoke;
struct Object_t631007953;;
struct Object_t631007953_marshaled_pinvoke;;
extern const uint32_t GameObjectPool_get_Transform_m2953483669_MetadataUsageId;
extern RuntimeClass* GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var;
extern const uint32_t GameObjectPool_Create_m804653673_MetadataUsageId;
extern const RuntimeType* GameObjectPool_t652050872_0_0_0_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisGameObjectPool_t652050872_m268313214_RuntimeMethod_var;
extern String_t* _stringLiteral3430435993;
extern String_t* _stringLiteral25032169;
extern String_t* _stringLiteral3393487104;
extern String_t* _stringLiteral1879577015;
extern const uint32_t GameObjectPool_Create_m3844627700_MetadataUsageId;
extern const RuntimeMethod* LinkedList_1_get_First_m1568734949_RuntimeMethod_var;
extern const RuntimeMethod* LinkedListNode_1_get_Value_m3942835307_RuntimeMethod_var;
extern const RuntimeMethod* LinkedList_1_RemoveFirst_m66980987_RuntimeMethod_var;
extern const RuntimeMethod* LinkedList_1_get_Count_m2638462578_RuntimeMethod_var;
extern const RuntimeMethod* LinkedListNode_1_get_Next_m3111221169_RuntimeMethod_var;
extern const RuntimeMethod* LinkedList_1_AddLast_m1788386392_RuntimeMethod_var;
extern const uint32_t GameObjectPool_Spawn_m746690209_MetadataUsageId;
extern const uint32_t GameObjectPool_Spawn_m1541600844_MetadataUsageId;
extern const RuntimeMethod* LinkedList_1_Remove_m2698749224_RuntimeMethod_var;
extern const uint32_t GameObjectPool_Destroy_m3456973204_MetadataUsageId;
extern const RuntimeMethod* LinkedList_1_get_Last_m657854566_RuntimeMethod_var;
extern const RuntimeMethod* LinkedList_1_RemoveLast_m4283516115_RuntimeMethod_var;
extern const uint32_t GameObjectPool_DestroyAll_m4198797872_MetadataUsageId;
extern const uint32_t GameObjectPool_SetActiveCount_m2964952695_MetadataUsageId;
extern const uint32_t GameObjectPool_GetActiveAt_m558931571_MetadataUsageId;
extern RuntimeClass* LinkedList_1_t2440011930_il2cpp_TypeInfo_var;
extern const RuntimeMethod* LinkedList_1__ctor_m3943846788_RuntimeMethod_var;
extern String_t* _stringLiteral3637163740;
extern const uint32_t GameObjectPool_Initialize_m3180473883_MetadataUsageId;
extern const RuntimeType* IPooledObject_t1072736807_0_0_0_var;
extern RuntimeClass* IPooledObject_t1072736807_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern String_t* _stringLiteral4282608287;
extern String_t* _stringLiteral3650158087;
extern const uint32_t GameObjectPool_AddPrefabToPool_m2220640576_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* HttpEncoder_t1079200364_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1975106570;
extern const uint32_t HttpUtility_HtmlAttributeEncode_m1367674236_MetadataUsageId;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t HttpUtility_HtmlAttributeEncode_m956163692_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern const uint32_t HttpUtility_UrlDecode_m629556969_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern const uint32_t HttpUtility_WriteCharBytes_m2961547955_MetadataUsageId;
extern RuntimeClass* List_1_t2606371118_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m934990389_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1190122030_RuntimeMethod_var;
extern const uint32_t HttpUtility_UrlDecode_m2264918457_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral130595687;
extern String_t* _stringLiteral1082126080;
extern String_t* _stringLiteral2002595880;
extern const uint32_t HttpUtility_UrlDecode_m2390869312_MetadataUsageId;
extern const uint32_t HttpUtility_UrlDecodeToBytes_m1451171209_MetadataUsageId;
extern String_t* _stringLiteral3452614587;
extern const uint32_t HttpUtility_UrlDecodeToBytes_m3532509229_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t HttpUtility_UrlDecodeToBytes_m1430994491_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncode_m516994993_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncode_m1044327035_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncode_m2903687215_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncode_m3467099283_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncodeToBytes_m2930587443_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncodeToBytes_m236747677_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncodeToBytes_m3854249772_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncodeToBytes_m395923693_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncodeUnicode_m1622061583_MetadataUsageId;
extern const uint32_t HttpUtility_UrlEncodeUnicodeToBytes_m760220488_MetadataUsageId;
extern const uint32_t HttpUtility_HtmlDecode_m1166999110_MetadataUsageId;
extern const uint32_t HttpUtility_HtmlDecode_m480131292_MetadataUsageId;
extern const uint32_t HttpUtility_HtmlEncode_m2154928422_MetadataUsageId;
extern const uint32_t HttpUtility_HtmlEncode_m3571403344_MetadataUsageId;
extern String_t* _stringLiteral3450386302;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral268407977;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3458119668;
extern const uint32_t HttpUtility_JavaScriptStringEncode_m1748003000_MetadataUsageId;
extern const uint32_t HttpUtility_UrlPathEncode_m2992652116_MetadataUsageId;
extern const uint32_t HttpUtility_ParseQueryString_m1911626477_MetadataUsageId;
extern RuntimeClass* HttpQSCollection_t520254410_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral735739007;
extern String_t* _stringLiteral3002372288;
extern const uint32_t HttpUtility_ParseQueryString_m3878509040_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* Helpers_t2564985369_il2cpp_TypeInfo_var;
extern const uint32_t Helpers__cctor_m687131793_MetadataUsageId;
extern const uint32_t HttpEncoder_get_Entities_m2707916450_MetadataUsageId;
extern const uint32_t HttpEncoder_get_Current_m1693310279_MetadataUsageId;
extern String_t* _stringLiteral3493618073;
extern const uint32_t HttpEncoder_set_Current_m3423769570_MetadataUsageId;
extern const uint32_t HttpEncoder_HeaderNameValueEncode_m3864113979_MetadataUsageId;
extern const uint32_t HttpEncoder_StringBuilderAppend_m4138471539_MetadataUsageId;
extern String_t* _stringLiteral1770988560;
extern const uint32_t HttpEncoder_EncodeHeaderString_m4228722004_MetadataUsageId;
extern const uint32_t HttpEncoder_HtmlAttributeEncode_m977903011_MetadataUsageId;
extern const uint32_t HttpEncoder_HtmlDecode_m1399126501_MetadataUsageId;
extern const uint32_t HttpEncoder_HtmlEncode_m4103982607_MetadataUsageId;
extern const uint32_t HttpEncoder_UrlEncode_m3732860626_MetadataUsageId;
extern const uint32_t HttpEncoder_UrlPathEncode_m506614450_MetadataUsageId;
extern const uint32_t HttpEncoder_UrlEncodeToBytes_m3802928077_MetadataUsageId;
extern String_t* _stringLiteral735890526;
extern String_t* _stringLiteral2597716672;
extern String_t* _stringLiteral2598437568;
extern String_t* _stringLiteral3987679165;
extern String_t* _stringLiteral1764779280;
extern String_t* _stringLiteral4229536863;
extern String_t* _stringLiteral290734391;
extern String_t* _stringLiteral3450320762;
extern String_t* _stringLiteral3452614549;
extern const uint32_t HttpEncoder_HtmlEncode_m4208094472_MetadataUsageId;
extern const uint32_t HttpEncoder_HtmlAttributeEncode_m4263100397_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1883568160_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t HttpEncoder_HtmlDecode_m782726803_MetadataUsageId;
extern const uint32_t HttpEncoder_UrlEncodeChar_m2873453018_MetadataUsageId;
extern const uint32_t HttpEncoder_UrlPathEncodeChar_m373787148_MetadataUsageId;
extern RuntimeClass* StringComparer_t3301955079_il2cpp_TypeInfo_var;
extern RuntimeClass* SortedDictionary_2_t547269768_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SortedDictionary_2__ctor_m948750160_RuntimeMethod_var;
extern const RuntimeMethod* SortedDictionary_2_Add_m3746728377_RuntimeMethod_var;
extern String_t* _stringLiteral410685037;
extern String_t* _stringLiteral2065516003;
extern String_t* _stringLiteral3893727505;
extern String_t* _stringLiteral2002596515;
extern String_t* _stringLiteral428528232;
extern String_t* _stringLiteral4072247595;
extern String_t* _stringLiteral4002391215;
extern String_t* _stringLiteral358275112;
extern String_t* _stringLiteral2909972457;
extern String_t* _stringLiteral4862103;
extern String_t* _stringLiteral3942337719;
extern String_t* _stringLiteral3540672188;
extern String_t* _stringLiteral2553611016;
extern String_t* _stringLiteral2601123946;
extern String_t* _stringLiteral2862394005;
extern String_t* _stringLiteral740874270;
extern String_t* _stringLiteral2862393987;
extern String_t* _stringLiteral1963012762;
extern String_t* _stringLiteral1082601639;
extern String_t* _stringLiteral3038916775;
extern String_t* _stringLiteral3905630195;
extern String_t* _stringLiteral3859255747;
extern String_t* _stringLiteral874453472;
extern String_t* _stringLiteral3149989470;
extern String_t* _stringLiteral3076523333;
extern String_t* _stringLiteral3421253799;
extern String_t* _stringLiteral3515370679;
extern String_t* _stringLiteral3540672370;
extern String_t* _stringLiteral1612097284;
extern String_t* _stringLiteral1612490500;
extern String_t* _stringLiteral1612097282;
extern String_t* _stringLiteral2845061585;
extern String_t* _stringLiteral3960133363;
extern String_t* _stringLiteral1126929724;
extern String_t* _stringLiteral2318600005;
extern String_t* _stringLiteral437585726;
extern String_t* _stringLiteral3931511960;
extern String_t* _stringLiteral61343553;
extern String_t* _stringLiteral2789500178;
extern String_t* _stringLiteral1557036477;
extern String_t* _stringLiteral3960133239;
extern String_t* _stringLiteral1126929600;
extern String_t* _stringLiteral2318599873;
extern String_t* _stringLiteral3931511956;
extern String_t* _stringLiteral3960133595;
extern String_t* _stringLiteral1126929956;
extern String_t* _stringLiteral2318600205;
extern String_t* _stringLiteral3931511968;
extern String_t* _stringLiteral3457106477;
extern String_t* _stringLiteral437585633;
extern String_t* _stringLiteral3960133297;
extern String_t* _stringLiteral1126929662;
extern String_t* _stringLiteral2318599939;
extern String_t* _stringLiteral437585664;
extern String_t* _stringLiteral3931511962;
extern String_t* _stringLiteral3181106956;
extern String_t* _stringLiteral1223058628;
extern String_t* _stringLiteral3960133735;
extern String_t* _stringLiteral1126930096;
extern String_t* _stringLiteral2318600337;
extern String_t* _stringLiteral3931511972;
extern String_t* _stringLiteral1126930452;
extern String_t* _stringLiteral2002530447;
extern String_t* _stringLiteral2778686020;
extern String_t* _stringLiteral3960132115;
extern String_t* _stringLiteral1126928476;
extern String_t* _stringLiteral2318598757;
extern String_t* _stringLiteral437584478;
extern String_t* _stringLiteral3931511928;
extern String_t* _stringLiteral61342305;
extern String_t* _stringLiteral2720292914;
extern String_t* _stringLiteral1557035485;
extern String_t* _stringLiteral3960131991;
extern String_t* _stringLiteral1126928352;
extern String_t* _stringLiteral2318598625;
extern String_t* _stringLiteral3931511924;
extern String_t* _stringLiteral3960132603;
extern String_t* _stringLiteral1126928964;
extern String_t* _stringLiteral2318599213;
extern String_t* _stringLiteral3931511936;
extern String_t* _stringLiteral584963437;
extern String_t* _stringLiteral437584641;
extern String_t* _stringLiteral3960132305;
extern String_t* _stringLiteral1126928670;
extern String_t* _stringLiteral2318598947;
extern String_t* _stringLiteral437584672;
extern String_t* _stringLiteral3931511930;
extern String_t* _stringLiteral3554583794;
extern String_t* _stringLiteral1223057636;
extern String_t* _stringLiteral3960132743;
extern String_t* _stringLiteral1126929104;
extern String_t* _stringLiteral2318599345;
extern String_t* _stringLiteral3931511940;
extern String_t* _stringLiteral1126929460;
extern String_t* _stringLiteral1535819823;
extern String_t* _stringLiteral3931511952;
extern String_t* _stringLiteral3182036393;
extern String_t* _stringLiteral2396581328;
extern String_t* _stringLiteral2036990756;
extern String_t* _stringLiteral398186601;
extern String_t* _stringLiteral1528652911;
extern String_t* _stringLiteral4046077096;
extern String_t* _stringLiteral2036990780;
extern String_t* _stringLiteral3670077184;
extern String_t* _stringLiteral346914738;
extern String_t* _stringLiteral2037383981;
extern String_t* _stringLiteral3915115990;
extern String_t* _stringLiteral1596053975;
extern String_t* _stringLiteral3455432675;
extern String_t* _stringLiteral3455432674;
extern String_t* _stringLiteral3455170552;
extern String_t* _stringLiteral429238270;
extern String_t* _stringLiteral3455170544;
extern String_t* _stringLiteral2507015645;
extern String_t* _stringLiteral1934518475;
extern String_t* _stringLiteral987396045;
extern String_t* _stringLiteral4046077560;
extern String_t* _stringLiteral3313584701;
extern String_t* _stringLiteral3313584682;
extern String_t* _stringLiteral3313912381;
extern String_t* _stringLiteral3146350153;
extern String_t* _stringLiteral2396580080;
extern String_t* _stringLiteral2036990724;
extern String_t* _stringLiteral398185609;
extern String_t* _stringLiteral1528651919;
extern String_t* _stringLiteral4046075848;
extern String_t* _stringLiteral2036990748;
extern String_t* _stringLiteral3670077152;
extern String_t* _stringLiteral346913746;
extern String_t* _stringLiteral2037383949;
extern String_t* _stringLiteral3915114998;
extern String_t* _stringLiteral1596052983;
extern String_t* _stringLiteral3455432643;
extern String_t* _stringLiteral3455432642;
extern String_t* _stringLiteral3455170520;
extern String_t* _stringLiteral429237278;
extern String_t* _stringLiteral3455170512;
extern String_t* _stringLiteral2507015613;
extern String_t* _stringLiteral1936483563;
extern String_t* _stringLiteral1934517483;
extern String_t* _stringLiteral987396013;
extern String_t* _stringLiteral4046076568;
extern String_t* _stringLiteral3313584669;
extern String_t* _stringLiteral3313584650;
extern String_t* _stringLiteral3313912349;
extern String_t* _stringLiteral3146349161;
extern String_t* _stringLiteral2568007469;
extern String_t* _stringLiteral3975563524;
extern String_t* _stringLiteral3716803660;
extern String_t* _stringLiteral1202628572;
extern String_t* _stringLiteral4547043;
extern String_t* _stringLiteral2399995150;
extern String_t* _stringLiteral2399996142;
extern String_t* _stringLiteral39715617;
extern String_t* _stringLiteral372942553;
extern String_t* _stringLiteral834798586;
extern String_t* _stringLiteral820750591;
extern String_t* _stringLiteral1961094899;
extern String_t* _stringLiteral3565529450;
extern String_t* _stringLiteral2180419800;
extern String_t* _stringLiteral1594497492;
extern String_t* _stringLiteral1594497499;
extern String_t* _stringLiteral1594497502;
extern String_t* _stringLiteral1594497484;
extern String_t* _stringLiteral1594497496;
extern String_t* _stringLiteral2711594854;
extern String_t* _stringLiteral1596594644;
extern String_t* _stringLiteral1596594651;
extern String_t* _stringLiteral1596594654;
extern String_t* _stringLiteral1596594636;
extern String_t* _stringLiteral1596594648;
extern String_t* _stringLiteral3976974788;
extern String_t* _stringLiteral1212160480;
extern String_t* _stringLiteral38339026;
extern String_t* _stringLiteral3159091284;
extern String_t* _stringLiteral3496352887;
extern String_t* _stringLiteral1223707156;
extern String_t* _stringLiteral2377038832;
extern String_t* _stringLiteral3455170498;
extern String_t* _stringLiteral3565159871;
extern String_t* _stringLiteral1344412806;
extern String_t* _stringLiteral378751680;
extern String_t* _stringLiteral440998498;
extern String_t* _stringLiteral3085174519;
extern String_t* _stringLiteral3093562815;
extern String_t* _stringLiteral4254461967;
extern String_t* _stringLiteral2862852742;
extern String_t* _stringLiteral3266137269;
extern String_t* _stringLiteral3455629249;
extern String_t* _stringLiteral227881111;
extern String_t* _stringLiteral228667543;
extern String_t* _stringLiteral2553676557;
extern String_t* _stringLiteral732134358;
extern String_t* _stringLiteral1344150662;
extern String_t* _stringLiteral2409402641;
extern String_t* _stringLiteral1685371042;
extern String_t* _stringLiteral3454384066;
extern String_t* _stringLiteral841232232;
extern String_t* _stringLiteral3454384068;
extern String_t* _stringLiteral3454384057;
extern String_t* _stringLiteral2103927693;
extern String_t* _stringLiteral228667559;
extern String_t* _stringLiteral2428401571;
extern String_t* _stringLiteral823026573;
extern String_t* _stringLiteral3242733735;
extern String_t* _stringLiteral3530383588;
extern String_t* _stringLiteral2394555169;
extern String_t* _stringLiteral1976572384;
extern String_t* _stringLiteral2327709116;
extern String_t* _stringLiteral1514765015;
extern String_t* _stringLiteral1514765201;
extern String_t* _stringLiteral1563910501;
extern String_t* _stringLiteral1563910683;
extern String_t* _stringLiteral2409271576;
extern String_t* _stringLiteral2409271586;
extern String_t* _stringLiteral1034581244;
extern String_t* _stringLiteral3568740685;
extern String_t* _stringLiteral1244409891;
extern String_t* _stringLiteral2675812591;
extern String_t* _stringLiteral2741086088;
extern String_t* _stringLiteral2328692158;
extern String_t* _stringLiteral228143257;
extern String_t* _stringLiteral3455498180;
extern String_t* _stringLiteral3455498169;
extern String_t* _stringLiteral2789500112;
extern String_t* _stringLiteral2720293104;
extern String_t* _stringLiteral2672340259;
extern String_t* _stringLiteral2672339267;
extern String_t* _stringLiteral3931511984;
extern String_t* _stringLiteral492640717;
extern String_t* _stringLiteral2790875747;
extern String_t* _stringLiteral410947174;
extern String_t* _stringLiteral411012710;
extern String_t* _stringLiteral47318176;
extern String_t* _stringLiteral2747633962;
extern String_t* _stringLiteral1747566270;
extern String_t* _stringLiteral1344609405;
extern String_t* _stringLiteral1343954055;
extern String_t* _stringLiteral334014421;
extern String_t* _stringLiteral334014598;
extern String_t* _stringLiteral3570949820;
extern String_t* _stringLiteral3570950002;
extern String_t* _stringLiteral3538509715;
extern String_t* _stringLiteral3534184124;
extern String_t* _stringLiteral3534184306;
extern String_t* _stringLiteral3534183842;
extern String_t* _stringLiteral10904380;
extern String_t* _stringLiteral10905372;
extern String_t* _stringLiteral442619085;
extern String_t* _stringLiteral746367090;
extern String_t* _stringLiteral746367292;
extern String_t* _stringLiteral1257576907;
extern const uint32_t HttpEncoder_InitEntities_m3617558546_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3445932352;
extern const uint32_t HttpEncoder__cctor_m731574518_MetadataUsageId;
extern String_t* _stringLiteral1456300074;
extern const uint32_t HttpQSCollection_ToString_m251500098_MetadataUsageId;
extern RuntimeClass* JsonConvert_t892733386_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonSerializerSettings_t2139255314_il2cpp_TypeInfo_var;
extern RuntimeClass* UnderscoreLowerCasePropertyNameContractResolver_t1847614001_il2cpp_TypeInfo_var;
extern const uint32_t JsonConvert_get_CSharpToJsonSettings_m2426135370_MetadataUsageId;
extern const uint32_t JsonConvert_get_JsonToCSharpSettings_m1865309167_MetadataUsageId;
extern const uint32_t JsonConvert_MapSettings_m3107228651_MetadataUsageId;
extern const uint32_t JsonConvert_SerializeObject_m601022409_MetadataUsageId;
extern const uint32_t JsonConvert_SerializeObject_m3049646501_MetadataUsageId;
extern RuntimeClass* JsonConvert_t3077351166_il2cpp_TypeInfo_var;
extern const uint32_t JsonConvert_SerializeObject_m1962767517_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2865362463_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m205717112_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2826511327_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3201775128_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1546927415_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2607424534_RuntimeMethod_var;
extern String_t* _stringLiteral3453007829;
extern String_t* _stringLiteral3787497672;
extern String_t* _stringLiteral3167965638;
extern String_t* _stringLiteral3453007748;
extern String_t* _stringLiteral590663513;
extern String_t* _stringLiteral2698798832;
extern String_t* _stringLiteral3455956902;
extern const uint32_t JsonConvert_UnwrapDictionary_m105442745_MetadataUsageId;
extern const uint32_t JsonConvertStringExtensions_SingleWordToPascalCase_m3277782807_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614641;
extern const uint32_t JsonConvertStringExtensions_UnderscoreWordsToPascalCase_m3315807175_MetadataUsageId;
extern const uint32_t JsonConvertStringExtensions_PascalToUnderscoreCase_m1164626889_MetadataUsageId;
extern const uint32_t MathUtil_Bezier_m2186420777_MetadataUsageId;
extern const uint32_t MathUtil_Bezier_m2846492175_MetadataUsageId;
extern const uint32_t MathUtil_BezierTangent_m776689999_MetadataUsageId;
extern const uint32_t MathUtil_RandomSign_m1546353020_MetadataUsageId;
extern const uint32_t MathUtil_SignedAngle_m97277328_MetadataUsageId;
extern const uint32_t MathUtil_SignedAngle_m2001049097_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t MathUtil_PolarToCartesian_m3590942331_MetadataUsageId;
extern const uint32_t MathUtil_CartesianToPolar_m4003070333_MetadataUsageId;
extern const uint32_t MathUtil_SphericalToCartesian_m1683036392_MetadataUsageId;
extern const uint32_t MathUtil_CartesianToSpherical_m3002420058_MetadataUsageId;
extern const uint32_t MathUtil_WrappedPeriodic_m2041737671_MetadataUsageId;
extern const uint32_t MathUtil_Gaussian01_m2057007154_MetadataUsageId;
extern RuntimeClass* DefaultContractResolver_t270250618_il2cpp_TypeInfo_var;
extern const uint32_t PascalCasePropertyNameContractResolver__ctor_m1856548388_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2098009717_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const uint32_t RandomArrayIndex__ctor_m2568135554_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m888956288_RuntimeMethod_var;
extern const uint32_t RandomArrayIndex_get_Current_m552785780_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const uint32_t RandomArrayIndex_get_Count_m2135701068_MetadataUsageId;
extern const RuntimeMethod* List_1_set_Item_m2256214292_RuntimeMethod_var;
extern const uint32_t RandomArrayIndex_Increment_m3426233089_MetadataUsageId;
extern const uint32_t RandomArrayIndex_Shuffle_m3193772106_MetadataUsageId;
extern const uint32_t RendererExtensions_GetBounds_m3650581035_MetadataUsageId;
extern RuntimeClass* Action_1_t2950550955_il2cpp_TypeInfo_var;
extern const uint32_t ShakeDetector_add_ShakeDetected_m3589749250_MetadataUsageId;
extern const uint32_t ShakeDetector_remove_ShakeDetected_m4157117299_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t ShakeDetector_Start_m3635989155_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m2963213119_RuntimeMethod_var;
extern const uint32_t ShakeDetector_FixedUpdate_m1116969993_MetadataUsageId;
extern const uint32_t ShakeDetector_LowPassFilter_m2172051850_MetadataUsageId;
extern String_t* _stringLiteral1061709674;
extern const uint32_t SimplePooledObject_OnEnable_m831523600_MetadataUsageId;
extern const uint32_t UnderscoreLowerCasePropertyNameContractResolver__ctor_m2242214215_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2__ctor_m1346091703_RuntimeMethod_var;
extern const uint32_t BuildManifestObject_ToDictionary_m3644057863_MetadataUsageId;
extern const uint32_t BuildManifestObject_ToJson_m3299752525_MetadataUsageId;
extern const uint32_t BuildManifestObject_ToString_m3945459438_MetadataUsageId;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* RectTransformUtility_t1743242446_il2cpp_TypeInfo_var;
extern const uint32_t CanvasExtentions_GetScreenRect_m2638299737_MetadataUsageId;

struct IEnumeratorU5BU5D_t2446662267;
struct StringU5BU5D_t1281789340;
struct GameObjectU5BU5D_t3328599146;
struct ComponentU5BU5D_t3294940482;
struct CharU5BU5D_t3528271667;
struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct Vector3U5BU5D_t1718750761;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef SORTEDDICTIONARY_2_T547269768_H
#define SORTEDDICTIONARY_2_T547269768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedDictionary`2<System.String,System.Char>
struct  SortedDictionary_2_t547269768  : public RuntimeObject
{
public:
	// System.Collections.Generic.RBTree System.Collections.Generic.SortedDictionary`2::tree
	RBTree_t4095273678 * ___tree_0;
	// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2::hlp
	NodeHelper_t2557658450 * ___hlp_1;

public:
	inline static int32_t get_offset_of_tree_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t547269768, ___tree_0)); }
	inline RBTree_t4095273678 * get_tree_0() const { return ___tree_0; }
	inline RBTree_t4095273678 ** get_address_of_tree_0() { return &___tree_0; }
	inline void set_tree_0(RBTree_t4095273678 * value)
	{
		___tree_0 = value;
		Il2CppCodeGenWriteBarrier((&___tree_0), value);
	}

	inline static int32_t get_offset_of_hlp_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t547269768, ___hlp_1)); }
	inline NodeHelper_t2557658450 * get_hlp_1() const { return ___hlp_1; }
	inline NodeHelper_t2557658450 ** get_address_of_hlp_1() { return &___hlp_1; }
	inline void set_hlp_1(NodeHelper_t2557658450 * value)
	{
		___hlp_1 = value;
		Il2CppCodeGenWriteBarrier((&___hlp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDDICTIONARY_2_T547269768_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef LIST_1_T3325358980_H
#define LIST_1_T3325358980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.IEnumerator>
struct  List_1_t3325358980  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEnumeratorU5BU5D_t2446662267* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3325358980, ____items_1)); }
	inline IEnumeratorU5BU5D_t2446662267* get__items_1() const { return ____items_1; }
	inline IEnumeratorU5BU5D_t2446662267** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEnumeratorU5BU5D_t2446662267* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3325358980, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3325358980, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3325358980_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IEnumeratorU5BU5D_t2446662267* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3325358980_StaticFields, ___EmptyArray_4)); }
	inline IEnumeratorU5BU5D_t2446662267* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IEnumeratorU5BU5D_t2446662267** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IEnumeratorU5BU5D_t2446662267* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3325358980_H
#ifndef U3CMULTIPLEXU3EC__ITERATOR0_T302329881_H
#define U3CMULTIPLEXU3EC__ITERATOR0_T302329881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0
struct  U3CMultiplexU3Ec__Iterator0_t302329881  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator[] SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::routines
	IEnumeratorU5BU5D_t2446662267* ___routines_0;
	// System.Action SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::<action>__0
	Action_t1264377477 * ___U3CactionU3E__0_1;
	// System.Collections.IEnumerator[] SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::$locvar0
	IEnumeratorU5BU5D_t2446662267* ___U24locvar0_2;
	// System.Int32 SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::$locvar1
	int32_t ___U24locvar1_3;
	// System.String SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::key
	String_t* ___key_4;
	// SagoUtils.CoroutineHelper SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::$this
	CoroutineHelper_t2903532903 * ___U24this_5;
	// System.Object SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::$PC
	int32_t ___U24PC_8;
	// SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4 SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::$locvar2
	U3CMultiplexU3Ec__AnonStorey4_t1649747647 * ___U24locvar2_9;

public:
	inline static int32_t get_offset_of_routines_0() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___routines_0)); }
	inline IEnumeratorU5BU5D_t2446662267* get_routines_0() const { return ___routines_0; }
	inline IEnumeratorU5BU5D_t2446662267** get_address_of_routines_0() { return &___routines_0; }
	inline void set_routines_0(IEnumeratorU5BU5D_t2446662267* value)
	{
		___routines_0 = value;
		Il2CppCodeGenWriteBarrier((&___routines_0), value);
	}

	inline static int32_t get_offset_of_U3CactionU3E__0_1() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U3CactionU3E__0_1)); }
	inline Action_t1264377477 * get_U3CactionU3E__0_1() const { return ___U3CactionU3E__0_1; }
	inline Action_t1264377477 ** get_address_of_U3CactionU3E__0_1() { return &___U3CactionU3E__0_1; }
	inline void set_U3CactionU3E__0_1(Action_t1264377477 * value)
	{
		___U3CactionU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CactionU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar0_2() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U24locvar0_2)); }
	inline IEnumeratorU5BU5D_t2446662267* get_U24locvar0_2() const { return ___U24locvar0_2; }
	inline IEnumeratorU5BU5D_t2446662267** get_address_of_U24locvar0_2() { return &___U24locvar0_2; }
	inline void set_U24locvar0_2(IEnumeratorU5BU5D_t2446662267* value)
	{
		___U24locvar0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_2), value);
	}

	inline static int32_t get_offset_of_U24locvar1_3() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U24locvar1_3)); }
	inline int32_t get_U24locvar1_3() const { return ___U24locvar1_3; }
	inline int32_t* get_address_of_U24locvar1_3() { return &___U24locvar1_3; }
	inline void set_U24locvar1_3(int32_t value)
	{
		___U24locvar1_3 = value;
	}

	inline static int32_t get_offset_of_key_4() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___key_4)); }
	inline String_t* get_key_4() const { return ___key_4; }
	inline String_t** get_address_of_key_4() { return &___key_4; }
	inline void set_key_4(String_t* value)
	{
		___key_4 = value;
		Il2CppCodeGenWriteBarrier((&___key_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U24this_5)); }
	inline CoroutineHelper_t2903532903 * get_U24this_5() const { return ___U24this_5; }
	inline CoroutineHelper_t2903532903 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(CoroutineHelper_t2903532903 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}

	inline static int32_t get_offset_of_U24locvar2_9() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__Iterator0_t302329881, ___U24locvar2_9)); }
	inline U3CMultiplexU3Ec__AnonStorey4_t1649747647 * get_U24locvar2_9() const { return ___U24locvar2_9; }
	inline U3CMultiplexU3Ec__AnonStorey4_t1649747647 ** get_address_of_U24locvar2_9() { return &___U24locvar2_9; }
	inline void set_U24locvar2_9(U3CMultiplexU3Ec__AnonStorey4_t1649747647 * value)
	{
		___U24locvar2_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar2_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTIPLEXU3EC__ITERATOR0_T302329881_H
#ifndef U3CWAITASYNCU3EC__ITERATOR1_T2950487940_H
#define U3CWAITASYNCU3EC__ITERATOR1_T2950487940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1
struct  U3CWaitAsyncU3Ec__Iterator1_t2950487940  : public RuntimeObject
{
public:
	// System.String SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::key
	String_t* ___key_0;
	// SagoUtils.CoroutineHelper SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::$this
	CoroutineHelper_t2903532903 * ___U24this_1;
	// System.Object SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ec__Iterator1_t2950487940, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ec__Iterator1_t2950487940, ___U24this_1)); }
	inline CoroutineHelper_t2903532903 * get_U24this_1() const { return ___U24this_1; }
	inline CoroutineHelper_t2903532903 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CoroutineHelper_t2903532903 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ec__Iterator1_t2950487940, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ec__Iterator1_t2950487940, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CWaitAsyncU3Ec__Iterator1_t2950487940, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITASYNCU3EC__ITERATOR1_T2950487940_H
#ifndef KEYCOLLECTION_T3300290750_H
#define KEYCOLLECTION_T3300290750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>
struct  KeyCollection_t3300290750  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t3110615279 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3300290750, ___dictionary_0)); }
	inline Dictionary_2_t3110615279 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3110615279 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3110615279 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3300290750_H
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3301955079 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3301955079 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3301955079 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3301955079 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3301955079 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3301955079 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3301955079 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3301955079 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3301955079 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3301955079 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3301955079 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3301955079 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3301955079 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3301955079 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef DICTIONARY_2_T3110615279_H
#define DICTIONARY_2_T3110615279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>
struct  Dictionary_2_t3110615279  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t1347279341* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___valueSlots_7)); }
	inline List_1U5BU5D_t1347279341* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t1347279341** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t1347279341* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3110615279_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t197691057 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3110615279_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t197691057 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t197691057 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t197691057 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3110615279_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1853889766 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t2272350267 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t2718874744 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t950877179 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t1318642398 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsContainer_0)); }
	inline Hashtable_t1853889766 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1853889766 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1853889766 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_NullKeyItem_1)); }
	inline _Item_t2272350267 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t2272350267 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t2272350267 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_ItemsArray_2)); }
	inline ArrayList_t2718874744 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t2718874744 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t2718874744 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___infoCopy_7)); }
	inline SerializationInfo_t950877179 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t950877179 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t950877179 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___keyscoll_8)); }
	inline KeysCollection_t1318642398 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t1318642398 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t1318642398 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef COROUTINEHELPER_T2903532903_H
#define COROUTINEHELPER_T2903532903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.CoroutineHelper
struct  CoroutineHelper_t2903532903  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour SagoUtils.CoroutineHelper::m_Behaviour
	MonoBehaviour_t3962482529 * ___m_Behaviour_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>> SagoUtils.CoroutineHelper::m_Dictionary
	Dictionary_2_t3110615279 * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_Behaviour_0() { return static_cast<int32_t>(offsetof(CoroutineHelper_t2903532903, ___m_Behaviour_0)); }
	inline MonoBehaviour_t3962482529 * get_m_Behaviour_0() const { return ___m_Behaviour_0; }
	inline MonoBehaviour_t3962482529 ** get_address_of_m_Behaviour_0() { return &___m_Behaviour_0; }
	inline void set_m_Behaviour_0(MonoBehaviour_t3962482529 * value)
	{
		___m_Behaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Behaviour_0), value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(CoroutineHelper_t2903532903, ___m_Dictionary_1)); }
	inline Dictionary_2_t3110615279 * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t3110615279 ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t3110615279 * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dictionary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COROUTINEHELPER_T2903532903_H
#ifndef HELPERS_T2564985369_H
#define HELPERS_T2564985369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.HttpUtility/Helpers
struct  Helpers_t2564985369  : public RuntimeObject
{
public:

public:
};

struct Helpers_t2564985369_StaticFields
{
public:
	// System.Globalization.CultureInfo SagoUtils.HttpUtility/Helpers::InvariantCulture
	CultureInfo_t4157843068 * ___InvariantCulture_0;

public:
	inline static int32_t get_offset_of_InvariantCulture_0() { return static_cast<int32_t>(offsetof(Helpers_t2564985369_StaticFields, ___InvariantCulture_0)); }
	inline CultureInfo_t4157843068 * get_InvariantCulture_0() const { return ___InvariantCulture_0; }
	inline CultureInfo_t4157843068 ** get_address_of_InvariantCulture_0() { return &___InvariantCulture_0; }
	inline void set_InvariantCulture_0(CultureInfo_t4157843068 * value)
	{
		___InvariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((&___InvariantCulture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HELPERS_T2564985369_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef HTTPENCODER_T1079200364_H
#define HTTPENCODER_T1079200364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.HttpUtility/HttpEncoder
struct  HttpEncoder_t1079200364  : public RuntimeObject
{
public:

public:
};

struct HttpEncoder_t1079200364_StaticFields
{
public:
	// System.Char[] SagoUtils.HttpUtility/HttpEncoder::hexChars
	CharU5BU5D_t3528271667* ___hexChars_0;
	// System.Object SagoUtils.HttpUtility/HttpEncoder::entitiesLock
	RuntimeObject * ___entitiesLock_1;
	// System.Collections.Generic.SortedDictionary`2<System.String,System.Char> SagoUtils.HttpUtility/HttpEncoder::entities
	SortedDictionary_2_t547269768 * ___entities_2;
	// SagoUtils.HttpUtility/HttpEncoder SagoUtils.HttpUtility/HttpEncoder::currentEncoder
	HttpEncoder_t1079200364 * ___currentEncoder_3;

public:
	inline static int32_t get_offset_of_hexChars_0() { return static_cast<int32_t>(offsetof(HttpEncoder_t1079200364_StaticFields, ___hexChars_0)); }
	inline CharU5BU5D_t3528271667* get_hexChars_0() const { return ___hexChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_hexChars_0() { return &___hexChars_0; }
	inline void set_hexChars_0(CharU5BU5D_t3528271667* value)
	{
		___hexChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___hexChars_0), value);
	}

	inline static int32_t get_offset_of_entitiesLock_1() { return static_cast<int32_t>(offsetof(HttpEncoder_t1079200364_StaticFields, ___entitiesLock_1)); }
	inline RuntimeObject * get_entitiesLock_1() const { return ___entitiesLock_1; }
	inline RuntimeObject ** get_address_of_entitiesLock_1() { return &___entitiesLock_1; }
	inline void set_entitiesLock_1(RuntimeObject * value)
	{
		___entitiesLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___entitiesLock_1), value);
	}

	inline static int32_t get_offset_of_entities_2() { return static_cast<int32_t>(offsetof(HttpEncoder_t1079200364_StaticFields, ___entities_2)); }
	inline SortedDictionary_2_t547269768 * get_entities_2() const { return ___entities_2; }
	inline SortedDictionary_2_t547269768 ** get_address_of_entities_2() { return &___entities_2; }
	inline void set_entities_2(SortedDictionary_2_t547269768 * value)
	{
		___entities_2 = value;
		Il2CppCodeGenWriteBarrier((&___entities_2), value);
	}

	inline static int32_t get_offset_of_currentEncoder_3() { return static_cast<int32_t>(offsetof(HttpEncoder_t1079200364_StaticFields, ___currentEncoder_3)); }
	inline HttpEncoder_t1079200364 * get_currentEncoder_3() const { return ___currentEncoder_3; }
	inline HttpEncoder_t1079200364 ** get_address_of_currentEncoder_3() { return &___currentEncoder_3; }
	inline void set_currentEncoder_3(HttpEncoder_t1079200364 * value)
	{
		___currentEncoder_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentEncoder_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPENCODER_T1079200364_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef HTTPUTILITY_T2848748789_H
#define HTTPUTILITY_T2848748789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.HttpUtility
struct  HttpUtility_t2848748789  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPUTILITY_T2848748789_H
#ifndef LINKEDLISTNODE_1_T3345541024_H
#define LINKEDLISTNODE_1_T3345541024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedListNode`1<UnityEngine.Transform>
struct  LinkedListNode_1_t3345541024  : public RuntimeObject
{
public:
	// T System.Collections.Generic.LinkedListNode`1::item
	Transform_t3600365921 * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t2440011930 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t3345541024 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t3345541024 * ___back_3;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t3345541024, ___item_0)); }
	inline Transform_t3600365921 * get_item_0() const { return ___item_0; }
	inline Transform_t3600365921 ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(Transform_t3600365921 * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier((&___item_0), value);
	}

	inline static int32_t get_offset_of_container_1() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t3345541024, ___container_1)); }
	inline LinkedList_1_t2440011930 * get_container_1() const { return ___container_1; }
	inline LinkedList_1_t2440011930 ** get_address_of_container_1() { return &___container_1; }
	inline void set_container_1(LinkedList_1_t2440011930 * value)
	{
		___container_1 = value;
		Il2CppCodeGenWriteBarrier((&___container_1), value);
	}

	inline static int32_t get_offset_of_forward_2() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t3345541024, ___forward_2)); }
	inline LinkedListNode_1_t3345541024 * get_forward_2() const { return ___forward_2; }
	inline LinkedListNode_1_t3345541024 ** get_address_of_forward_2() { return &___forward_2; }
	inline void set_forward_2(LinkedListNode_1_t3345541024 * value)
	{
		___forward_2 = value;
		Il2CppCodeGenWriteBarrier((&___forward_2), value);
	}

	inline static int32_t get_offset_of_back_3() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t3345541024, ___back_3)); }
	inline LinkedListNode_1_t3345541024 * get_back_3() const { return ___back_3; }
	inline LinkedListNode_1_t3345541024 ** get_address_of_back_3() { return &___back_3; }
	inline void set_back_3(LinkedListNode_1_t3345541024 * value)
	{
		___back_3 = value;
		Il2CppCodeGenWriteBarrier((&___back_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKEDLISTNODE_1_T3345541024_H
#ifndef LINKEDLIST_1_T2440011930_H
#define LINKEDLIST_1_T2440011930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedList`1<UnityEngine.Transform>
struct  LinkedList_1_t2440011930  : public RuntimeObject
{
public:
	// System.UInt32 System.Collections.Generic.LinkedList`1::count
	uint32_t ___count_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1::version
	uint32_t ___version_3;
	// System.Object System.Collections.Generic.LinkedList`1::syncRoot
	RuntimeObject * ___syncRoot_4;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::first
	LinkedListNode_1_t3345541024 * ___first_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::si
	SerializationInfo_t950877179 * ___si_6;

public:
	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(LinkedList_1_t2440011930, ___count_2)); }
	inline uint32_t get_count_2() const { return ___count_2; }
	inline uint32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(uint32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(LinkedList_1_t2440011930, ___version_3)); }
	inline uint32_t get_version_3() const { return ___version_3; }
	inline uint32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_syncRoot_4() { return static_cast<int32_t>(offsetof(LinkedList_1_t2440011930, ___syncRoot_4)); }
	inline RuntimeObject * get_syncRoot_4() const { return ___syncRoot_4; }
	inline RuntimeObject ** get_address_of_syncRoot_4() { return &___syncRoot_4; }
	inline void set_syncRoot_4(RuntimeObject * value)
	{
		___syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_4), value);
	}

	inline static int32_t get_offset_of_first_5() { return static_cast<int32_t>(offsetof(LinkedList_1_t2440011930, ___first_5)); }
	inline LinkedListNode_1_t3345541024 * get_first_5() const { return ___first_5; }
	inline LinkedListNode_1_t3345541024 ** get_address_of_first_5() { return &___first_5; }
	inline void set_first_5(LinkedListNode_1_t3345541024 * value)
	{
		___first_5 = value;
		Il2CppCodeGenWriteBarrier((&___first_5), value);
	}

	inline static int32_t get_offset_of_si_6() { return static_cast<int32_t>(offsetof(LinkedList_1_t2440011930, ___si_6)); }
	inline SerializationInfo_t950877179 * get_si_6() const { return ___si_6; }
	inline SerializationInfo_t950877179 ** get_address_of_si_6() { return &___si_6; }
	inline void set_si_6(SerializationInfo_t950877179 * value)
	{
		___si_6 = value;
		Il2CppCodeGenWriteBarrier((&___si_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKEDLIST_1_T2440011930_H
#ifndef LIST_1_T3091537484_H
#define LIST_1_T3091537484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>
struct  List_1_t3091537484  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IDepthGroupElementU5BU5D_t2282505107* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3091537484, ____items_1)); }
	inline IDepthGroupElementU5BU5D_t2282505107* get__items_1() const { return ____items_1; }
	inline IDepthGroupElementU5BU5D_t2282505107** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IDepthGroupElementU5BU5D_t2282505107* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3091537484, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3091537484, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3091537484_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IDepthGroupElementU5BU5D_t2282505107* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3091537484_StaticFields, ___EmptyArray_4)); }
	inline IDepthGroupElementU5BU5D_t2282505107* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IDepthGroupElementU5BU5D_t2282505107** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IDepthGroupElementU5BU5D_t2282505107* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3091537484_H
#ifndef U3CWAITANDDOACTIONASYNCU3EC__ITERATOR2_T3955052474_H
#define U3CWAITANDDOACTIONASYNCU3EC__ITERATOR2_T3955052474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2
struct  U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474  : public RuntimeObject
{
public:
	// System.String SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::key
	String_t* ___key_0;
	// System.Collections.IEnumerator SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::routine
	RuntimeObject* ___routine_1;
	// System.Action SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::action
	Action_t1264377477 * ___action_2;
	// SagoUtils.CoroutineHelper SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::$this
	CoroutineHelper_t2903532903 * ___U24this_3;
	// System.Object SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::$disposing
	bool ___U24disposing_5;
	// System.Int32 SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_routine_1() { return static_cast<int32_t>(offsetof(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474, ___routine_1)); }
	inline RuntimeObject* get_routine_1() const { return ___routine_1; }
	inline RuntimeObject** get_address_of_routine_1() { return &___routine_1; }
	inline void set_routine_1(RuntimeObject* value)
	{
		___routine_1 = value;
		Il2CppCodeGenWriteBarrier((&___routine_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474, ___action_2)); }
	inline Action_t1264377477 * get_action_2() const { return ___action_2; }
	inline Action_t1264377477 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_t1264377477 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474, ___U24this_3)); }
	inline CoroutineHelper_t2903532903 * get_U24this_3() const { return ___U24this_3; }
	inline CoroutineHelper_t2903532903 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(CoroutineHelper_t2903532903 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITANDDOACTIONASYNCU3EC__ITERATOR2_T3955052474_H
#ifndef U3CWAITANDREMOVEKEYASYNCU3EC__ITERATOR3_T1305919822_H
#define U3CWAITANDREMOVEKEYASYNCU3EC__ITERATOR3_T1305919822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3
struct  U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822  : public RuntimeObject
{
public:
	// System.String SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::key
	String_t* ___key_0;
	// System.Collections.IEnumerator SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::routine
	RuntimeObject* ___routine_1;
	// SagoUtils.CoroutineHelper SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::$this
	CoroutineHelper_t2903532903 * ___U24this_2;
	// System.Object SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::$disposing
	bool ___U24disposing_4;
	// System.Int32 SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_routine_1() { return static_cast<int32_t>(offsetof(U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822, ___routine_1)); }
	inline RuntimeObject* get_routine_1() const { return ___routine_1; }
	inline RuntimeObject** get_address_of_routine_1() { return &___routine_1; }
	inline void set_routine_1(RuntimeObject* value)
	{
		___routine_1 = value;
		Il2CppCodeGenWriteBarrier((&___routine_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822, ___U24this_2)); }
	inline CoroutineHelper_t2903532903 * get_U24this_2() const { return ___U24this_2; }
	inline CoroutineHelper_t2903532903 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(CoroutineHelper_t2903532903 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITANDREMOVEKEYASYNCU3EC__ITERATOR3_T1305919822_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef U3CMULTIPLEXU3EC__ANONSTOREY4_T1649747647_H
#define U3CMULTIPLEXU3EC__ANONSTOREY4_T1649747647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4
struct  U3CMultiplexU3Ec__AnonStorey4_t1649747647  : public RuntimeObject
{
public:
	// System.Int32 SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4::count
	int32_t ___count_0;
	// SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0 SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4::<>f__ref$0
	U3CMultiplexU3Ec__Iterator0_t302329881 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__AnonStorey4_t1649747647, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CMultiplexU3Ec__AnonStorey4_t1649747647, ___U3CU3Ef__refU240_1)); }
	inline U3CMultiplexU3Ec__Iterator0_t302329881 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CMultiplexU3Ec__Iterator0_t302329881 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CMultiplexU3Ec__Iterator0_t302329881 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMULTIPLEXU3EC__ANONSTOREY4_T1649747647_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef QUEUE_1_T3446625415_H
#define QUEUE_1_T3446625415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct  Queue_1_t3446625415  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t807237628* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____array_0)); }
	inline TransformU5BU5D_t807237628* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t807237628** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t807237628* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3446625415, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T3446625415_H
#ifndef CANVASEXTENTIONS_T254635132_H
#define CANVASEXTENTIONS_T254635132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// World.Store.CanvasExtentions
struct  CanvasExtentions_t254635132  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASEXTENTIONS_T254635132_H
#ifndef RANDOMARRAYINDEX_T3579152736_H
#define RANDOMARRAYINDEX_T3579152736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.RandomArrayIndex
struct  RandomArrayIndex_t3579152736  : public RuntimeObject
{
public:
	// System.Int32 SagoUtils.RandomArrayIndex::<CurrentIndex>k__BackingField
	int32_t ___U3CCurrentIndexU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Int32> SagoUtils.RandomArrayIndex::<Indices>k__BackingField
	List_1_t128053199 * ___U3CIndicesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCurrentIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RandomArrayIndex_t3579152736, ___U3CCurrentIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CCurrentIndexU3Ek__BackingField_0() const { return ___U3CCurrentIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCurrentIndexU3Ek__BackingField_0() { return &___U3CCurrentIndexU3Ek__BackingField_0; }
	inline void set_U3CCurrentIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CCurrentIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIndicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RandomArrayIndex_t3579152736, ___U3CIndicesU3Ek__BackingField_1)); }
	inline List_1_t128053199 * get_U3CIndicesU3Ek__BackingField_1() const { return ___U3CIndicesU3Ek__BackingField_1; }
	inline List_1_t128053199 ** get_address_of_U3CIndicesU3Ek__BackingField_1() { return &___U3CIndicesU3Ek__BackingField_1; }
	inline void set_U3CIndicesU3Ek__BackingField_1(List_1_t128053199 * value)
	{
		___U3CIndicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIndicesU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMARRAYINDEX_T3579152736_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T1234605051_H
#define LIST_1_T1234605051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t1234605051  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_t1981460040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____items_1)); }
	inline UIVertexU5BU5D_t1981460040* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_t1981460040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_t1981460040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1234605051, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1234605051_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	UIVertexU5BU5D_t1981460040* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1234605051_StaticFields, ___EmptyArray_4)); }
	inline UIVertexU5BU5D_t1981460040* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(UIVertexU5BU5D_t1981460040* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1234605051_H
#ifndef RENDEREREXTENSIONS_T2592067122_H
#define RENDEREREXTENSIONS_T2592067122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.RendererExtensions
struct  RendererExtensions_t2592067122  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDEREREXTENSIONS_T2592067122_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef JSONCONVERT_T892733386_H
#define JSONCONVERT_T892733386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.JsonConvert
struct  JsonConvert_t892733386  : public RuntimeObject
{
public:

public:
};

struct JsonConvert_t892733386_StaticFields
{
public:
	// System.Boolean SagoUtils.JsonConvert::EnableLogging
	bool ___EnableLogging_0;
	// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::_CSharpToJsonSettings
	JsonSerializerSettings_t2139255314 * ____CSharpToJsonSettings_1;
	// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::_JsonToCSharpSettings
	JsonSerializerSettings_t2139255314 * ____JsonToCSharpSettings_2;

public:
	inline static int32_t get_offset_of_EnableLogging_0() { return static_cast<int32_t>(offsetof(JsonConvert_t892733386_StaticFields, ___EnableLogging_0)); }
	inline bool get_EnableLogging_0() const { return ___EnableLogging_0; }
	inline bool* get_address_of_EnableLogging_0() { return &___EnableLogging_0; }
	inline void set_EnableLogging_0(bool value)
	{
		___EnableLogging_0 = value;
	}

	inline static int32_t get_offset_of__CSharpToJsonSettings_1() { return static_cast<int32_t>(offsetof(JsonConvert_t892733386_StaticFields, ____CSharpToJsonSettings_1)); }
	inline JsonSerializerSettings_t2139255314 * get__CSharpToJsonSettings_1() const { return ____CSharpToJsonSettings_1; }
	inline JsonSerializerSettings_t2139255314 ** get_address_of__CSharpToJsonSettings_1() { return &____CSharpToJsonSettings_1; }
	inline void set__CSharpToJsonSettings_1(JsonSerializerSettings_t2139255314 * value)
	{
		____CSharpToJsonSettings_1 = value;
		Il2CppCodeGenWriteBarrier((&____CSharpToJsonSettings_1), value);
	}

	inline static int32_t get_offset_of__JsonToCSharpSettings_2() { return static_cast<int32_t>(offsetof(JsonConvert_t892733386_StaticFields, ____JsonToCSharpSettings_2)); }
	inline JsonSerializerSettings_t2139255314 * get__JsonToCSharpSettings_2() const { return ____JsonToCSharpSettings_2; }
	inline JsonSerializerSettings_t2139255314 ** get_address_of__JsonToCSharpSettings_2() { return &____JsonToCSharpSettings_2; }
	inline void set__JsonToCSharpSettings_2(JsonSerializerSettings_t2139255314 * value)
	{
		____JsonToCSharpSettings_2 = value;
		Il2CppCodeGenWriteBarrier((&____JsonToCSharpSettings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONCONVERT_T892733386_H
#ifndef COMPONENTEXTENSIONS_T2776305292_H
#define COMPONENTEXTENSIONS_T2776305292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.ComponentExtensions
struct  ComponentExtensions_t2776305292  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTEXTENSIONS_T2776305292_H
#ifndef DICTIONARY_2_T2865362463_H
#define DICTIONARY_2_T2865362463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t2865362463  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2865362463_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1694351041 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2865362463_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1694351041 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1694351041 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1694351041 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2865362463_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef JSONCONVERTSTRINGEXTENSIONS_T4223765376_H
#define JSONCONVERTSTRINGEXTENSIONS_T4223765376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.JsonConvertStringExtensions
struct  JsonConvertStringExtensions_t4223765376  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONCONVERTSTRINGEXTENSIONS_T4223765376_H
#ifndef MATHUTIL_T1433719625_H
#define MATHUTIL_T1433719625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.MathUtil
struct  MathUtil_t1433719625  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHUTIL_T1433719625_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef POLAR_T1112275984_H
#define POLAR_T1112275984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.Polar
struct  Polar_t1112275984 
{
public:
	// System.Single SagoUtils.Polar::Radius
	float ___Radius_0;
	// System.Single SagoUtils.Polar::Theta
	float ___Theta_1;

public:
	inline static int32_t get_offset_of_Radius_0() { return static_cast<int32_t>(offsetof(Polar_t1112275984, ___Radius_0)); }
	inline float get_Radius_0() const { return ___Radius_0; }
	inline float* get_address_of_Radius_0() { return &___Radius_0; }
	inline void set_Radius_0(float value)
	{
		___Radius_0 = value;
	}

	inline static int32_t get_offset_of_Theta_1() { return static_cast<int32_t>(offsetof(Polar_t1112275984, ___Theta_1)); }
	inline float get_Theta_1() const { return ___Theta_1; }
	inline float* get_address_of_Theta_1() { return &___Theta_1; }
	inline void set_Theta_1(float value)
	{
		___Theta_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLAR_T1112275984_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SPHERICAL_T93246893_H
#define SPHERICAL_T93246893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.Spherical
struct  Spherical_t93246893 
{
public:
	// System.Single SagoUtils.Spherical::Radius
	float ___Radius_0;
	// System.Single SagoUtils.Spherical::Theta
	float ___Theta_1;
	// System.Single SagoUtils.Spherical::Phi
	float ___Phi_2;

public:
	inline static int32_t get_offset_of_Radius_0() { return static_cast<int32_t>(offsetof(Spherical_t93246893, ___Radius_0)); }
	inline float get_Radius_0() const { return ___Radius_0; }
	inline float* get_address_of_Radius_0() { return &___Radius_0; }
	inline void set_Radius_0(float value)
	{
		___Radius_0 = value;
	}

	inline static int32_t get_offset_of_Theta_1() { return static_cast<int32_t>(offsetof(Spherical_t93246893, ___Theta_1)); }
	inline float get_Theta_1() const { return ___Theta_1; }
	inline float* get_address_of_Theta_1() { return &___Theta_1; }
	inline void set_Theta_1(float value)
	{
		___Theta_1 = value;
	}

	inline static int32_t get_offset_of_Phi_2() { return static_cast<int32_t>(offsetof(Spherical_t93246893, ___Phi_2)); }
	inline float get_Phi_2() const { return ___Phi_2; }
	inline float* get_address_of_Phi_2() { return &___Phi_2; }
	inline void set_Phi_2(float value)
	{
		___Phi_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERICAL_T93246893_H
#ifndef DATACONTRACTATTRIBUTE_T412496005_H
#define DATACONTRACTATTRIBUTE_T412496005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataContractAttribute
struct  DataContractAttribute_t412496005  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.Serialization.DataContractAttribute::name
	String_t* ___name_0;
	// System.String System.Runtime.Serialization.DataContractAttribute::ns
	String_t* ___ns_1;
	// System.Boolean System.Runtime.Serialization.DataContractAttribute::<IsReference>k__BackingField
	bool ___U3CIsReferenceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t412496005, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(DataContractAttribute_t412496005, ___ns_1)); }
	inline String_t* get_ns_1() const { return ___ns_1; }
	inline String_t** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(String_t* value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DataContractAttribute_t412496005, ___U3CIsReferenceU3Ek__BackingField_2)); }
	inline bool get_U3CIsReferenceU3Ek__BackingField_2() const { return ___U3CIsReferenceU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReferenceU3Ek__BackingField_2() { return &___U3CIsReferenceU3Ek__BackingField_2; }
	inline void set_U3CIsReferenceU3Ek__BackingField_2(bool value)
	{
		___U3CIsReferenceU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACONTRACTATTRIBUTE_T412496005_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t1281789340* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t1281789340* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t1281789340* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t1281789340* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ___cachedAll_11)); }
	inline StringU5BU5D_t1281789340* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t1281789340** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t1281789340* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef DATAMEMBERATTRIBUTE_T1339837472_H
#define DATAMEMBERATTRIBUTE_T1339837472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataMemberAttribute
struct  DataMemberAttribute_t1339837472  : public Attribute_t861562559
{
public:
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::is_required
	bool ___is_required_0;
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::emit_default
	bool ___emit_default_1;
	// System.String System.Runtime.Serialization.DataMemberAttribute::name
	String_t* ___name_2;
	// System.Int32 System.Runtime.Serialization.DataMemberAttribute::order
	int32_t ___order_3;

public:
	inline static int32_t get_offset_of_is_required_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t1339837472, ___is_required_0)); }
	inline bool get_is_required_0() const { return ___is_required_0; }
	inline bool* get_address_of_is_required_0() { return &___is_required_0; }
	inline void set_is_required_0(bool value)
	{
		___is_required_0 = value;
	}

	inline static int32_t get_offset_of_emit_default_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t1339837472, ___emit_default_1)); }
	inline bool get_emit_default_1() const { return ___emit_default_1; }
	inline bool* get_address_of_emit_default_1() { return &___emit_default_1; }
	inline void set_emit_default_1(bool value)
	{
		___emit_default_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t1339837472, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_order_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t1339837472, ___order_3)); }
	inline int32_t get_order_3() const { return ___order_3; }
	inline int32_t* get_address_of_order_3() { return &___order_3; }
	inline void set_order_3(int32_t value)
	{
		___order_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAMEMBERATTRIBUTE_T1339837472_H
#ifndef ENUMMEMBERATTRIBUTE_T1084128815_H
#define ENUMMEMBERATTRIBUTE_T1084128815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.EnumMemberAttribute
struct  EnumMemberAttribute_t1084128815  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t1084128815, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMMEMBERATTRIBUTE_T1084128815_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ENUMERATOR_T685814065_H
#define ENUMERATOR_T685814065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<SagoUtils.IDepthGroupElement>
struct  Enumerator_t685814065 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3091537484 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t685814065, ___l_0)); }
	inline List_1_t3091537484 * get_l_0() const { return ___l_0; }
	inline List_1_t3091537484 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3091537484 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t685814065, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t685814065, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t685814065, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T685814065_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef ENUMERATOR_T919635561_H
#define ENUMERATOR_T919635561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.IEnumerator>
struct  Enumerator_t919635561 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3325358980 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t919635561, ___l_0)); }
	inline List_1_t3325358980 * get_l_0() const { return ___l_0; }
	inline List_1_t3325358980 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3325358980 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t919635561, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t919635561, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t919635561, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T919635561_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef PROPERTYATTRIBUTE_T3677895545_H
#define PROPERTYATTRIBUTE_T3677895545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3677895545  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3677895545_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef EDGETYPE_T3678142606_H
#define EDGETYPE_T3678142606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.EdgeType
struct  EdgeType_t3678142606 
{
public:
	// System.Int32 SagoUI.EdgeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EdgeType_t3678142606, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGETYPE_T3678142606_H
#ifndef BITMASKATTRIBUTE_T644927545_H
#define BITMASKATTRIBUTE_T644927545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.BitMaskAttribute
struct  BitMaskAttribute_t644927545  : public PropertyAttribute_t3677895545
{
public:
	// System.Int32 SagoUtils.BitMaskAttribute::<BitDepth>k__BackingField
	int32_t ___U3CBitDepthU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CBitDepthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BitMaskAttribute_t644927545, ___U3CBitDepthU3Ek__BackingField_0)); }
	inline int32_t get_U3CBitDepthU3Ek__BackingField_0() const { return ___U3CBitDepthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CBitDepthU3Ek__BackingField_0() { return &___U3CBitDepthU3Ek__BackingField_0; }
	inline void set_U3CBitDepthU3Ek__BackingField_0(int32_t value)
	{
		___U3CBitDepthU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMASKATTRIBUTE_T644927545_H
#ifndef STRINGSPLITOPTIONS_T641086070_H
#define STRINGSPLITOPTIONS_T641086070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t641086070 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t641086070, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGSPLITOPTIONS_T641086070_H
#ifndef LAYERATTRIBUTE_T666607663_H
#define LAYERATTRIBUTE_T666607663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.LayerAttribute
struct  LayerAttribute_t666607663  : public PropertyAttribute_t3677895545
{
public:
	// System.Int32 SagoUtils.LayerAttribute::Layer
	int32_t ___Layer_0;

public:
	inline static int32_t get_offset_of_Layer_0() { return static_cast<int32_t>(offsetof(LayerAttribute_t666607663, ___Layer_0)); }
	inline int32_t get_Layer_0() const { return ___Layer_0; }
	inline int32_t* get_address_of_Layer_0() { return &___Layer_0; }
	inline void set_Layer_0(int32_t value)
	{
		___Layer_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERATTRIBUTE_T666607663_H
#ifndef MINMAXATTRIBUTE_T3517683683_H
#define MINMAXATTRIBUTE_T3517683683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.MinMaxAttribute
struct  MinMaxAttribute_t3517683683  : public PropertyAttribute_t3677895545
{
public:
	// System.Boolean SagoUtils.MinMaxAttribute::<IsInteger>k__BackingField
	bool ___U3CIsIntegerU3Ek__BackingField_0;
	// UnityEngine.Vector2 SagoUtils.MinMaxAttribute::<Range>k__BackingField
	Vector2_t2156229523  ___U3CRangeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIsIntegerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MinMaxAttribute_t3517683683, ___U3CIsIntegerU3Ek__BackingField_0)); }
	inline bool get_U3CIsIntegerU3Ek__BackingField_0() const { return ___U3CIsIntegerU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsIntegerU3Ek__BackingField_0() { return &___U3CIsIntegerU3Ek__BackingField_0; }
	inline void set_U3CIsIntegerU3Ek__BackingField_0(bool value)
	{
		___U3CIsIntegerU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRangeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MinMaxAttribute_t3517683683, ___U3CRangeU3Ek__BackingField_1)); }
	inline Vector2_t2156229523  get_U3CRangeU3Ek__BackingField_1() const { return ___U3CRangeU3Ek__BackingField_1; }
	inline Vector2_t2156229523 * get_address_of_U3CRangeU3Ek__BackingField_1() { return &___U3CRangeU3Ek__BackingField_1; }
	inline void set_U3CRangeU3Ek__BackingField_1(Vector2_t2156229523  value)
	{
		___U3CRangeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINMAXATTRIBUTE_T3517683683_H
#ifndef FORMATTERASSEMBLYSTYLE_T868039825_H
#define FORMATTERASSEMBLYSTYLE_T868039825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t868039825 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t868039825, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T868039825_H
#ifndef TYPENAMEHANDLING_T3731987346_H
#define TYPENAMEHANDLING_T3731987346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.TypeNameHandling
struct  TypeNameHandling_t3731987346 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeNameHandling_t3731987346, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMEHANDLING_T3731987346_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef NULLVALUEHANDLING_T3402136445_H
#define NULLVALUEHANDLING_T3402136445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.NullValueHandling
struct  NullValueHandling_t3402136445 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NullValueHandling_t3402136445, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLVALUEHANDLING_T3402136445_H
#ifndef MISSINGMEMBERHANDLING_T4043300624_H
#define MISSINGMEMBERHANDLING_T4043300624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.MissingMemberHandling
struct  MissingMemberHandling_t4043300624 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MissingMemberHandling_t4043300624, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBERHANDLING_T4043300624_H
#ifndef OUTLINETYPE_T3629713991_H
#define OUTLINETYPE_T3629713991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.OutlineType
struct  OutlineType_t3629713991 
{
public:
	// System.Int32 SagoUI.OutlineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OutlineType_t3629713991, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTLINETYPE_T3629713991_H
#ifndef MESHGRAPHICSCALEMODE_T4255949687_H
#define MESHGRAPHICSCALEMODE_T4255949687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.MeshGraphicScaleMode
struct  MeshGraphicScaleMode_t4255949687 
{
public:
	// System.Int32 SagoUI.MeshGraphicScaleMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MeshGraphicScaleMode_t4255949687, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHGRAPHICSCALEMODE_T4255949687_H
#ifndef MESHGRAPHICCOLORMODE_T1952959667_H
#define MESHGRAPHICCOLORMODE_T1952959667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.MeshGraphicColorMode
struct  MeshGraphicColorMode_t1952959667 
{
public:
	// System.Int32 SagoUI.MeshGraphicColorMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MeshGraphicColorMode_t1952959667, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHGRAPHICCOLORMODE_T1952959667_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef DEFAULTVALUEHANDLING_T3240998650_H
#define DEFAULTVALUEHANDLING_T3240998650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DefaultValueHandling
struct  DefaultValueHandling_t3240998650 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t3240998650, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEHANDLING_T3240998650_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef CONSTRUCTORHANDLING_T3189370124_H
#define CONSTRUCTORHANDLING_T3189370124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.ConstructorHandling
struct  ConstructorHandling_t3189370124 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConstructorHandling_t3189370124, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORHANDLING_T3189370124_H
#ifndef PRESERVEREFERENCESHANDLING_T815988812_H
#define PRESERVEREFERENCESHANDLING_T815988812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.PreserveReferencesHandling
struct  PreserveReferencesHandling_t815988812 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t815988812, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVEREFERENCESHANDLING_T815988812_H
#ifndef VERTEXHELPER_T2453304189_H
#define VERTEXHELPER_T2453304189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t2453304189  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t899420910 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t4072576034 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t3628304265 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t3628304265 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t3628304265 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t3628304265 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t899420910 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t496136383 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t128053199 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Positions_0)); }
	inline List_1_t899420910 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t899420910 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t899420910 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Colors_1)); }
	inline List_1_t4072576034 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t4072576034 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t4072576034 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv0S_2)); }
	inline List_1_t3628304265 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t3628304265 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t3628304265 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv1S_3)); }
	inline List_1_t3628304265 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t3628304265 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t3628304265 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv2S_4)); }
	inline List_1_t3628304265 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t3628304265 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t3628304265 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv3S_5)); }
	inline List_1_t3628304265 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t3628304265 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t3628304265 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Normals_6)); }
	inline List_1_t899420910 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t899420910 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t899420910 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Tangents_7)); }
	inline List_1_t496136383 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t496136383 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t496136383 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Indices_8)); }
	inline List_1_t128053199 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t128053199 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t128053199 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t2453304189_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t3722313464  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t3722313464  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t3722313464 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t3722313464  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T2453304189_H
#ifndef FILLTYPE_T1581107232_H
#define FILLTYPE_T1581107232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.FillType
struct  FillType_t1581107232 
{
public:
	// System.Int32 SagoUI.FillType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillType_t1581107232, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLTYPE_T1581107232_H
#ifndef OBJECTCREATIONHANDLING_T3160794531_H
#define OBJECTCREATIONHANDLING_T3160794531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.ObjectCreationHandling
struct  ObjectCreationHandling_t3160794531 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t3160794531, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTCREATIONHANDLING_T3160794531_H
#ifndef RENDERMODE_T4077056833_H
#define RENDERMODE_T4077056833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_t4077056833 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderMode_t4077056833, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERMODE_T4077056833_H
#ifndef DEPTH_T1896699061_H
#define DEPTH_T1896699061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.BitMaskAttribute/Depth
struct  Depth_t1896699061 
{
public:
	// System.Int32 SagoUtils.BitMaskAttribute/Depth::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Depth_t1896699061, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTH_T1896699061_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef HTTPQSCOLLECTION_T520254410_H
#define HTTPQSCOLLECTION_T520254410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.HttpUtility/HttpQSCollection
struct  HttpQSCollection_t520254410  : public NameValueCollection_t407452768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPQSCOLLECTION_T520254410_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef REFERENCELOOPHANDLING_T1329130968_H
#define REFERENCELOOPHANDLING_T1329130968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.ReferenceLoopHandling
struct  ReferenceLoopHandling_t1329130968 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t1329130968, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCELOOPHANDLING_T1329130968_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef MESHGRAPHICALIGNMODE_T3343719680_H
#define MESHGRAPHICALIGNMODE_T3343719680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.MeshGraphicAlignMode
struct  MeshGraphicAlignMode_t3343719680 
{
public:
	// System.Int32 SagoUI.MeshGraphicAlignMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MeshGraphicAlignMode_t3343719680, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHGRAPHICALIGNMODE_T3343719680_H
#ifndef DISABLEATTRIBUTE_T1228211629_H
#define DISABLEATTRIBUTE_T1228211629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.DisableAttribute
struct  DisableAttribute_t1228211629  : public PropertyAttribute_t3677895545
{
public:
	// SagoUtils.DisableAttribute/DisableCallback SagoUtils.DisableAttribute::<IsDisabled>k__BackingField
	DisableCallback_t2385366335 * ___U3CIsDisabledU3Ek__BackingField_0;
	// System.Int32 SagoUtils.DisableAttribute::<Indent>k__BackingField
	int32_t ___U3CIndentU3Ek__BackingField_1;
	// System.Boolean SagoUtils.DisableAttribute::<HideWhenDisabled>k__BackingField
	bool ___U3CHideWhenDisabledU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsDisabledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DisableAttribute_t1228211629, ___U3CIsDisabledU3Ek__BackingField_0)); }
	inline DisableCallback_t2385366335 * get_U3CIsDisabledU3Ek__BackingField_0() const { return ___U3CIsDisabledU3Ek__BackingField_0; }
	inline DisableCallback_t2385366335 ** get_address_of_U3CIsDisabledU3Ek__BackingField_0() { return &___U3CIsDisabledU3Ek__BackingField_0; }
	inline void set_U3CIsDisabledU3Ek__BackingField_0(DisableCallback_t2385366335 * value)
	{
		___U3CIsDisabledU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIsDisabledU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIndentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DisableAttribute_t1228211629, ___U3CIndentU3Ek__BackingField_1)); }
	inline int32_t get_U3CIndentU3Ek__BackingField_1() const { return ___U3CIndentU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIndentU3Ek__BackingField_1() { return &___U3CIndentU3Ek__BackingField_1; }
	inline void set_U3CIndentU3Ek__BackingField_1(int32_t value)
	{
		___U3CIndentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CHideWhenDisabledU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DisableAttribute_t1228211629, ___U3CHideWhenDisabledU3Ek__BackingField_2)); }
	inline bool get_U3CHideWhenDisabledU3Ek__BackingField_2() const { return ___U3CHideWhenDisabledU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CHideWhenDisabledU3Ek__BackingField_2() { return &___U3CHideWhenDisabledU3Ek__BackingField_2; }
	inline void set_U3CHideWhenDisabledU3Ek__BackingField_2(bool value)
	{
		___U3CHideWhenDisabledU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLEATTRIBUTE_T1228211629_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ENUMMASKATTRIBUTE_T4013718542_H
#define ENUMMASKATTRIBUTE_T4013718542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.EnumMaskAttribute
struct  EnumMaskAttribute_t4013718542  : public PropertyAttribute_t3677895545
{
public:
	// System.Type SagoUtils.EnumMaskAttribute::EnumType
	Type_t * ___EnumType_0;
	// System.Int32 SagoUtils.EnumMaskAttribute::Mask
	int32_t ___Mask_1;

public:
	inline static int32_t get_offset_of_EnumType_0() { return static_cast<int32_t>(offsetof(EnumMaskAttribute_t4013718542, ___EnumType_0)); }
	inline Type_t * get_EnumType_0() const { return ___EnumType_0; }
	inline Type_t ** get_address_of_EnumType_0() { return &___EnumType_0; }
	inline void set_EnumType_0(Type_t * value)
	{
		___EnumType_0 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_0), value);
	}

	inline static int32_t get_offset_of_Mask_1() { return static_cast<int32_t>(offsetof(EnumMaskAttribute_t4013718542, ___Mask_1)); }
	inline int32_t get_Mask_1() const { return ___Mask_1; }
	inline int32_t* get_address_of_Mask_1() { return &___Mask_1; }
	inline void set_Mask_1(int32_t value)
	{
		___Mask_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMMASKATTRIBUTE_T4013718542_H
#ifndef EXHAUSTBEHAVIOUR_T431577418_H
#define EXHAUSTBEHAVIOUR_T431577418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.GameObjectPool/ExhaustBehaviour
struct  ExhaustBehaviour_t431577418 
{
public:
	// System.Int32 SagoUtils.GameObjectPool/ExhaustBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExhaustBehaviour_t431577418, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXHAUSTBEHAVIOUR_T431577418_H
#ifndef FORMATTING_T3088372091_H
#define FORMATTING_T3088372091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.JsonConvert/Formatting
struct  Formatting_t3088372091 
{
public:
	// System.Int32 SagoUtils.JsonConvert/Formatting::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Formatting_t3088372091, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTING_T3088372091_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T524577942_H
#define ENUMERATOR_T524577942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct  Enumerator_t524577942 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2865362463 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t968067334  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___dictionary_0)); }
	inline Dictionary_2_t2865362463 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2865362463 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2865362463 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t524577942, ___current_3)); }
	inline KeyValuePair_2_t968067334  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t968067334 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t968067334  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T524577942_H
#ifndef FORMATTING_T2192044929_H
#define FORMATTING_T2192044929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Formatting
struct  Formatting_t2192044929 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Formatting_t2192044929, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTING_T2192044929_H
#ifndef SETTINGS_T901410193_H
#define SETTINGS_T901410193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.JsonConvert/Settings
struct  Settings_t901410193 
{
public:
	// System.Int32 SagoUtils.JsonConvert/Settings::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Settings_t901410193, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T901410193_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef DEFAULTCONTRACTRESOLVER_T270250618_H
#define DEFAULTCONTRACTRESOLVER_T270250618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct  DefaultContractResolver_t270250618  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.DefaultContractResolver::_typeContractCache
	ThreadSafeStore_2_t2798373182 * ____typeContractCache_2;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__typeContractCache_2() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618, ____typeContractCache_2)); }
	inline ThreadSafeStore_2_t2798373182 * get__typeContractCache_2() const { return ____typeContractCache_2; }
	inline ThreadSafeStore_2_t2798373182 ** get_address_of__typeContractCache_2() { return &____typeContractCache_2; }
	inline void set__typeContractCache_2(ThreadSafeStore_2_t2798373182 * value)
	{
		____typeContractCache_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeContractCache_2), value);
	}

	inline static int32_t get_offset_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618, ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3)); }
	inline int32_t get_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3() const { return ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3() { return &___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3; }
	inline void set_U3CDefaultMembersSearchFlagsU3Ek__BackingField_3(int32_t value)
	{
		___U3CDefaultMembersSearchFlagsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618, ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4)); }
	inline bool get_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4() const { return ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4() { return &___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4; }
	inline void set_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4(bool value)
	{
		___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_4 = value;
	}
};

struct DefaultContractResolver_t270250618_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	RuntimeObject* ____instance_0;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	RuntimeObject* ___BuiltInConverters_1;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache0
	Func_2_t2217434578 * ___U3CU3Ef__amU24cache0_5;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache1
	Func_2_t2217434578 * ___U3CU3Ef__amU24cache1_6;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache2
	Func_2_t1796590042 * ___U3CU3Ef__amU24cache2_7;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache3
	Func_2_t1796590042 * ___U3CU3Ef__amU24cache3_8;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32> Newtonsoft.Json.Serialization.DefaultContractResolver::<>f__am$cache4
	Func_2_t1808639663 * ___U3CU3Ef__amU24cache4_9;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618_StaticFields, ____instance_0)); }
	inline RuntimeObject* get__instance_0() const { return ____instance_0; }
	inline RuntimeObject** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(RuntimeObject* value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}

	inline static int32_t get_offset_of_BuiltInConverters_1() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618_StaticFields, ___BuiltInConverters_1)); }
	inline RuntimeObject* get_BuiltInConverters_1() const { return ___BuiltInConverters_1; }
	inline RuntimeObject** get_address_of_BuiltInConverters_1() { return &___BuiltInConverters_1; }
	inline void set_BuiltInConverters_1(RuntimeObject* value)
	{
		___BuiltInConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___BuiltInConverters_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Func_2_t2217434578 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Func_2_t2217434578 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Func_2_t2217434578 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_6() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618_StaticFields, ___U3CU3Ef__amU24cache1_6)); }
	inline Func_2_t2217434578 * get_U3CU3Ef__amU24cache1_6() const { return ___U3CU3Ef__amU24cache1_6; }
	inline Func_2_t2217434578 ** get_address_of_U3CU3Ef__amU24cache1_6() { return &___U3CU3Ef__amU24cache1_6; }
	inline void set_U3CU3Ef__amU24cache1_6(Func_2_t2217434578 * value)
	{
		___U3CU3Ef__amU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_7() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618_StaticFields, ___U3CU3Ef__amU24cache2_7)); }
	inline Func_2_t1796590042 * get_U3CU3Ef__amU24cache2_7() const { return ___U3CU3Ef__amU24cache2_7; }
	inline Func_2_t1796590042 ** get_address_of_U3CU3Ef__amU24cache2_7() { return &___U3CU3Ef__amU24cache2_7; }
	inline void set_U3CU3Ef__amU24cache2_7(Func_2_t1796590042 * value)
	{
		___U3CU3Ef__amU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_8() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618_StaticFields, ___U3CU3Ef__amU24cache3_8)); }
	inline Func_2_t1796590042 * get_U3CU3Ef__amU24cache3_8() const { return ___U3CU3Ef__amU24cache3_8; }
	inline Func_2_t1796590042 ** get_address_of_U3CU3Ef__amU24cache3_8() { return &___U3CU3Ef__amU24cache3_8; }
	inline void set_U3CU3Ef__amU24cache3_8(Func_2_t1796590042 * value)
	{
		___U3CU3Ef__amU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_9() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t270250618_StaticFields, ___U3CU3Ef__amU24cache4_9)); }
	inline Func_2_t1808639663 * get_U3CU3Ef__amU24cache4_9() const { return ___U3CU3Ef__amU24cache4_9; }
	inline Func_2_t1808639663 ** get_address_of_U3CU3Ef__amU24cache4_9() { return &___U3CU3Ef__amU24cache4_9; }
	inline void set_U3CU3Ef__amU24cache4_9(Func_2_t1808639663 * value)
	{
		___U3CU3Ef__amU24cache4_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCONTRACTRESOLVER_T270250618_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef DISABLECALLBACK_T2385366335_H
#define DISABLECALLBACK_T2385366335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.DisableAttribute/DisableCallback
struct  DisableCallback_t2385366335  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLECALLBACK_T2385366335_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef PASCALCASEPROPERTYNAMECONTRACTRESOLVER_T3764767062_H
#define PASCALCASEPROPERTYNAMECONTRACTRESOLVER_T3764767062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.PascalCasePropertyNameContractResolver
struct  PascalCasePropertyNameContractResolver_t3764767062  : public DefaultContractResolver_t270250618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PASCALCASEPROPERTYNAMECONTRACTRESOLVER_T3764767062_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef ACTION_1_T2950550955_H
#define ACTION_1_T2950550955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<SagoUtils.ShakeDetector>
struct  Action_1_t2950550955  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2950550955_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef JSONSERIALIZERSETTINGS_T2139255314_H
#define JSONSERIALIZERSETTINGS_T2139255314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonSerializerSettings
struct  JsonSerializerSettings_t2139255314  : public RuntimeObject
{
public:
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializerSettings::<ReferenceLoopHandling>k__BackingField
	int32_t ___U3CReferenceLoopHandlingU3Ek__BackingField_10;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializerSettings::<MissingMemberHandling>k__BackingField
	int32_t ___U3CMissingMemberHandlingU3Ek__BackingField_11;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializerSettings::<ObjectCreationHandling>k__BackingField
	int32_t ___U3CObjectCreationHandlingU3Ek__BackingField_12;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializerSettings::<NullValueHandling>k__BackingField
	int32_t ___U3CNullValueHandlingU3Ek__BackingField_13;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializerSettings::<DefaultValueHandling>k__BackingField
	int32_t ___U3CDefaultValueHandlingU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_15;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializerSettings::<PreserveReferencesHandling>k__BackingField
	int32_t ___U3CPreserveReferencesHandlingU3Ek__BackingField_16;
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializerSettings::<TypeNameHandling>k__BackingField
	int32_t ___U3CTypeNameHandlingU3Ek__BackingField_17;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializerSettings::<TypeNameAssemblyFormat>k__BackingField
	int32_t ___U3CTypeNameAssemblyFormatU3Ek__BackingField_18;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializerSettings::<ConstructorHandling>k__BackingField
	int32_t ___U3CConstructorHandlingU3Ek__BackingField_19;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_20;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolver>k__BackingField
	RuntimeObject* ___U3CReferenceResolverU3Ek__BackingField_21;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializerSettings::<Binder>k__BackingField
	SerializationBinder_t274213469 * ___U3CBinderU3Ek__BackingField_22;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t2935836205 * ___U3CErrorU3Ek__BackingField_23;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::<Context>k__BackingField
	StreamingContext_t3711869237  ___U3CContextU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CReferenceLoopHandlingU3Ek__BackingField_10)); }
	inline int32_t get_U3CReferenceLoopHandlingU3Ek__BackingField_10() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_10() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_10; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_10(int32_t value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CMissingMemberHandlingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CMissingMemberHandlingU3Ek__BackingField_11)); }
	inline int32_t get_U3CMissingMemberHandlingU3Ek__BackingField_11() const { return ___U3CMissingMemberHandlingU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CMissingMemberHandlingU3Ek__BackingField_11() { return &___U3CMissingMemberHandlingU3Ek__BackingField_11; }
	inline void set_U3CMissingMemberHandlingU3Ek__BackingField_11(int32_t value)
	{
		___U3CMissingMemberHandlingU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CObjectCreationHandlingU3Ek__BackingField_12)); }
	inline int32_t get_U3CObjectCreationHandlingU3Ek__BackingField_12() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_12() { return &___U3CObjectCreationHandlingU3Ek__BackingField_12; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_12(int32_t value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CNullValueHandlingU3Ek__BackingField_13)); }
	inline int32_t get_U3CNullValueHandlingU3Ek__BackingField_13() const { return ___U3CNullValueHandlingU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CNullValueHandlingU3Ek__BackingField_13() { return &___U3CNullValueHandlingU3Ek__BackingField_13; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_13(int32_t value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CDefaultValueHandlingU3Ek__BackingField_14)); }
	inline int32_t get_U3CDefaultValueHandlingU3Ek__BackingField_14() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_14() { return &___U3CDefaultValueHandlingU3Ek__BackingField_14; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_14(int32_t value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CConvertersU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CConvertersU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CConvertersU3Ek__BackingField_15() const { return ___U3CConvertersU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CConvertersU3Ek__BackingField_15() { return &___U3CConvertersU3Ek__BackingField_15; }
	inline void set_U3CConvertersU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CConvertersU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConvertersU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_U3CPreserveReferencesHandlingU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CPreserveReferencesHandlingU3Ek__BackingField_16)); }
	inline int32_t get_U3CPreserveReferencesHandlingU3Ek__BackingField_16() const { return ___U3CPreserveReferencesHandlingU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CPreserveReferencesHandlingU3Ek__BackingField_16() { return &___U3CPreserveReferencesHandlingU3Ek__BackingField_16; }
	inline void set_U3CPreserveReferencesHandlingU3Ek__BackingField_16(int32_t value)
	{
		___U3CPreserveReferencesHandlingU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CTypeNameHandlingU3Ek__BackingField_17)); }
	inline int32_t get_U3CTypeNameHandlingU3Ek__BackingField_17() const { return ___U3CTypeNameHandlingU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CTypeNameHandlingU3Ek__BackingField_17() { return &___U3CTypeNameHandlingU3Ek__BackingField_17; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_17(int32_t value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameAssemblyFormatU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CTypeNameAssemblyFormatU3Ek__BackingField_18)); }
	inline int32_t get_U3CTypeNameAssemblyFormatU3Ek__BackingField_18() const { return ___U3CTypeNameAssemblyFormatU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CTypeNameAssemblyFormatU3Ek__BackingField_18() { return &___U3CTypeNameAssemblyFormatU3Ek__BackingField_18; }
	inline void set_U3CTypeNameAssemblyFormatU3Ek__BackingField_18(int32_t value)
	{
		___U3CTypeNameAssemblyFormatU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CConstructorHandlingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CConstructorHandlingU3Ek__BackingField_19)); }
	inline int32_t get_U3CConstructorHandlingU3Ek__BackingField_19() const { return ___U3CConstructorHandlingU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CConstructorHandlingU3Ek__BackingField_19() { return &___U3CConstructorHandlingU3Ek__BackingField_19; }
	inline void set_U3CConstructorHandlingU3Ek__BackingField_19(int32_t value)
	{
		___U3CConstructorHandlingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CContractResolverU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CContractResolverU3Ek__BackingField_20)); }
	inline RuntimeObject* get_U3CContractResolverU3Ek__BackingField_20() const { return ___U3CContractResolverU3Ek__BackingField_20; }
	inline RuntimeObject** get_address_of_U3CContractResolverU3Ek__BackingField_20() { return &___U3CContractResolverU3Ek__BackingField_20; }
	inline void set_U3CContractResolverU3Ek__BackingField_20(RuntimeObject* value)
	{
		___U3CContractResolverU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContractResolverU3Ek__BackingField_20), value);
	}

	inline static int32_t get_offset_of_U3CReferenceResolverU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CReferenceResolverU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CReferenceResolverU3Ek__BackingField_21() const { return ___U3CReferenceResolverU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CReferenceResolverU3Ek__BackingField_21() { return &___U3CReferenceResolverU3Ek__BackingField_21; }
	inline void set_U3CReferenceResolverU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CReferenceResolverU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CReferenceResolverU3Ek__BackingField_21), value);
	}

	inline static int32_t get_offset_of_U3CBinderU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CBinderU3Ek__BackingField_22)); }
	inline SerializationBinder_t274213469 * get_U3CBinderU3Ek__BackingField_22() const { return ___U3CBinderU3Ek__BackingField_22; }
	inline SerializationBinder_t274213469 ** get_address_of_U3CBinderU3Ek__BackingField_22() { return &___U3CBinderU3Ek__BackingField_22; }
	inline void set_U3CBinderU3Ek__BackingField_22(SerializationBinder_t274213469 * value)
	{
		___U3CBinderU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBinderU3Ek__BackingField_22), value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CErrorU3Ek__BackingField_23)); }
	inline EventHandler_1_t2935836205 * get_U3CErrorU3Ek__BackingField_23() const { return ___U3CErrorU3Ek__BackingField_23; }
	inline EventHandler_1_t2935836205 ** get_address_of_U3CErrorU3Ek__BackingField_23() { return &___U3CErrorU3Ek__BackingField_23; }
	inline void set_U3CErrorU3Ek__BackingField_23(EventHandler_1_t2935836205 * value)
	{
		___U3CErrorU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorU3Ek__BackingField_23), value);
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314, ___U3CContextU3Ek__BackingField_24)); }
	inline StreamingContext_t3711869237  get_U3CContextU3Ek__BackingField_24() const { return ___U3CContextU3Ek__BackingField_24; }
	inline StreamingContext_t3711869237 * get_address_of_U3CContextU3Ek__BackingField_24() { return &___U3CContextU3Ek__BackingField_24; }
	inline void set_U3CContextU3Ek__BackingField_24(StreamingContext_t3711869237  value)
	{
		___U3CContextU3Ek__BackingField_24 = value;
	}
};

struct JsonSerializerSettings_t2139255314_StaticFields
{
public:
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t3711869237  ___DefaultContext_9;

public:
	inline static int32_t get_offset_of_DefaultContext_9() { return static_cast<int32_t>(offsetof(JsonSerializerSettings_t2139255314_StaticFields, ___DefaultContext_9)); }
	inline StreamingContext_t3711869237  get_DefaultContext_9() const { return ___DefaultContext_9; }
	inline StreamingContext_t3711869237 * get_address_of_DefaultContext_9() { return &___DefaultContext_9; }
	inline void set_DefaultContext_9(StreamingContext_t3711869237  value)
	{
		___DefaultContext_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONSERIALIZERSETTINGS_T2139255314_H
#ifndef BUILDMANIFESTOBJECT_T354914896_H
#define BUILDMANIFESTOBJECT_T354914896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CloudBuild.BuildManifestObject
struct  BuildManifestObject_t354914896  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDMANIFESTOBJECT_T354914896_H
#ifndef UNDERSCORELOWERCASEPROPERTYNAMECONTRACTRESOLVER_T1847614001_H
#define UNDERSCORELOWERCASEPROPERTYNAMECONTRACTRESOLVER_T1847614001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.UnderscoreLowerCasePropertyNameContractResolver
struct  UnderscoreLowerCasePropertyNameContractResolver_t1847614001  : public DefaultContractResolver_t270250618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNDERSCORELOWERCASEPROPERTYNAMECONTRACTRESOLVER_T1847614001_H
#ifndef ACTION_2_T946994486_H
#define ACTION_2_T946994486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>
struct  Action_2_t946994486  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T946994486_H
#ifndef SUBMODULEINFO_T3488963427_H
#define SUBMODULEINFO_T3488963427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoCore.Submodules.SubmoduleInfo
struct  SubmoduleInfo_t3488963427  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBMODULEINFO_T3488963427_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef SUBMODULEINFO_T4043851990_H
#define SUBMODULEINFO_T4043851990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.SubmoduleInfo
struct  SubmoduleInfo_t4043851990  : public SubmoduleInfo_t3488963427
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBMODULEINFO_T4043851990_H
#ifndef DEPTHGROUPELEMENT_T975669617_H
#define DEPTHGROUPELEMENT_T975669617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.DepthGroupElement
struct  DepthGroupElement_t975669617  : public MonoBehaviour_t3962482529
{
public:
	// SagoUtils.DepthGroup SagoUtils.DepthGroupElement::<DepthGroup>k__BackingField
	DepthGroup_t827469246 * ___U3CDepthGroupU3Ek__BackingField_2;
	// UnityEngine.Transform SagoUtils.DepthGroupElement::m_Transform
	Transform_t3600365921 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CDepthGroupU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DepthGroupElement_t975669617, ___U3CDepthGroupU3Ek__BackingField_2)); }
	inline DepthGroup_t827469246 * get_U3CDepthGroupU3Ek__BackingField_2() const { return ___U3CDepthGroupU3Ek__BackingField_2; }
	inline DepthGroup_t827469246 ** get_address_of_U3CDepthGroupU3Ek__BackingField_2() { return &___U3CDepthGroupU3Ek__BackingField_2; }
	inline void set_U3CDepthGroupU3Ek__BackingField_2(DepthGroup_t827469246 * value)
	{
		___U3CDepthGroupU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDepthGroupU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(DepthGroupElement_t975669617, ___m_Transform_3)); }
	inline Transform_t3600365921 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_t3600365921 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_t3600365921 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Transform_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHGROUPELEMENT_T975669617_H
#ifndef DEPTHGROUP_T827469246_H
#define DEPTHGROUP_T827469246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.DepthGroup
struct  DepthGroup_t827469246  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SagoUtils.DepthGroup::IsElementContainer
	bool ___IsElementContainer_2;
	// System.Boolean SagoUtils.DepthGroup::CompactOnRemove
	bool ___CompactOnRemove_3;
	// System.Single SagoUtils.DepthGroup::Spacing
	float ___Spacing_4;
	// System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement> SagoUtils.DepthGroup::OnAddElement
	Action_2_t946994486 * ___OnAddElement_5;
	// System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement> SagoUtils.DepthGroup::OnRemoveElement
	Action_2_t946994486 * ___OnRemoveElement_6;
	// System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement> SagoUtils.DepthGroup::OnSetElementDepth
	Action_2_t946994486 * ___OnSetElementDepth_7;
	// System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement> SagoUtils.DepthGroup::m_Elements
	List_1_t3091537484 * ___m_Elements_8;
	// UnityEngine.Transform SagoUtils.DepthGroup::m_Transform
	Transform_t3600365921 * ___m_Transform_9;

public:
	inline static int32_t get_offset_of_IsElementContainer_2() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___IsElementContainer_2)); }
	inline bool get_IsElementContainer_2() const { return ___IsElementContainer_2; }
	inline bool* get_address_of_IsElementContainer_2() { return &___IsElementContainer_2; }
	inline void set_IsElementContainer_2(bool value)
	{
		___IsElementContainer_2 = value;
	}

	inline static int32_t get_offset_of_CompactOnRemove_3() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___CompactOnRemove_3)); }
	inline bool get_CompactOnRemove_3() const { return ___CompactOnRemove_3; }
	inline bool* get_address_of_CompactOnRemove_3() { return &___CompactOnRemove_3; }
	inline void set_CompactOnRemove_3(bool value)
	{
		___CompactOnRemove_3 = value;
	}

	inline static int32_t get_offset_of_Spacing_4() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___Spacing_4)); }
	inline float get_Spacing_4() const { return ___Spacing_4; }
	inline float* get_address_of_Spacing_4() { return &___Spacing_4; }
	inline void set_Spacing_4(float value)
	{
		___Spacing_4 = value;
	}

	inline static int32_t get_offset_of_OnAddElement_5() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___OnAddElement_5)); }
	inline Action_2_t946994486 * get_OnAddElement_5() const { return ___OnAddElement_5; }
	inline Action_2_t946994486 ** get_address_of_OnAddElement_5() { return &___OnAddElement_5; }
	inline void set_OnAddElement_5(Action_2_t946994486 * value)
	{
		___OnAddElement_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnAddElement_5), value);
	}

	inline static int32_t get_offset_of_OnRemoveElement_6() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___OnRemoveElement_6)); }
	inline Action_2_t946994486 * get_OnRemoveElement_6() const { return ___OnRemoveElement_6; }
	inline Action_2_t946994486 ** get_address_of_OnRemoveElement_6() { return &___OnRemoveElement_6; }
	inline void set_OnRemoveElement_6(Action_2_t946994486 * value)
	{
		___OnRemoveElement_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnRemoveElement_6), value);
	}

	inline static int32_t get_offset_of_OnSetElementDepth_7() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___OnSetElementDepth_7)); }
	inline Action_2_t946994486 * get_OnSetElementDepth_7() const { return ___OnSetElementDepth_7; }
	inline Action_2_t946994486 ** get_address_of_OnSetElementDepth_7() { return &___OnSetElementDepth_7; }
	inline void set_OnSetElementDepth_7(Action_2_t946994486 * value)
	{
		___OnSetElementDepth_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnSetElementDepth_7), value);
	}

	inline static int32_t get_offset_of_m_Elements_8() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___m_Elements_8)); }
	inline List_1_t3091537484 * get_m_Elements_8() const { return ___m_Elements_8; }
	inline List_1_t3091537484 ** get_address_of_m_Elements_8() { return &___m_Elements_8; }
	inline void set_m_Elements_8(List_1_t3091537484 * value)
	{
		___m_Elements_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Elements_8), value);
	}

	inline static int32_t get_offset_of_m_Transform_9() { return static_cast<int32_t>(offsetof(DepthGroup_t827469246, ___m_Transform_9)); }
	inline Transform_t3600365921 * get_m_Transform_9() const { return ___m_Transform_9; }
	inline Transform_t3600365921 ** get_address_of_m_Transform_9() { return &___m_Transform_9; }
	inline void set_m_Transform_9(Transform_t3600365921 * value)
	{
		___m_Transform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Transform_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPTHGROUP_T827469246_H
#ifndef GAMEOBJECTPOOL_T652050872_H
#define GAMEOBJECTPOOL_T652050872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.GameObjectPool
struct  GameObjectPool_t652050872  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SagoUtils.GameObjectPool::<ApplyRandomScaling>k__BackingField
	bool ___U3CApplyRandomScalingU3Ek__BackingField_2;
	// SagoUtils.GameObjectPool/ExhaustBehaviour SagoUtils.GameObjectPool::<ExhaustionBehaviour>k__BackingField
	int32_t ___U3CExhaustionBehaviourU3Ek__BackingField_3;
	// UnityEngine.Vector2 SagoUtils.GameObjectPool::<ScaleRange>k__BackingField
	Vector2_t2156229523  ___U3CScaleRangeU3Ek__BackingField_4;
	// System.Int32 SagoUtils.GameObjectPool::<PoolSize>k__BackingField
	int32_t ___U3CPoolSizeU3Ek__BackingField_5;
	// System.Collections.Generic.LinkedList`1<UnityEngine.Transform> SagoUtils.GameObjectPool::<ActivePool>k__BackingField
	LinkedList_1_t2440011930 * ___U3CActivePoolU3Ek__BackingField_6;
	// UnityEngine.Transform SagoUtils.GameObjectPool::<InactivePool>k__BackingField
	Transform_t3600365921 * ___U3CInactivePoolU3Ek__BackingField_7;
	// UnityEngine.Transform SagoUtils.GameObjectPool::m_Transform
	Transform_t3600365921 * ___m_Transform_8;

public:
	inline static int32_t get_offset_of_U3CApplyRandomScalingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameObjectPool_t652050872, ___U3CApplyRandomScalingU3Ek__BackingField_2)); }
	inline bool get_U3CApplyRandomScalingU3Ek__BackingField_2() const { return ___U3CApplyRandomScalingU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CApplyRandomScalingU3Ek__BackingField_2() { return &___U3CApplyRandomScalingU3Ek__BackingField_2; }
	inline void set_U3CApplyRandomScalingU3Ek__BackingField_2(bool value)
	{
		___U3CApplyRandomScalingU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CExhaustionBehaviourU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameObjectPool_t652050872, ___U3CExhaustionBehaviourU3Ek__BackingField_3)); }
	inline int32_t get_U3CExhaustionBehaviourU3Ek__BackingField_3() const { return ___U3CExhaustionBehaviourU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CExhaustionBehaviourU3Ek__BackingField_3() { return &___U3CExhaustionBehaviourU3Ek__BackingField_3; }
	inline void set_U3CExhaustionBehaviourU3Ek__BackingField_3(int32_t value)
	{
		___U3CExhaustionBehaviourU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CScaleRangeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameObjectPool_t652050872, ___U3CScaleRangeU3Ek__BackingField_4)); }
	inline Vector2_t2156229523  get_U3CScaleRangeU3Ek__BackingField_4() const { return ___U3CScaleRangeU3Ek__BackingField_4; }
	inline Vector2_t2156229523 * get_address_of_U3CScaleRangeU3Ek__BackingField_4() { return &___U3CScaleRangeU3Ek__BackingField_4; }
	inline void set_U3CScaleRangeU3Ek__BackingField_4(Vector2_t2156229523  value)
	{
		___U3CScaleRangeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPoolSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameObjectPool_t652050872, ___U3CPoolSizeU3Ek__BackingField_5)); }
	inline int32_t get_U3CPoolSizeU3Ek__BackingField_5() const { return ___U3CPoolSizeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CPoolSizeU3Ek__BackingField_5() { return &___U3CPoolSizeU3Ek__BackingField_5; }
	inline void set_U3CPoolSizeU3Ek__BackingField_5(int32_t value)
	{
		___U3CPoolSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CActivePoolU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GameObjectPool_t652050872, ___U3CActivePoolU3Ek__BackingField_6)); }
	inline LinkedList_1_t2440011930 * get_U3CActivePoolU3Ek__BackingField_6() const { return ___U3CActivePoolU3Ek__BackingField_6; }
	inline LinkedList_1_t2440011930 ** get_address_of_U3CActivePoolU3Ek__BackingField_6() { return &___U3CActivePoolU3Ek__BackingField_6; }
	inline void set_U3CActivePoolU3Ek__BackingField_6(LinkedList_1_t2440011930 * value)
	{
		___U3CActivePoolU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActivePoolU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CInactivePoolU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GameObjectPool_t652050872, ___U3CInactivePoolU3Ek__BackingField_7)); }
	inline Transform_t3600365921 * get_U3CInactivePoolU3Ek__BackingField_7() const { return ___U3CInactivePoolU3Ek__BackingField_7; }
	inline Transform_t3600365921 ** get_address_of_U3CInactivePoolU3Ek__BackingField_7() { return &___U3CInactivePoolU3Ek__BackingField_7; }
	inline void set_U3CInactivePoolU3Ek__BackingField_7(Transform_t3600365921 * value)
	{
		___U3CInactivePoolU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInactivePoolU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_m_Transform_8() { return static_cast<int32_t>(offsetof(GameObjectPool_t652050872, ___m_Transform_8)); }
	inline Transform_t3600365921 * get_m_Transform_8() const { return ___m_Transform_8; }
	inline Transform_t3600365921 ** get_address_of_m_Transform_8() { return &___m_Transform_8; }
	inline void set_m_Transform_8(Transform_t3600365921 * value)
	{
		___m_Transform_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Transform_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTPOOL_T652050872_H
#ifndef SHAKEDETECTOR_T2778083360_H
#define SHAKEDETECTOR_T2778083360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.ShakeDetector
struct  ShakeDetector_t2778083360  : public MonoBehaviour_t3962482529
{
public:
	// System.Action`1<SagoUtils.ShakeDetector> SagoUtils.ShakeDetector::ShakeDetected
	Action_1_t2950550955 * ___ShakeDetected_2;
	// System.Single SagoUtils.ShakeDetector::m_ShakeAllowance
	float ___m_ShakeAllowance_3;
	// System.Single SagoUtils.ShakeDetector::<LowPassFilterFactor>k__BackingField
	float ___U3CLowPassFilterFactorU3Ek__BackingField_4;
	// UnityEngine.Vector3 SagoUtils.ShakeDetector::<LowPassValue>k__BackingField
	Vector3_t3722313464  ___U3CLowPassValueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_ShakeDetected_2() { return static_cast<int32_t>(offsetof(ShakeDetector_t2778083360, ___ShakeDetected_2)); }
	inline Action_1_t2950550955 * get_ShakeDetected_2() const { return ___ShakeDetected_2; }
	inline Action_1_t2950550955 ** get_address_of_ShakeDetected_2() { return &___ShakeDetected_2; }
	inline void set_ShakeDetected_2(Action_1_t2950550955 * value)
	{
		___ShakeDetected_2 = value;
		Il2CppCodeGenWriteBarrier((&___ShakeDetected_2), value);
	}

	inline static int32_t get_offset_of_m_ShakeAllowance_3() { return static_cast<int32_t>(offsetof(ShakeDetector_t2778083360, ___m_ShakeAllowance_3)); }
	inline float get_m_ShakeAllowance_3() const { return ___m_ShakeAllowance_3; }
	inline float* get_address_of_m_ShakeAllowance_3() { return &___m_ShakeAllowance_3; }
	inline void set_m_ShakeAllowance_3(float value)
	{
		___m_ShakeAllowance_3 = value;
	}

	inline static int32_t get_offset_of_U3CLowPassFilterFactorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ShakeDetector_t2778083360, ___U3CLowPassFilterFactorU3Ek__BackingField_4)); }
	inline float get_U3CLowPassFilterFactorU3Ek__BackingField_4() const { return ___U3CLowPassFilterFactorU3Ek__BackingField_4; }
	inline float* get_address_of_U3CLowPassFilterFactorU3Ek__BackingField_4() { return &___U3CLowPassFilterFactorU3Ek__BackingField_4; }
	inline void set_U3CLowPassFilterFactorU3Ek__BackingField_4(float value)
	{
		___U3CLowPassFilterFactorU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLowPassValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ShakeDetector_t2778083360, ___U3CLowPassValueU3Ek__BackingField_5)); }
	inline Vector3_t3722313464  get_U3CLowPassValueU3Ek__BackingField_5() const { return ___U3CLowPassValueU3Ek__BackingField_5; }
	inline Vector3_t3722313464 * get_address_of_U3CLowPassValueU3Ek__BackingField_5() { return &___U3CLowPassValueU3Ek__BackingField_5; }
	inline void set_U3CLowPassValueU3Ek__BackingField_5(Vector3_t3722313464  value)
	{
		___U3CLowPassValueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAKEDETECTOR_T2778083360_H
#ifndef SIMPLEPOOLEDOBJECT_T1040664057_H
#define SIMPLEPOOLEDOBJECT_T1040664057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUtils.SimplePooledObject
struct  SimplePooledObject_t1040664057  : public MonoBehaviour_t3962482529
{
public:
	// System.Single SagoUtils.SimplePooledObject::m_MaxDuration
	float ___m_MaxDuration_2;
	// SagoUtils.GameObjectPool SagoUtils.SimplePooledObject::<GameObjectPool>k__BackingField
	GameObjectPool_t652050872 * ___U3CGameObjectPoolU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_MaxDuration_2() { return static_cast<int32_t>(offsetof(SimplePooledObject_t1040664057, ___m_MaxDuration_2)); }
	inline float get_m_MaxDuration_2() const { return ___m_MaxDuration_2; }
	inline float* get_address_of_m_MaxDuration_2() { return &___m_MaxDuration_2; }
	inline void set_m_MaxDuration_2(float value)
	{
		___m_MaxDuration_2 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectPoolU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimplePooledObject_t1040664057, ___U3CGameObjectPoolU3Ek__BackingField_3)); }
	inline GameObjectPool_t652050872 * get_U3CGameObjectPoolU3Ek__BackingField_3() const { return ___U3CGameObjectPoolU3Ek__BackingField_3; }
	inline GameObjectPool_t652050872 ** get_address_of_U3CGameObjectPoolU3Ek__BackingField_3() { return &___U3CGameObjectPoolU3Ek__BackingField_3; }
	inline void set_U3CGameObjectPoolU3Ek__BackingField_3(GameObjectPool_t652050872 * value)
	{
		___U3CGameObjectPoolU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGameObjectPoolU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEPOOLEDOBJECT_T1040664057_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef BASEMESHEFFECT_T2440176439_H
#define BASEMESHEFFECT_T2440176439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t2440176439  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t2440176439, ___m_Graphic_2)); }
	inline Graphic_t1660335611 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t1660335611 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T2440176439_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef RECTANGLEOUTLINE_T2230321377_H
#define RECTANGLEOUTLINE_T2230321377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.RectangleOutline
struct  RectangleOutline_t2230321377  : public BaseMeshEffect_t2440176439
{
public:
	// UnityEngine.Color SagoUI.RectangleOutline::m_Color
	Color_t2555686324  ___m_Color_3;
	// UnityEngine.UI.Graphic SagoUI.RectangleOutline::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_4;
	// System.Int32 SagoUI.RectangleOutline::m_Size
	int32_t ___m_Size_5;
	// SagoUI.OutlineType SagoUI.RectangleOutline::m_Type
	int32_t ___m_Type_6;

public:
	inline static int32_t get_offset_of_m_Color_3() { return static_cast<int32_t>(offsetof(RectangleOutline_t2230321377, ___m_Color_3)); }
	inline Color_t2555686324  get_m_Color_3() const { return ___m_Color_3; }
	inline Color_t2555686324 * get_address_of_m_Color_3() { return &___m_Color_3; }
	inline void set_m_Color_3(Color_t2555686324  value)
	{
		___m_Color_3 = value;
	}

	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(RectangleOutline_t2230321377, ___m_Graphic_4)); }
	inline Graphic_t1660335611 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t1660335611 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_4), value);
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(RectangleOutline_t2230321377, ___m_Size_5)); }
	inline int32_t get_m_Size_5() const { return ___m_Size_5; }
	inline int32_t* get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(int32_t value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Type_6() { return static_cast<int32_t>(offsetof(RectangleOutline_t2230321377, ___m_Type_6)); }
	inline int32_t get_m_Type_6() const { return ___m_Type_6; }
	inline int32_t* get_address_of_m_Type_6() { return &___m_Type_6; }
	inline void set_m_Type_6(int32_t value)
	{
		___m_Type_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEOUTLINE_T2230321377_H
#ifndef RECTANGLEGRAPHIC_T3224142083_H
#define RECTANGLEGRAPHIC_T3224142083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SagoUI.RectangleGraphic
struct  RectangleGraphic_t3224142083  : public MaskableGraphic_t3839221559
{
public:
	// System.Single SagoUI.RectangleGraphic::m_Radius
	float ___m_Radius_28;
	// SagoUI.FillType SagoUI.RectangleGraphic::m_Type
	int32_t ___m_Type_29;

public:
	inline static int32_t get_offset_of_m_Radius_28() { return static_cast<int32_t>(offsetof(RectangleGraphic_t3224142083, ___m_Radius_28)); }
	inline float get_m_Radius_28() const { return ___m_Radius_28; }
	inline float* get_address_of_m_Radius_28() { return &___m_Radius_28; }
	inline void set_m_Radius_28(float value)
	{
		___m_Radius_28 = value;
	}

	inline static int32_t get_offset_of_m_Type_29() { return static_cast<int32_t>(offsetof(RectangleGraphic_t3224142083, ___m_Type_29)); }
	inline int32_t get_m_Type_29() const { return ___m_Type_29; }
	inline int32_t* get_address_of_m_Type_29() { return &___m_Type_29; }
	inline void set_m_Type_29(int32_t value)
	{
		___m_Type_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEGRAPHIC_T3224142083_H
// System.Collections.IEnumerator[]
struct IEnumeratorU5BU5D_t2446662267  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Component_t1923634451 * m_Items[1];

public:
	inline Component_t1923634451 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Component_t1923634451 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Component_t1923634451 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Component_t1923634451 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Component_t1923634451 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Component_t1923634451 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
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
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};

extern "C" void Object_t631007953_marshal_pinvoke(const Object_t631007953& unmarshaled, Object_t631007953_marshaled_pinvoke& marshaled);
extern "C" void Object_t631007953_marshal_pinvoke_back(const Object_t631007953_marshaled_pinvoke& marshaled, Object_t631007953& unmarshaled);
extern "C" void Object_t631007953_marshal_pinvoke_cleanup(Object_t631007953_marshaled_pinvoke& marshaled);

// System.Collections.Generic.List`1<T> SagoUI.ListPool`1<UnityEngine.UIVertex>::Get()
extern "C"  List_1_t1234605051 * ListPool_1_Get_m1622481728_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void SagoUI.ListPool`1<UnityEngine.UIVertex>::Put(System.Collections.Generic.List`1<T>)
extern "C"  void ListPool_1_Put_m1533691536_gshared (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m698722831_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
extern "C"  void Action_2_Invoke_m1306929455_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C"  LinkedListNode_1_t2825281267 * LinkedList_1_get_First_m1512309353_gshared (LinkedList_1_t1919752173 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C"  RuntimeObject * LinkedListNode_1_get_Value_m3891174027_gshared (LinkedListNode_1_t2825281267 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C"  void LinkedList_1_RemoveFirst_m2082760208_gshared (LinkedList_1_t1919752173 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C"  int32_t LinkedList_1_get_Count_m2167432147_gshared (LinkedList_1_t1919752173 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C"  LinkedListNode_1_t2825281267 * LinkedListNode_1_get_Next_m569727209_gshared (LinkedListNode_1_t2825281267 * __this, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(!0)
extern "C"  LinkedListNode_1_t2825281267 * LinkedList_1_AddLast_m3177585097_gshared (LinkedList_1_t1919752173 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(!0)
extern "C"  bool LinkedList_1_Remove_m2993726015_gshared (LinkedList_1_t1919752173 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C"  LinkedListNode_1_t2825281267 * LinkedList_1_get_Last_m593530567_gshared (LinkedList_1_t1919752173 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C"  void LinkedList_1_RemoveLast_m2923798972_gshared (LinkedList_1_t1919752173 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C"  void LinkedList_1__ctor_m3670635350_gshared (LinkedList_1_t1919752173 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C"  void List_1__ctor_m934990389_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C"  ByteU5BU5D_t4116647657* List_1_ToArray_m1190122030_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IComparer`1<!0>)
extern "C"  void SortedDictionary_2__ctor_m3288295410_gshared (SortedDictionary_2_t2109419753 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Char>::Add(!0,!1)
extern "C"  void SortedDictionary_2_Add_m1546321802_gshared (SortedDictionary_2_t2109419753 * __this, RuntimeObject * p0, Il2CppChar p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m2098009717_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C"  int32_t List_1_get_Item_m888956288_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C"  int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m2256214292_gshared (List_1_t128053199 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C"  void MaskableGraphic__ctor_m3705055375 (MaskableGraphic_t3839221559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SagoUI.GraphicUtil::IsEmpty(UnityEngine.Rect)
extern "C"  bool GraphicUtil_IsEmpty_m780344642 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SagoUI.FillType SagoUI.RectangleGraphic::get_Type()
extern "C"  int32_t RectangleGraphic_get_Type_m3343559332 (RectangleGraphic_t3224142083 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m627349662 (VertexHelper_t2453304189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUI.RectangleGraphic::get_Radius()
extern "C"  float RectangleGraphic_get_Radius_m1281855195 (RectangleGraphic_t3224142083 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C"  float Mathf_Min_m1073399594 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> SagoUI.ListPool`1<UnityEngine.UIVertex>::Get()
#define ListPool_1_Get_m1622481728(__this /* static, unused */, method) ((  List_1_t1234605051 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ListPool_1_Get_m1622481728_gshared)(__this /* static, unused */, method)
// System.Single UnityEngine.Rect::get_xMin()
extern "C"  float Rect_get_xMin_m581135837 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C"  float Rect_get_yMin_m2601414109 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUI.GraphicUtil::AddEllipseFill(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Rect,UnityEngine.Color,SagoUI.FillType,System.Int32,System.Int32)
extern "C"  void GraphicUtil_AddEllipseFill_m439162519 (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___verts0, Rect_t2360479859  ___rect1, Color_t2555686324  ___color2, int32_t ___fillType3, int32_t ___offset4, int32_t ___length5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C"  float Rect_get_yMax_m743455479 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C"  float Rect_get_xMax_m3018144503 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUI.GraphicUtil::AddRectFill(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Rect,UnityEngine.Color,SagoUI.FillType)
extern "C"  void GraphicUtil_AddRectFill_m1022726423 (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___verts0, Rect_t2360479859  ___rect1, Color_t2555686324  ___color2, int32_t ___fillType3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_AddUIVertexTriangleStream_m3255143338 (VertexHelper_t2453304189 * __this, List_1_t1234605051 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUI.ListPool`1<UnityEngine.UIVertex>::Put(System.Collections.Generic.List`1<T>)
#define ListPool_1_Put_m1533691536(__this /* static, unused */, p0, method) ((  void (*) (RuntimeObject * /* static, unused */, List_1_t1234605051 *, const RuntimeMethod*))ListPool_1_Put_m1533691536_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
extern "C"  void BaseMeshEffect__ctor_m2277545720 (BaseMeshEffect_t2440176439 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool Color_op_Inequality_m3353772181 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic SagoUI.RectangleOutline::get_Graphic()
extern "C"  Graphic_t1660335611 * RectangleOutline_get_Graphic_m2743134131 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
#define Component_GetComponent_TisGraphic_t1660335611_m1118939870(__this, method) ((  Graphic_t1660335611 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SagoUI.OutlineType SagoUI.RectangleOutline::get_Type()
extern "C"  int32_t RectangleOutline_get_Type_m656356213 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_GetUIVertexStream_m785241639 (VertexHelper_t2453304189 * __this, List_1_t1234605051 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color SagoUI.RectangleOutline::get_Color()
extern "C"  Color_t2555686324  RectangleOutline_get_Color_m288997635 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SagoUI.RectangleOutline::get_Size()
extern "C"  int32_t RectangleOutline_get_Size_m2381001638 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUI.GraphicUtil::AddEllipseOutline(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Rect,UnityEngine.Color,System.Int32,SagoUI.OutlineType,System.Int32,System.Int32)
extern "C"  void GraphicUtil_AddEllipseOutline_m1004658857 (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___verts0, Rect_t2360479859  ___rect1, Color_t2555686324  ___color2, int32_t ___size3, int32_t ___outlineType4, int32_t ___offset5, int32_t ___length6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUI.GraphicUtil::AddRectOutline(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Rect,UnityEngine.Color,System.Int32,SagoUI.OutlineType,SagoUI.EdgeType)
extern "C"  void GraphicUtil_AddRectOutline_m3140226879 (RuntimeObject * __this /* static, unused */, List_1_t1234605051 * ___verts0, Rect_t2360479859  ___rect1, Color_t2555686324  ___color2, int32_t ___size3, int32_t ___outlineType4, int32_t ___edgeType5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.BitMaskAttribute::.ctor(System.Int32)
extern "C"  void BitMaskAttribute__ctor_m2995985867 (BitMaskAttribute_t644927545 * __this, int32_t ___bitDepth0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C"  void PropertyAttribute__ctor_m1017741868 (PropertyAttribute_t3677895545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.BitMaskAttribute::set_BitDepth(System.Int32)
extern "C"  void BitMaskAttribute_set_BitDepth_m2704196635 (BitMaskAttribute_t644927545 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
#define Queue_1_Enqueue_m1950996988(__this, p0, method) ((  void (*) (Queue_1_t3446625415 *, Transform_t3600365921 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>::.ctor()
#define Dictionary_2__ctor_m148983829(__this, method) ((  void (*) (Dictionary_2_t3110615279 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m2230862294(__this, p0, method) ((  bool (*) (Dictionary_2_t3110615279 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Boolean SagoUtils.CoroutineHelper::IsRunningCoroutine(System.String)
extern "C"  bool CoroutineHelper_IsRunningCoroutine_m3583608436 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::WaitAndRemoveKeyAsync(System.String,System.Collections.IEnumerator)
extern "C"  RuntimeObject* CoroutineHelper_WaitAndRemoveKeyAsync_m413724311 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, RuntimeObject* ___routine1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine SagoUtils.CoroutineHelper::Run(System.String,System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * CoroutineHelper_Run_m291728135 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, RuntimeObject* ___routine1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine SagoUtils.CoroutineHelper::WaitForCoroutine(System.String)
extern "C"  Coroutine_t3829159415 * CoroutineHelper_WaitForCoroutine_m804117929 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::Multiplex(System.String,System.Collections.IEnumerator[])
extern "C"  RuntimeObject* CoroutineHelper_Multiplex_m2968313775 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, IEnumeratorU5BU5D_t2446662267* ___routines1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>::get_Keys()
#define Dictionary_2_get_Keys_m126213091(__this, method) ((  KeyCollection_t3300290750 * (*) (Dictionary_2_t3110615279 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisString_t_m4208096419(__this /* static, unused */, p0, method) ((  StringU5BU5D_t1281789340* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m698722831_gshared)(__this /* static, unused */, p0, method)
// System.Void SagoUtils.CoroutineHelper::StopCoroutine(System.String)
extern "C"  void CoroutineHelper_StopCoroutine_m3760196795 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>::get_Item(!0)
#define Dictionary_2_get_Item_m3660826981(__this, p0, method) ((  List_1_t3325358980 * (*) (Dictionary_2_t3110615279 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.IEnumerator>::GetEnumerator()
#define List_1_GetEnumerator_m2801683601(__this, method) ((  Enumerator_t919635561  (*) (List_1_t3325358980 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.IEnumerator>::get_Current()
#define Enumerator_get_Current_m2685438156(__this, method) ((  RuntimeObject* (*) (Enumerator_t919635561 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C"  void MonoBehaviour_StopCoroutine_m615723318 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.IEnumerator>::MoveNext()
#define Enumerator_MoveNext_m3678234787(__this, method) ((  bool (*) (Enumerator_t919635561 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.IEnumerator>::Dispose()
#define Enumerator_Dispose_m253033870(__this, method) ((  void (*) (Enumerator_t919635561 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>::Remove(!0)
#define Dictionary_2_Remove_m956812504(__this, p0, method) ((  bool (*) (Dictionary_2_t3110615279 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::WaitAsync(System.String)
extern "C"  RuntimeObject* CoroutineHelper_WaitAsync_m4166907781 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Collections.IEnumerator>::.ctor()
#define List_1__ctor_m2666686364(__this, method) ((  void (*) (List_1_t3325358980 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.IEnumerator>>::Add(!0,!1)
#define Dictionary_2_Add_m3053246148(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3110615279 *, String_t*, List_1_t3325358980 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Collections.IEnumerator>::Add(!0)
#define List_1_Add_m3304847818(__this, p0, method) ((  void (*) (List_1_t3325358980 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::.ctor()
extern "C"  void U3CMultiplexU3Ec__Iterator0__ctor_m1391122580 (U3CMultiplexU3Ec__Iterator0_t302329881 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::.ctor()
extern "C"  void U3CWaitAsyncU3Ec__Iterator1__ctor_m4213684516 (U3CWaitAsyncU3Ec__Iterator1_t2950487940 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::.ctor()
extern "C"  void U3CWaitAndDoActionAsyncU3Ec__Iterator2__ctor_m453852598 (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::.ctor()
extern "C"  void U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3__ctor_m1437572679 (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4::.ctor()
extern "C"  void U3CMultiplexU3Ec__AnonStorey4__ctor_m1725697509 (U3CMultiplexU3Ec__AnonStorey4_t1649747647 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::WaitAndDoActionAsync(System.String,System.Collections.IEnumerator,System.Action)
extern "C"  RuntimeObject* CoroutineHelper_WaitAndDoActionAsync_m212660141 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, RuntimeObject* ___routine1, Action_t1264377477 * ___action2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>::.ctor()
#define List_1__ctor_m171682946(__this, method) ((  void (*) (List_1_t3091537484 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
#define Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, method) ((  Transform_t3600365921 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void SagoUtils.DepthGroup::RemoveElement(SagoUtils.IDepthGroupElement)
extern "C"  void DepthGroup_RemoveElement_m2871942691 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.DepthGroup::get_Front()
extern "C"  float DepthGroup_get_Front_m1903138117 (DepthGroup_t827469246 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement> SagoUtils.DepthGroup::get_Elements()
extern "C"  List_1_t3091537484 * DepthGroup_get_Elements_m1001211316 (DepthGroup_t827469246 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>::Add(!0)
#define List_1_Add_m3392848684(__this, p0, method) ((  void (*) (List_1_t3091537484 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void SagoUtils.DepthGroup::SetElementDepth(SagoUtils.IDepthGroupElement,System.Single)
extern "C"  void DepthGroup_SetElementDepth_m2898598668 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, float ___depth1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.DepthGroup::ParentElement(SagoUtils.IDepthGroupElement)
extern "C"  void DepthGroup_ParentElement_m1792267520 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>::Invoke(!0,!1)
#define Action_2_Invoke_m4222411856(__this, p0, p1, method) ((  void (*) (Action_2_t946994486 *, DepthGroup_t827469246 *, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m1306929455_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>::Contains(!0)
#define List_1_Contains_m1847010743(__this, p0, method) ((  bool (*) (List_1_t3091537484 *, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Void SagoUtils.DepthGroup::DeparentElement(SagoUtils.IDepthGroupElement)
extern "C"  void DepthGroup_DeparentElement_m1238612792 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>::Remove(!0)
#define List_1_Remove_m489226418(__this, p0, method) ((  bool (*) (List_1_t3091537484 *, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void SagoUtils.DepthGroup::CompactElements()
extern "C"  void DepthGroup_CompactElements_m3459018040 (DepthGroup_t827469246 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.DepthGroup::get_Back()
extern "C"  float DepthGroup_get_Back_m2535911450 (DepthGroup_t827469246 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>::GetEnumerator()
#define List_1_GetEnumerator_m3534679060(__this, method) ((  Enumerator_t685814065  (*) (List_1_t3091537484 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<SagoUtils.IDepthGroupElement>::get_Current()
#define Enumerator_get_Current_m2756413605(__this, method) ((  RuntimeObject* (*) (Enumerator_t685814065 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<SagoUtils.IDepthGroupElement>::MoveNext()
#define Enumerator_MoveNext_m1859525188(__this, method) ((  bool (*) (Enumerator_t685814065 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<SagoUtils.IDepthGroupElement>::Dispose()
#define Enumerator_Dispose_m2071237891(__this, method) ((  void (*) (Enumerator_t685814065 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SagoUtils.DepthGroup::get_Transform()
extern "C"  Transform_t3600365921 * DepthGroup_get_Transform_m1034343722 (DepthGroup_t827469246 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SagoUtils.IDepthGroupElement SagoUtils.DepthGroup::get_LastElement()
extern "C"  RuntimeObject* DepthGroup_get_LastElement_m1291910834 (DepthGroup_t827469246 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.DepthGroup::GetElementDepth(SagoUtils.IDepthGroupElement)
extern "C"  float DepthGroup_GetElementDepth_m1081185450 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>::get_Count()
#define List_1_get_Count_m1191187158(__this, method) ((  int32_t (*) (List_1_t3091537484 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement>::get_Item(System.Int32)
#define List_1_get_Item_m4168911317(__this, p0, method) ((  RuntimeObject* (*) (List_1_t3091537484 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void SagoUtils.DisableAttribute::.ctor(System.Type,System.String,System.Int32,System.Boolean)
extern "C"  void DisableAttribute__ctor_m2721153583 (DisableAttribute_t1228211629 * __this, Type_t * ___type0, String_t* ___callbackMethodName1, int32_t ___indent2, bool ___hide3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SagoUtils.DisableAttribute/DisableCallback::Invoke(UnityEngine.Object)
extern "C"  bool DisableCallback_Invoke_m3059393442 (DisableCallback_t2385366335 * __this, Object_t631007953 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SagoUtils.GameObjectPool SagoUtils.GameObjectPool::Create(UnityEngine.GameObject[],System.Int32,UnityEngine.Transform)
extern "C"  GameObjectPool_t652050872 * GameObjectPool_Create_m3844627700 (RuntimeObject * __this /* static, unused */, GameObjectU5BU5D_t3328599146* ___prefabs0, int32_t ___poolSize1, Transform_t3600365921 * ___parent2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
#define GameObject_GetComponent_TisTransform_t3600365921_m3348034436(__this, method) ((  Transform_t3600365921 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<SagoUtils.GameObjectPool>()
#define GameObject_AddComponent_TisGameObjectPool_t652050872_m268313214(__this, method) ((  GameObjectPool_t652050872 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void SagoUtils.GameObjectPool::Initialize(UnityEngine.GameObject[],System.Int32)
extern "C"  void GameObjectPool_Initialize_m3180473883 (GameObjectPool_t652050872 * __this, GameObjectU5BU5D_t3328599146* ___prefabs0, int32_t ___poolSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SagoUtils.GameObjectPool::get_InactivePool()
extern "C"  Transform_t3600365921 * GameObjectPool_get_InactivePool_m3488871086 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SagoUtils.GameObjectPool/ExhaustBehaviour SagoUtils.GameObjectPool::get_ExhaustionBehaviour()
extern "C"  int32_t GameObjectPool_get_ExhaustionBehaviour_m3039066370 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.LinkedList`1<UnityEngine.Transform> SagoUtils.GameObjectPool::get_ActivePool()
extern "C"  LinkedList_1_t2440011930 * GameObjectPool_get_ActivePool_m169536063 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::get_First()
#define LinkedList_1_get_First_m1568734949(__this, method) ((  LinkedListNode_1_t3345541024 * (*) (LinkedList_1_t2440011930 *, const RuntimeMethod*))LinkedList_1_get_First_m1512309353_gshared)(__this, method)
// !0 System.Collections.Generic.LinkedListNode`1<UnityEngine.Transform>::get_Value()
#define LinkedListNode_1_get_Value_m3942835307(__this, method) ((  Transform_t3600365921 * (*) (LinkedListNode_1_t3345541024 *, const RuntimeMethod*))LinkedListNode_1_get_Value_m3891174027_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::RemoveFirst()
#define LinkedList_1_RemoveFirst_m66980987(__this, method) ((  void (*) (LinkedList_1_t2440011930 *, const RuntimeMethod*))LinkedList_1_RemoveFirst_m2082760208_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::get_Count()
#define LinkedList_1_get_Count_m2638462578(__this, method) ((  int32_t (*) (LinkedList_1_t2440011930 *, const RuntimeMethod*))LinkedList_1_get_Count_m2167432147_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedListNode`1<UnityEngine.Transform>::get_Next()
#define LinkedListNode_1_get_Next_m3111221169(__this, method) ((  LinkedListNode_1_t3345541024 * (*) (LinkedListNode_1_t3345541024 *, const RuntimeMethod*))LinkedListNode_1_get_Next_m569727209_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SagoUtils.GameObjectPool::get_PoolSize()
extern "C"  int32_t GameObjectPool_get_PoolSize_m2519445553 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.GameObjectPool::AddPrefabToPool(UnityEngine.GameObject,System.Int32)
extern "C"  void GameObjectPool_AddPrefabToPool_m2220640576 (GameObjectPool_t652050872 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___id1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.GameObjectPool::set_PoolSize(System.Int32)
extern "C"  void GameObjectPool_set_PoolSize_m1452149866 (GameObjectPool_t652050872 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform SagoUtils.GameObjectPool::get_Transform()
extern "C"  Transform_t3600365921 * GameObjectPool_get_Transform_m2953483669 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::AddLast(!0)
#define LinkedList_1_AddLast_m1788386392(__this, p0, method) ((  LinkedListNode_1_t3345541024 * (*) (LinkedList_1_t2440011930 *, Transform_t3600365921 *, const RuntimeMethod*))LinkedList_1_AddLast_m3177585097_gshared)(__this, p0, method)
// System.Boolean SagoUtils.GameObjectPool::get_ApplyRandomScaling()
extern "C"  bool GameObjectPool_get_ApplyRandomScaling_m1157783101 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 SagoUtils.GameObjectPool::get_ScaleRange()
extern "C"  Vector2_t2156229523  GameObjectPool_get_ScaleRange_m2463008501 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C"  float Vector2_get_Item_m3559215723 (Vector2_t2156229523 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject SagoUtils.GameObjectPool::Spawn(UnityEngine.Vector3)
extern "C"  GameObject_t1113636619 * GameObjectPool_Spawn_m746690209 (GameObjectPool_t652050872 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_eulerAngles_m135219616 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::Remove(!0)
#define LinkedList_1_Remove_m2698749224(__this, p0, method) ((  bool (*) (LinkedList_1_t2440011930 *, Transform_t3600365921 *, const RuntimeMethod*))LinkedList_1_Remove_m2993726015_gshared)(__this, p0, method)
// System.Collections.Generic.LinkedListNode`1<!0> System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::get_Last()
#define LinkedList_1_get_Last_m657854566(__this, method) ((  LinkedListNode_1_t3345541024 * (*) (LinkedList_1_t2440011930 *, const RuntimeMethod*))LinkedList_1_get_Last_m593530567_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::RemoveLast()
#define LinkedList_1_RemoveLast_m4283516115(__this, method) ((  void (*) (LinkedList_1_t2440011930 *, const RuntimeMethod*))LinkedList_1_RemoveLast_m2923798972_gshared)(__this, method)
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C"  int32_t Mathf_Min_m18103608 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.GameObjectPool::Destroy(UnityEngine.GameObject)
extern "C"  void GameObjectPool_Destroy_m3456973204 (GameObjectPool_t652050872 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.GameObjectPool::set_ExhaustionBehaviour(SagoUtils.GameObjectPool/ExhaustBehaviour)
extern "C"  void GameObjectPool_set_ExhaustionBehaviour_m2975725181 (GameObjectPool_t652050872 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.GameObjectPool::set_ApplyRandomScaling(System.Boolean)
extern "C"  void GameObjectPool_set_ApplyRandomScaling_m2491482108 (GameObjectPool_t652050872 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.GameObjectPool::set_ScaleRange(UnityEngine.Vector2)
extern "C"  void GameObjectPool_set_ScaleRange_m1722613115 (GameObjectPool_t652050872 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.GameObjectPool::set_InactivePool(UnityEngine.Transform)
extern "C"  void GameObjectPool_set_InactivePool_m591426605 (GameObjectPool_t652050872 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.LinkedList`1<UnityEngine.Transform>::.ctor()
#define LinkedList_1__ctor_m3943846788(__this, method) ((  void (*) (LinkedList_1_t2440011930 *, const RuntimeMethod*))LinkedList_1__ctor_m3670635350_gshared)(__this, method)
// System.Void SagoUtils.GameObjectPool::set_ActivePool(System.Collections.Generic.LinkedList`1<UnityEngine.Transform>)
extern "C"  void GameObjectPool_set_ActivePool_m3480644315 (GameObjectPool_t652050872 * __this, LinkedList_1_t2440011930 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.String::IndexOf(System.String)
extern "C"  int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t3294940482* GameObject_GetComponentsInChildren_m2214160636 (GameObject_t1113636619 * __this, Type_t * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SagoUtils.HttpUtility/HttpEncoder SagoUtils.HttpUtility/HttpEncoder::get_Current()
extern "C"  HttpEncoder_t1079200364 * HttpEncoder_get_Current_m1693310279 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m1244548890 (StringWriter_t802263757 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility::UrlDecode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m2264918457 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
#define List_1__ctor_m934990389(__this, method) ((  void (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1__ctor_m934990389_gshared)(__this, method)
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SagoUtils.HttpUtility::GetChar(System.String,System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_GetChar_m2499508585 (RuntimeObject * __this /* static, unused */, String_t* ___str0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility::WriteCharBytes(System.Collections.IList,System.Char,System.Text.Encoding)
extern "C"  void HttpUtility_WriteCharBytes_m2961547955 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buf0, Il2CppChar ___ch1, Encoding_t1523322056 * ___e2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
#define List_1_ToArray_m1190122030(__this, method) ((  ByteU5BU5D_t4116647657* (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1_ToArray_m1190122030_gshared)(__this, method)
// System.String SagoUtils.HttpUtility::UrlDecode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m2390869312 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, Encoding_t1523322056 * ___e3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SagoUtils.HttpUtility::GetInt(System.Byte)
extern "C"  int32_t HttpUtility_GetInt_m490971910 (RuntimeObject * __this /* static, unused */, uint8_t ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] SagoUtils.HttpUtility::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C"  CharU5BU5D_t3528271667* HttpUtility_GetChars_m3924744051 (RuntimeObject * __this /* static, unused */, MemoryStream_t94973147 * ___b0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
extern "C"  StringBuilder_t * StringBuilder_Append_m168475016 (StringBuilder_t * __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SagoUtils.HttpUtility::GetChar(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_GetChar_m1864332797 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SagoUtils.HttpUtility::UrlDecodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlDecodeToBytes_m1430994491 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SagoUtils.HttpUtility::UrlDecodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlDecodeToBytes_m3532509229 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SagoUtils.HttpUtility::UrlDecodeToBytes(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlDecodeToBytes_m2416383386 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility::UrlEncode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlEncode_m1044327035 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SagoUtils.HttpUtility/HttpEncoder::NotEncoded(System.Char)
extern "C"  bool HttpEncoder_NotEncoded_m2696983216 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C"  Encoding_t1523322056 * Encoding_get_ASCII_m3595602635 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeToBytes_m395923693 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeToBytes_m236747677 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeUnicodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeUnicodeToBytes_m760220488 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C"  void MemoryStream__ctor_m2128850779 (MemoryStream_t94973147 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility/HttpEncoder::UrlEncodeChar(System.Char,System.IO.Stream,System.Boolean)
extern "C"  void HttpEncoder_UrlEncodeChar_m2873453018 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t1273022909 * ___result1, bool ___isUnicode2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility::HtmlEncode(System.String)
extern "C"  String_t* HttpUtility_HtmlEncode_m2154928422 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility::JavaScriptStringEncode(System.String,System.Boolean)
extern "C"  String_t* HttpUtility_JavaScriptStringEncode_m1748003000 (RuntimeObject * __this /* static, unused */, String_t* ___value0, bool ___addDoubleQuotes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m3016532472 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection SagoUtils.HttpUtility::ParseQueryString(System.String,System.Text.Encoding)
extern "C"  NameValueCollection_t407452768 * HttpUtility_ParseQueryString_m3878509040 (RuntimeObject * __this /* static, unused */, String_t* ___query0, Encoding_t1523322056 * ___encoding1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility/HttpQSCollection::.ctor()
extern "C"  void HttpQSCollection__ctor_m1930281858 (HttpQSCollection_t520254410 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility::ParseQueryString(System.String,System.Text.Encoding,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpUtility_ParseQueryString_m2916514068 (RuntimeObject * __this /* static, unused */, String_t* ___query0, Encoding_t1523322056 * ___encoding1, NameValueCollection_t407452768 * ___result2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility::HtmlDecode(System.String)
extern "C"  String_t* HttpUtility_HtmlDecode_m1166999110 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility/HttpEncoder::InitEntities()
extern "C"  void HttpEncoder_InitEntities_m3617558546 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility/HttpEncoder::.ctor()
extern "C"  void HttpEncoder__ctor_m1099542477 (HttpEncoder_t1079200364 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility/HttpEncoder::EncodeHeaderString(System.String)
extern "C"  String_t* HttpEncoder_EncodeHeaderString_m4228722004 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C"  void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility/HttpEncoder::StringBuilderAppend(System.String,System.Text.StringBuilder&)
extern "C"  void HttpEncoder_StringBuilderAppend_m4138471539 (RuntimeObject * __this /* static, unused */, String_t* ___s0, StringBuilder_t ** ___sb1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility/HttpEncoder::HtmlAttributeEncode(System.String)
extern "C"  String_t* HttpEncoder_HtmlAttributeEncode_m4263100397 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility/HttpEncoder::HtmlDecode(System.String)
extern "C"  String_t* HttpEncoder_HtmlDecode_m782726803 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility/HttpEncoder::HtmlEncode(System.String)
extern "C"  String_t* HttpEncoder_HtmlEncode_m4208094472 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SagoUtils.HttpUtility/HttpEncoder::UrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* HttpEncoder_UrlEncodeToBytes_m3802928077 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.HttpUtility/HttpEncoder::UrlPathEncodeChar(System.Char,System.IO.Stream)
extern "C"  void HttpEncoder_UrlPathEncodeChar_m373787148 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t1273022909 * ___result1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.IFormatProvider)
extern "C"  String_t* Int32_ToString_m1760361794 (int32_t* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C"  void StringBuilder_set_Length_m1410065908 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Char> SagoUtils.HttpUtility/HttpEncoder::get_Entities()
extern "C"  RuntimeObject* HttpEncoder_get_Entities_m2707916450 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m3389749670 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C"  int32_t Uri_FromHex_m2610708947 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m3646673943 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_Ordinal()
extern "C"  StringComparer_t3301955079 * StringComparer_get_Ordinal_m2103862281 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.Char>::.ctor(System.Collections.Generic.IComparer`1<!0>)
#define SortedDictionary_2__ctor_m948750160(__this, p0, method) ((  void (*) (SortedDictionary_2_t547269768 *, RuntimeObject*, const RuntimeMethod*))SortedDictionary_2__ctor_m3288295410_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.Char>::Add(!0,!1)
#define SortedDictionary_2_Add_m3746728377(__this, p0, p1, method) ((  void (*) (SortedDictionary_2_t547269768 *, String_t*, Il2CppChar, const RuntimeMethod*))SortedDictionary_2_Add_m1546321802_gshared)(__this, p0, p1, method)
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C"  void NameValueCollection__ctor_m1115358332 (NameValueCollection_t407452768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C"  String_t* NameValueCollection_get_Item_m3979995533 (NameValueCollection_t407452768 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.HttpUtility::UrlEncode(System.String)
extern "C"  String_t* HttpUtility_UrlEncode_m516994993 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m3255666490 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
extern "C"  void JsonSerializerSettings__ctor_m1558552505 (JsonSerializerSettings_t2139255314 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.UnderscoreLowerCasePropertyNameContractResolver::.ctor()
extern "C"  void UnderscoreLowerCasePropertyNameContractResolver__ctor_m2242214215 (UnderscoreLowerCasePropertyNameContractResolver_t1847614001 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
extern "C"  void JsonSerializerSettings_set_ContractResolver_m3015043835 (JsonSerializerSettings_t2139255314 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::get_CSharpToJsonSettings()
extern "C"  JsonSerializerSettings_t2139255314 * JsonConvert_get_CSharpToJsonSettings_m2426135370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::get_JsonToCSharpSettings()
extern "C"  JsonSerializerSettings_t2139255314 * JsonConvert_get_JsonToCSharpSettings_m1865309167 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.JsonConvert::SerializeObject(System.Object,SagoUtils.JsonConvert/Formatting,SagoUtils.JsonConvert/Settings)
extern "C"  String_t* JsonConvert_SerializeObject_m1962767517 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___formatting1, int32_t ___settings2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Formatting SagoUtils.JsonConvert::MapFormatting(SagoUtils.JsonConvert/Formatting)
extern "C"  int32_t JsonConvert_MapFormatting_m3344890768 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::MapSettings(SagoUtils.JsonConvert/Settings)
extern "C"  JsonSerializerSettings_t2139255314 * JsonConvert_MapSettings_m3107228651 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  String_t* JsonConvert_SerializeObject_m2550185670 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___formatting1, JsonSerializerSettings_t2139255314 * ___settings2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m205717112(__this, method) ((  Enumerator_t524577942  (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
#define Enumerator_get_Current_m2826511327(__this, method) ((  KeyValuePair_2_t968067334  (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m644949463(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3201775128(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.JsonConvert::UnwrapDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  String_t* JsonConvert_UnwrapDictionary_m105442745 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
#define Enumerator_MoveNext_m1546927415(__this, method) ((  bool (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
#define Enumerator_Dispose_m2607424534(__this, method) ((  void (*) (Enumerator_t524577942 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Char System.Char::ToUpper(System.Char,System.Globalization.CultureInfo)
extern "C"  Il2CppChar Char_ToUpper_m3659851865 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, CultureInfo_t4157843068 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString(System.IFormatProvider)
extern "C"  String_t* Char_ToString_m278452217 (Il2CppChar* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C"  StringU5BU5D_t1281789340* String_Split_m4013853433 (String_t* __this, StringU5BU5D_t1281789340* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.JsonConvertStringExtensions::SingleWordToPascalCase(System.String)
extern "C"  String_t* JsonConvertStringExtensions_SingleWordToPascalCase_m3277782807 (RuntimeObject * __this /* static, unused */, String_t* ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char)
extern "C"  Il2CppChar Char_ToLower_m844856331 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsUpper(System.Char)
extern "C"  bool Char_IsUpper_m3564669513 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.MathUtil::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtil_SignedAngle_m2001049097 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___from0, Vector3_t3722313464  ___to1, Vector3_t3722313464  ___positiveAxis2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_Cross_m418170344 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m3731191531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SagoUtils.MathUtil::SphericalToCartesian(System.Single,System.Single,System.Single)
extern "C"  Vector3_t3722313464  MathUtil_SphericalToCartesian_m1683036392 (RuntimeObject * __this /* static, unused */, float ___r0, float ___theta1, float ___phi2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.MathUtil::WrappedPeriodic(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_WrappedPeriodic_m2041737671 (RuntimeObject * __this /* static, unused */, float ___t0, float ___period1, float ___shift2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.MathUtil::WrappedPeriodic(System.Single,System.Single)
extern "C"  float MathUtil_WrappedPeriodic_m1327718945 (RuntimeObject * __this /* static, unused */, float ___t0, float ___period1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.MathUtil::Gaussian01(System.Single)
extern "C"  float MathUtil_Gaussian01_m2057007154 (RuntimeObject * __this /* static, unused */, float ___x0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.MinMaxAttribute::set_Range(UnityEngine.Vector2)
extern "C"  void MinMaxAttribute_set_Range_m3041826637 (MinMaxAttribute_t3517683683 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.MinMaxAttribute::.ctor(System.Single,System.Single)
extern "C"  void MinMaxAttribute__ctor_m783331338 (MinMaxAttribute_t3517683683 * __this, float ___min0, float ___max1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.MinMaxAttribute::set_IsInteger(System.Boolean)
extern "C"  void MinMaxAttribute_set_IsInteger_m2578033018 (MinMaxAttribute_t3517683683 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor(System.Boolean)
extern "C"  void DefaultContractResolver__ctor_m1568516071 (DefaultContractResolver_t270250618 * __this, bool ___shareCache0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.JsonConvertStringExtensions::UnderscoreWordsToPascalCase(System.String)
extern "C"  String_t* JsonConvertStringExtensions_UnderscoreWordsToPascalCase_m3315807175 (RuntimeObject * __this /* static, unused */, String_t* ___underscore_lowercase_words0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.RandomArrayIndex::set_CurrentIndex(System.Int32)
extern "C"  void RandomArrayIndex_set_CurrentIndex_m197402667 (RandomArrayIndex_t3579152736 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
#define List_1__ctor_m2098009717(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1__ctor_m2098009717_gshared)(__this, p0, method)
// System.Void SagoUtils.RandomArrayIndex::set_Indices(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void RandomArrayIndex_set_Indices_m204986401 (RandomArrayIndex_t3579152736 * __this, List_1_t128053199 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> SagoUtils.RandomArrayIndex::get_Indices()
extern "C"  List_1_t128053199 * RandomArrayIndex_get_Indices_m3403232278 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Void SagoUtils.RandomArrayIndex::Shuffle()
extern "C"  void RandomArrayIndex_Shuffle_m3193772106 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SagoUtils.RandomArrayIndex::get_Current()
extern "C"  int32_t RandomArrayIndex_get_Current_m552785780 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SagoUtils.RandomArrayIndex::get_CurrentIndex()
extern "C"  int32_t RandomArrayIndex_get_CurrentIndex_m2701359768 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
#define List_1_get_Item_m888956288(__this, p0, method) ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m888956288_gshared)(__this, p0, method)
// System.Void SagoUtils.RandomArrayIndex::Increment()
extern "C"  void RandomArrayIndex_Increment_m3426233089 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
#define List_1_get_Count_m361000296(__this, method) ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method)
// System.Int32 SagoUtils.RandomArrayIndex::get_Count()
extern "C"  int32_t RandomArrayIndex_get_Count_m2135701068 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
#define List_1_set_Item_m2256214292(__this, p0, p1, method) ((  void (*) (List_1_t128053199 *, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m2256214292_gshared)(__this, p0, p1, method)
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C"  Bounds_t2266837910  Renderer_get_bounds_m1803204000 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t3722313464  Bounds_get_size_m1178783246 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m4231250055 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C"  void Bounds_set_center_m335768106 (Bounds_t2266837910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.ShakeDetector::set_LowPassFilterFactor(System.Single)
extern "C"  void ShakeDetector_set_LowPassFilterFactor_m2653359489 (ShakeDetector_t2778083360 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C"  Vector3_t3722313464  Input_get_acceleration_m2528400370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoUtils.ShakeDetector::set_LowPassValue(UnityEngine.Vector3)
extern "C"  void ShakeDetector_set_LowPassValue_m1003706393 (ShakeDetector_t2778083360 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SagoUtils.ShakeDetector::LowPassFilter()
extern "C"  Vector3_t3722313464  ShakeDetector_LowPassFilter_m2172051850 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C"  float Vector3_SqrMagnitude_m3025115945 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.ShakeDetector::get_ShakeAllowance()
extern "C"  float ShakeDetector_get_ShakeAllowance_m2262525406 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<SagoUtils.ShakeDetector>::Invoke(!0)
#define Action_1_Invoke_m2963213119(__this, p0, method) ((  void (*) (Action_1_t2950550955 *, ShakeDetector_t2778083360 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// UnityEngine.Vector3 SagoUtils.ShakeDetector::get_LowPassValue()
extern "C"  Vector3_t3722313464  ShakeDetector_get_LowPassValue_m1683160545 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.ShakeDetector::get_LowPassFilterFactor()
extern "C"  float ShakeDetector_get_LowPassFilterFactor_m3616048145 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SagoUtils.GameObjectPool SagoUtils.SimplePooledObject::get_GameObjectPool()
extern "C"  GameObjectPool_t652050872 * SimplePooledObject_get_GameObjectPool_m367816766 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SagoUtils.SimplePooledObject::get_MaxDuration()
extern "C"  float SimplePooledObject_get_MaxDuration_m2201005988 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SagoCore.Submodules.SubmoduleInfo::.ctor()
extern "C"  void SubmoduleInfo__ctor_m1019278132 (SubmoduleInfo_t3488963427 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String SagoUtils.JsonConvertStringExtensions::PascalToUnderscoreCase(System.String)
extern "C"  String_t* JsonConvertStringExtensions_PascalToUnderscoreCase_m1164626889 (RuntimeObject * __this /* static, unused */, String_t* ___words0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m1346091703(__this, method) ((  void (*) (Dictionary_2_t2865362463 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
extern "C"  void RectTransform_GetWorldCorners_m3553547973 (RectTransform_t3704657025 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C"  int32_t Canvas_get_renderMode_m841659411 (Canvas_t3310196443 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C"  Camera_t4157153871 * Canvas_get_worldCamera_m3516267897 (Canvas_t3310196443 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  RectTransformUtility_WorldToScreenPoint_m3914148572 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Rect__ctor_m1342368573 (Rect_t2360479859 * __this, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void SagoUI.RectangleGraphic::.ctor()
extern "C"  void RectangleGraphic__ctor_m1914607647 (RectangleGraphic_t3224142083 * __this, const RuntimeMethod* method)
{
	{
		MaskableGraphic__ctor_m3705055375(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SagoUI.RectangleGraphic::get_Radius()
extern "C"  float RectangleGraphic_get_Radius_m1281855195 (RectangleGraphic_t3224142083 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Radius_28();
		return L_0;
	}
}
// System.Void SagoUI.RectangleGraphic::set_Radius(System.Single)
extern "C"  void RectangleGraphic_set_Radius_m605161440 (RectangleGraphic_t3224142083 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Radius_28();
		float L_1 = ___value0;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		float L_2 = ___value0;
		__this->set_m_Radius_28(L_2);
		VirtActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, __this);
	}

IL_0019:
	{
		return;
	}
}
// SagoUI.FillType SagoUI.RectangleGraphic::get_Type()
extern "C"  int32_t RectangleGraphic_get_Type_m3343559332 (RectangleGraphic_t3224142083 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Type_29();
		return L_0;
	}
}
// System.Void SagoUI.RectangleGraphic::set_Type(SagoUI.FillType)
extern "C"  void RectangleGraphic_set_Type_m702680376 (RectangleGraphic_t3224142083 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Type_29();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set_m_Type_29(L_2);
		VirtActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, __this);
	}

IL_0019:
	{
		return;
	}
}
// System.Void SagoUI.RectangleGraphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void RectangleGraphic_OnPopulateMesh_m2901344245 (RectangleGraphic_t3224142083 * __this, VertexHelper_t2453304189 * ___helper0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectangleGraphic_OnPopulateMesh_m2901344245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	List_1_t1234605051 * V_3 = NULL;
	{
		RectTransform_t3704657025 * L_0 = Graphic_get_rectTransform_m1167152468(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rect_t2360479859  L_1 = RectTransform_get_rect_m574169965(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Rect_t2360479859  L_2 = V_0;
		bool L_3 = GraphicUtil_IsEmpty_m780344642(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}

IL_0022:
	{
		VertexHelper_t2453304189 * L_5 = ___helper0;
		NullCheck(L_5);
		VertexHelper_Clear_m627349662(L_5, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		float L_6 = RectangleGraphic_get_Radius_m1281855195(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = V_1;
		float L_8 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_7, ((float)il2cpp_codegen_multiply((float)L_8, (float)(0.5f))), /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		float L_11 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		float L_12 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_10, ((float)il2cpp_codegen_multiply((float)L_11, (float)(0.5f))), /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(2.0f)));
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t1287367823_il2cpp_TypeInfo_var);
		List_1_t1234605051 * L_14 = ListPool_1_Get_m1622481728(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1622481728_RuntimeMethod_var);
		V_3 = L_14;
		List_1_t1234605051 * L_15 = V_3;
		float L_16 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_17 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_18 = V_2;
		float L_19 = V_2;
		Rect_t2360479859  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Rect__ctor_m2614021312((&L_20), L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		Color_t2555686324  L_21 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		int32_t L_22 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseFill_m439162519(NULL /*static, unused*/, L_15, L_20, L_21, L_22, ((int32_t)180), ((int32_t)90), /*hidden argument*/NULL);
		List_1_t1234605051 * L_23 = V_3;
		float L_24 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_25 = Rect_get_yMax_m743455479((&V_0), /*hidden argument*/NULL);
		float L_26 = V_2;
		float L_27 = V_2;
		float L_28 = V_2;
		Rect_t2360479859  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Rect__ctor_m2614021312((&L_29), L_24, ((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)), L_27, L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		int32_t L_31 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseFill_m439162519(NULL /*static, unused*/, L_23, L_29, L_30, L_31, ((int32_t)90), ((int32_t)90), /*hidden argument*/NULL);
		List_1_t1234605051 * L_32 = V_3;
		float L_33 = Rect_get_xMax_m3018144503((&V_0), /*hidden argument*/NULL);
		float L_34 = V_2;
		float L_35 = Rect_get_yMax_m743455479((&V_0), /*hidden argument*/NULL);
		float L_36 = V_2;
		float L_37 = V_2;
		float L_38 = V_2;
		Rect_t2360479859  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Rect__ctor_m2614021312((&L_39), ((float)il2cpp_codegen_subtract((float)L_33, (float)L_34)), ((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), L_37, L_38, /*hidden argument*/NULL);
		Color_t2555686324  L_40 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		int32_t L_41 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseFill_m439162519(NULL /*static, unused*/, L_32, L_39, L_40, L_41, 0, ((int32_t)90), /*hidden argument*/NULL);
		List_1_t1234605051 * L_42 = V_3;
		float L_43 = Rect_get_xMax_m3018144503((&V_0), /*hidden argument*/NULL);
		float L_44 = V_2;
		float L_45 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_46 = V_2;
		float L_47 = V_2;
		Rect_t2360479859  L_48;
		memset(&L_48, 0, sizeof(L_48));
		Rect__ctor_m2614021312((&L_48), ((float)il2cpp_codegen_subtract((float)L_43, (float)L_44)), L_45, L_46, L_47, /*hidden argument*/NULL);
		Color_t2555686324  L_49 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		int32_t L_50 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseFill_m439162519(NULL /*static, unused*/, L_42, L_48, L_49, L_50, ((int32_t)270), ((int32_t)90), /*hidden argument*/NULL);
		List_1_t1234605051 * L_51 = V_3;
		float L_52 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_53 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_54 = V_1;
		float L_55 = V_1;
		float L_56 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		float L_57 = V_2;
		Rect_t2360479859  L_58;
		memset(&L_58, 0, sizeof(L_58));
		Rect__ctor_m2614021312((&L_58), L_52, ((float)il2cpp_codegen_add((float)L_53, (float)L_54)), L_55, ((float)il2cpp_codegen_subtract((float)L_56, (float)L_57)), /*hidden argument*/NULL);
		Color_t2555686324  L_59 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		int32_t L_60 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		GraphicUtil_AddRectFill_m1022726423(NULL /*static, unused*/, L_51, L_58, L_59, L_60, /*hidden argument*/NULL);
		List_1_t1234605051 * L_61 = V_3;
		float L_62 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_63 = V_1;
		float L_64 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_65 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		float L_66 = V_2;
		float L_67 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		Rect_t2360479859  L_68;
		memset(&L_68, 0, sizeof(L_68));
		Rect__ctor_m2614021312((&L_68), ((float)il2cpp_codegen_add((float)L_62, (float)L_63)), L_64, ((float)il2cpp_codegen_subtract((float)L_65, (float)L_66)), L_67, /*hidden argument*/NULL);
		Color_t2555686324  L_69 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		int32_t L_70 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		GraphicUtil_AddRectFill_m1022726423(NULL /*static, unused*/, L_61, L_68, L_69, L_70, /*hidden argument*/NULL);
		List_1_t1234605051 * L_71 = V_3;
		float L_72 = Rect_get_xMax_m3018144503((&V_0), /*hidden argument*/NULL);
		float L_73 = V_1;
		float L_74 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_75 = V_1;
		float L_76 = V_1;
		float L_77 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		float L_78 = V_2;
		Rect_t2360479859  L_79;
		memset(&L_79, 0, sizeof(L_79));
		Rect__ctor_m2614021312((&L_79), ((float)il2cpp_codegen_subtract((float)L_72, (float)L_73)), ((float)il2cpp_codegen_add((float)L_74, (float)L_75)), L_76, ((float)il2cpp_codegen_subtract((float)L_77, (float)L_78)), /*hidden argument*/NULL);
		Color_t2555686324  L_80 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		int32_t L_81 = RectangleGraphic_get_Type_m3343559332(__this, /*hidden argument*/NULL);
		GraphicUtil_AddRectFill_m1022726423(NULL /*static, unused*/, L_71, L_79, L_80, L_81, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_82 = ___helper0;
		NullCheck(L_82);
		VertexHelper_Clear_m627349662(L_82, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_83 = ___helper0;
		List_1_t1234605051 * L_84 = V_3;
		NullCheck(L_83);
		VertexHelper_AddUIVertexTriangleStream_m3255143338(L_83, L_84, /*hidden argument*/NULL);
		List_1_t1234605051 * L_85 = V_3;
		ListPool_1_Put_m1533691536(NULL /*static, unused*/, L_85, /*hidden argument*/ListPool_1_Put_m1533691536_RuntimeMethod_var);
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
// System.Void SagoUI.RectangleOutline::.ctor()
extern "C"  void RectangleOutline__ctor_m205793924 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method)
{
	{
		BaseMeshEffect__ctor_m2277545720(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color SagoUI.RectangleOutline::get_Color()
extern "C"  Color_t2555686324  RectangleOutline_get_Color_m288997635 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = __this->get_m_Color_3();
		return L_0;
	}
}
// System.Void SagoUI.RectangleOutline::set_Color(UnityEngine.Color)
extern "C"  void RectangleOutline_set_Color_m3712021723 (RectangleOutline_t2230321377 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = __this->get_m_Color_3();
		Color_t2555686324  L_1 = ___value0;
		bool L_2 = Color_op_Inequality_m3353772181(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Color_t2555686324  L_3 = ___value0;
		__this->set_m_Color_3(L_3);
		Graphic_t1660335611 * L_4 = RectangleOutline_get_Graphic_m2743134131(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_4);
	}

IL_0023:
	{
		return;
	}
}
// UnityEngine.UI.Graphic SagoUI.RectangleOutline::get_Graphic()
extern "C"  Graphic_t1660335611 * RectangleOutline_get_Graphic_m2743134131 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectangleOutline_get_Graphic_m2743134131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Graphic_t1660335611 * V_0 = NULL;
	Graphic_t1660335611 * G_B2_0 = NULL;
	RectangleOutline_t2230321377 * G_B2_1 = NULL;
	Graphic_t1660335611 * G_B1_0 = NULL;
	RectangleOutline_t2230321377 * G_B1_1 = NULL;
	{
		Graphic_t1660335611 * L_0 = __this->get_m_Graphic_4();
		Graphic_t1660335611 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		Graphic_t1660335611 * L_2 = Component_GetComponent_TisGraphic_t1660335611_m1118939870(__this, /*hidden argument*/Component_GetComponent_TisGraphic_t1660335611_m1118939870_RuntimeMethod_var);
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0014:
	{
		Graphic_t1660335611 * L_3 = G_B2_0;
		V_0 = L_3;
		NullCheck(G_B2_1);
		G_B2_1->set_m_Graphic_4(L_3);
		Graphic_t1660335611 * L_4 = V_0;
		return L_4;
	}
}
// System.Int32 SagoUI.RectangleOutline::get_Size()
extern "C"  int32_t RectangleOutline_get_Size_m2381001638 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Size_5();
		return L_0;
	}
}
// System.Void SagoUI.RectangleOutline::set_Size(System.Int32)
extern "C"  void RectangleOutline_set_Size_m972378259 (RectangleOutline_t2230321377 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Size_5();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set_m_Size_5(L_2);
		Graphic_t1660335611 * L_3 = RectangleOutline_get_Graphic_m2743134131(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_3);
	}

IL_001e:
	{
		return;
	}
}
// SagoUI.OutlineType SagoUI.RectangleOutline::get_Type()
extern "C"  int32_t RectangleOutline_get_Type_m656356213 (RectangleOutline_t2230321377 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Type_6();
		return L_0;
	}
}
// System.Void SagoUI.RectangleOutline::set_Type(SagoUI.OutlineType)
extern "C"  void RectangleOutline_set_Type_m459993424 (RectangleOutline_t2230321377 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Type_6();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set_m_Type_6(L_2);
		Graphic_t1660335611 * L_3 = RectangleOutline_get_Graphic_m2743134131(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void SagoUI.RectangleOutline::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C"  void RectangleOutline_ModifyMesh_m1010257351 (RectangleOutline_t2230321377 * __this, VertexHelper_t2453304189 * ___helper0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectangleOutline_ModifyMesh_m1010257351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	List_1_t1234605051 * V_3 = NULL;
	Rect_t2360479859  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Rect_t2360479859  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Graphic_t1660335611 * L_0 = RectangleOutline_get_Graphic_m2743134131(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Graphic_t1660335611 * L_2 = RectangleOutline_get_Graphic_m2743134131(__this, /*hidden argument*/NULL);
		if (!((RectangleGraphic_t3224142083 *)IsInstClass((RuntimeObject*)L_2, RectangleGraphic_t3224142083_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		return;
	}

IL_002c:
	{
		Graphic_t1660335611 * L_4 = RectangleOutline_get_Graphic_m2743134131(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_t3704657025 * L_5 = Graphic_get_rectTransform_m1167152468(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rect_t2360479859  L_6 = RectTransform_get_rect_m574169965(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Rect_t2360479859  L_7 = V_0;
		bool L_8 = GraphicUtil_IsEmpty_m780344642(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}

IL_0049:
	{
		Graphic_t1660335611 * L_9 = RectangleOutline_get_Graphic_m2743134131(__this, /*hidden argument*/NULL);
		NullCheck(((RectangleGraphic_t3224142083 *)IsInstClass((RuntimeObject*)L_9, RectangleGraphic_t3224142083_il2cpp_TypeInfo_var)));
		float L_10 = RectangleGraphic_get_Radius_m1281855195(((RectangleGraphic_t3224142083 *)IsInstClass((RuntimeObject*)L_9, RectangleGraphic_t3224142083_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = V_1;
		float L_12 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)(0.5f))), /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = V_1;
		float L_15 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		float L_16 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_14, ((float)il2cpp_codegen_multiply((float)L_15, (float)(0.5f))), /*hidden argument*/NULL);
		V_1 = L_16;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_17, (float)(2.0f)));
		IL2CPP_RUNTIME_CLASS_INIT(ListPool_1_t1287367823_il2cpp_TypeInfo_var);
		List_1_t1234605051 * L_18 = ListPool_1_Get_m1622481728(NULL /*static, unused*/, /*hidden argument*/ListPool_1_Get_m1622481728_RuntimeMethod_var);
		V_3 = L_18;
		VertexHelper_t2453304189 * L_19 = ___helper0;
		List_1_t1234605051 * L_20 = V_3;
		NullCheck(L_19);
		VertexHelper_GetUIVertexStream_m785241639(L_19, L_20, /*hidden argument*/NULL);
		List_1_t1234605051 * L_21 = V_3;
		float L_22 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_23 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_24 = V_2;
		float L_25 = V_2;
		Rect_t2360479859  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Rect__ctor_m2614021312((&L_26), L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		Color_t2555686324  L_27 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_28 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_29 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseOutline_m1004658857(NULL /*static, unused*/, L_21, L_26, L_27, L_28, L_29, ((int32_t)180), ((int32_t)90), /*hidden argument*/NULL);
		List_1_t1234605051 * L_30 = V_3;
		float L_31 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_32 = Rect_get_yMax_m743455479((&V_0), /*hidden argument*/NULL);
		float L_33 = V_2;
		float L_34 = V_2;
		float L_35 = V_2;
		Rect_t2360479859  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Rect__ctor_m2614021312((&L_36), L_31, ((float)il2cpp_codegen_subtract((float)L_32, (float)L_33)), L_34, L_35, /*hidden argument*/NULL);
		Color_t2555686324  L_37 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_38 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_39 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseOutline_m1004658857(NULL /*static, unused*/, L_30, L_36, L_37, L_38, L_39, ((int32_t)90), ((int32_t)90), /*hidden argument*/NULL);
		List_1_t1234605051 * L_40 = V_3;
		float L_41 = Rect_get_xMax_m3018144503((&V_0), /*hidden argument*/NULL);
		float L_42 = V_2;
		float L_43 = Rect_get_yMax_m743455479((&V_0), /*hidden argument*/NULL);
		float L_44 = V_2;
		float L_45 = V_2;
		float L_46 = V_2;
		Rect_t2360479859  L_47;
		memset(&L_47, 0, sizeof(L_47));
		Rect__ctor_m2614021312((&L_47), ((float)il2cpp_codegen_subtract((float)L_41, (float)L_42)), ((float)il2cpp_codegen_subtract((float)L_43, (float)L_44)), L_45, L_46, /*hidden argument*/NULL);
		Color_t2555686324  L_48 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_49 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_50 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseOutline_m1004658857(NULL /*static, unused*/, L_40, L_47, L_48, L_49, L_50, 0, ((int32_t)90), /*hidden argument*/NULL);
		List_1_t1234605051 * L_51 = V_3;
		float L_52 = Rect_get_xMax_m3018144503((&V_0), /*hidden argument*/NULL);
		float L_53 = V_2;
		float L_54 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_55 = V_2;
		float L_56 = V_2;
		Rect_t2360479859  L_57;
		memset(&L_57, 0, sizeof(L_57));
		Rect__ctor_m2614021312((&L_57), ((float)il2cpp_codegen_subtract((float)L_52, (float)L_53)), L_54, L_55, L_56, /*hidden argument*/NULL);
		Color_t2555686324  L_58 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_59 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_60 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddEllipseOutline_m1004658857(NULL /*static, unused*/, L_51, L_57, L_58, L_59, L_60, ((int32_t)270), ((int32_t)90), /*hidden argument*/NULL);
		float L_61 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_62 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_63 = V_1;
		float L_64 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		float L_65 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		float L_66 = V_2;
		Rect__ctor_m2614021312((&V_4), L_61, ((float)il2cpp_codegen_add((float)L_62, (float)L_63)), L_64, ((float)il2cpp_codegen_subtract((float)L_65, (float)L_66)), /*hidden argument*/NULL);
		List_1_t1234605051 * L_67 = V_3;
		Rect_t2360479859  L_68 = V_4;
		Color_t2555686324  L_69 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_70 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_71 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddRectOutline_m3140226879(NULL /*static, unused*/, L_67, L_68, L_69, L_70, L_71, 1, /*hidden argument*/NULL);
		List_1_t1234605051 * L_72 = V_3;
		Rect_t2360479859  L_73 = V_4;
		Color_t2555686324  L_74 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_75 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_76 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddRectOutline_m3140226879(NULL /*static, unused*/, L_72, L_73, L_74, L_75, L_76, 3, /*hidden argument*/NULL);
		float L_77 = Rect_get_xMin_m581135837((&V_0), /*hidden argument*/NULL);
		float L_78 = V_1;
		float L_79 = Rect_get_yMin_m2601414109((&V_0), /*hidden argument*/NULL);
		float L_80 = Rect_get_width_m3421484486((&V_0), /*hidden argument*/NULL);
		float L_81 = V_2;
		float L_82 = Rect_get_height_m1358425599((&V_0), /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_5), ((float)il2cpp_codegen_add((float)L_77, (float)L_78)), L_79, ((float)il2cpp_codegen_subtract((float)L_80, (float)L_81)), L_82, /*hidden argument*/NULL);
		List_1_t1234605051 * L_83 = V_3;
		Rect_t2360479859  L_84 = V_5;
		Color_t2555686324  L_85 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_86 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_87 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddRectOutline_m3140226879(NULL /*static, unused*/, L_83, L_84, L_85, L_86, L_87, 0, /*hidden argument*/NULL);
		List_1_t1234605051 * L_88 = V_3;
		Rect_t2360479859  L_89 = V_5;
		Color_t2555686324  L_90 = RectangleOutline_get_Color_m288997635(__this, /*hidden argument*/NULL);
		int32_t L_91 = RectangleOutline_get_Size_m2381001638(__this, /*hidden argument*/NULL);
		int32_t L_92 = RectangleOutline_get_Type_m656356213(__this, /*hidden argument*/NULL);
		GraphicUtil_AddRectOutline_m3140226879(NULL /*static, unused*/, L_88, L_89, L_90, L_91, L_92, 2, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_93 = ___helper0;
		NullCheck(L_93);
		VertexHelper_Clear_m627349662(L_93, /*hidden argument*/NULL);
		VertexHelper_t2453304189 * L_94 = ___helper0;
		List_1_t1234605051 * L_95 = V_3;
		NullCheck(L_94);
		VertexHelper_AddUIVertexTriangleStream_m3255143338(L_94, L_95, /*hidden argument*/NULL);
		List_1_t1234605051 * L_96 = V_3;
		ListPool_1_Put_m1533691536(NULL /*static, unused*/, L_96, /*hidden argument*/ListPool_1_Put_m1533691536_RuntimeMethod_var);
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
// System.Void SagoUtils.BitMaskAttribute::.ctor(SagoUtils.BitMaskAttribute/Depth)
extern "C"  void BitMaskAttribute__ctor_m2447816251 (BitMaskAttribute_t644927545 * __this, int32_t ___bitDepth0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bitDepth0;
		BitMaskAttribute__ctor_m2995985867(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.BitMaskAttribute::.ctor(System.Int32)
extern "C"  void BitMaskAttribute__ctor_m2995985867 (BitMaskAttribute_t644927545 * __this, int32_t ___bitDepth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitMaskAttribute__ctor_m2995985867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___bitDepth0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, L_0, 1, ((int32_t)32), /*hidden argument*/NULL);
		BitMaskAttribute_set_BitDepth_m2704196635(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SagoUtils.BitMaskAttribute::get_BitDepth()
extern "C"  int32_t BitMaskAttribute_get_BitDepth_m3828803181 (BitMaskAttribute_t644927545 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CBitDepthU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SagoUtils.BitMaskAttribute::set_BitDepth(System.Int32)
extern "C"  void BitMaskAttribute_set_BitDepth_m2704196635 (BitMaskAttribute_t644927545 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CBitDepthU3Ek__BackingField_0(L_0);
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
// System.Void SagoUtils.ComponentExtensions::EnqueueChildren(UnityEngine.Transform,System.Collections.Generic.Queue`1<UnityEngine.Transform>)
extern "C"  void ComponentExtensions_EnqueueChildren_m320250991 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___parent0, Queue_1_t3446625415 * ___queue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ComponentExtensions_EnqueueChildren_m320250991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		Queue_1_t3446625415 * L_0 = ___queue1;
		Transform_t3600365921 * L_1 = ___parent0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_t3600365921 * L_3 = Transform_GetChild_m1092972975(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Queue_1_Enqueue_m1950996988(L_0, L_3, /*hidden argument*/Queue_1_Enqueue_m1950996988_RuntimeMethod_var);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		Transform_t3600365921 * L_6 = ___parent0;
		NullCheck(L_6);
		int32_t L_7 = Transform_get_childCount_m3145433196(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
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
// System.Void SagoUtils.CoroutineHelper::.ctor(UnityEngine.MonoBehaviour)
extern "C"  void CoroutineHelper__ctor_m2114232289 (CoroutineHelper_t2903532903 * __this, MonoBehaviour_t3962482529 * ___behaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper__ctor_m2114232289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MonoBehaviour_t3962482529 * L_0 = ___behaviour0;
		__this->set_m_Behaviour_0(L_0);
		Dictionary_2_t3110615279 * L_1 = (Dictionary_2_t3110615279 *)il2cpp_codegen_object_new(Dictionary_2_t3110615279_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m148983829(L_1, /*hidden argument*/Dictionary_2__ctor_m148983829_RuntimeMethod_var);
		__this->set_m_Dictionary_1(L_1);
		return;
	}
}
// System.Boolean SagoUtils.CoroutineHelper::IsRunningCoroutine(System.String)
extern "C"  bool CoroutineHelper_IsRunningCoroutine_m3583608436 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_IsRunningCoroutine_m3583608436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3110615279 * L_0 = __this->get_m_Dictionary_1();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m2230862294(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2230862294_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.Coroutine SagoUtils.CoroutineHelper::StartCoroutine(System.String,System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * CoroutineHelper_StartCoroutine_m785862563 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, RuntimeObject* ___routine1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		bool L_1 = CoroutineHelper_IsRunningCoroutine_m3583608436(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___key0;
		String_t* L_3 = ___key0;
		RuntimeObject* L_4 = ___routine1;
		RuntimeObject* L_5 = CoroutineHelper_WaitAndRemoveKeyAsync_m413724311(__this, L_3, L_4, /*hidden argument*/NULL);
		CoroutineHelper_Run_m291728135(__this, L_2, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		String_t* L_6 = ___key0;
		Coroutine_t3829159415 * L_7 = CoroutineHelper_WaitForCoroutine_m804117929(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine SagoUtils.CoroutineHelper::StartCoroutine(System.String,System.Collections.IEnumerator[])
extern "C"  Coroutine_t3829159415 * CoroutineHelper_StartCoroutine_m2515818643 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, IEnumeratorU5BU5D_t2446662267* ___routines1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		bool L_1 = CoroutineHelper_IsRunningCoroutine_m3583608436(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = ___key0;
		String_t* L_3 = ___key0;
		String_t* L_4 = ___key0;
		IEnumeratorU5BU5D_t2446662267* L_5 = ___routines1;
		RuntimeObject* L_6 = CoroutineHelper_Multiplex_m2968313775(__this, L_4, L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = CoroutineHelper_WaitAndRemoveKeyAsync_m413724311(__this, L_3, L_6, /*hidden argument*/NULL);
		CoroutineHelper_Run_m291728135(__this, L_2, L_7, /*hidden argument*/NULL);
	}

IL_0023:
	{
		String_t* L_8 = ___key0;
		Coroutine_t3829159415 * L_9 = CoroutineHelper_WaitForCoroutine_m804117929(__this, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void SagoUtils.CoroutineHelper::StopAllCoroutines()
extern "C"  void CoroutineHelper_StopAllCoroutines_m8591955 (CoroutineHelper_t2903532903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_StopAllCoroutines_m8591955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t3110615279 * L_0 = __this->get_m_Dictionary_1();
		NullCheck(L_0);
		KeyCollection_t3300290750 * L_1 = Dictionary_2_get_Keys_m126213091(L_0, /*hidden argument*/Dictionary_2_get_Keys_m126213091_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_2 = Enumerable_ToArray_TisString_t_m4208096419(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0027;
	}

IL_0018:
	{
		StringU5BU5D_t1281789340* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		String_t* L_7 = V_0;
		CoroutineHelper_StopCoroutine_m3760196795(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t1281789340* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.CoroutineHelper::StopAllCoroutinesExcept(System.String)
extern "C"  void CoroutineHelper_StopAllCoroutinesExcept_m1658097495 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_StopAllCoroutinesExcept_m1658097495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t3110615279 * L_0 = __this->get_m_Dictionary_1();
		NullCheck(L_0);
		KeyCollection_t3300290750 * L_1 = Dictionary_2_get_Keys_m126213091(L_0, /*hidden argument*/Dictionary_2_get_Keys_m126213091_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_2 = Enumerable_ToArray_TisString_t_m4208096419(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToArray_TisString_t_m4208096419_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0033;
	}

IL_0018:
	{
		StringU5BU5D_t1281789340* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		String_t* L_7 = V_0;
		String_t* L_8 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_10 = V_0;
		CoroutineHelper_StopCoroutine_m3760196795(__this, L_10, /*hidden argument*/NULL);
	}

IL_002f:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_12 = V_2;
		StringU5BU5D_t1281789340* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.CoroutineHelper::StopCoroutine(System.String)
extern "C"  void CoroutineHelper_StopCoroutine_m3760196795 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_StopCoroutine_m3760196795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t919635561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___key0;
		bool L_1 = CoroutineHelper_IsRunningCoroutine_m3583608436(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		Dictionary_2_t3110615279 * L_2 = __this->get_m_Dictionary_1();
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		List_1_t3325358980 * L_4 = Dictionary_2_get_Item_m3660826981(L_2, L_3, /*hidden argument*/Dictionary_2_get_Item_m3660826981_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_t919635561  L_5 = List_1_GetEnumerator_m2801683601(L_4, /*hidden argument*/List_1_GetEnumerator_m2801683601_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0023:
		{
			RuntimeObject* L_6 = Enumerator_get_Current_m2685438156((&V_1), /*hidden argument*/Enumerator_get_Current_m2685438156_RuntimeMethod_var);
			V_0 = L_6;
			MonoBehaviour_t3962482529 * L_7 = __this->get_m_Behaviour_0();
			RuntimeObject* L_8 = V_0;
			NullCheck(L_7);
			MonoBehaviour_StopCoroutine_m615723318(L_7, L_8, /*hidden argument*/NULL);
		}

IL_0037:
		{
			bool L_9 = Enumerator_MoveNext_m3678234787((&V_1), /*hidden argument*/Enumerator_MoveNext_m3678234787_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0023;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m253033870((&V_1), /*hidden argument*/Enumerator_Dispose_m253033870_RuntimeMethod_var);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		Dictionary_2_t3110615279 * L_10 = __this->get_m_Dictionary_1();
		String_t* L_11 = ___key0;
		NullCheck(L_10);
		Dictionary_2_Remove_m956812504(L_10, L_11, /*hidden argument*/Dictionary_2_Remove_m956812504_RuntimeMethod_var);
	}

IL_0063:
	{
		return;
	}
}
// UnityEngine.Coroutine SagoUtils.CoroutineHelper::WaitForCoroutine(System.String)
extern "C"  Coroutine_t3829159415 * CoroutineHelper_WaitForCoroutine_m804117929 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	Coroutine_t3829159415 * G_B3_0 = NULL;
	{
		String_t* L_0 = ___key0;
		bool L_1 = CoroutineHelper_IsRunningCoroutine_m3583608436(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		MonoBehaviour_t3962482529 * L_2 = __this->get_m_Behaviour_0();
		String_t* L_3 = ___key0;
		RuntimeObject* L_4 = CoroutineHelper_WaitAsync_m4166907781(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Coroutine_t3829159415 * L_5 = MonoBehaviour_StartCoroutine_m3411253000(L_2, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((Coroutine_t3829159415 *)(NULL));
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// UnityEngine.Coroutine SagoUtils.CoroutineHelper::Run(System.String,System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * CoroutineHelper_Run_m291728135 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, RuntimeObject* ___routine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_Run_m291728135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	{
		Dictionary_2_t3110615279 * L_0 = __this->get_m_Dictionary_1();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m2230862294(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2230862294_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t3110615279 * L_3 = __this->get_m_Dictionary_1();
		String_t* L_4 = ___key0;
		List_1_t3325358980 * L_5 = (List_1_t3325358980 *)il2cpp_codegen_object_new(List_1_t3325358980_il2cpp_TypeInfo_var);
		List_1__ctor_m2666686364(L_5, /*hidden argument*/List_1__ctor_m2666686364_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_m3053246148(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_m3053246148_RuntimeMethod_var);
	}

IL_0022:
	{
		MonoBehaviour_t3962482529 * L_6 = __this->get_m_Behaviour_0();
		RuntimeObject* L_7 = ___routine1;
		NullCheck(L_6);
		Coroutine_t3829159415 * L_8 = MonoBehaviour_StartCoroutine_m3411253000(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Dictionary_2_t3110615279 * L_9 = __this->get_m_Dictionary_1();
		String_t* L_10 = ___key0;
		NullCheck(L_9);
		bool L_11 = Dictionary_2_ContainsKey_m2230862294(L_9, L_10, /*hidden argument*/Dictionary_2_ContainsKey_m2230862294_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_t3110615279 * L_12 = __this->get_m_Dictionary_1();
		String_t* L_13 = ___key0;
		NullCheck(L_12);
		List_1_t3325358980 * L_14 = Dictionary_2_get_Item_m3660826981(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_m3660826981_RuntimeMethod_var);
		RuntimeObject* L_15 = ___routine1;
		NullCheck(L_14);
		List_1_Add_m3304847818(L_14, L_15, /*hidden argument*/List_1_Add_m3304847818_RuntimeMethod_var);
		Coroutine_t3829159415 * L_16 = V_0;
		return L_16;
	}

IL_0054:
	{
		return (Coroutine_t3829159415 *)NULL;
	}
}
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::Multiplex(System.String,System.Collections.IEnumerator[])
extern "C"  RuntimeObject* CoroutineHelper_Multiplex_m2968313775 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, IEnumeratorU5BU5D_t2446662267* ___routines1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_Multiplex_m2968313775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CMultiplexU3Ec__Iterator0_t302329881 * V_0 = NULL;
	{
		U3CMultiplexU3Ec__Iterator0_t302329881 * L_0 = (U3CMultiplexU3Ec__Iterator0_t302329881 *)il2cpp_codegen_object_new(U3CMultiplexU3Ec__Iterator0_t302329881_il2cpp_TypeInfo_var);
		U3CMultiplexU3Ec__Iterator0__ctor_m1391122580(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMultiplexU3Ec__Iterator0_t302329881 * L_1 = V_0;
		IEnumeratorU5BU5D_t2446662267* L_2 = ___routines1;
		NullCheck(L_1);
		L_1->set_routines_0(L_2);
		U3CMultiplexU3Ec__Iterator0_t302329881 * L_3 = V_0;
		String_t* L_4 = ___key0;
		NullCheck(L_3);
		L_3->set_key_4(L_4);
		U3CMultiplexU3Ec__Iterator0_t302329881 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_5(__this);
		U3CMultiplexU3Ec__Iterator0_t302329881 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::WaitAsync(System.String)
extern "C"  RuntimeObject* CoroutineHelper_WaitAsync_m4166907781 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_WaitAsync_m4166907781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAsyncU3Ec__Iterator1_t2950487940 * V_0 = NULL;
	{
		U3CWaitAsyncU3Ec__Iterator1_t2950487940 * L_0 = (U3CWaitAsyncU3Ec__Iterator1_t2950487940 *)il2cpp_codegen_object_new(U3CWaitAsyncU3Ec__Iterator1_t2950487940_il2cpp_TypeInfo_var);
		U3CWaitAsyncU3Ec__Iterator1__ctor_m4213684516(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAsyncU3Ec__Iterator1_t2950487940 * L_1 = V_0;
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		L_1->set_key_0(L_2);
		U3CWaitAsyncU3Ec__Iterator1_t2950487940 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CWaitAsyncU3Ec__Iterator1_t2950487940 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::WaitAndDoActionAsync(System.String,System.Collections.IEnumerator,System.Action)
extern "C"  RuntimeObject* CoroutineHelper_WaitAndDoActionAsync_m212660141 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, RuntimeObject* ___routine1, Action_t1264377477 * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_WaitAndDoActionAsync_m212660141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * V_0 = NULL;
	{
		U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * L_0 = (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 *)il2cpp_codegen_object_new(U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474_il2cpp_TypeInfo_var);
		U3CWaitAndDoActionAsyncU3Ec__Iterator2__ctor_m453852598(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * L_1 = V_0;
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		L_1->set_key_0(L_2);
		U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * L_3 = V_0;
		RuntimeObject* L_4 = ___routine1;
		NullCheck(L_3);
		L_3->set_routine_1(L_4);
		U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * L_5 = V_0;
		Action_t1264377477 * L_6 = ___action2;
		NullCheck(L_5);
		L_5->set_action_2(L_6);
		U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_U24this_3(__this);
		U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator SagoUtils.CoroutineHelper::WaitAndRemoveKeyAsync(System.String,System.Collections.IEnumerator)
extern "C"  RuntimeObject* CoroutineHelper_WaitAndRemoveKeyAsync_m413724311 (CoroutineHelper_t2903532903 * __this, String_t* ___key0, RuntimeObject* ___routine1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineHelper_WaitAndRemoveKeyAsync_m413724311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * V_0 = NULL;
	{
		U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * L_0 = (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 *)il2cpp_codegen_object_new(U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822_il2cpp_TypeInfo_var);
		U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3__ctor_m1437572679(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * L_1 = V_0;
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		L_1->set_key_0(L_2);
		U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * L_3 = V_0;
		RuntimeObject* L_4 = ___routine1;
		NullCheck(L_3);
		L_3->set_routine_1(L_4);
		U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_2(__this);
		U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * L_6 = V_0;
		return L_6;
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
// System.Void SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::.ctor()
extern "C"  void U3CMultiplexU3Ec__Iterator0__ctor_m1391122580 (U3CMultiplexU3Ec__Iterator0_t302329881 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::MoveNext()
extern "C"  bool U3CMultiplexU3Ec__Iterator0_MoveNext_m4206547912 (U3CMultiplexU3Ec__Iterator0_t302329881 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMultiplexU3Ec__Iterator0_MoveNext_m4206547912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0021:
	{
		U3CMultiplexU3Ec__AnonStorey4_t1649747647 * L_2 = (U3CMultiplexU3Ec__AnonStorey4_t1649747647 *)il2cpp_codegen_object_new(U3CMultiplexU3Ec__AnonStorey4_t1649747647_il2cpp_TypeInfo_var);
		U3CMultiplexU3Ec__AnonStorey4__ctor_m1725697509(L_2, /*hidden argument*/NULL);
		__this->set_U24locvar2_9(L_2);
		U3CMultiplexU3Ec__AnonStorey4_t1649747647 * L_3 = __this->get_U24locvar2_9();
		NullCheck(L_3);
		L_3->set_U3CU3Ef__refU240_1(__this);
		U3CMultiplexU3Ec__AnonStorey4_t1649747647 * L_4 = __this->get_U24locvar2_9();
		IEnumeratorU5BU5D_t2446662267* L_5 = __this->get_routines_0();
		NullCheck(L_5);
		NullCheck(L_4);
		L_4->set_count_0((((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		U3CMultiplexU3Ec__AnonStorey4_t1649747647 * L_6 = __this->get_U24locvar2_9();
		intptr_t L_7 = (intptr_t)U3CMultiplexU3Ec__AnonStorey4_U3CU3Em__0_m2210382683_RuntimeMethod_var;
		Action_t1264377477 * L_8 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_8, L_6, L_7, /*hidden argument*/NULL);
		__this->set_U3CactionU3E__0_1(L_8);
		IEnumeratorU5BU5D_t2446662267* L_9 = __this->get_routines_0();
		__this->set_U24locvar0_2(L_9);
		__this->set_U24locvar1_3(0);
		goto IL_00c0;
	}

IL_007a:
	{
		IEnumeratorU5BU5D_t2446662267* L_10 = __this->get_U24locvar0_2();
		int32_t L_11 = __this->get_U24locvar1_3();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
		CoroutineHelper_t2903532903 * L_14 = __this->get_U24this_5();
		String_t* L_15 = __this->get_key_4();
		CoroutineHelper_t2903532903 * L_16 = __this->get_U24this_5();
		String_t* L_17 = __this->get_key_4();
		RuntimeObject* L_18 = V_1;
		Action_t1264377477 * L_19 = __this->get_U3CactionU3E__0_1();
		NullCheck(L_16);
		RuntimeObject* L_20 = CoroutineHelper_WaitAndDoActionAsync_m212660141(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_14);
		CoroutineHelper_Run_m291728135(L_14, L_15, L_20, /*hidden argument*/NULL);
		int32_t L_21 = __this->get_U24locvar1_3();
		__this->set_U24locvar1_3(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_00c0:
	{
		int32_t L_22 = __this->get_U24locvar1_3();
		IEnumeratorU5BU5D_t2446662267* L_23 = __this->get_U24locvar0_2();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_007a;
		}
	}
	{
		goto IL_00f3;
	}

IL_00d8:
	{
		__this->set_U24current_6(NULL);
		bool L_24 = __this->get_U24disposing_7();
		if (L_24)
		{
			goto IL_00ee;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_00ee:
	{
		goto IL_010d;
	}

IL_00f3:
	{
		U3CMultiplexU3Ec__AnonStorey4_t1649747647 * L_25 = __this->get_U24locvar2_9();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_count_0();
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_00d8;
		}
	}
	{
		__this->set_U24PC_8((-1));
	}

IL_010b:
	{
		return (bool)0;
	}

IL_010d:
	{
		return (bool)1;
	}
}
// System.Object SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CMultiplexU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1775481258 (U3CMultiplexU3Ec__Iterator0_t302329881 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CMultiplexU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m909305492 (U3CMultiplexU3Ec__Iterator0_t302329881 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::Dispose()
extern "C"  void U3CMultiplexU3Ec__Iterator0_Dispose_m2763873770 (U3CMultiplexU3Ec__Iterator0_t302329881 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0::Reset()
extern "C"  void U3CMultiplexU3Ec__Iterator0_Reset_m3930232012 (U3CMultiplexU3Ec__Iterator0_t302329881 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMultiplexU3Ec__Iterator0_Reset_m3930232012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4::.ctor()
extern "C"  void U3CMultiplexU3Ec__AnonStorey4__ctor_m1725697509 (U3CMultiplexU3Ec__AnonStorey4_t1649747647 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.CoroutineHelper/<Multiplex>c__Iterator0/<Multiplex>c__AnonStorey4::<>m__0()
extern "C"  void U3CMultiplexU3Ec__AnonStorey4_U3CU3Em__0_m2210382683 (U3CMultiplexU3Ec__AnonStorey4_t1649747647 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		__this->set_count_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
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
// System.Void SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::.ctor()
extern "C"  void U3CWaitAndDoActionAsyncU3Ec__Iterator2__ctor_m453852598 (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::MoveNext()
extern "C"  bool U3CWaitAndDoActionAsyncU3Ec__Iterator2_MoveNext_m3476846919 (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_006f;
	}

IL_0021:
	{
		CoroutineHelper_t2903532903 * L_2 = __this->get_U24this_3();
		String_t* L_3 = __this->get_key_0();
		RuntimeObject* L_4 = __this->get_routine_1();
		NullCheck(L_2);
		Coroutine_t3829159415 * L_5 = CoroutineHelper_Run_m291728135(L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_U24current_4(L_5);
		bool L_6 = __this->get_U24disposing_5();
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_004d:
	{
		goto IL_0071;
	}

IL_0052:
	{
		Action_t1264377477 * L_7 = __this->get_action_2();
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		Action_t1264377477 * L_8 = __this->get_action_2();
		NullCheck(L_8);
		Action_Invoke_m937035532(L_8, /*hidden argument*/NULL);
	}

IL_0068:
	{
		__this->set_U24PC_6((-1));
	}

IL_006f:
	{
		return (bool)0;
	}

IL_0071:
	{
		return (bool)1;
	}
}
// System.Object SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CWaitAndDoActionAsyncU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2265730461 (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CWaitAndDoActionAsyncU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m2643189912 (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::Dispose()
extern "C"  void U3CWaitAndDoActionAsyncU3Ec__Iterator2_Dispose_m3133841572 (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void SagoUtils.CoroutineHelper/<WaitAndDoActionAsync>c__Iterator2::Reset()
extern "C"  void U3CWaitAndDoActionAsyncU3Ec__Iterator2_Reset_m825900965 (U3CWaitAndDoActionAsyncU3Ec__Iterator2_t3955052474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAndDoActionAsyncU3Ec__Iterator2_Reset_m825900965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::.ctor()
extern "C"  void U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3__ctor_m1437572679 (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::MoveNext()
extern "C"  bool U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_MoveNext_m2936998904 (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_MoveNext_m2936998904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_0070;
	}

IL_0021:
	{
		CoroutineHelper_t2903532903 * L_2 = __this->get_U24this_2();
		String_t* L_3 = __this->get_key_0();
		RuntimeObject* L_4 = __this->get_routine_1();
		NullCheck(L_2);
		Coroutine_t3829159415 * L_5 = CoroutineHelper_Run_m291728135(L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_U24current_3(L_5);
		bool L_6 = __this->get_U24disposing_4();
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_004d:
	{
		goto IL_0072;
	}

IL_0052:
	{
		CoroutineHelper_t2903532903 * L_7 = __this->get_U24this_2();
		NullCheck(L_7);
		Dictionary_2_t3110615279 * L_8 = L_7->get_m_Dictionary_1();
		String_t* L_9 = __this->get_key_0();
		NullCheck(L_8);
		Dictionary_2_Remove_m956812504(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m956812504_RuntimeMethod_var);
		__this->set_U24PC_5((-1));
	}

IL_0070:
	{
		return (bool)0;
	}

IL_0072:
	{
		return (bool)1;
	}
}
// System.Object SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2525433810 (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m33885101 (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::Dispose()
extern "C"  void U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_Dispose_m3885008448 (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void SagoUtils.CoroutineHelper/<WaitAndRemoveKeyAsync>c__Iterator3::Reset()
extern "C"  void U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_Reset_m1961187883 (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_t1305919822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAndRemoveKeyAsyncU3Ec__Iterator3_Reset_m1961187883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::.ctor()
extern "C"  void U3CWaitAsyncU3Ec__Iterator1__ctor_m4213684516 (U3CWaitAsyncU3Ec__Iterator1_t2950487940 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::MoveNext()
extern "C"  bool U3CWaitAsyncU3Ec__Iterator1_MoveNext_m1462637140 (U3CWaitAsyncU3Ec__Iterator1_t2950487940 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_005e;
	}

IL_0021:
	{
		goto IL_0041;
	}

IL_0026:
	{
		__this->set_U24current_2(NULL);
		bool L_2 = __this->get_U24disposing_3();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_003c:
	{
		goto IL_0060;
	}

IL_0041:
	{
		CoroutineHelper_t2903532903 * L_3 = __this->get_U24this_1();
		String_t* L_4 = __this->get_key_0();
		NullCheck(L_3);
		bool L_5 = CoroutineHelper_IsRunningCoroutine_m3583608436(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_005e:
	{
		return (bool)0;
	}

IL_0060:
	{
		return (bool)1;
	}
}
// System.Object SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CWaitAsyncU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m46856524 (U3CWaitAsyncU3Ec__Iterator1_t2950487940 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CWaitAsyncU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3332648210 (U3CWaitAsyncU3Ec__Iterator1_t2950487940 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::Dispose()
extern "C"  void U3CWaitAsyncU3Ec__Iterator1_Dispose_m4052515485 (U3CWaitAsyncU3Ec__Iterator1_t2950487940 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void SagoUtils.CoroutineHelper/<WaitAsync>c__Iterator1::Reset()
extern "C"  void U3CWaitAsyncU3Ec__Iterator1_Reset_m1367747416 (U3CWaitAsyncU3Ec__Iterator1_t2950487940 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAsyncU3Ec__Iterator1_Reset_m1367747416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void SagoUtils.DepthGroup::.ctor()
extern "C"  void DepthGroup__ctor_m2063798491 (DepthGroup_t827469246 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.DepthGroup::add_OnAddElement(System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>)
extern "C"  void DepthGroup_add_OnAddElement_m3938394985 (DepthGroup_t827469246 * __this, Action_2_t946994486 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_add_OnAddElement_m3938394985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t946994486 * V_0 = NULL;
	Action_2_t946994486 * V_1 = NULL;
	{
		Action_2_t946994486 * L_0 = __this->get_OnAddElement_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t946994486 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t946994486 ** L_2 = __this->get_address_of_OnAddElement_5();
		Action_2_t946994486 * L_3 = V_1;
		Action_2_t946994486 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_2_t946994486 * L_6 = V_0;
		Action_2_t946994486 * L_7 = InterlockedCompareExchangeImpl<Action_2_t946994486 *>(L_2, ((Action_2_t946994486 *)CastclassSealed((RuntimeObject*)L_5, Action_2_t946994486_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_2_t946994486 * L_8 = V_0;
		Action_2_t946994486 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t946994486 *)L_8) == ((RuntimeObject*)(Action_2_t946994486 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::remove_OnAddElement(System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>)
extern "C"  void DepthGroup_remove_OnAddElement_m2062525467 (DepthGroup_t827469246 * __this, Action_2_t946994486 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_remove_OnAddElement_m2062525467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t946994486 * V_0 = NULL;
	Action_2_t946994486 * V_1 = NULL;
	{
		Action_2_t946994486 * L_0 = __this->get_OnAddElement_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t946994486 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t946994486 ** L_2 = __this->get_address_of_OnAddElement_5();
		Action_2_t946994486 * L_3 = V_1;
		Action_2_t946994486 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_2_t946994486 * L_6 = V_0;
		Action_2_t946994486 * L_7 = InterlockedCompareExchangeImpl<Action_2_t946994486 *>(L_2, ((Action_2_t946994486 *)CastclassSealed((RuntimeObject*)L_5, Action_2_t946994486_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_2_t946994486 * L_8 = V_0;
		Action_2_t946994486 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t946994486 *)L_8) == ((RuntimeObject*)(Action_2_t946994486 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::add_OnRemoveElement(System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>)
extern "C"  void DepthGroup_add_OnRemoveElement_m3491992473 (DepthGroup_t827469246 * __this, Action_2_t946994486 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_add_OnRemoveElement_m3491992473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t946994486 * V_0 = NULL;
	Action_2_t946994486 * V_1 = NULL;
	{
		Action_2_t946994486 * L_0 = __this->get_OnRemoveElement_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t946994486 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t946994486 ** L_2 = __this->get_address_of_OnRemoveElement_6();
		Action_2_t946994486 * L_3 = V_1;
		Action_2_t946994486 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_2_t946994486 * L_6 = V_0;
		Action_2_t946994486 * L_7 = InterlockedCompareExchangeImpl<Action_2_t946994486 *>(L_2, ((Action_2_t946994486 *)CastclassSealed((RuntimeObject*)L_5, Action_2_t946994486_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_2_t946994486 * L_8 = V_0;
		Action_2_t946994486 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t946994486 *)L_8) == ((RuntimeObject*)(Action_2_t946994486 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::remove_OnRemoveElement(System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>)
extern "C"  void DepthGroup_remove_OnRemoveElement_m3184041379 (DepthGroup_t827469246 * __this, Action_2_t946994486 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_remove_OnRemoveElement_m3184041379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t946994486 * V_0 = NULL;
	Action_2_t946994486 * V_1 = NULL;
	{
		Action_2_t946994486 * L_0 = __this->get_OnRemoveElement_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t946994486 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t946994486 ** L_2 = __this->get_address_of_OnRemoveElement_6();
		Action_2_t946994486 * L_3 = V_1;
		Action_2_t946994486 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_2_t946994486 * L_6 = V_0;
		Action_2_t946994486 * L_7 = InterlockedCompareExchangeImpl<Action_2_t946994486 *>(L_2, ((Action_2_t946994486 *)CastclassSealed((RuntimeObject*)L_5, Action_2_t946994486_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_2_t946994486 * L_8 = V_0;
		Action_2_t946994486 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t946994486 *)L_8) == ((RuntimeObject*)(Action_2_t946994486 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::add_OnSetElementDepth(System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>)
extern "C"  void DepthGroup_add_OnSetElementDepth_m1701309299 (DepthGroup_t827469246 * __this, Action_2_t946994486 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_add_OnSetElementDepth_m1701309299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t946994486 * V_0 = NULL;
	Action_2_t946994486 * V_1 = NULL;
	{
		Action_2_t946994486 * L_0 = __this->get_OnSetElementDepth_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t946994486 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t946994486 ** L_2 = __this->get_address_of_OnSetElementDepth_7();
		Action_2_t946994486 * L_3 = V_1;
		Action_2_t946994486 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_2_t946994486 * L_6 = V_0;
		Action_2_t946994486 * L_7 = InterlockedCompareExchangeImpl<Action_2_t946994486 *>(L_2, ((Action_2_t946994486 *)CastclassSealed((RuntimeObject*)L_5, Action_2_t946994486_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_2_t946994486 * L_8 = V_0;
		Action_2_t946994486 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t946994486 *)L_8) == ((RuntimeObject*)(Action_2_t946994486 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::remove_OnSetElementDepth(System.Action`2<SagoUtils.DepthGroup,SagoUtils.IDepthGroupElement>)
extern "C"  void DepthGroup_remove_OnSetElementDepth_m2039166803 (DepthGroup_t827469246 * __this, Action_2_t946994486 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_remove_OnSetElementDepth_m2039166803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t946994486 * V_0 = NULL;
	Action_2_t946994486 * V_1 = NULL;
	{
		Action_2_t946994486 * L_0 = __this->get_OnSetElementDepth_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t946994486 * L_1 = V_0;
		V_1 = L_1;
		Action_2_t946994486 ** L_2 = __this->get_address_of_OnSetElementDepth_7();
		Action_2_t946994486 * L_3 = V_1;
		Action_2_t946994486 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_2_t946994486 * L_6 = V_0;
		Action_2_t946994486 * L_7 = InterlockedCompareExchangeImpl<Action_2_t946994486 *>(L_2, ((Action_2_t946994486 *)CastclassSealed((RuntimeObject*)L_5, Action_2_t946994486_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_2_t946994486 * L_8 = V_0;
		Action_2_t946994486 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t946994486 *)L_8) == ((RuntimeObject*)(Action_2_t946994486 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<SagoUtils.IDepthGroupElement> SagoUtils.DepthGroup::get_Elements()
extern "C"  List_1_t3091537484 * DepthGroup_get_Elements_m1001211316 (DepthGroup_t827469246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_get_Elements_m1001211316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3091537484 * L_0 = __this->get_m_Elements_8();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t3091537484 * L_1 = (List_1_t3091537484 *)il2cpp_codegen_object_new(List_1_t3091537484_il2cpp_TypeInfo_var);
		List_1__ctor_m171682946(L_1, /*hidden argument*/List_1__ctor_m171682946_RuntimeMethod_var);
		__this->set_m_Elements_8(L_1);
	}

IL_0016:
	{
		List_1_t3091537484 * L_2 = __this->get_m_Elements_8();
		return L_2;
	}
}
// UnityEngine.Transform SagoUtils.DepthGroup::get_Transform()
extern "C"  Transform_t3600365921 * DepthGroup_get_Transform_m1034343722 (DepthGroup_t827469246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_get_Transform_m1034343722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_m_Transform_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set_m_Transform_9(L_2);
	}

IL_001c:
	{
		Transform_t3600365921 * L_3 = __this->get_m_Transform_9();
		return L_3;
	}
}
// System.Void SagoUtils.DepthGroup::AddElement(SagoUtils.IDepthGroupElement)
extern "C"  void DepthGroup_AddElement_m3285210665 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_AddElement_m3285210665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		RuntimeObject* L_0 = ___element0;
		NullCheck(L_0);
		DepthGroup_t827469246 * L_1 = InterfaceFuncInvoker0< DepthGroup_t827469246 * >::Invoke(0 /* SagoUtils.DepthGroup SagoUtils.IDepthGroupElement::get_DepthGroup() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_3 = ___element0;
		NullCheck(L_3);
		DepthGroup_t827469246 * L_4 = InterfaceFuncInvoker0< DepthGroup_t827469246 * >::Invoke(0 /* SagoUtils.DepthGroup SagoUtils.IDepthGroupElement::get_DepthGroup() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5 = ___element0;
		NullCheck(L_4);
		DepthGroup_RemoveElement_m2871942691(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		float L_6 = DepthGroup_get_Front_m1903138117(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		List_1_t3091537484 * L_7 = DepthGroup_get_Elements_m1001211316(__this, /*hidden argument*/NULL);
		RuntimeObject* L_8 = ___element0;
		NullCheck(L_7);
		List_1_Add_m3392848684(L_7, L_8, /*hidden argument*/List_1_Add_m3392848684_RuntimeMethod_var);
		RuntimeObject* L_9 = ___element0;
		NullCheck(L_9);
		InterfaceActionInvoker1< DepthGroup_t827469246 * >::Invoke(1 /* System.Void SagoUtils.IDepthGroupElement::set_DepthGroup(SagoUtils.DepthGroup) */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_9, __this);
		RuntimeObject* L_10 = ___element0;
		float L_11 = V_0;
		DepthGroup_SetElementDepth_m2898598668(__this, L_10, L_11, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ___element0;
		DepthGroup_ParentElement_m1792267520(__this, L_12, /*hidden argument*/NULL);
		Action_2_t946994486 * L_13 = __this->get_OnAddElement_5();
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		Action_2_t946994486 * L_14 = __this->get_OnAddElement_5();
		RuntimeObject* L_15 = ___element0;
		NullCheck(L_14);
		Action_2_Invoke_m4222411856(L_14, __this, L_15, /*hidden argument*/Action_2_Invoke_m4222411856_RuntimeMethod_var);
	}

IL_005d:
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::RemoveElement(SagoUtils.IDepthGroupElement)
extern "C"  void DepthGroup_RemoveElement_m2871942691 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_RemoveElement_m2871942691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3091537484 * L_0 = DepthGroup_get_Elements_m1001211316(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___element0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m1847010743(L_0, L_1, /*hidden argument*/List_1_Contains_m1847010743_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_3 = ___element0;
		DepthGroup_DeparentElement_m1238612792(__this, L_3, /*hidden argument*/NULL);
		List_1_t3091537484 * L_4 = DepthGroup_get_Elements_m1001211316(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___element0;
		NullCheck(L_4);
		List_1_Remove_m489226418(L_4, L_5, /*hidden argument*/List_1_Remove_m489226418_RuntimeMethod_var);
		RuntimeObject* L_6 = ___element0;
		NullCheck(L_6);
		InterfaceActionInvoker1< DepthGroup_t827469246 * >::Invoke(1 /* System.Void SagoUtils.IDepthGroupElement::set_DepthGroup(SagoUtils.DepthGroup) */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_6, (DepthGroup_t827469246 *)NULL);
		bool L_7 = __this->get_CompactOnRemove_3();
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		DepthGroup_CompactElements_m3459018040(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_2_t946994486 * L_8 = __this->get_OnRemoveElement_6();
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		Action_2_t946994486 * L_9 = __this->get_OnRemoveElement_6();
		RuntimeObject* L_10 = ___element0;
		NullCheck(L_9);
		Action_2_Invoke_m4222411856(L_9, __this, L_10, /*hidden argument*/Action_2_Invoke_m4222411856_RuntimeMethod_var);
	}

IL_0055:
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::CompactElements()
extern "C"  void DepthGroup_CompactElements_m3459018040 (DepthGroup_t827469246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_CompactElements_m3459018040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RuntimeObject* V_1 = NULL;
	Enumerator_t685814065  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		float L_0 = DepthGroup_get_Back_m2535911450(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t3091537484 * L_1 = DepthGroup_get_Elements_m1001211316(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t685814065  L_2 = List_1_GetEnumerator_m3534679060(L_1, /*hidden argument*/List_1_GetEnumerator_m3534679060_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0031;
		}

IL_0018:
		{
			RuntimeObject* L_3 = Enumerator_get_Current_m2756413605((&V_2), /*hidden argument*/Enumerator_get_Current_m2756413605_RuntimeMethod_var);
			V_1 = L_3;
			RuntimeObject* L_4 = V_1;
			float L_5 = V_0;
			DepthGroup_SetElementDepth_m2898598668(__this, L_4, L_5, /*hidden argument*/NULL);
			float L_6 = V_0;
			float L_7 = __this->get_Spacing_4();
			V_0 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7));
		}

IL_0031:
		{
			bool L_8 = Enumerator_MoveNext_m1859525188((&V_2), /*hidden argument*/Enumerator_MoveNext_m1859525188_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0018;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2071237891((&V_2), /*hidden argument*/Enumerator_Dispose_m2071237891_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		return;
	}
}
// System.Single SagoUtils.DepthGroup::GetElementDepth(SagoUtils.IDepthGroupElement)
extern "C"  float DepthGroup_GetElementDepth_m1081185450 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_GetElementDepth_m1081185450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___element0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = InterfaceFuncInvoker0< Transform_t3600365921 * >::Invoke(2 /* UnityEngine.Transform SagoUtils.IDepthGroupElement::get_Transform() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_z_3();
		return L_3;
	}
}
// System.Void SagoUtils.DepthGroup::SetElementDepth(SagoUtils.IDepthGroupElement,System.Single)
extern "C"  void DepthGroup_SetElementDepth_m2898598668 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, float ___depth1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_SetElementDepth_m2898598668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___element0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = InterfaceFuncInvoker0< Transform_t3600365921 * >::Invoke(2 /* UnityEngine.Transform SagoUtils.IDepthGroupElement::get_Transform() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___element0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = InterfaceFuncInvoker0< Transform_t3600365921 * >::Invoke(2 /* UnityEngine.Transform SagoUtils.IDepthGroupElement::get_Transform() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_5 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		float L_7 = ___depth1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_10, /*hidden argument*/NULL);
		Action_2_t946994486 * L_11 = __this->get_OnSetElementDepth_7();
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		Action_2_t946994486 * L_12 = __this->get_OnSetElementDepth_7();
		RuntimeObject* L_13 = ___element0;
		NullCheck(L_12);
		Action_2_Invoke_m4222411856(L_12, __this, L_13, /*hidden argument*/Action_2_Invoke_m4222411856_RuntimeMethod_var);
	}

IL_0048:
	{
		return;
	}
}
// System.Void SagoUtils.DepthGroup::ParentElement(SagoUtils.IDepthGroupElement)
extern "C"  void DepthGroup_ParentElement_m1792267520 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_ParentElement_m1792267520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * G_B2_0 = NULL;
	Transform_t3600365921 * G_B1_0 = NULL;
	Transform_t3600365921 * G_B3_0 = NULL;
	Transform_t3600365921 * G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___element0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = InterfaceFuncInvoker0< Transform_t3600365921 * >::Invoke(2 /* UnityEngine.Transform SagoUtils.IDepthGroupElement::get_Transform() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_0);
		bool L_2 = __this->get_IsElementContainer_2();
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001c;
		}
	}
	{
		Transform_t3600365921 * L_3 = DepthGroup_get_Transform_m1034343722(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___element0;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = InterfaceFuncInvoker0< Transform_t3600365921 * >::Invoke(2 /* UnityEngine.Transform SagoUtils.IDepthGroupElement::get_Transform() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_get_parent_m835071599(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		NullCheck(G_B3_1);
		Transform_set_parent_m786917804(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.DepthGroup::DeparentElement(SagoUtils.IDepthGroupElement)
extern "C"  void DepthGroup_DeparentElement_m1238612792 (DepthGroup_t827469246 * __this, RuntimeObject* ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_DeparentElement_m1238612792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_IsElementContainer_2();
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_1 = ___element0;
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = InterfaceFuncInvoker0< Transform_t3600365921 * >::Invoke(2 /* UnityEngine.Transform SagoUtils.IDepthGroupElement::get_Transform() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_get_parent_m835071599(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = DepthGroup_get_Transform_m1034343722(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_6 = ___element0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = InterfaceFuncInvoker0< Transform_t3600365921 * >::Invoke(2 /* UnityEngine.Transform SagoUtils.IDepthGroupElement::get_Transform() */, IDepthGroupElement_t1619462742_il2cpp_TypeInfo_var, L_6);
		Transform_t3600365921 * L_8 = DepthGroup_get_Transform_m1034343722(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Transform_get_parent_m835071599(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_parent_m786917804(L_7, L_9, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Single SagoUtils.DepthGroup::get_Back()
extern "C"  float DepthGroup_get_Back_m2535911450 (DepthGroup_t827469246 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = DepthGroup_get_Transform_m1034343722(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_z_3();
		return L_2;
	}
}
// System.Single SagoUtils.DepthGroup::get_Front()
extern "C"  float DepthGroup_get_Front_m1903138117 (DepthGroup_t827469246 * __this, const RuntimeMethod* method)
{
	float G_B3_0 = 0.0f;
	{
		RuntimeObject* L_0 = DepthGroup_get_LastElement_m1291910834(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		float L_1 = DepthGroup_get_Back_m2535911450(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0029;
	}

IL_0016:
	{
		RuntimeObject* L_2 = DepthGroup_get_LastElement_m1291910834(__this, /*hidden argument*/NULL);
		float L_3 = DepthGroup_GetElementDepth_m1081185450(__this, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_Spacing_4();
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// SagoUtils.IDepthGroupElement SagoUtils.DepthGroup::get_LastElement()
extern "C"  RuntimeObject* DepthGroup_get_LastElement_m1291910834 (DepthGroup_t827469246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroup_get_LastElement_m1291910834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_t3091537484 * L_0 = DepthGroup_get_Elements_m1001211316(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1191187158(L_0, /*hidden argument*/List_1_get_Count_m1191187158_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		List_1_t3091537484 * L_2 = DepthGroup_get_Elements_m1001211316(__this, /*hidden argument*/NULL);
		List_1_t3091537484 * L_3 = DepthGroup_get_Elements_m1001211316(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m1191187158(L_3, /*hidden argument*/List_1_get_Count_m1191187158_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeObject* L_5 = List_1_get_Item_m4168911317(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/List_1_get_Item_m4168911317_RuntimeMethod_var);
		G_B3_0 = L_5;
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
	}

IL_002f:
	{
		return G_B3_0;
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
// System.Void SagoUtils.DepthGroupElement::.ctor()
extern "C"  void DepthGroupElement__ctor_m4074209157 (DepthGroupElement_t975669617 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// SagoUtils.DepthGroup SagoUtils.DepthGroupElement::get_DepthGroup()
extern "C"  DepthGroup_t827469246 * DepthGroupElement_get_DepthGroup_m3987222182 (DepthGroupElement_t975669617 * __this, const RuntimeMethod* method)
{
	{
		DepthGroup_t827469246 * L_0 = __this->get_U3CDepthGroupU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SagoUtils.DepthGroupElement::set_DepthGroup(SagoUtils.DepthGroup)
extern "C"  void DepthGroupElement_set_DepthGroup_m3579380360 (DepthGroupElement_t975669617 * __this, DepthGroup_t827469246 * ___value0, const RuntimeMethod* method)
{
	{
		DepthGroup_t827469246 * L_0 = ___value0;
		__this->set_U3CDepthGroupU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Transform SagoUtils.DepthGroupElement::get_Transform()
extern "C"  Transform_t3600365921 * DepthGroupElement_get_Transform_m3530260565 (DepthGroupElement_t975669617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DepthGroupElement_get_Transform_m3530260565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * G_B2_0 = NULL;
	DepthGroupElement_t975669617 * G_B2_1 = NULL;
	Transform_t3600365921 * G_B1_0 = NULL;
	DepthGroupElement_t975669617 * G_B1_1 = NULL;
	{
		Transform_t3600365921 * L_0 = __this->get_m_Transform_3();
		Transform_t3600365921 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0014:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_m_Transform_3(G_B2_0);
		Transform_t3600365921 * L_3 = __this->get_m_Transform_3();
		return L_3;
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
// System.Void SagoUtils.DisableAttribute::.ctor(System.Type,System.String,System.Int32,System.Boolean)
extern "C"  void DisableAttribute__ctor_m2721153583 (DisableAttribute_t1228211629 * __this, Type_t * ___type0, String_t* ___callbackMethodName1, int32_t ___indent2, bool ___hide3, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.DisableAttribute::.ctor(System.Type,System.String,System.Boolean,System.Int32)
extern "C"  void DisableAttribute__ctor_m3281222490 (DisableAttribute_t1228211629 * __this, Type_t * ___type0, String_t* ___callbackMethodName1, bool ___hide2, int32_t ___indent3, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___callbackMethodName1;
		int32_t L_2 = ___indent3;
		bool L_3 = ___hide2;
		DisableAttribute__ctor_m2721153583(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// SagoUtils.DisableAttribute/DisableCallback SagoUtils.DisableAttribute::get_IsDisabled()
extern "C"  DisableCallback_t2385366335 * DisableAttribute_get_IsDisabled_m1629472274 (DisableAttribute_t1228211629 * __this, const RuntimeMethod* method)
{
	{
		DisableCallback_t2385366335 * L_0 = __this->get_U3CIsDisabledU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SagoUtils.DisableAttribute::set_IsDisabled(SagoUtils.DisableAttribute/DisableCallback)
extern "C"  void DisableAttribute_set_IsDisabled_m3960369184 (DisableAttribute_t1228211629 * __this, DisableCallback_t2385366335 * ___value0, const RuntimeMethod* method)
{
	{
		DisableCallback_t2385366335 * L_0 = ___value0;
		__this->set_U3CIsDisabledU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 SagoUtils.DisableAttribute::get_Indent()
extern "C"  int32_t DisableAttribute_get_Indent_m2100623203 (DisableAttribute_t1228211629 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIndentU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SagoUtils.DisableAttribute::set_Indent(System.Int32)
extern "C"  void DisableAttribute_set_Indent_m362908374 (DisableAttribute_t1228211629 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIndentU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean SagoUtils.DisableAttribute::get_HideWhenDisabled()
extern "C"  bool DisableAttribute_get_HideWhenDisabled_m122574912 (DisableAttribute_t1228211629 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHideWhenDisabledU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SagoUtils.DisableAttribute::set_HideWhenDisabled(System.Boolean)
extern "C"  void DisableAttribute_set_HideWhenDisabled_m4273950261 (DisableAttribute_t1228211629 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHideWhenDisabledU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean SagoUtils.DisableAttribute::DefaultIsDisabled(UnityEngine.Object)
extern "C"  bool DisableAttribute_DefaultIsDisabled_m1080258239 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___obj0, const RuntimeMethod* method)
{
	{
		return (bool)0;
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
extern "C"  bool DelegatePInvokeWrapper_DisableCallback_t2385366335 (DisableCallback_t2385366335 * __this, Object_t631007953 * ___obj0, const RuntimeMethod* method)
{


	typedef int32_t (STDCALL *PInvokeFunc)(Object_t631007953_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___obj0' to native representation
	Object_t631007953_marshaled_pinvoke ____obj0_marshaled = {};
	if (___obj0 != NULL) Object_t631007953_marshal_pinvoke(*___obj0, ____obj0_marshaled);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___obj0 != NULL ? &____obj0_marshaled : NULL);

	// Marshaling cleanup of parameter '___obj0' native representation
	if (___obj0 != NULL) Object_t631007953_marshal_pinvoke_cleanup(____obj0_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Void SagoUtils.DisableAttribute/DisableCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void DisableCallback__ctor_m2930742669 (DisableCallback_t2385366335 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean SagoUtils.DisableAttribute/DisableCallback::Invoke(UnityEngine.Object)
extern "C"  bool DisableCallback_Invoke_m3059393442 (DisableCallback_t2385366335 * __this, Object_t631007953 * ___obj0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		DisableCallback_Invoke_m3059393442((DisableCallback_t2385366335 *)__this->get_prev_9(), ___obj0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef bool (*FunctionPointerType) (RuntimeObject *, Object_t631007953 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, targetMethod);
		}
		else
		{
			// closed
			typedef bool (*FunctionPointerType) (RuntimeObject *, void*, Object_t631007953 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef bool (*FunctionPointerType) (void*, Object_t631007953 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
		}
		else
		{
			// open
			typedef bool (*FunctionPointerType) (Object_t631007953 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult SagoUtils.DisableAttribute/DisableCallback::BeginInvoke(UnityEngine.Object,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* DisableCallback_BeginInvoke_m1385215632 (DisableCallback_t2385366335 * __this, Object_t631007953 * ___obj0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean SagoUtils.DisableAttribute/DisableCallback::EndInvoke(System.IAsyncResult)
extern "C"  bool DisableCallback_EndInvoke_m4049003450 (DisableCallback_t2385366335 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SagoUtils.EnumMaskAttribute::.ctor(System.Type)
extern "C"  void EnumMaskAttribute__ctor_m89076932 (EnumMaskAttribute_t4013718542 * __this, Type_t * ___enumType0, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___enumType0;
		__this->set_EnumType_0(L_0);
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
// System.Void SagoUtils.GameObjectPool::.ctor()
extern "C"  void GameObjectPool__ctor_m23247597 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SagoUtils.GameObjectPool::get_ApplyRandomScaling()
extern "C"  bool GameObjectPool_get_ApplyRandomScaling_m1157783101 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CApplyRandomScalingU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SagoUtils.GameObjectPool::set_ApplyRandomScaling(System.Boolean)
extern "C"  void GameObjectPool_set_ApplyRandomScaling_m2491482108 (GameObjectPool_t652050872 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CApplyRandomScalingU3Ek__BackingField_2(L_0);
		return;
	}
}
// SagoUtils.GameObjectPool/ExhaustBehaviour SagoUtils.GameObjectPool::get_ExhaustionBehaviour()
extern "C"  int32_t GameObjectPool_get_ExhaustionBehaviour_m3039066370 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CExhaustionBehaviourU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void SagoUtils.GameObjectPool::set_ExhaustionBehaviour(SagoUtils.GameObjectPool/ExhaustBehaviour)
extern "C"  void GameObjectPool_set_ExhaustionBehaviour_m2975725181 (GameObjectPool_t652050872 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CExhaustionBehaviourU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.Vector2 SagoUtils.GameObjectPool::get_ScaleRange()
extern "C"  Vector2_t2156229523  GameObjectPool_get_ScaleRange_m2463008501 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_U3CScaleRangeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void SagoUtils.GameObjectPool::set_ScaleRange(UnityEngine.Vector2)
extern "C"  void GameObjectPool_set_ScaleRange_m1722613115 (GameObjectPool_t652050872 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ___value0;
		__this->set_U3CScaleRangeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 SagoUtils.GameObjectPool::get_PoolSize()
extern "C"  int32_t GameObjectPool_get_PoolSize_m2519445553 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPoolSizeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void SagoUtils.GameObjectPool::set_PoolSize(System.Int32)
extern "C"  void GameObjectPool_set_PoolSize_m1452149866 (GameObjectPool_t652050872 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPoolSizeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Collections.Generic.LinkedList`1<UnityEngine.Transform> SagoUtils.GameObjectPool::get_ActivePool()
extern "C"  LinkedList_1_t2440011930 * GameObjectPool_get_ActivePool_m169536063 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		LinkedList_1_t2440011930 * L_0 = __this->get_U3CActivePoolU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void SagoUtils.GameObjectPool::set_ActivePool(System.Collections.Generic.LinkedList`1<UnityEngine.Transform>)
extern "C"  void GameObjectPool_set_ActivePool_m3480644315 (GameObjectPool_t652050872 * __this, LinkedList_1_t2440011930 * ___value0, const RuntimeMethod* method)
{
	{
		LinkedList_1_t2440011930 * L_0 = ___value0;
		__this->set_U3CActivePoolU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.Transform SagoUtils.GameObjectPool::get_InactivePool()
extern "C"  Transform_t3600365921 * GameObjectPool_get_InactivePool_m3488871086 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = __this->get_U3CInactivePoolU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void SagoUtils.GameObjectPool::set_InactivePool(UnityEngine.Transform)
extern "C"  void GameObjectPool_set_InactivePool_m591426605 (GameObjectPool_t652050872 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___value0;
		__this->set_U3CInactivePoolU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.Transform SagoUtils.GameObjectPool::get_Transform()
extern "C"  Transform_t3600365921 * GameObjectPool_get_Transform_m2953483669 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_get_Transform_m2953483669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_m_Transform_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_GetComponent_TisTransform_t3600365921_m1200784320(__this, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		__this->set_m_Transform_8(L_2);
	}

IL_001c:
	{
		Transform_t3600365921 * L_3 = __this->get_m_Transform_8();
		return L_3;
	}
}
// SagoUtils.GameObjectPool SagoUtils.GameObjectPool::Create(UnityEngine.GameObject,System.Int32,UnityEngine.Transform)
extern "C"  GameObjectPool_t652050872 * GameObjectPool_Create_m804653673 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___prefab0, int32_t ___poolSize1, Transform_t3600365921 * ___parent2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_Create_m804653673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	{
		V_0 = ((GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)1));
		GameObjectU5BU5D_t3328599146* L_0 = V_0;
		GameObject_t1113636619 * L_1 = ___prefab0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t1113636619 *)L_1);
		GameObjectU5BU5D_t3328599146* L_2 = V_0;
		int32_t L_3 = ___poolSize1;
		Transform_t3600365921 * L_4 = ___parent2;
		GameObjectPool_t652050872 * L_5 = GameObjectPool_Create_m3844627700(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SagoUtils.GameObjectPool SagoUtils.GameObjectPool::Create(UnityEngine.GameObject[],System.Int32,UnityEngine.Transform)
extern "C"  GameObjectPool_t652050872 * GameObjectPool_Create_m3844627700 (RuntimeObject * __this /* static, unused */, GameObjectU5BU5D_t3328599146* ___prefabs0, int32_t ___poolSize1, Transform_t3600365921 * ___parent2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_Create_m3844627700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	Transform_t3600365921 * V_2 = NULL;
	GameObjectPool_t652050872 * V_3 = NULL;
	{
		Transform_t3600365921 * L_0 = ___parent2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3430435993, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		GameObjectU5BU5D_t3328599146* L_3 = ___prefabs0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_4 = ___prefabs0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))
		{
			goto IL_0040;
		}
	}

IL_0025:
	{
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (GameObjectPool_t652050872_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral25032169, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return (GameObjectPool_t652050872 *)NULL;
	}

IL_0040:
	{
		GameObjectU5BU5D_t3328599146* L_8 = ___prefabs0;
		NullCheck(L_8);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0061;
		}
	}
	{
		GameObjectU5BU5D_t3328599146* L_9 = ___prefabs0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		GameObject_t1113636619 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_m4211327027(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3393487104, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_007e;
	}

IL_0061:
	{
		GameObjectU5BU5D_t3328599146* L_14 = ___prefabs0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		GameObject_t1113636619 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		String_t* L_17 = Object_get_name_m4211327027(L_16, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_18 = ___prefabs0;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))), (int32_t)1));
		RuntimeObject * L_20 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1879577015, L_17, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
	}

IL_007e:
	{
		String_t* L_22 = V_0;
		GameObject_t1113636619 * L_23 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_23, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		GameObject_t1113636619 * L_24 = V_1;
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_24, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		V_2 = L_25;
		Transform_t3600365921 * L_26 = V_2;
		Transform_t3600365921 * L_27 = ___parent2;
		NullCheck(L_26);
		Transform_set_parent_m786917804(L_26, L_27, /*hidden argument*/NULL);
		Transform_t3600365921 * L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_29 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localPosition_m4128471975(L_28, L_29, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_30 = V_1;
		NullCheck(L_30);
		GameObjectPool_t652050872 * L_31 = GameObject_AddComponent_TisGameObjectPool_t652050872_m268313214(L_30, /*hidden argument*/GameObject_AddComponent_TisGameObjectPool_t652050872_m268313214_RuntimeMethod_var);
		V_3 = L_31;
		GameObjectPool_t652050872 * L_32 = V_3;
		GameObjectU5BU5D_t3328599146* L_33 = ___prefabs0;
		int32_t L_34 = ___poolSize1;
		NullCheck(L_32);
		GameObjectPool_Initialize_m3180473883(L_32, L_33, L_34, /*hidden argument*/NULL);
		GameObjectPool_t652050872 * L_35 = V_3;
		return L_35;
	}
}
// UnityEngine.GameObject SagoUtils.GameObjectPool::Spawn(UnityEngine.Vector3)
extern "C"  GameObject_t1113636619 * GameObjectPool_Spawn_m746690209 (GameObjectPool_t652050872 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_Spawn_m746690209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	int32_t V_1 = 0;
	LinkedListNode_1_t3345541024 * V_2 = NULL;
	int32_t V_3 = 0;
	Transform_t3600365921 * V_4 = NULL;
	float V_5 = 0.0f;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Transform_t3600365921 * L_0 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_2 = GameObjectPool_get_ExhaustionBehaviour_m3039066370(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		LinkedList_1_t2440011930 * L_3 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		LinkedListNode_1_t3345541024 * L_4 = LinkedList_1_get_First_m1568734949(L_3, /*hidden argument*/LinkedList_1_get_First_m1568734949_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = LinkedListNode_1_get_Value_m3942835307(L_4, /*hidden argument*/LinkedListNode_1_get_Value_m3942835307_RuntimeMethod_var);
		V_0 = L_5;
		LinkedList_1_t2440011930 * L_6 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		LinkedList_1_RemoveFirst_m66980987(L_6, /*hidden argument*/LinkedList_1_RemoveFirst_m66980987_RuntimeMethod_var);
		Transform_t3600365921 * L_7 = V_0;
		Transform_t3600365921 * L_8 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_parent_m786917804(L_7, L_8, /*hidden argument*/NULL);
		goto IL_00df;
	}

IL_0049:
	{
		int32_t L_9 = GameObjectPool_get_ExhaustionBehaviour_m3039066370(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_00dd;
		}
	}
	{
		LinkedList_1_t2440011930 * L_10 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = LinkedList_1_get_Count_m2638462578(L_10, /*hidden argument*/LinkedList_1_get_Count_m2638462578_RuntimeMethod_var);
		int32_t L_12 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		LinkedList_1_t2440011930 * L_13 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		LinkedListNode_1_t3345541024 * L_14 = LinkedList_1_get_First_m1568734949(L_13, /*hidden argument*/LinkedList_1_get_First_m1568734949_RuntimeMethod_var);
		V_2 = L_14;
		V_3 = 0;
		goto IL_0085;
	}

IL_007a:
	{
		LinkedListNode_1_t3345541024 * L_15 = V_2;
		NullCheck(L_15);
		LinkedListNode_1_t3345541024 * L_16 = LinkedListNode_1_get_Next_m3111221169(L_15, /*hidden argument*/LinkedListNode_1_get_Next_m3111221169_RuntimeMethod_var);
		V_2 = L_16;
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0085:
	{
		LinkedListNode_1_t3345541024 * L_18 = V_2;
		if (!L_18)
		{
			goto IL_009d;
		}
	}
	{
		LinkedListNode_1_t3345541024 * L_19 = V_2;
		NullCheck(L_19);
		LinkedListNode_1_t3345541024 * L_20 = LinkedListNode_1_get_Next_m3111221169(L_19, /*hidden argument*/LinkedListNode_1_get_Next_m3111221169_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_007a;
		}
	}

IL_009d:
	{
		LinkedListNode_1_t3345541024 * L_23 = V_2;
		if (!L_23)
		{
			goto IL_00d8;
		}
	}
	{
		LinkedListNode_1_t3345541024 * L_24 = V_2;
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = LinkedListNode_1_get_Value_m3942835307(L_24, /*hidden argument*/LinkedListNode_1_get_Value_m3942835307_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00d8;
		}
	}
	{
		LinkedListNode_1_t3345541024 * L_27 = V_2;
		NullCheck(L_27);
		Transform_t3600365921 * L_28 = LinkedListNode_1_get_Value_m3942835307(L_27, /*hidden argument*/LinkedListNode_1_get_Value_m3942835307_RuntimeMethod_var);
		NullCheck(L_28);
		GameObject_t1113636619 * L_29 = Component_get_gameObject_m442555142(L_28, /*hidden argument*/NULL);
		int32_t L_30 = GameObjectPool_get_PoolSize_m2519445553(__this, /*hidden argument*/NULL);
		GameObjectPool_AddPrefabToPool_m2220640576(__this, L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = GameObjectPool_get_PoolSize_m2519445553(__this, /*hidden argument*/NULL);
		GameObjectPool_set_PoolSize_m1452149866(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_00d8:
	{
		goto IL_00df;
	}

IL_00dd:
	{
		return (GameObject_t1113636619 *)NULL;
	}

IL_00df:
	{
		Transform_t3600365921 * L_32 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = Transform_get_childCount_m3145433196(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0179;
		}
	}
	{
		Transform_t3600365921 * L_34 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_35 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = Transform_get_childCount_m3145433196(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_t3600365921 * L_37 = Transform_GetChild_m1092972975(L_34, ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_37;
		Transform_t3600365921 * L_38 = V_4;
		Transform_t3600365921 * L_39 = GameObjectPool_get_Transform_m2953483669(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_parent_m786917804(L_38, L_39, /*hidden argument*/NULL);
		Transform_t3600365921 * L_40 = V_4;
		Vector3_t3722313464  L_41 = ___position0;
		NullCheck(L_40);
		Transform_set_position_m3387557959(L_40, L_41, /*hidden argument*/NULL);
		LinkedList_1_t2440011930 * L_42 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_43 = V_4;
		NullCheck(L_42);
		LinkedList_1_AddLast_m1788386392(L_42, L_43, /*hidden argument*/LinkedList_1_AddLast_m1788386392_RuntimeMethod_var);
		bool L_44 = GameObjectPool_get_ApplyRandomScaling_m1157783101(__this, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0171;
		}
	}
	{
		Vector2_t2156229523  L_45 = GameObjectPool_get_ScaleRange_m2463008501(__this, /*hidden argument*/NULL);
		V_6 = L_45;
		float L_46 = Vector2_get_Item_m3559215723((&V_6), 0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_47 = GameObjectPool_get_ScaleRange_m2463008501(__this, /*hidden argument*/NULL);
		V_7 = L_47;
		float L_48 = Vector2_get_Item_m3559215723((&V_7), 1, /*hidden argument*/NULL);
		float L_49 = Random_Range_m2202990745(NULL /*static, unused*/, L_46, L_48, /*hidden argument*/NULL);
		V_5 = L_49;
		Transform_t3600365921 * L_50 = V_4;
		float L_51 = V_5;
		float L_52 = V_5;
		float L_53 = V_5;
		Vector3_t3722313464  L_54;
		memset(&L_54, 0, sizeof(L_54));
		Vector3__ctor_m3353183577((&L_54), L_51, L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localScale_m3053443106(L_50, L_54, /*hidden argument*/NULL);
	}

IL_0171:
	{
		Transform_t3600365921 * L_55 = V_4;
		NullCheck(L_55);
		GameObject_t1113636619 * L_56 = Component_get_gameObject_m442555142(L_55, /*hidden argument*/NULL);
		return L_56;
	}

IL_0179:
	{
		return (GameObject_t1113636619 *)NULL;
	}
}
// UnityEngine.GameObject SagoUtils.GameObjectPool::Spawn(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  GameObject_t1113636619 * GameObjectPool_Spawn_m1541600844 (GameObjectPool_t652050872 * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___eulerAngles1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_Spawn_m1541600844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = ___position0;
		GameObject_t1113636619 * L_1 = GameObjectPool_Spawn_m746690209(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t1113636619 * L_4 = V_0;
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_4, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		Vector3_t3722313464  L_6 = ___eulerAngles1;
		NullCheck(L_5);
		Transform_set_eulerAngles_m135219616(L_5, L_6, /*hidden argument*/NULL);
	}

IL_001f:
	{
		GameObject_t1113636619 * L_7 = V_0;
		return L_7;
	}
}
// System.Void SagoUtils.GameObjectPool::Destroy(UnityEngine.GameObject)
extern "C"  void GameObjectPool_Destroy_m3456973204 (GameObjectPool_t652050872 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_Destroy_m3456973204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_0, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		V_0 = L_1;
		LinkedList_1_t2440011930 * L_2 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = V_0;
		NullCheck(L_2);
		LinkedList_1_Remove_m2698749224(L_2, L_3, /*hidden argument*/LinkedList_1_Remove_m2698749224_RuntimeMethod_var);
		Transform_t3600365921 * L_4 = V_0;
		Transform_t3600365921 * L_5 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_m786917804(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.GameObjectPool::DestroyAll()
extern "C"  void GameObjectPool_DestroyAll_m4198797872 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_DestroyAll_m4198797872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LinkedList_1_t2440011930 * L_0 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		Transform_t3600365921 * L_1 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0046;
	}

IL_0020:
	{
		LinkedList_1_t2440011930 * L_3 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		LinkedListNode_1_t3345541024 * L_4 = LinkedList_1_get_Last_m657854566(L_3, /*hidden argument*/LinkedList_1_get_Last_m657854566_RuntimeMethod_var);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = LinkedListNode_1_get_Value_m3942835307(L_4, /*hidden argument*/LinkedListNode_1_get_Value_m3942835307_RuntimeMethod_var);
		Transform_t3600365921 * L_6 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_parent_m786917804(L_5, L_6, /*hidden argument*/NULL);
		LinkedList_1_t2440011930 * L_7 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		LinkedList_1_RemoveLast_m4283516115(L_7, /*hidden argument*/LinkedList_1_RemoveLast_m4283516115_RuntimeMethod_var);
	}

IL_0046:
	{
		LinkedList_1_t2440011930 * L_8 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		LinkedListNode_1_t3345541024 * L_9 = LinkedList_1_get_Last_m657854566(L_8, /*hidden argument*/LinkedList_1_get_Last_m657854566_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0020;
		}
	}

IL_0056:
	{
		return;
	}
}
// System.Void SagoUtils.GameObjectPool::SetActiveCount(System.Int32)
extern "C"  void GameObjectPool_SetActiveCount_m2964952695 (GameObjectPool_t652050872 * __this, int32_t ___activeCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_SetActiveCount_m2964952695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LinkedList_1_t2440011930 * L_0 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007c;
		}
	}
	{
		Transform_t3600365921 * L_1 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_3 = ___activeCount0;
		int32_t L_4 = GameObjectPool_get_PoolSize_m2519445553(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Min_m18103608(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		___activeCount0 = L_5;
		goto IL_003a;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObjectPool_Spawn_m746690209(__this, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		LinkedList_1_t2440011930 * L_7 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = LinkedList_1_get_Count_m2638462578(L_7, /*hidden argument*/LinkedList_1_get_Count_m2638462578_RuntimeMethod_var);
		int32_t L_9 = ___activeCount0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_006b;
	}

IL_0050:
	{
		LinkedList_1_t2440011930 * L_10 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		LinkedListNode_1_t3345541024 * L_11 = LinkedList_1_get_Last_m657854566(L_10, /*hidden argument*/LinkedList_1_get_Last_m657854566_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = LinkedListNode_1_get_Value_m3942835307(L_11, /*hidden argument*/LinkedListNode_1_get_Value_m3942835307_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
		GameObjectPool_Destroy_m3456973204(__this, L_13, /*hidden argument*/NULL);
	}

IL_006b:
	{
		LinkedList_1_t2440011930 * L_14 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = LinkedList_1_get_Count_m2638462578(L_14, /*hidden argument*/LinkedList_1_get_Count_m2638462578_RuntimeMethod_var);
		int32_t L_16 = ___activeCount0;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_0050;
		}
	}

IL_007c:
	{
		return;
	}
}
// UnityEngine.Transform SagoUtils.GameObjectPool::GetActiveAt(System.Int32)
extern "C"  Transform_t3600365921 * GameObjectPool_GetActiveAt_m558931571 (GameObjectPool_t652050872 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_GetActiveAt_m558931571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LinkedListNode_1_t3345541024 * V_0 = NULL;
	{
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		LinkedList_1_t2440011930 * L_1 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return (Transform_t3600365921 *)NULL;
	}

IL_0014:
	{
		LinkedList_1_t2440011930 * L_2 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		LinkedListNode_1_t3345541024 * L_3 = LinkedList_1_get_First_m1568734949(L_2, /*hidden argument*/LinkedList_1_get_First_m1568734949_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_003e;
	}

IL_0025:
	{
		int32_t L_4 = ___idx0;
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		LinkedListNode_1_t3345541024 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = LinkedListNode_1_get_Value_m3942835307(L_5, /*hidden argument*/LinkedListNode_1_get_Value_m3942835307_RuntimeMethod_var);
		return L_6;
	}

IL_0032:
	{
		int32_t L_7 = ___idx0;
		___idx0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		LinkedListNode_1_t3345541024 * L_8 = V_0;
		NullCheck(L_8);
		LinkedListNode_1_t3345541024 * L_9 = LinkedListNode_1_get_Next_m3111221169(L_8, /*hidden argument*/LinkedListNode_1_get_Next_m3111221169_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_003e:
	{
		LinkedListNode_1_t3345541024 * L_10 = V_0;
		if (L_10)
		{
			goto IL_0025;
		}
	}
	{
		return (Transform_t3600365921 *)NULL;
	}
}
// System.Void SagoUtils.GameObjectPool::Awake()
extern "C"  void GameObjectPool_Awake_m969987260 (GameObjectPool_t652050872 * __this, const RuntimeMethod* method)
{
	{
		GameObjectPool_set_ExhaustionBehaviour_m2975725181(__this, 1, /*hidden argument*/NULL);
		GameObjectPool_set_ApplyRandomScaling_m2491482108(__this, (bool)0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (1.0f), (1.0f), /*hidden argument*/NULL);
		GameObjectPool_set_ScaleRange_m1722613115(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.GameObjectPool::Initialize(UnityEngine.GameObject[],System.Int32)
extern "C"  void GameObjectPool_Initialize_m3180473883 (GameObjectPool_t652050872 * __this, GameObjectU5BU5D_t3328599146* ___prefabs0, int32_t ___poolSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_Initialize_m3180473883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	{
		LinkedList_1_t2440011930 * L_0 = GameObjectPool_get_ActivePool_m169536063(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Transform_t3600365921 * L_1 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_3 = ___poolSize1;
		GameObjectPool_set_PoolSize_m1452149866(__this, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_4, _stringLiteral3637163740, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_5, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		GameObjectPool_set_InactivePool_m591426605(__this, L_6, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = GameObjectPool_get_Transform_m2953483669(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_parent_m786917804(L_7, L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_9 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m796801857(L_10, (bool)0, /*hidden argument*/NULL);
		LinkedList_1_t2440011930 * L_11 = (LinkedList_1_t2440011930 *)il2cpp_codegen_object_new(LinkedList_1_t2440011930_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m3943846788(L_11, /*hidden argument*/LinkedList_1__ctor_m3943846788_RuntimeMethod_var);
		GameObjectPool_set_ActivePool_m3480644315(__this, L_11, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0087;
	}

IL_006f:
	{
		GameObjectU5BU5D_t3328599146* L_12 = ___prefabs0;
		GameObjectU5BU5D_t3328599146* L_13 = ___prefabs0;
		NullCheck(L_13);
		int32_t L_14 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_15 = L_14;
		GameObject_t1113636619 * L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		GameObject_t1113636619 * L_17 = V_2;
		int32_t L_18 = V_1;
		GameObjectPool_AddPrefabToPool_m2220640576(__this, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0087:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = GameObjectPool_get_PoolSize_m2519445553(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_006f;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.GameObjectPool::AddPrefabToPool(UnityEngine.GameObject,System.Int32)
extern "C"  void GameObjectPool_AddPrefabToPool_m2220640576 (GameObjectPool_t652050872 * __this, GameObject_t1113636619 * ___prefab0, int32_t ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObjectPool_AddPrefabToPool_m2220640576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_t3600365921 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ComponentU5BU5D_t3294940482* V_5 = NULL;
	int32_t V_6 = 0;
	{
		GameObject_t1113636619 * L_0 = ___prefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = ___prefab0;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m4211327027(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m1977622757(L_4, _stringLiteral4282608287, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1610150815(L_7, 0, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_002a:
	{
		GameObject_t1113636619 * L_10 = V_0;
		String_t* L_11 = V_1;
		int32_t L_12 = ___id1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3650158087, L_11, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_set_name_m291480324(L_10, L_15, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = V_0;
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_GetComponent_TisTransform_t3600365921_m3348034436(L_16, /*hidden argument*/GameObject_GetComponent_TisTransform_t3600365921_m3348034436_RuntimeMethod_var);
		V_3 = L_17;
		Transform_t3600365921 * L_18 = V_3;
		Transform_t3600365921 * L_19 = GameObjectPool_get_InactivePool_m3488871086(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_parent_m786917804(L_18, L_19, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_20 = V_0;
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (IPooledObject_t1072736807_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		ComponentU5BU5D_t3294940482* L_23 = GameObject_GetComponentsInChildren_m2214160636(L_20, L_22, (bool)1, /*hidden argument*/NULL);
		V_5 = L_23;
		V_6 = 0;
		goto IL_0089;
	}

IL_006f:
	{
		ComponentU5BU5D_t3294940482* L_24 = V_5;
		int32_t L_25 = V_6;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Component_t1923634451 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_27, IPooledObject_t1072736807_il2cpp_TypeInfo_var));
		RuntimeObject* L_28 = V_4;
		NullCheck(L_28);
		InterfaceActionInvoker1< GameObjectPool_t652050872 * >::Invoke(0 /* System.Void SagoUtils.IPooledObject::set_GameObjectPool(SagoUtils.GameObjectPool) */, IPooledObject_t1072736807_il2cpp_TypeInfo_var, L_28, __this);
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_30 = V_6;
		ComponentU5BU5D_t3294940482* L_31 = V_5;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length)))))))
		{
			goto IL_006f;
		}
	}
	{
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
// System.Void SagoUtils.HttpUtility::.ctor()
extern "C"  void HttpUtility__ctor_m3777091486 (HttpUtility_t2848748789 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.HttpUtility::HtmlAttributeEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlAttributeEncode_m1367674236 (RuntimeObject * __this /* static, unused */, String_t* ___s0, TextWriter_t3478189236 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_HtmlAttributeEncode_m1367674236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = ___output1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1975106570, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_2 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___s0;
		TextWriter_t3478189236 * L_4 = ___output1;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, TextWriter_t3478189236 * >::Invoke(5 /* System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlAttributeEncode(System.String,System.IO.TextWriter) */, L_2, L_3, L_4);
		return;
	}
}
// System.String SagoUtils.HttpUtility::HtmlAttributeEncode(System.String)
extern "C"  String_t* HttpUtility_HtmlAttributeEncode_m956163692 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_HtmlAttributeEncode_m956163692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t802263757 * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		StringWriter_t802263757 * L_1 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1244548890(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_2 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___s0;
		StringWriter_t802263757 * L_4 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, TextWriter_t3478189236 * >::Invoke(5 /* System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlAttributeEncode(System.String,System.IO.TextWriter) */, L_2, L_3, L_4);
		StringWriter_t802263757 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x33, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			StringWriter_t802263757 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			StringWriter_t802263757 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.String SagoUtils.HttpUtility::UrlDecode(System.String)
extern "C"  String_t* HttpUtility_UrlDecode_m629556969 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlDecode_m629556969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = HttpUtility_UrlDecode_m2264918457(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char[] SagoUtils.HttpUtility::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C"  CharU5BU5D_t3528271667* HttpUtility_GetChars_m3924744051 (RuntimeObject * __this /* static, unused */, MemoryStream_t94973147 * ___b0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = ___e1;
		MemoryStream_t94973147 * L_1 = ___b0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(27 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_1);
		MemoryStream_t94973147 * L_3 = ___b0;
		NullCheck(L_3);
		int64_t L_4 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		NullCheck(L_0);
		CharU5BU5D_t3528271667* L_5 = VirtFuncInvoker3< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(15 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32) */, L_0, L_2, 0, (((int32_t)((int32_t)L_4))));
		return L_5;
	}
}
// System.Void SagoUtils.HttpUtility::WriteCharBytes(System.Collections.IList,System.Char,System.Text.Encoding)
extern "C"  void HttpUtility_WriteCharBytes_m2961547955 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___buf0, Il2CppChar ___ch1, Encoding_t1523322056 * ___e2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_WriteCharBytes_m2961547955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___ch1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0046;
		}
	}
	{
		Encoding_t1523322056 * L_1 = ___e2;
		CharU5BU5D_t3528271667* L_2 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		Il2CppChar L_3 = ___ch1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_3);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, CharU5BU5D_t3528271667* >::Invoke(12 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_1, L_2);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0038;
	}

IL_0023:
	{
		ByteU5BU5D_t4116647657* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		RuntimeObject* L_9 = ___buf0;
		uint8_t L_10 = V_0;
		uint8_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t2094931216_il2cpp_TypeInfo_var, L_9, L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_14 = V_2;
		ByteU5BU5D_t4116647657* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0054;
	}

IL_0046:
	{
		RuntimeObject* L_16 = ___buf0;
		Il2CppChar L_17 = ___ch1;
		uint8_t L_18 = ((uint8_t)(((int32_t)((uint8_t)L_17))));
		RuntimeObject * L_19 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t2094931216_il2cpp_TypeInfo_var, L_16, L_19);
	}

IL_0054:
	{
		return;
	}
}
// System.String SagoUtils.HttpUtility::UrlDecode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m2264918457 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlDecode_m2264918457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	List_1_t2606371118 * V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m363431711(L_1, ((int32_t)37), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m363431711(L_3, ((int32_t)43), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_5 = ___str0;
		return L_5;
	}

IL_0026:
	{
		Encoding_t1523322056 * L_6 = ___e1;
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_7 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		___e1 = L_7;
	}

IL_0033:
	{
		String_t* L_8 = ___str0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)L_9)));
		List_1_t2606371118 * L_10 = (List_1_t2606371118 *)il2cpp_codegen_object_new(List_1_t2606371118_il2cpp_TypeInfo_var);
		List_1__ctor_m934990389(L_10, /*hidden argument*/List_1__ctor_m934990389_RuntimeMethod_var);
		V_1 = L_10;
		V_4 = 0;
		goto IL_0120;
	}

IL_0049:
	{
		String_t* L_11 = ___str0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		Il2CppChar L_13 = String_get_Chars_m2986988803(L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		Il2CppChar L_14 = V_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_15 = V_4;
		int64_t L_16 = V_0;
		if ((((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2)))))) >= ((int64_t)L_16)))
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_17 = ___str0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Il2CppChar L_19 = String_get_Chars_m2986988803(L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)37))))
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		Il2CppChar L_22 = String_get_Chars_m2986988803(L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_23 = V_4;
		int64_t L_24 = V_0;
		if ((((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)5)))))) >= ((int64_t)L_24)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_25 = ___str0;
		int32_t L_26 = V_4;
		int32_t L_27 = HttpUtility_GetChar_m2499508585(NULL /*static, unused*/, L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2)), 4, /*hidden argument*/NULL);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)(-1))))
		{
			goto IL_00b9;
		}
	}
	{
		List_1_t2606371118 * L_29 = V_1;
		int32_t L_30 = V_2;
		Encoding_t1523322056 * L_31 = ___e1;
		HttpUtility_WriteCharBytes_m2961547955(NULL /*static, unused*/, L_29, (((int32_t)((uint16_t)L_30))), L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)5));
		goto IL_00c2;
	}

IL_00b9:
	{
		List_1_t2606371118 * L_33 = V_1;
		Encoding_t1523322056 * L_34 = ___e1;
		HttpUtility_WriteCharBytes_m2961547955(NULL /*static, unused*/, L_33, ((int32_t)37), L_34, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		goto IL_00f7;
	}

IL_00c7:
	{
		String_t* L_35 = ___str0;
		int32_t L_36 = V_4;
		int32_t L_37 = HttpUtility_GetChar_m2499508585(NULL /*static, unused*/, L_35, ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)), 2, /*hidden argument*/NULL);
		int32_t L_38 = L_37;
		V_2 = L_38;
		if ((((int32_t)L_38) == ((int32_t)(-1))))
		{
			goto IL_00ee;
		}
	}
	{
		List_1_t2606371118 * L_39 = V_1;
		int32_t L_40 = V_2;
		Encoding_t1523322056 * L_41 = ___e1;
		HttpUtility_WriteCharBytes_m2961547955(NULL /*static, unused*/, L_39, (((int32_t)((uint16_t)L_40))), L_41, /*hidden argument*/NULL);
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
		goto IL_00f7;
	}

IL_00ee:
	{
		List_1_t2606371118 * L_43 = V_1;
		Encoding_t1523322056 * L_44 = ___e1;
		HttpUtility_WriteCharBytes_m2961547955(NULL /*static, unused*/, L_43, ((int32_t)37), L_44, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		goto IL_011a;
	}

IL_00fc:
	{
		Il2CppChar L_45 = V_3;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0112;
		}
	}
	{
		List_1_t2606371118 * L_46 = V_1;
		Encoding_t1523322056 * L_47 = ___e1;
		HttpUtility_WriteCharBytes_m2961547955(NULL /*static, unused*/, L_46, ((int32_t)32), L_47, /*hidden argument*/NULL);
		goto IL_011a;
	}

IL_0112:
	{
		List_1_t2606371118 * L_48 = V_1;
		Il2CppChar L_49 = V_3;
		Encoding_t1523322056 * L_50 = ___e1;
		HttpUtility_WriteCharBytes_m2961547955(NULL /*static, unused*/, L_48, L_49, L_50, /*hidden argument*/NULL);
	}

IL_011a:
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_0120:
	{
		int32_t L_52 = V_4;
		int64_t L_53 = V_0;
		if ((((int64_t)(((int64_t)((int64_t)L_52)))) < ((int64_t)L_53)))
		{
			goto IL_0049;
		}
	}
	{
		List_1_t2606371118 * L_54 = V_1;
		NullCheck(L_54);
		ByteU5BU5D_t4116647657* L_55 = List_1_ToArray_m1190122030(L_54, /*hidden argument*/List_1_ToArray_m1190122030_RuntimeMethod_var);
		V_5 = L_55;
		V_1 = (List_1_t2606371118 *)NULL;
		Encoding_t1523322056 * L_56 = ___e1;
		ByteU5BU5D_t4116647657* L_57 = V_5;
		NullCheck(L_56);
		String_t* L_58 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_56, L_57);
		return L_58;
	}
}
// System.String SagoUtils.HttpUtility::UrlDecode(System.Byte[],System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m257470996 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		NullCheck(L_2);
		Encoding_t1523322056 * L_3 = ___e1;
		String_t* L_4 = HttpUtility_UrlDecode_m2390869312(NULL /*static, unused*/, L_1, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 SagoUtils.HttpUtility::GetInt(System.Byte)
extern "C"  int32_t HttpUtility_GetInt_m490971910 (RuntimeObject * __this /* static, unused */, uint8_t ___b0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	{
		uint8_t L_0 = ___b0;
		V_0 = (((int32_t)((uint16_t)L_0)));
		Il2CppChar L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)48))))
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)57))))
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)48)));
	}

IL_0018:
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)102))))
		{
			goto IL_0030;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)97))), (int32_t)((int32_t)10)));
	}

IL_0030:
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)65))))
		{
			goto IL_0048;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)70))))
		{
			goto IL_0048;
		}
	}
	{
		Il2CppChar L_9 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65))), (int32_t)((int32_t)10)));
	}

IL_0048:
	{
		return (-1);
	}
}
// System.Int32 SagoUtils.HttpUtility::GetChar(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_GetChar_m1864332797 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length2;
		int32_t L_1 = ___offset1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___offset1;
		V_2 = L_2;
		goto IL_0029;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_3 = ___bytes0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = HttpUtility_GetInt_m490971910(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}

IL_001f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_9<<(int32_t)4)), (int32_t)L_10));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// System.Int32 SagoUtils.HttpUtility::GetChar(System.String,System.Int32,System.Int32)
extern "C"  int32_t HttpUtility_GetChar_m2499508585 (RuntimeObject * __this /* static, unused */, String_t* ___str0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length2;
		int32_t L_1 = ___offset1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___offset1;
		V_2 = L_2;
		goto IL_003d;
	}

IL_000d:
	{
		String_t* L_3 = ___str0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		Il2CppChar L_6 = V_3;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)127))))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}

IL_001f:
	{
		Il2CppChar L_7 = V_3;
		int32_t L_8 = HttpUtility_GetInt_m490971910(NULL /*static, unused*/, (uint8_t)(((int32_t)((uint8_t)L_7))), /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = V_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_10<<(int32_t)4)), (int32_t)L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String SagoUtils.HttpUtility::UrlDecode(System.Byte[],System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlDecode_m2390869312 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, Encoding_t1523322056 * ___e3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlDecode_m2390869312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	MemoryStream_t94973147 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		int32_t L_1 = ___count2;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_0014:
	{
		ByteU5BU5D_t4116647657* L_3 = ___bytes0;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_4 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_4, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0025:
	{
		int32_t L_5 = ___offset1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___offset1;
		ByteU5BU5D_t4116647657* L_7 = ___bytes0;
		NullCheck(L_7);
		if ((((int32_t)L_6) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0040;
		}
	}

IL_0035:
	{
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_8, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0040:
	{
		int32_t L_9 = ___count2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		ByteU5BU5D_t4116647657* L_12 = ___bytes0;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_005d;
		}
	}

IL_0052:
	{
		ArgumentOutOfRangeException_t777629997 * L_13 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_13, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13);
	}

IL_005d:
	{
		StringBuilder_t * L_14 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_14, /*hidden argument*/NULL);
		V_0 = L_14;
		MemoryStream_t94973147 * L_15 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_15, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = ___count2;
		int32_t L_17 = ___offset1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
		int32_t L_18 = ___offset1;
		V_4 = L_18;
		goto IL_0171;
	}

IL_0075:
	{
		ByteU5BU5D_t4116647657* L_19 = ___bytes0;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_23 = V_4;
		int32_t L_24 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)2))) >= ((int32_t)L_24)))
		{
			goto IL_0123;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_25 = ___bytes0;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)37))))
		{
			goto IL_0123;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_29 = ___bytes0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)5))) >= ((int32_t)L_34)))
		{
			goto IL_00fd;
		}
	}
	{
		MemoryStream_t94973147 * L_35 = V_1;
		NullCheck(L_35);
		int64_t L_36 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_35);
		if ((((int64_t)L_36) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00d1;
		}
	}
	{
		StringBuilder_t * L_37 = V_0;
		MemoryStream_t94973147 * L_38 = V_1;
		Encoding_t1523322056 * L_39 = ___e3;
		CharU5BU5D_t3528271667* L_40 = HttpUtility_GetChars_m3924744051(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		StringBuilder_Append_m168475016(L_37, L_40, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_41 = V_1;
		NullCheck(L_41);
		VirtActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_41, (((int64_t)((int64_t)0))));
	}

IL_00d1:
	{
		ByteU5BU5D_t4116647657* L_42 = ___bytes0;
		int32_t L_43 = V_4;
		int32_t L_44 = HttpUtility_GetChar_m1864332797(NULL /*static, unused*/, L_42, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)2)), 4, /*hidden argument*/NULL);
		V_3 = L_44;
		int32_t L_45 = V_3;
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_00f8;
		}
	}
	{
		StringBuilder_t * L_46 = V_0;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		StringBuilder_Append_m2383614642(L_46, (((int32_t)((uint16_t)L_47))), /*hidden argument*/NULL);
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)5));
		goto IL_016b;
	}

IL_00f8:
	{
		goto IL_0123;
	}

IL_00fd:
	{
		ByteU5BU5D_t4116647657* L_49 = ___bytes0;
		int32_t L_50 = V_4;
		int32_t L_51 = HttpUtility_GetChar_m1864332797(NULL /*static, unused*/, L_49, ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1)), 2, /*hidden argument*/NULL);
		int32_t L_52 = L_51;
		V_3 = L_52;
		if ((((int32_t)L_52) == ((int32_t)(-1))))
		{
			goto IL_0123;
		}
	}
	{
		MemoryStream_t94973147 * L_53 = V_1;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_53, (uint8_t)(((int32_t)((uint8_t)L_54))));
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)2));
		goto IL_016b;
	}

IL_0123:
	{
		MemoryStream_t94973147 * L_56 = V_1;
		NullCheck(L_56);
		int64_t L_57 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_56);
		if ((((int64_t)L_57) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0146;
		}
	}
	{
		StringBuilder_t * L_58 = V_0;
		MemoryStream_t94973147 * L_59 = V_1;
		Encoding_t1523322056 * L_60 = ___e3;
		CharU5BU5D_t3528271667* L_61 = HttpUtility_GetChars_m3924744051(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		StringBuilder_Append_m168475016(L_58, L_61, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_62 = V_1;
		NullCheck(L_62);
		VirtActionInvoker1< int64_t >::Invoke(19 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_62, (((int64_t)((int64_t)0))));
	}

IL_0146:
	{
		ByteU5BU5D_t4116647657* L_63 = ___bytes0;
		int32_t L_64 = V_4;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		if ((!(((uint32_t)L_66) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_015f;
		}
	}
	{
		StringBuilder_t * L_67 = V_0;
		NullCheck(L_67);
		StringBuilder_Append_m2383614642(L_67, ((int32_t)32), /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_015f:
	{
		StringBuilder_t * L_68 = V_0;
		ByteU5BU5D_t4116647657* L_69 = ___bytes0;
		int32_t L_70 = V_4;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		StringBuilder_Append_m2383614642(L_68, (((int32_t)((uint16_t)L_72))), /*hidden argument*/NULL);
	}

IL_016b:
	{
		int32_t L_73 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0171:
	{
		int32_t L_74 = V_4;
		int32_t L_75 = V_2;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0075;
		}
	}
	{
		MemoryStream_t94973147 * L_76 = V_1;
		NullCheck(L_76);
		int64_t L_77 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_76);
		if ((((int64_t)L_77) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0194;
		}
	}
	{
		StringBuilder_t * L_78 = V_0;
		MemoryStream_t94973147 * L_79 = V_1;
		Encoding_t1523322056 * L_80 = ___e3;
		CharU5BU5D_t3528271667* L_81 = HttpUtility_GetChars_m3924744051(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/NULL);
		NullCheck(L_78);
		StringBuilder_Append_m168475016(L_78, L_81, /*hidden argument*/NULL);
	}

IL_0194:
	{
		V_1 = (MemoryStream_t94973147 *)NULL;
		StringBuilder_t * L_82 = V_0;
		NullCheck(L_82);
		String_t* L_83 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_82);
		return L_83;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlDecodeToBytes(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlDecodeToBytes_m2416383386 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = HttpUtility_UrlDecodeToBytes_m1430994491(NULL /*static, unused*/, L_1, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlDecodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlDecodeToBytes_m1451171209 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlDecodeToBytes_m1451171209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = HttpUtility_UrlDecodeToBytes_m3532509229(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlDecodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlDecodeToBytes_m3532509229 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlDecodeToBytes_m3532509229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		Encoding_t1523322056 * L_1 = ___e1;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3452614587, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0019:
	{
		Encoding_t1523322056 * L_3 = ___e1;
		String_t* L_4 = ___str0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_5 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		ByteU5BU5D_t4116647657* L_6 = HttpUtility_UrlDecodeToBytes_m2416383386(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlDecodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlDecodeToBytes_m1430994491 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlDecodeToBytes_m1430994491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryStream_t94973147 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		int32_t L_1 = ___count2;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_0015:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		NullCheck(L_2);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))));
		int32_t L_3 = ___offset1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___offset1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}

IL_0027:
	{
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_6, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0032:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___offset1;
		int32_t L_9 = V_0;
		int32_t L_10 = ___count2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)))))
		{
			goto IL_004d;
		}
	}

IL_0042:
	{
		ArgumentOutOfRangeException_t777629997 * L_11 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_11, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_004d:
	{
		MemoryStream_t94973147 * L_12 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		int32_t L_15 = ___offset1;
		V_3 = L_15;
		goto IL_00b2;
	}

IL_005e:
	{
		ByteU5BU5D_t4116647657* L_16 = ___bytes0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = (((int32_t)((uint16_t)L_19)));
		Il2CppChar L_20 = V_4;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0076;
		}
	}
	{
		V_4 = ((int32_t)32);
		goto IL_00a5;
	}

IL_0076:
	{
		Il2CppChar L_21 = V_4;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)2)))))
		{
			goto IL_00a5;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_24 = ___bytes0;
		int32_t L_25 = V_3;
		int32_t L_26 = HttpUtility_GetChar_m1864332797(NULL /*static, unused*/, L_24, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), 2, /*hidden argument*/NULL);
		V_5 = L_26;
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_28 = V_5;
		V_4 = (((int32_t)((uint16_t)L_28)));
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)2));
	}

IL_00a5:
	{
		MemoryStream_t94973147 * L_30 = V_1;
		Il2CppChar L_31 = V_4;
		NullCheck(L_30);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_30, (uint8_t)(((int32_t)((uint8_t)L_31))));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00b2:
	{
		int32_t L_33 = V_3;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_005e;
		}
	}
	{
		MemoryStream_t94973147 * L_35 = V_1;
		NullCheck(L_35);
		ByteU5BU5D_t4116647657* L_36 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_35);
		return L_36;
	}
}
// System.String SagoUtils.HttpUtility::UrlEncode(System.String)
extern "C"  String_t* HttpUtility_UrlEncode_m516994993 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncode_m516994993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = HttpUtility_UrlEncode_m1044327035(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String SagoUtils.HttpUtility::UrlEncode(System.String,System.Text.Encoding)
extern "C"  String_t* HttpUtility_UrlEncode_m1044327035 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncode_m1044327035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_4;
	}

IL_001e:
	{
		V_0 = (bool)0;
		String_t* L_5 = ___str0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0081;
	}

IL_002e:
	{
		String_t* L_7 = ___str0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		Il2CppChar L_10 = V_3;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)48))))
		{
			goto IL_0066;
		}
	}
	{
		Il2CppChar L_11 = V_3;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)65))))
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_12 = V_3;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)57))))
		{
			goto IL_0066;
		}
	}

IL_004e:
	{
		Il2CppChar L_13 = V_3;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)90))))
		{
			goto IL_005e;
		}
	}
	{
		Il2CppChar L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)97))))
		{
			goto IL_0066;
		}
	}

IL_005e:
	{
		Il2CppChar L_15 = V_3;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)122))))
		{
			goto IL_007d;
		}
	}

IL_0066:
	{
		Il2CppChar L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		bool L_17 = HttpEncoder_NotEncoded_m2696983216(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_007d;
	}

IL_0076:
	{
		V_0 = (bool)1;
		goto IL_0088;
	}

IL_007d:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_002e;
		}
	}

IL_0088:
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_22 = ___str0;
		return L_22;
	}

IL_0090:
	{
		Encoding_t1523322056 * L_23 = ___e1;
		String_t* L_24 = ___str0;
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m3847582255(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_26 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(19 /* System.Int32 System.Text.Encoding::GetMaxByteCount(System.Int32) */, L_23, L_25);
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_26));
		Encoding_t1523322056 * L_27 = ___e1;
		String_t* L_28 = ___str0;
		String_t* L_29 = ___str0;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_31 = V_4;
		NullCheck(L_27);
		int32_t L_32 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(9 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_27, L_28, 0, L_30, L_31, 0);
		V_5 = L_32;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_33 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_34 = V_4;
		int32_t L_35 = V_5;
		ByteU5BU5D_t4116647657* L_36 = HttpUtility_UrlEncodeToBytes_m395923693(NULL /*static, unused*/, L_34, 0, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		String_t* L_37 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_33, L_36);
		return L_37;
	}
}
// System.String SagoUtils.HttpUtility::UrlEncode(System.Byte[])
extern "C"  String_t* HttpUtility_UrlEncode_m2903687215 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncode_m2903687215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_3 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		ByteU5BU5D_t4116647657* L_5 = ___bytes0;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_6 = HttpUtility_UrlEncodeToBytes_m395923693(NULL /*static, unused*/, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_7 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_6);
		return L_7;
	}
}
// System.String SagoUtils.HttpUtility::UrlEncode(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* HttpUtility_UrlEncode_m3467099283 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncode_m3467099283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_3 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = ___bytes0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___count2;
		ByteU5BU5D_t4116647657* L_7 = HttpUtility_UrlEncodeToBytes_m395923693(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_8 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_7);
		return L_8;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeToBytes_m2930587443 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncodeToBytes_m2930587443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = HttpUtility_UrlEncodeToBytes_m236747677(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeToBytes(System.String,System.Text.Encoding)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeToBytes_m236747677 (RuntimeObject * __this /* static, unused */, String_t* ___str0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncodeToBytes_m236747677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		return ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_001a:
	{
		Encoding_t1523322056 * L_3 = ___e1;
		String_t* L_4 = ___str0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_5 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		V_0 = L_5;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = HttpUtility_UrlEncodeToBytes_m395923693(NULL /*static, unused*/, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeToBytes(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeToBytes_m3854249772 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncodeToBytes_m3854249772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		return ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		ByteU5BU5D_t4116647657* L_3 = ___bytes0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = HttpUtility_UrlEncodeToBytes_m395923693(NULL /*static, unused*/, L_2, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeToBytes_m395923693 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncodeToBytes_m395923693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_1 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___count2;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_5 = VirtFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(8 /* System.Byte[] SagoUtils.HttpUtility/HttpEncoder::UrlEncode(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.String SagoUtils.HttpUtility::UrlEncodeUnicode(System.String)
extern "C"  String_t* HttpUtility_UrlEncodeUnicode_m1622061583 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncodeUnicode_m1622061583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___str0;
		ByteU5BU5D_t4116647657* L_3 = HttpUtility_UrlEncodeUnicodeToBytes_m760220488(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_1, L_3);
		return L_4;
	}
}
// System.Byte[] SagoUtils.HttpUtility::UrlEncodeUnicodeToBytes(System.String)
extern "C"  ByteU5BU5D_t4116647657* HttpUtility_UrlEncodeUnicodeToBytes_m760220488 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlEncodeUnicodeToBytes_m760220488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (ByteU5BU5D_t4116647657*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		return ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_001a:
	{
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_5 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2128850779(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = ___str0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0043;
	}

IL_002f:
	{
		String_t* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		MemoryStream_t94973147 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_UrlEncodeChar_m2873453018(NULL /*static, unused*/, L_10, L_11, (bool)1, /*hidden argument*/NULL);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_3;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m3847582255(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}
	{
		MemoryStream_t94973147 * L_16 = V_0;
		NullCheck(L_16);
		ByteU5BU5D_t4116647657* L_17 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_16);
		return L_17;
	}
}
// System.String SagoUtils.HttpUtility::HtmlDecode(System.String)
extern "C"  String_t* HttpUtility_HtmlDecode_m1166999110 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_HtmlDecode_m1166999110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t802263757 * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		StringWriter_t802263757 * L_1 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1244548890(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_2 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___s0;
		StringWriter_t802263757 * L_4 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, TextWriter_t3478189236 * >::Invoke(6 /* System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlDecode(System.String,System.IO.TextWriter) */, L_2, L_3, L_4);
		StringWriter_t802263757 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x33, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			StringWriter_t802263757 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			StringWriter_t802263757 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.Void SagoUtils.HttpUtility::HtmlDecode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlDecode_m480131292 (RuntimeObject * __this /* static, unused */, String_t* ___s0, TextWriter_t3478189236 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_HtmlDecode_m480131292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = ___output1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1975106570, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_4 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___s0;
		TextWriter_t3478189236 * L_6 = ___output1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, TextWriter_t3478189236 * >::Invoke(6 /* System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlDecode(System.String,System.IO.TextWriter) */, L_4, L_5, L_6);
	}

IL_0028:
	{
		return;
	}
}
// System.String SagoUtils.HttpUtility::HtmlEncode(System.String)
extern "C"  String_t* HttpUtility_HtmlEncode_m2154928422 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_HtmlEncode_m2154928422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t802263757 * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		StringWriter_t802263757 * L_1 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1244548890(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_2 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___s0;
		StringWriter_t802263757 * L_4 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, TextWriter_t3478189236 * >::Invoke(7 /* System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlEncode(System.String,System.IO.TextWriter) */, L_2, L_3, L_4);
		StringWriter_t802263757 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x33, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			StringWriter_t802263757 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			StringWriter_t802263757 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.Void SagoUtils.HttpUtility::HtmlEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpUtility_HtmlEncode_m3571403344 (RuntimeObject * __this /* static, unused */, String_t* ___s0, TextWriter_t3478189236 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_HtmlEncode_m3571403344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = ___output1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1975106570, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_4 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___s0;
		TextWriter_t3478189236 * L_6 = ___output1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, TextWriter_t3478189236 * >::Invoke(7 /* System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlEncode(System.String,System.IO.TextWriter) */, L_4, L_5, L_6);
	}

IL_0028:
	{
		return;
	}
}
// System.String SagoUtils.HttpUtility::HtmlEncode(System.Object)
extern "C"  String_t* HttpUtility_HtmlEncode_m4288440561 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = HttpUtility_HtmlEncode_m2154928422(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String SagoUtils.HttpUtility::JavaScriptStringEncode(System.String)
extern "C"  String_t* HttpUtility_JavaScriptStringEncode_m3139618451 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		String_t* L_1 = HttpUtility_JavaScriptStringEncode_m1748003000(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String SagoUtils.HttpUtility::JavaScriptStringEncode(System.String,System.Boolean)
extern "C"  String_t* HttpUtility_JavaScriptStringEncode_m1748003000 (RuntimeObject * __this /* static, unused */, String_t* ___value0, bool ___addDoubleQuotes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_JavaScriptStringEncode_m1748003000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	StringBuilder_t * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B20_0 = NULL;
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = ___addDoubleQuotes1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		G_B4_0 = _stringLiteral3450386302;
		goto IL_0020;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B4_0 = L_3;
	}

IL_0020:
	{
		return G_B4_0;
	}

IL_0021:
	{
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_007b;
	}

IL_0031:
	{
		String_t* L_6 = ___value0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0070;
		}
	}

IL_0048:
	{
		Il2CppChar L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_0070;
		}
	}
	{
		Il2CppChar L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)39))))
		{
			goto IL_0070;
		}
	}
	{
		Il2CppChar L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)60))))
		{
			goto IL_0070;
		}
	}
	{
		Il2CppChar L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)62))))
		{
			goto IL_0070;
		}
	}
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0077;
		}
	}

IL_0070:
	{
		V_1 = (bool)1;
		goto IL_0082;
	}

IL_0077:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0031;
		}
	}

IL_0082:
	{
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_00a5;
		}
	}
	{
		bool L_20 = ___addDoubleQuotes1;
		if (!L_20)
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_21 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3452614526, L_21, _stringLiteral3452614526, /*hidden argument*/NULL);
		G_B20_0 = L_22;
		goto IL_00a4;
	}

IL_00a3:
	{
		String_t* L_23 = ___value0;
		G_B20_0 = L_23;
	}

IL_00a4:
	{
		return G_B20_0;
	}

IL_00a5:
	{
		StringBuilder_t * L_24 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_24, /*hidden argument*/NULL);
		V_4 = L_24;
		bool L_25 = ___addDoubleQuotes1;
		if (!L_25)
		{
			goto IL_00bc;
		}
	}
	{
		StringBuilder_t * L_26 = V_4;
		NullCheck(L_26);
		StringBuilder_Append_m2383614642(L_26, ((int32_t)34), /*hidden argument*/NULL);
	}

IL_00bc:
	{
		V_5 = 0;
		goto IL_01f0;
	}

IL_00c4:
	{
		String_t* L_27 = ___value0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppChar L_29 = String_get_Chars_m2986988803(L_27, L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		Il2CppChar L_30 = V_2;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		Il2CppChar L_31 = V_2;
		if ((((int32_t)L_31) <= ((int32_t)7)))
		{
			goto IL_010b;
		}
	}

IL_00db:
	{
		Il2CppChar L_32 = V_2;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)11))))
		{
			goto IL_010b;
		}
	}
	{
		Il2CppChar L_33 = V_2;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)14))))
		{
			goto IL_00f3;
		}
	}
	{
		Il2CppChar L_34 = V_2;
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)31))))
		{
			goto IL_010b;
		}
	}

IL_00f3:
	{
		Il2CppChar L_35 = V_2;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)39))))
		{
			goto IL_010b;
		}
	}
	{
		Il2CppChar L_36 = V_2;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)60))))
		{
			goto IL_010b;
		}
	}
	{
		Il2CppChar L_37 = V_2;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0123;
		}
	}

IL_010b:
	{
		StringBuilder_t * L_38 = V_4;
		Il2CppChar L_39 = V_2;
		int32_t L_40 = ((int32_t)L_39);
		RuntimeObject * L_41 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		StringBuilder_AppendFormat_m3016532472(L_38, _stringLiteral268407977, L_41, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_0123:
	{
		Il2CppChar L_42 = V_2;
		V_6 = L_42;
		int32_t L_43 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)8)))
		{
			case 0:
			{
				goto IL_015e;
			}
			case 1:
			{
				goto IL_0170;
			}
			case 2:
			{
				goto IL_0182;
			}
			case 3:
			{
				goto IL_0147;
			}
			case 4:
			{
				goto IL_0194;
			}
			case 5:
			{
				goto IL_01a6;
			}
		}
	}

IL_0147:
	{
		int32_t L_44 = V_6;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)34))))
		{
			goto IL_01b8;
		}
	}
	{
		int32_t L_45 = V_6;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)92))))
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_01dc;
	}

IL_015e:
	{
		StringBuilder_t * L_46 = V_4;
		NullCheck(L_46);
		StringBuilder_Append_m1965104174(L_46, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_0170:
	{
		StringBuilder_t * L_47 = V_4;
		NullCheck(L_47);
		StringBuilder_Append_m1965104174(L_47, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_0182:
	{
		StringBuilder_t * L_48 = V_4;
		NullCheck(L_48);
		StringBuilder_Append_m1965104174(L_48, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_0194:
	{
		StringBuilder_t * L_49 = V_4;
		NullCheck(L_49);
		StringBuilder_Append_m1965104174(L_49, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_01a6:
	{
		StringBuilder_t * L_50 = V_4;
		NullCheck(L_50);
		StringBuilder_Append_m1965104174(L_50, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_01b8:
	{
		StringBuilder_t * L_51 = V_4;
		NullCheck(L_51);
		StringBuilder_Append_m1965104174(L_51, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_01ca:
	{
		StringBuilder_t * L_52 = V_4;
		NullCheck(L_52);
		StringBuilder_Append_m1965104174(L_52, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_01dc:
	{
		StringBuilder_t * L_53 = V_4;
		Il2CppChar L_54 = V_2;
		NullCheck(L_53);
		StringBuilder_Append_m2383614642(L_53, L_54, /*hidden argument*/NULL);
		goto IL_01ea;
	}

IL_01ea:
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_01f0:
	{
		int32_t L_56 = V_5;
		int32_t L_57 = V_0;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00c4;
		}
	}
	{
		bool L_58 = ___addDoubleQuotes1;
		if (!L_58)
		{
			goto IL_0208;
		}
	}
	{
		StringBuilder_t * L_59 = V_4;
		NullCheck(L_59);
		StringBuilder_Append_m2383614642(L_59, ((int32_t)34), /*hidden argument*/NULL);
	}

IL_0208:
	{
		StringBuilder_t * L_60 = V_4;
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		return L_61;
	}
}
// System.String SagoUtils.HttpUtility::UrlPathEncode(System.String)
extern "C"  String_t* HttpUtility_UrlPathEncode_m2992652116 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_UrlPathEncode_m2992652116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_0 = HttpEncoder_get_Current_m1693310279(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(9 /* System.String SagoUtils.HttpUtility/HttpEncoder::UrlPathEncode(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Specialized.NameValueCollection SagoUtils.HttpUtility::ParseQueryString(System.String)
extern "C"  NameValueCollection_t407452768 * HttpUtility_ParseQueryString_m1911626477 (RuntimeObject * __this /* static, unused */, String_t* ___query0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_ParseQueryString_m1911626477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___query0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_1 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameValueCollection_t407452768 * L_2 = HttpUtility_ParseQueryString_m3878509040(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Specialized.NameValueCollection SagoUtils.HttpUtility::ParseQueryString(System.String,System.Text.Encoding)
extern "C"  NameValueCollection_t407452768 * HttpUtility_ParseQueryString_m3878509040 (RuntimeObject * __this /* static, unused */, String_t* ___query0, Encoding_t1523322056 * ___encoding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpUtility_ParseQueryString_m3878509040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NameValueCollection_t407452768 * V_0 = NULL;
	{
		String_t* L_0 = ___query0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral735739007, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Encoding_t1523322056 * L_2 = ___encoding1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3002372288, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0022:
	{
		String_t* L_4 = ___query0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_6 = ___query0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_8 = ___query0;
		NullCheck(L_8);
		Il2CppChar L_9 = String_get_Chars_m2986988803(L_8, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_004d;
		}
	}

IL_0047:
	{
		HttpQSCollection_t520254410 * L_10 = (HttpQSCollection_t520254410 *)il2cpp_codegen_object_new(HttpQSCollection_t520254410_il2cpp_TypeInfo_var);
		HttpQSCollection__ctor_m1930281858(L_10, /*hidden argument*/NULL);
		return L_10;
	}

IL_004d:
	{
		String_t* L_11 = ___query0;
		NullCheck(L_11);
		Il2CppChar L_12 = String_get_Chars_m2986988803(L_11, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_13 = ___query0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m2848979100(L_13, 1, /*hidden argument*/NULL);
		___query0 = L_14;
	}

IL_0064:
	{
		HttpQSCollection_t520254410 * L_15 = (HttpQSCollection_t520254410 *)il2cpp_codegen_object_new(HttpQSCollection_t520254410_il2cpp_TypeInfo_var);
		HttpQSCollection__ctor_m1930281858(L_15, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = ___query0;
		Encoding_t1523322056 * L_17 = ___encoding1;
		NameValueCollection_t407452768 * L_18 = V_0;
		HttpUtility_ParseQueryString_m2916514068(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		NameValueCollection_t407452768 * L_19 = V_0;
		return L_19;
	}
}
// System.Void SagoUtils.HttpUtility::ParseQueryString(System.String,System.Text.Encoding,System.Collections.Specialized.NameValueCollection)
extern "C"  void HttpUtility_ParseQueryString_m2916514068 (RuntimeObject * __this /* static, unused */, String_t* ___query0, Encoding_t1523322056 * ___encoding1, NameValueCollection_t407452768 * ___result2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		String_t* L_0 = ___query0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_2 = ___query0;
		String_t* L_3 = HttpUtility_HtmlDecode_m1166999110(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		V_3 = (bool)1;
		goto IL_0102;
	}

IL_0023:
	{
		V_4 = (-1);
		V_5 = (-1);
		int32_t L_6 = V_2;
		V_6 = L_6;
		goto IL_0071;
	}

IL_0031:
	{
		int32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_8, L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_11 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		goto IL_006b;
	}

IL_0053:
	{
		String_t* L_12 = V_0;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		Il2CppChar L_14 = String_get_Chars_m2986988803(L_12, L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = V_6;
		V_5 = L_15;
		goto IL_0079;
	}

IL_006b:
	{
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0071:
	{
		int32_t L_17 = V_6;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0031;
		}
	}

IL_0079:
	{
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0093;
		}
	}
	{
		V_3 = (bool)0;
		String_t* L_20 = V_0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Il2CppChar L_22 = String_get_Chars_m2986988803(L_20, L_21, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0093:
	{
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_00a6;
		}
	}
	{
		V_7 = (String_t*)NULL;
		int32_t L_25 = V_2;
		V_4 = L_25;
		goto IL_00bb;
	}

IL_00a6:
	{
		String_t* L_26 = V_0;
		int32_t L_27 = V_2;
		int32_t L_28 = V_4;
		int32_t L_29 = V_2;
		NullCheck(L_26);
		String_t* L_30 = String_Substring_m1610150815(L_26, L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), (int32_t)1)), /*hidden argument*/NULL);
		Encoding_t1523322056 * L_31 = ___encoding1;
		String_t* L_32 = HttpUtility_UrlDecode_m2264918457(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		V_7 = L_32;
	}

IL_00bb:
	{
		int32_t L_33 = V_5;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		V_2 = (-1);
		String_t* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		goto IL_00d7;
	}

IL_00d2:
	{
		int32_t L_36 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00d7:
	{
		String_t* L_37 = V_0;
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		NullCheck(L_37);
		String_t* L_41 = String_Substring_m1610150815(L_37, L_38, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)), /*hidden argument*/NULL);
		Encoding_t1523322056 * L_42 = ___encoding1;
		String_t* L_43 = HttpUtility_UrlDecode_m2264918457(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		V_8 = L_43;
		NameValueCollection_t407452768 * L_44 = ___result2;
		String_t* L_45 = V_7;
		String_t* L_46 = V_8;
		NullCheck(L_44);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(17 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_44, L_45, L_46);
		int32_t L_47 = V_2;
		if ((!(((uint32_t)L_47) == ((uint32_t)(-1)))))
		{
			goto IL_0102;
		}
	}
	{
		goto IL_0109;
	}

IL_0102:
	{
		int32_t L_48 = V_2;
		int32_t L_49 = V_1;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_0023;
		}
	}

IL_0109:
	{
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
// System.Void SagoUtils.HttpUtility/Helpers::.ctor()
extern "C"  void Helpers__ctor_m1706661580 (Helpers_t2564985369 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.HttpUtility/Helpers::.cctor()
extern "C"  void Helpers__cctor_m687131793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Helpers__cctor_m687131793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Helpers_t2564985369_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_t2564985369_il2cpp_TypeInfo_var))->set_InvariantCulture_0(L_0);
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
// System.Void SagoUtils.HttpUtility/HttpEncoder::.ctor()
extern "C"  void HttpEncoder__ctor_m1099542477 (HttpEncoder_t1079200364 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Char> SagoUtils.HttpUtility/HttpEncoder::get_Entities()
extern "C"  RuntimeObject* HttpEncoder_get_Entities_m2707916450 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_get_Entities_m2707916450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entitiesLock_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
			SortedDictionary_2_t547269768 * L_2 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
			if (L_2)
			{
				goto IL_001b;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
			HttpEncoder_InitEntities_m3617558546(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
			SortedDictionary_2_t547269768 * L_3 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
			V_1 = (RuntimeObject*)L_3;
			IL2CPP_LEAVE(0x2D, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// SagoUtils.HttpUtility/HttpEncoder SagoUtils.HttpUtility/HttpEncoder::get_Current()
extern "C"  HttpEncoder_t1079200364 * HttpEncoder_get_Current_m1693310279 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_get_Current_m1693310279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_0 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_currentEncoder_3();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		HttpEncoder_t1079200364 * L_1 = (HttpEncoder_t1079200364 *)il2cpp_codegen_object_new(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder__ctor_m1099542477(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->set_currentEncoder_3(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_t1079200364 * L_2 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_currentEncoder_3();
		return L_2;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::set_Current(SagoUtils.HttpUtility/HttpEncoder)
extern "C"  void HttpEncoder_set_Current_m3423769570 (RuntimeObject * __this /* static, unused */, HttpEncoder_t1079200364 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_set_Current_m3423769570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HttpEncoder_t1079200364 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		HttpEncoder_t1079200364 * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->set_currentEncoder_3(L_2);
		return;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::HeaderNameValueEncode(System.String,System.String,System.String&,System.String&)
extern "C"  void HttpEncoder_HeaderNameValueEncode_m3864113979 (HttpEncoder_t1079200364 * __this, String_t* ___headerName0, String_t* ___headerValue1, String_t** ___encodedHeaderName2, String_t** ___encodedHeaderValue3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_HeaderNameValueEncode_m3864113979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___headerName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t** L_2 = ___encodedHeaderName2;
		String_t* L_3 = ___headerName0;
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)L_3);
		goto IL_001b;
	}

IL_0013:
	{
		String_t** L_4 = ___encodedHeaderName2;
		String_t* L_5 = ___headerName0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		String_t* L_6 = HttpEncoder_EncodeHeaderString_m4228722004(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_4)) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_4), (RuntimeObject *)L_6);
	}

IL_001b:
	{
		String_t* L_7 = ___headerValue1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		String_t** L_9 = ___encodedHeaderValue3;
		String_t* L_10 = ___headerValue1;
		*((RuntimeObject **)(L_9)) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_9), (RuntimeObject *)L_10);
		goto IL_0038;
	}

IL_002f:
	{
		String_t** L_11 = ___encodedHeaderValue3;
		String_t* L_12 = ___headerValue1;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		String_t* L_13 = HttpEncoder_EncodeHeaderString_m4228722004(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_11)) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_11), (RuntimeObject *)L_13);
	}

IL_0038:
	{
		return;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::StringBuilderAppend(System.String,System.Text.StringBuilder&)
extern "C"  void HttpEncoder_StringBuilderAppend_m4138471539 (RuntimeObject * __this /* static, unused */, String_t* ___s0, StringBuilder_t ** ___sb1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_StringBuilderAppend_m4138471539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t ** L_0 = ___sb1;
		if ((*((StringBuilder_t **)L_0)))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t ** L_1 = ___sb1;
		String_t* L_2 = ___s0;
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_3, L_2, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)L_3);
		goto IL_001d;
	}

IL_0014:
	{
		StringBuilder_t ** L_4 = ___sb1;
		String_t* L_5 = ___s0;
		NullCheck((*((StringBuilder_t **)L_4)));
		StringBuilder_Append_m1965104174((*((StringBuilder_t **)L_4)), L_5, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.String SagoUtils.HttpUtility/HttpEncoder::EncodeHeaderString(System.String)
extern "C"  String_t* HttpEncoder_EncodeHeaderString_m4228722004 (RuntimeObject * __this /* static, unused */, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_EncodeHeaderString_m4228722004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		V_0 = (StringBuilder_t *)NULL;
		V_1 = 0;
		goto IL_0044;
	}

IL_0009:
	{
		String_t* L_0 = ___input0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m2986988803(L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Il2CppChar L_3 = V_2;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0021;
		}
	}
	{
		Il2CppChar L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		Il2CppChar L_5 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_0040;
		}
	}

IL_0029:
	{
		Il2CppChar L_6 = V_2;
		int32_t L_7 = ((int32_t)L_6);
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1770988560, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_StringBuilderAppend_m4138471539(NULL /*static, unused*/, L_9, (&V_0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_11 = V_1;
		String_t* L_12 = ___input0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0009;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
	}

IL_005d:
	{
		String_t* L_17 = ___input0;
		return L_17;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlAttributeEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpEncoder_HtmlAttributeEncode_m977903011 (HttpEncoder_t1079200364 * __this, String_t* ___value0, TextWriter_t3478189236 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_HtmlAttributeEncode_m977903011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = ___output1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1975106570, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		TextWriter_t3478189236 * L_4 = ___output1;
		String_t* L_5 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		String_t* L_6 = HttpEncoder_HtmlAttributeEncode_m4263100397(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_6);
		return;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlDecode(System.String,System.IO.TextWriter)
extern "C"  void HttpEncoder_HtmlDecode_m1399126501 (HttpEncoder_t1079200364 * __this, String_t* ___value0, TextWriter_t3478189236 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_HtmlDecode_m1399126501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = ___output1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1975106570, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		TextWriter_t3478189236 * L_2 = ___output1;
		String_t* L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		String_t* L_4 = HttpEncoder_HtmlDecode_m782726803(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_4);
		return;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::HtmlEncode(System.String,System.IO.TextWriter)
extern "C"  void HttpEncoder_HtmlEncode_m4103982607 (HttpEncoder_t1079200364 * __this, String_t* ___value0, TextWriter_t3478189236 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_HtmlEncode_m4103982607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = ___output1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1975106570, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		TextWriter_t3478189236 * L_2 = ___output1;
		String_t* L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		String_t* L_4 = HttpEncoder_HtmlEncode_m4208094472(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_4);
		return;
	}
}
// System.Byte[] SagoUtils.HttpUtility/HttpEncoder::UrlEncode(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* HttpEncoder_UrlEncode_m3732860626 (HttpEncoder_t1079200364 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_UrlEncode_m3732860626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_3 = HttpEncoder_UrlEncodeToBytes_m3802928077(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String SagoUtils.HttpUtility/HttpEncoder::UrlPathEncode(System.String)
extern "C"  String_t* HttpEncoder_UrlPathEncode_m506614450 (HttpEncoder_t1079200364 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_UrlPathEncode_m506614450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = ___value0;
		return L_2;
	}

IL_000d:
	{
		MemoryStream_t94973147 * L_3 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0032;
	}

IL_0021:
	{
		String_t* L_6 = ___value0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_UrlPathEncodeChar_m373787148(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_13 = Encoding_get_ASCII_m3595602635(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_14);
		NullCheck(L_13);
		String_t* L_16 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_13, L_15);
		return L_16;
	}
}
// System.Byte[] SagoUtils.HttpUtility/HttpEncoder::UrlEncodeToBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* HttpEncoder_UrlEncodeToBytes_m3802928077 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_UrlEncodeToBytes_m3802928077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemoryStream_t94973147 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral130595687, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		ByteU5BU5D_t4116647657* L_2 = ___bytes0;
		NullCheck(L_2);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))));
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		return ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_0022:
	{
		int32_t L_4 = ___offset1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = ___offset1;
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}

IL_0030:
	{
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_7, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_003b:
	{
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_9 = ___count2;
		int32_t L_10 = V_0;
		int32_t L_11 = ___offset1;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)))))
		{
			goto IL_0056;
		}
	}

IL_004b:
	{
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_12, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0056:
	{
		int32_t L_13 = ___count2;
		MemoryStream_t94973147 * L_14 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2128850779(L_14, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		int32_t L_15 = ___offset1;
		int32_t L_16 = ___count2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = ___offset1;
		V_3 = L_17;
		goto IL_0077;
	}

IL_0068:
	{
		ByteU5BU5D_t4116647657* L_18 = ___bytes0;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		MemoryStream_t94973147 * L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		HttpEncoder_UrlEncodeChar_m2873453018(NULL /*static, unused*/, (((int32_t)((uint16_t)L_21))), L_22, (bool)0, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0068;
		}
	}
	{
		MemoryStream_t94973147 * L_26 = V_1;
		NullCheck(L_26);
		ByteU5BU5D_t4116647657* L_27 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_26);
		return L_27;
	}
}
// System.String SagoUtils.HttpUtility/HttpEncoder::HtmlEncode(System.String)
extern "C"  String_t* HttpEncoder_HtmlEncode_m4208094472 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_HtmlEncode_m4208094472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	StringBuilder_t * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_3;
	}

IL_0019:
	{
		V_0 = (bool)0;
		V_1 = 0;
		goto IL_0068;
	}

IL_0022:
	{
		String_t* L_4 = ___s0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)38))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)60))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)62))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_11 = V_2;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)159))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0064;
		}
	}

IL_005d:
	{
		V_0 = (bool)1;
		goto IL_0074;
	}

IL_0064:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_14 = V_1;
		String_t* L_15 = ___s0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0022;
		}
	}

IL_0074:
	{
		bool L_17 = V_0;
		if (L_17)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_18 = ___s0;
		return L_18;
	}

IL_007c:
	{
		StringBuilder_t * L_19 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_19, /*hidden argument*/NULL);
		V_3 = L_19;
		String_t* L_20 = ___s0;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m3847582255(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		V_5 = 0;
		goto IL_01c2;
	}

IL_0092:
	{
		String_t* L_22 = ___s0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		Il2CppChar L_24 = String_get_Chars_m2986988803(L_22, L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		Il2CppChar L_25 = V_6;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)38))))
		{
			goto IL_00eb;
		}
	}
	{
		Il2CppChar L_26 = V_6;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)39))))
		{
			goto IL_012f;
		}
	}
	{
		Il2CppChar L_27 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_010d;
			}
			case 1:
			{
				goto IL_00c4;
			}
			case 2:
			{
				goto IL_00fc;
			}
		}
	}

IL_00c4:
	{
		Il2CppChar L_28 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)((int32_t)65308))))
		{
			case 0:
			{
				goto IL_0140;
			}
			case 1:
			{
				goto IL_00dd;
			}
			case 2:
			{
				goto IL_0151;
			}
		}
	}

IL_00dd:
	{
		Il2CppChar L_29 = V_6;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)34))))
		{
			goto IL_011e;
		}
	}
	{
		goto IL_0162;
	}

IL_00eb:
	{
		StringBuilder_t * L_30 = V_3;
		NullCheck(L_30);
		StringBuilder_Append_m1965104174(L_30, _stringLiteral735890526, /*hidden argument*/NULL);
		goto IL_01bc;
	}

IL_00fc:
	{
		StringBuilder_t * L_31 = V_3;
		NullCheck(L_31);
		StringBuilder_Append_m1965104174(L_31, _stringLiteral2597716672, /*hidden argument*/NULL);
		goto IL_01bc;
	}

IL_010d:
	{
		StringBuilder_t * L_32 = V_3;
		NullCheck(L_32);
		StringBuilder_Append_m1965104174(L_32, _stringLiteral2598437568, /*hidden argument*/NULL);
		goto IL_01bc;
	}

IL_011e:
	{
		StringBuilder_t * L_33 = V_3;
		NullCheck(L_33);
		StringBuilder_Append_m1965104174(L_33, _stringLiteral3987679165, /*hidden argument*/NULL);
		goto IL_01bc;
	}

IL_012f:
	{
		StringBuilder_t * L_34 = V_3;
		NullCheck(L_34);
		StringBuilder_Append_m1965104174(L_34, _stringLiteral1764779280, /*hidden argument*/NULL);
		goto IL_01bc;
	}

IL_0140:
	{
		StringBuilder_t * L_35 = V_3;
		NullCheck(L_35);
		StringBuilder_Append_m1965104174(L_35, _stringLiteral4229536863, /*hidden argument*/NULL);
		goto IL_01bc;
	}

IL_0151:
	{
		StringBuilder_t * L_36 = V_3;
		NullCheck(L_36);
		StringBuilder_Append_m1965104174(L_36, _stringLiteral290734391, /*hidden argument*/NULL);
		goto IL_01bc;
	}

IL_0162:
	{
		Il2CppChar L_37 = V_6;
		if ((((int32_t)L_37) <= ((int32_t)((int32_t)159))))
		{
			goto IL_01ae;
		}
	}
	{
		Il2CppChar L_38 = V_6;
		if ((((int32_t)L_38) >= ((int32_t)((int32_t)256))))
		{
			goto IL_01ae;
		}
	}
	{
		StringBuilder_t * L_39 = V_3;
		NullCheck(L_39);
		StringBuilder_Append_m1965104174(L_39, _stringLiteral3450320762, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = V_3;
		Il2CppChar L_41 = V_6;
		V_7 = L_41;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2564985369_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_42 = ((Helpers_t2564985369_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_t2564985369_il2cpp_TypeInfo_var))->get_InvariantCulture_0();
		String_t* L_43 = Int32_ToString_m1760361794((&V_7), L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		StringBuilder_Append_m1965104174(L_40, L_43, /*hidden argument*/NULL);
		StringBuilder_t * L_44 = V_3;
		NullCheck(L_44);
		StringBuilder_Append_m1965104174(L_44, _stringLiteral3452614549, /*hidden argument*/NULL);
		goto IL_01b7;
	}

IL_01ae:
	{
		StringBuilder_t * L_45 = V_3;
		Il2CppChar L_46 = V_6;
		NullCheck(L_45);
		StringBuilder_Append_m2383614642(L_45, L_46, /*hidden argument*/NULL);
	}

IL_01b7:
	{
		goto IL_01bc;
	}

IL_01bc:
	{
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_01c2:
	{
		int32_t L_48 = V_5;
		int32_t L_49 = V_4;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0092;
		}
	}
	{
		StringBuilder_t * L_50 = V_3;
		NullCheck(L_50);
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		return L_51;
	}
}
// System.String SagoUtils.HttpUtility/HttpEncoder::HtmlAttributeEncode(System.String)
extern "C"  String_t* HttpEncoder_HtmlAttributeEncode_m4263100397 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_HtmlAttributeEncode_m4263100397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	StringBuilder_t * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	{
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_0011:
	{
		V_0 = (bool)0;
		V_1 = 0;
		goto IL_004d;
	}

IL_001a:
	{
		String_t* L_3 = ___s0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)38))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)60))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0049;
		}
	}

IL_0042:
	{
		V_0 = (bool)1;
		goto IL_0059;
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_11 = V_1;
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_0059:
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_15 = ___s0;
		return L_15;
	}

IL_0061:
	{
		StringBuilder_t * L_16 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_16, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = ___s0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m3847582255(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		V_5 = 0;
		goto IL_0102;
	}

IL_0077:
	{
		String_t* L_19 = ___s0;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		Il2CppChar L_21 = String_get_Chars_m2986988803(L_19, L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		Il2CppChar L_22 = V_6;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)38))))
		{
			goto IL_00aa;
		}
	}
	{
		Il2CppChar L_23 = V_6;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)39))))
		{
			goto IL_00dd;
		}
	}
	{
		Il2CppChar L_24 = V_6;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)34))))
		{
			goto IL_00bb;
		}
	}
	{
		Il2CppChar L_25 = V_6;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)60))))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00ee;
	}

IL_00aa:
	{
		StringBuilder_t * L_26 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m1965104174(L_26, _stringLiteral735890526, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00bb:
	{
		StringBuilder_t * L_27 = V_3;
		NullCheck(L_27);
		StringBuilder_Append_m1965104174(L_27, _stringLiteral3987679165, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00cc:
	{
		StringBuilder_t * L_28 = V_3;
		NullCheck(L_28);
		StringBuilder_Append_m1965104174(L_28, _stringLiteral2598437568, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00dd:
	{
		StringBuilder_t * L_29 = V_3;
		NullCheck(L_29);
		StringBuilder_Append_m1965104174(L_29, _stringLiteral1764779280, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00ee:
	{
		StringBuilder_t * L_30 = V_3;
		Il2CppChar L_31 = V_6;
		NullCheck(L_30);
		StringBuilder_Append_m2383614642(L_30, L_31, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00fc:
	{
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0102:
	{
		int32_t L_33 = V_5;
		int32_t L_34 = V_4;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0077;
		}
	}
	{
		StringBuilder_t * L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		return L_36;
	}
}
// System.String SagoUtils.HttpUtility/HttpEncoder::HtmlDecode(System.String)
extern "C"  String_t* HttpEncoder_HtmlDecode_m782726803 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_HtmlDecode_m782726803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	Il2CppChar V_9 = 0x0;
	String_t* V_10 = NULL;
	Il2CppChar V_11 = 0x0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_3;
	}

IL_0019:
	{
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m363431711(L_4, ((int32_t)38), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = ___s0;
		return L_6;
	}

IL_0029:
	{
		StringBuilder_t * L_7 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		StringBuilder_t * L_9 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_9, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		V_4 = 0;
		V_5 = 0;
		V_6 = (bool)0;
		V_7 = (bool)0;
		V_8 = 0;
		goto IL_032d;
	}

IL_0056:
	{
		String_t* L_12 = ___s0;
		int32_t L_13 = V_8;
		NullCheck(L_12);
		Il2CppChar L_14 = String_get_Chars_m2986988803(L_12, L_13, /*hidden argument*/NULL);
		V_9 = L_14;
		int32_t L_15 = V_4;
		if (L_15)
		{
			goto IL_0098;
		}
	}
	{
		Il2CppChar L_16 = V_9;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_008a;
		}
	}
	{
		StringBuilder_t * L_17 = V_1;
		Il2CppChar L_18 = V_9;
		NullCheck(L_17);
		StringBuilder_Append_m2383614642(L_17, L_18, /*hidden argument*/NULL);
		StringBuilder_t * L_19 = V_0;
		Il2CppChar L_20 = V_9;
		NullCheck(L_19);
		StringBuilder_Append_m2383614642(L_19, L_20, /*hidden argument*/NULL);
		V_4 = 1;
		goto IL_0093;
	}

IL_008a:
	{
		StringBuilder_t * L_21 = V_2;
		Il2CppChar L_22 = V_9;
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, L_22, /*hidden argument*/NULL);
	}

IL_0093:
	{
		goto IL_0327;
	}

IL_0098:
	{
		Il2CppChar L_23 = V_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_00e3;
		}
	}
	{
		V_4 = 1;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2564985369_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_26 = ((Helpers_t2564985369_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_t2564985369_il2cpp_TypeInfo_var))->get_InvariantCulture_0();
		String_t* L_27 = Int32_ToString_m1760361794((&V_5), L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_Append_m1965104174(L_25, L_27, /*hidden argument*/NULL);
		V_7 = (bool)0;
	}

IL_00c1:
	{
		StringBuilder_t * L_28 = V_2;
		StringBuilder_t * L_29 = V_1;
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		NullCheck(L_28);
		StringBuilder_Append_m1965104174(L_28, L_30, /*hidden argument*/NULL);
		StringBuilder_t * L_31 = V_1;
		NullCheck(L_31);
		StringBuilder_set_Length_m1410065908(L_31, 0, /*hidden argument*/NULL);
		StringBuilder_t * L_32 = V_1;
		NullCheck(L_32);
		StringBuilder_Append_m2383614642(L_32, ((int32_t)38), /*hidden argument*/NULL);
		goto IL_0327;
	}

IL_00e3:
	{
		int32_t L_33 = V_4;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_014a;
		}
	}
	{
		Il2CppChar L_34 = V_9;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0119;
		}
	}
	{
		V_4 = 0;
		StringBuilder_t * L_35 = V_2;
		StringBuilder_t * L_36 = V_1;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		NullCheck(L_35);
		StringBuilder_Append_m1965104174(L_35, L_37, /*hidden argument*/NULL);
		StringBuilder_t * L_38 = V_2;
		Il2CppChar L_39 = V_9;
		NullCheck(L_38);
		StringBuilder_Append_m2383614642(L_38, L_39, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = V_1;
		NullCheck(L_40);
		StringBuilder_set_Length_m1410065908(L_40, 0, /*hidden argument*/NULL);
		goto IL_0145;
	}

IL_0119:
	{
		V_5 = 0;
		V_6 = (bool)0;
		Il2CppChar L_41 = V_9;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)35))))
		{
			goto IL_0130;
		}
	}
	{
		V_4 = 2;
		goto IL_0133;
	}

IL_0130:
	{
		V_4 = 3;
	}

IL_0133:
	{
		StringBuilder_t * L_42 = V_1;
		Il2CppChar L_43 = V_9;
		NullCheck(L_42);
		StringBuilder_Append_m2383614642(L_42, L_43, /*hidden argument*/NULL);
		StringBuilder_t * L_44 = V_0;
		Il2CppChar L_45 = V_9;
		NullCheck(L_44);
		StringBuilder_Append_m2383614642(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0145:
	{
		goto IL_0327;
	}

IL_014a:
	{
		int32_t L_46 = V_4;
		if ((!(((uint32_t)L_46) == ((uint32_t)2))))
		{
			goto IL_01e4;
		}
	}
	{
		StringBuilder_t * L_47 = V_1;
		Il2CppChar L_48 = V_9;
		NullCheck(L_47);
		StringBuilder_Append_m2383614642(L_47, L_48, /*hidden argument*/NULL);
		Il2CppChar L_49 = V_9;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_01df;
		}
	}
	{
		StringBuilder_t * L_50 = V_1;
		NullCheck(L_50);
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		V_10 = L_51;
		String_t* L_52 = V_10;
		NullCheck(L_52);
		int32_t L_53 = String_get_Length_m3847582255(L_52, /*hidden argument*/NULL);
		if ((((int32_t)L_53) <= ((int32_t)1)))
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		RuntimeObject* L_54 = HttpEncoder_get_Entities_m2707916450(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_55 = V_10;
		String_t* L_56 = V_10;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m3847582255(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		String_t* L_58 = String_Substring_m1610150815(L_55, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_54);
		bool L_59 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Char>::ContainsKey(!0) */, IDictionary_2_t1883568160_il2cpp_TypeInfo_var, L_54, L_58);
		if (!L_59)
		{
			goto IL_01c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		RuntimeObject* L_60 = HttpEncoder_get_Entities_m2707916450(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_61 = V_10;
		String_t* L_62 = V_10;
		NullCheck(L_62);
		int32_t L_63 = String_get_Length_m3847582255(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_64 = String_Substring_m1610150815(L_61, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_60);
		Il2CppChar L_65 = InterfaceFuncInvoker1< Il2CppChar, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Char>::get_Item(!0) */, IDictionary_2_t1883568160_il2cpp_TypeInfo_var, L_60, L_64);
		V_11 = L_65;
		String_t* L_66 = Char_ToString_m3588025615((&V_11), /*hidden argument*/NULL);
		V_10 = L_66;
	}

IL_01c5:
	{
		StringBuilder_t * L_67 = V_2;
		String_t* L_68 = V_10;
		NullCheck(L_67);
		StringBuilder_Append_m1965104174(L_67, L_68, /*hidden argument*/NULL);
		V_4 = 0;
		StringBuilder_t * L_69 = V_1;
		NullCheck(L_69);
		StringBuilder_set_Length_m1410065908(L_69, 0, /*hidden argument*/NULL);
		StringBuilder_t * L_70 = V_0;
		NullCheck(L_70);
		StringBuilder_set_Length_m1410065908(L_70, 0, /*hidden argument*/NULL);
	}

IL_01df:
	{
		goto IL_0327;
	}

IL_01e4:
	{
		int32_t L_71 = V_4;
		if ((!(((uint32_t)L_71) == ((uint32_t)3))))
		{
			goto IL_0327;
		}
	}
	{
		Il2CppChar L_72 = V_9;
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)59)))))
		{
			goto IL_0277;
		}
	}
	{
		int32_t L_73 = V_5;
		if (L_73)
		{
			goto IL_0218;
		}
	}
	{
		StringBuilder_t * L_74 = V_2;
		StringBuilder_t * L_75 = V_0;
		NullCheck(L_75);
		String_t* L_76 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_75);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_77 = String_Concat_m3937257545(NULL /*static, unused*/, L_76, _stringLiteral3452614549, /*hidden argument*/NULL);
		NullCheck(L_74);
		StringBuilder_Append_m1965104174(L_74, L_77, /*hidden argument*/NULL);
		goto IL_025e;
	}

IL_0218:
	{
		int32_t L_78 = V_5;
		if ((((int32_t)L_78) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0254;
		}
	}
	{
		StringBuilder_t * L_79 = V_2;
		NullCheck(L_79);
		StringBuilder_Append_m1965104174(L_79, _stringLiteral3450320762, /*hidden argument*/NULL);
		StringBuilder_t * L_80 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2564985369_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_81 = ((Helpers_t2564985369_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_t2564985369_il2cpp_TypeInfo_var))->get_InvariantCulture_0();
		String_t* L_82 = Int32_ToString_m1760361794((&V_5), L_81, /*hidden argument*/NULL);
		NullCheck(L_80);
		StringBuilder_Append_m1965104174(L_80, L_82, /*hidden argument*/NULL);
		StringBuilder_t * L_83 = V_2;
		NullCheck(L_83);
		StringBuilder_Append_m1965104174(L_83, _stringLiteral3452614549, /*hidden argument*/NULL);
		goto IL_025e;
	}

IL_0254:
	{
		StringBuilder_t * L_84 = V_2;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		StringBuilder_Append_m2383614642(L_84, (((int32_t)((uint16_t)L_85))), /*hidden argument*/NULL);
	}

IL_025e:
	{
		V_4 = 0;
		StringBuilder_t * L_86 = V_1;
		NullCheck(L_86);
		StringBuilder_set_Length_m1410065908(L_86, 0, /*hidden argument*/NULL);
		StringBuilder_t * L_87 = V_0;
		NullCheck(L_87);
		StringBuilder_set_Length_m1410065908(L_87, 0, /*hidden argument*/NULL);
		V_7 = (bool)0;
		goto IL_0327;
	}

IL_0277:
	{
		bool L_88 = V_6;
		if (!L_88)
		{
			goto IL_02aa;
		}
	}
	{
		Il2CppChar L_89 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_90 = Uri_IsHexDigit_m3389749670(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_91 = V_5;
		Il2CppChar L_92 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		int32_t L_93 = Uri_FromHex_m2610708947(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_91, (int32_t)((int32_t)16))), (int32_t)L_93));
		V_7 = (bool)1;
		StringBuilder_t * L_94 = V_0;
		Il2CppChar L_95 = V_9;
		NullCheck(L_94);
		StringBuilder_Append_m2383614642(L_94, L_95, /*hidden argument*/NULL);
		goto IL_0327;
	}

IL_02aa:
	{
		Il2CppChar L_96 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_97 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_98 = V_5;
		Il2CppChar L_99 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_98, (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)((int32_t)48)))));
		V_7 = (bool)1;
		StringBuilder_t * L_100 = V_0;
		Il2CppChar L_101 = V_9;
		NullCheck(L_100);
		StringBuilder_Append_m2383614642(L_100, L_101, /*hidden argument*/NULL);
		goto IL_0327;
	}

IL_02d4:
	{
		int32_t L_102 = V_5;
		if (L_102)
		{
			goto IL_02fe;
		}
	}
	{
		Il2CppChar L_103 = V_9;
		if ((((int32_t)L_103) == ((int32_t)((int32_t)120))))
		{
			goto IL_02ed;
		}
	}
	{
		Il2CppChar L_104 = V_9;
		if ((!(((uint32_t)L_104) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_02fe;
		}
	}

IL_02ed:
	{
		V_6 = (bool)1;
		StringBuilder_t * L_105 = V_0;
		Il2CppChar L_106 = V_9;
		NullCheck(L_105);
		StringBuilder_Append_m2383614642(L_105, L_106, /*hidden argument*/NULL);
		goto IL_0327;
	}

IL_02fe:
	{
		V_4 = 2;
		bool L_107 = V_7;
		if (!L_107)
		{
			goto IL_031e;
		}
	}
	{
		StringBuilder_t * L_108 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2564985369_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_109 = ((Helpers_t2564985369_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_t2564985369_il2cpp_TypeInfo_var))->get_InvariantCulture_0();
		String_t* L_110 = Int32_ToString_m1760361794((&V_5), L_109, /*hidden argument*/NULL);
		NullCheck(L_108);
		StringBuilder_Append_m1965104174(L_108, L_110, /*hidden argument*/NULL);
		V_7 = (bool)0;
	}

IL_031e:
	{
		StringBuilder_t * L_111 = V_1;
		Il2CppChar L_112 = V_9;
		NullCheck(L_111);
		StringBuilder_Append_m2383614642(L_111, L_112, /*hidden argument*/NULL);
	}

IL_0327:
	{
		int32_t L_113 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
	}

IL_032d:
	{
		int32_t L_114 = V_8;
		int32_t L_115 = V_3;
		if ((((int32_t)L_114) < ((int32_t)L_115)))
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t * L_116 = V_1;
		NullCheck(L_116);
		int32_t L_117 = StringBuilder_get_Length_m3238060835(L_116, /*hidden argument*/NULL);
		if ((((int32_t)L_117) <= ((int32_t)0)))
		{
			goto IL_0353;
		}
	}
	{
		StringBuilder_t * L_118 = V_2;
		StringBuilder_t * L_119 = V_1;
		NullCheck(L_119);
		String_t* L_120 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_119);
		NullCheck(L_118);
		StringBuilder_Append_m1965104174(L_118, L_120, /*hidden argument*/NULL);
		goto IL_036d;
	}

IL_0353:
	{
		bool L_121 = V_7;
		if (!L_121)
		{
			goto IL_036d;
		}
	}
	{
		StringBuilder_t * L_122 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2564985369_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_123 = ((Helpers_t2564985369_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_t2564985369_il2cpp_TypeInfo_var))->get_InvariantCulture_0();
		String_t* L_124 = Int32_ToString_m1760361794((&V_5), L_123, /*hidden argument*/NULL);
		NullCheck(L_122);
		StringBuilder_Append_m1965104174(L_122, L_124, /*hidden argument*/NULL);
	}

IL_036d:
	{
		StringBuilder_t * L_125 = V_2;
		NullCheck(L_125);
		String_t* L_126 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_125);
		return L_126;
	}
}
// System.Boolean SagoUtils.HttpUtility/HttpEncoder::NotEncoded(System.Char)
extern "C"  bool HttpEncoder_NotEncoded_m2696983216 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	int32_t G_B8_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)33))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)40))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)41))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)42))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)45))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)46))))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_6 = ___c0;
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)((int32_t)95)))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B8_0 = 1;
	}

IL_0038:
	{
		return (bool)G_B8_0;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::UrlEncodeChar(System.Char,System.IO.Stream,System.Boolean)
extern "C"  void HttpEncoder_UrlEncodeChar_m2873453018 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t1273022909 * ___result1, bool ___isUnicode2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_UrlEncodeChar_m2873453018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_006e;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		V_1 = L_1;
		Stream_t1273022909 * L_2 = ___result1;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (uint8_t)((int32_t)37));
		Stream_t1273022909 * L_3 = ___result1;
		NullCheck(L_3);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_3, (uint8_t)((int32_t)117));
		int32_t L_4 = V_1;
		V_0 = ((int32_t)((int32_t)L_4>>(int32_t)((int32_t)12)));
		Stream_t1273022909 * L_5 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_6 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_5, (uint8_t)(((int32_t)((uint8_t)L_9))));
		int32_t L_10 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_10>>(int32_t)8))&(int32_t)((int32_t)15)));
		Stream_t1273022909 * L_11 = ___result1;
		CharU5BU5D_t3528271667* L_12 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_11, (uint8_t)(((int32_t)((uint8_t)L_15))));
		int32_t L_16 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16>>(int32_t)4))&(int32_t)((int32_t)15)));
		Stream_t1273022909 * L_17 = ___result1;
		CharU5BU5D_t3528271667* L_18 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_17, (uint8_t)(((int32_t)((uint8_t)L_21))));
		int32_t L_22 = V_1;
		V_0 = ((int32_t)((int32_t)L_22&(int32_t)((int32_t)15)));
		Stream_t1273022909 * L_23 = ___result1;
		CharU5BU5D_t3528271667* L_24 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint16_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_23, (uint8_t)(((int32_t)((uint8_t)L_27))));
		return;
	}

IL_006e:
	{
		Il2CppChar L_28 = ___c0;
		if ((((int32_t)L_28) <= ((int32_t)((int32_t)32))))
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar L_29 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		bool L_30 = HttpEncoder_NotEncoded_m2696983216(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_008a;
		}
	}
	{
		Stream_t1273022909 * L_31 = ___result1;
		Il2CppChar L_32 = ___c0;
		NullCheck(L_31);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_31, (uint8_t)(((int32_t)((uint8_t)L_32))));
		return;
	}

IL_008a:
	{
		Il2CppChar L_33 = ___c0;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_009b;
		}
	}
	{
		Stream_t1273022909 * L_34 = ___result1;
		NullCheck(L_34);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_34, (uint8_t)((int32_t)43));
		return;
	}

IL_009b:
	{
		Il2CppChar L_35 = ___c0;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)48))))
		{
			goto IL_00cb;
		}
	}
	{
		Il2CppChar L_36 = ___c0;
		if ((((int32_t)L_36) >= ((int32_t)((int32_t)65))))
		{
			goto IL_00b3;
		}
	}
	{
		Il2CppChar L_37 = ___c0;
		if ((((int32_t)L_37) > ((int32_t)((int32_t)57))))
		{
			goto IL_00cb;
		}
	}

IL_00b3:
	{
		Il2CppChar L_38 = ___c0;
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)90))))
		{
			goto IL_00c3;
		}
	}
	{
		Il2CppChar L_39 = ___c0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)97))))
		{
			goto IL_00cb;
		}
	}

IL_00c3:
	{
		Il2CppChar L_40 = ___c0;
		if ((((int32_t)L_40) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0130;
		}
	}

IL_00cb:
	{
		bool L_41 = ___isUnicode2;
		if (!L_41)
		{
			goto IL_00fe;
		}
	}
	{
		Il2CppChar L_42 = ___c0;
		if ((((int32_t)L_42) <= ((int32_t)((int32_t)127))))
		{
			goto IL_00fe;
		}
	}
	{
		Stream_t1273022909 * L_43 = ___result1;
		NullCheck(L_43);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_43, (uint8_t)((int32_t)37));
		Stream_t1273022909 * L_44 = ___result1;
		NullCheck(L_44);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_44, (uint8_t)((int32_t)117));
		Stream_t1273022909 * L_45 = ___result1;
		NullCheck(L_45);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_45, (uint8_t)((int32_t)48));
		Stream_t1273022909 * L_46 = ___result1;
		NullCheck(L_46);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_46, (uint8_t)((int32_t)48));
		goto IL_0106;
	}

IL_00fe:
	{
		Stream_t1273022909 * L_47 = ___result1;
		NullCheck(L_47);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_47, (uint8_t)((int32_t)37));
	}

IL_0106:
	{
		Il2CppChar L_48 = ___c0;
		V_2 = ((int32_t)((int32_t)L_48>>(int32_t)4));
		Stream_t1273022909 * L_49 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_50 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_51 = V_2;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint16_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_49);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_49, (uint8_t)(((int32_t)((uint8_t)L_53))));
		Il2CppChar L_54 = ___c0;
		V_2 = ((int32_t)((int32_t)L_54&(int32_t)((int32_t)15)));
		Stream_t1273022909 * L_55 = ___result1;
		CharU5BU5D_t3528271667* L_56 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_55);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_55, (uint8_t)(((int32_t)((uint8_t)L_59))));
		goto IL_0138;
	}

IL_0130:
	{
		Stream_t1273022909 * L_60 = ___result1;
		Il2CppChar L_61 = ___c0;
		NullCheck(L_60);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_60, (uint8_t)(((int32_t)((uint8_t)L_61))));
	}

IL_0138:
	{
		return;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::UrlPathEncodeChar(System.Char,System.IO.Stream)
extern "C"  void HttpEncoder_UrlPathEncodeChar_m373787148 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, Stream_t1273022909 * ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_UrlPathEncodeChar_m373787148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)33))))
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)126))))
		{
			goto IL_0072;
		}
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_2 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = Char_ToString_m3588025615((&___c0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		V_1 = 0;
		goto IL_0064;
	}

IL_002f:
	{
		Stream_t1273022909 * L_5 = ___result1;
		NullCheck(L_5);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_5, (uint8_t)((int32_t)37));
		ByteU5BU5D_t4116647657* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = ((int32_t)((int32_t)L_9>>(int32_t)4));
		Stream_t1273022909 * L_10 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_11 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_10, (uint8_t)(((int32_t)((uint8_t)L_14))));
		ByteU5BU5D_t4116647657* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)((int32_t)L_18&(int32_t)((int32_t)15)));
		Stream_t1273022909 * L_19 = ___result1;
		CharU5BU5D_t3528271667* L_20 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_hexChars_0();
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_19, (uint8_t)(((int32_t)((uint8_t)L_23))));
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_25 = V_1;
		ByteU5BU5D_t4116647657* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_009f;
	}

IL_0072:
	{
		Il2CppChar L_27 = ___c0;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0097;
		}
	}
	{
		Stream_t1273022909 * L_28 = ___result1;
		NullCheck(L_28);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_28, (uint8_t)((int32_t)37));
		Stream_t1273022909 * L_29 = ___result1;
		NullCheck(L_29);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_29, (uint8_t)((int32_t)50));
		Stream_t1273022909 * L_30 = ___result1;
		NullCheck(L_30);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_30, (uint8_t)((int32_t)48));
		goto IL_009f;
	}

IL_0097:
	{
		Stream_t1273022909 * L_31 = ___result1;
		Il2CppChar L_32 = ___c0;
		NullCheck(L_31);
		VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_31, (uint8_t)(((int32_t)((uint8_t)L_32))));
	}

IL_009f:
	{
		return;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::InitEntities()
extern "C"  void HttpEncoder_InitEntities_m3617558546 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder_InitEntities_m3617558546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t3301955079_il2cpp_TypeInfo_var);
		StringComparer_t3301955079 * L_0 = StringComparer_get_Ordinal_m2103862281(NULL /*static, unused*/, /*hidden argument*/NULL);
		SortedDictionary_2_t547269768 * L_1 = (SortedDictionary_2_t547269768 *)il2cpp_codegen_object_new(SortedDictionary_2_t547269768_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_m948750160(L_1, L_0, /*hidden argument*/SortedDictionary_2__ctor_m948750160_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(HttpEncoder_t1079200364_il2cpp_TypeInfo_var);
		((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->set_entities_2(L_1);
		SortedDictionary_2_t547269768 * L_2 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_2);
		SortedDictionary_2_Add_m3746728377(L_2, _stringLiteral410685037, ((int32_t)160), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_3 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_3);
		SortedDictionary_2_Add_m3746728377(L_3, _stringLiteral2065516003, ((int32_t)161), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_4 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_4);
		SortedDictionary_2_Add_m3746728377(L_4, _stringLiteral3893727505, ((int32_t)162), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_5 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_5);
		SortedDictionary_2_Add_m3746728377(L_5, _stringLiteral2002596515, ((int32_t)163), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_6 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_6);
		SortedDictionary_2_Add_m3746728377(L_6, _stringLiteral428528232, ((int32_t)164), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_7 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_7);
		SortedDictionary_2_Add_m3746728377(L_7, _stringLiteral4072247595, ((int32_t)165), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_8 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_8);
		SortedDictionary_2_Add_m3746728377(L_8, _stringLiteral4002391215, ((int32_t)166), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_9 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_9);
		SortedDictionary_2_Add_m3746728377(L_9, _stringLiteral358275112, ((int32_t)167), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_10 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_10);
		SortedDictionary_2_Add_m3746728377(L_10, _stringLiteral2909972457, ((int32_t)168), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_11 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_11);
		SortedDictionary_2_Add_m3746728377(L_11, _stringLiteral4862103, ((int32_t)169), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_12 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_12);
		SortedDictionary_2_Add_m3746728377(L_12, _stringLiteral3942337719, ((int32_t)170), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_13 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_13);
		SortedDictionary_2_Add_m3746728377(L_13, _stringLiteral3540672188, ((int32_t)171), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_14 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_14);
		SortedDictionary_2_Add_m3746728377(L_14, _stringLiteral2553611016, ((int32_t)172), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_15 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_15);
		SortedDictionary_2_Add_m3746728377(L_15, _stringLiteral2601123946, ((int32_t)173), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_16 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_16);
		SortedDictionary_2_Add_m3746728377(L_16, _stringLiteral2862394005, ((int32_t)174), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_17 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_17);
		SortedDictionary_2_Add_m3746728377(L_17, _stringLiteral740874270, ((int32_t)175), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_18 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_18);
		SortedDictionary_2_Add_m3746728377(L_18, _stringLiteral2862393987, ((int32_t)176), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_19 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_19);
		SortedDictionary_2_Add_m3746728377(L_19, _stringLiteral1963012762, ((int32_t)177), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_20 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_20);
		SortedDictionary_2_Add_m3746728377(L_20, _stringLiteral1082601639, ((int32_t)178), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_21 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_21);
		SortedDictionary_2_Add_m3746728377(L_21, _stringLiteral3038916775, ((int32_t)179), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_22 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_22);
		SortedDictionary_2_Add_m3746728377(L_22, _stringLiteral3905630195, ((int32_t)180), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_23 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_23);
		SortedDictionary_2_Add_m3746728377(L_23, _stringLiteral3859255747, ((int32_t)181), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_24 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_24);
		SortedDictionary_2_Add_m3746728377(L_24, _stringLiteral874453472, ((int32_t)182), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_25 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_25);
		SortedDictionary_2_Add_m3746728377(L_25, _stringLiteral3149989470, ((int32_t)183), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_26 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_26);
		SortedDictionary_2_Add_m3746728377(L_26, _stringLiteral3076523333, ((int32_t)184), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_27 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_27);
		SortedDictionary_2_Add_m3746728377(L_27, _stringLiteral3421253799, ((int32_t)185), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_28 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_28);
		SortedDictionary_2_Add_m3746728377(L_28, _stringLiteral3515370679, ((int32_t)186), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_29 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_29);
		SortedDictionary_2_Add_m3746728377(L_29, _stringLiteral3540672370, ((int32_t)187), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_30 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_30);
		SortedDictionary_2_Add_m3746728377(L_30, _stringLiteral1612097284, ((int32_t)188), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_31 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_31);
		SortedDictionary_2_Add_m3746728377(L_31, _stringLiteral1612490500, ((int32_t)189), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_32 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_32);
		SortedDictionary_2_Add_m3746728377(L_32, _stringLiteral1612097282, ((int32_t)190), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_33 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_33);
		SortedDictionary_2_Add_m3746728377(L_33, _stringLiteral2845061585, ((int32_t)191), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_34 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_34);
		SortedDictionary_2_Add_m3746728377(L_34, _stringLiteral3960133363, ((int32_t)192), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_35 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_35);
		SortedDictionary_2_Add_m3746728377(L_35, _stringLiteral1126929724, ((int32_t)193), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_36 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_36);
		SortedDictionary_2_Add_m3746728377(L_36, _stringLiteral2318600005, ((int32_t)194), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_37 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_37);
		SortedDictionary_2_Add_m3746728377(L_37, _stringLiteral437585726, ((int32_t)195), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_38 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_38);
		SortedDictionary_2_Add_m3746728377(L_38, _stringLiteral3931511960, ((int32_t)196), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_39 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_39);
		SortedDictionary_2_Add_m3746728377(L_39, _stringLiteral61343553, ((int32_t)197), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_40 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_40);
		SortedDictionary_2_Add_m3746728377(L_40, _stringLiteral2789500178, ((int32_t)198), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_41 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_41);
		SortedDictionary_2_Add_m3746728377(L_41, _stringLiteral1557036477, ((int32_t)199), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_42 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_42);
		SortedDictionary_2_Add_m3746728377(L_42, _stringLiteral3960133239, ((int32_t)200), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_43 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_43);
		SortedDictionary_2_Add_m3746728377(L_43, _stringLiteral1126929600, ((int32_t)201), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_44 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_44);
		SortedDictionary_2_Add_m3746728377(L_44, _stringLiteral2318599873, ((int32_t)202), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_45 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_45);
		SortedDictionary_2_Add_m3746728377(L_45, _stringLiteral3931511956, ((int32_t)203), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_46 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_46);
		SortedDictionary_2_Add_m3746728377(L_46, _stringLiteral3960133595, ((int32_t)204), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_47 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_47);
		SortedDictionary_2_Add_m3746728377(L_47, _stringLiteral1126929956, ((int32_t)205), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_48 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_48);
		SortedDictionary_2_Add_m3746728377(L_48, _stringLiteral2318600205, ((int32_t)206), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_49 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_49);
		SortedDictionary_2_Add_m3746728377(L_49, _stringLiteral3931511968, ((int32_t)207), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_50 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_50);
		SortedDictionary_2_Add_m3746728377(L_50, _stringLiteral3457106477, ((int32_t)208), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_51 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_51);
		SortedDictionary_2_Add_m3746728377(L_51, _stringLiteral437585633, ((int32_t)209), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_52 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_52);
		SortedDictionary_2_Add_m3746728377(L_52, _stringLiteral3960133297, ((int32_t)210), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_53 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_53);
		SortedDictionary_2_Add_m3746728377(L_53, _stringLiteral1126929662, ((int32_t)211), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_54 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_54);
		SortedDictionary_2_Add_m3746728377(L_54, _stringLiteral2318599939, ((int32_t)212), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_55 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_55);
		SortedDictionary_2_Add_m3746728377(L_55, _stringLiteral437585664, ((int32_t)213), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_56 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_56);
		SortedDictionary_2_Add_m3746728377(L_56, _stringLiteral3931511962, ((int32_t)214), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_57 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_57);
		SortedDictionary_2_Add_m3746728377(L_57, _stringLiteral3181106956, ((int32_t)215), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_58 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_58);
		SortedDictionary_2_Add_m3746728377(L_58, _stringLiteral1223058628, ((int32_t)216), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_59 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_59);
		SortedDictionary_2_Add_m3746728377(L_59, _stringLiteral3960133735, ((int32_t)217), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_60 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_60);
		SortedDictionary_2_Add_m3746728377(L_60, _stringLiteral1126930096, ((int32_t)218), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_61 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_61);
		SortedDictionary_2_Add_m3746728377(L_61, _stringLiteral2318600337, ((int32_t)219), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_62 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_62);
		SortedDictionary_2_Add_m3746728377(L_62, _stringLiteral3931511972, ((int32_t)220), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_63 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_63);
		SortedDictionary_2_Add_m3746728377(L_63, _stringLiteral1126930452, ((int32_t)221), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_64 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_64);
		SortedDictionary_2_Add_m3746728377(L_64, _stringLiteral2002530447, ((int32_t)222), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_65 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_65);
		SortedDictionary_2_Add_m3746728377(L_65, _stringLiteral2778686020, ((int32_t)223), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_66 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_66);
		SortedDictionary_2_Add_m3746728377(L_66, _stringLiteral3960132115, ((int32_t)224), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_67 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_67);
		SortedDictionary_2_Add_m3746728377(L_67, _stringLiteral1126928476, ((int32_t)225), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_68 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_68);
		SortedDictionary_2_Add_m3746728377(L_68, _stringLiteral2318598757, ((int32_t)226), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_69 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_69);
		SortedDictionary_2_Add_m3746728377(L_69, _stringLiteral437584478, ((int32_t)227), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_70 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_70);
		SortedDictionary_2_Add_m3746728377(L_70, _stringLiteral3931511928, ((int32_t)228), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_71 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_71);
		SortedDictionary_2_Add_m3746728377(L_71, _stringLiteral61342305, ((int32_t)229), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_72 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_72);
		SortedDictionary_2_Add_m3746728377(L_72, _stringLiteral2720292914, ((int32_t)230), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_73 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_73);
		SortedDictionary_2_Add_m3746728377(L_73, _stringLiteral1557035485, ((int32_t)231), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_74 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_74);
		SortedDictionary_2_Add_m3746728377(L_74, _stringLiteral3960131991, ((int32_t)232), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_75 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_75);
		SortedDictionary_2_Add_m3746728377(L_75, _stringLiteral1126928352, ((int32_t)233), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_76 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_76);
		SortedDictionary_2_Add_m3746728377(L_76, _stringLiteral2318598625, ((int32_t)234), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_77 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_77);
		SortedDictionary_2_Add_m3746728377(L_77, _stringLiteral3931511924, ((int32_t)235), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_78 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_78);
		SortedDictionary_2_Add_m3746728377(L_78, _stringLiteral3960132603, ((int32_t)236), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_79 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_79);
		SortedDictionary_2_Add_m3746728377(L_79, _stringLiteral1126928964, ((int32_t)237), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_80 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_80);
		SortedDictionary_2_Add_m3746728377(L_80, _stringLiteral2318599213, ((int32_t)238), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_81 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_81);
		SortedDictionary_2_Add_m3746728377(L_81, _stringLiteral3931511936, ((int32_t)239), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_82 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_82);
		SortedDictionary_2_Add_m3746728377(L_82, _stringLiteral584963437, ((int32_t)240), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_83 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_83);
		SortedDictionary_2_Add_m3746728377(L_83, _stringLiteral437584641, ((int32_t)241), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_84 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_84);
		SortedDictionary_2_Add_m3746728377(L_84, _stringLiteral3960132305, ((int32_t)242), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_85 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_85);
		SortedDictionary_2_Add_m3746728377(L_85, _stringLiteral1126928670, ((int32_t)243), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_86 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_86);
		SortedDictionary_2_Add_m3746728377(L_86, _stringLiteral2318598947, ((int32_t)244), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_87 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_87);
		SortedDictionary_2_Add_m3746728377(L_87, _stringLiteral437584672, ((int32_t)245), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_88 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_88);
		SortedDictionary_2_Add_m3746728377(L_88, _stringLiteral3931511930, ((int32_t)246), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_89 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_89);
		SortedDictionary_2_Add_m3746728377(L_89, _stringLiteral3554583794, ((int32_t)247), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_90 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_90);
		SortedDictionary_2_Add_m3746728377(L_90, _stringLiteral1223057636, ((int32_t)248), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_91 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_91);
		SortedDictionary_2_Add_m3746728377(L_91, _stringLiteral3960132743, ((int32_t)249), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_92 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_92);
		SortedDictionary_2_Add_m3746728377(L_92, _stringLiteral1126929104, ((int32_t)250), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_93 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_93);
		SortedDictionary_2_Add_m3746728377(L_93, _stringLiteral2318599345, ((int32_t)251), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_94 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_94);
		SortedDictionary_2_Add_m3746728377(L_94, _stringLiteral3931511940, ((int32_t)252), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_95 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_95);
		SortedDictionary_2_Add_m3746728377(L_95, _stringLiteral1126929460, ((int32_t)253), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_96 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_96);
		SortedDictionary_2_Add_m3746728377(L_96, _stringLiteral1535819823, ((int32_t)254), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_97 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_97);
		SortedDictionary_2_Add_m3746728377(L_97, _stringLiteral3931511952, ((int32_t)255), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_98 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_98);
		SortedDictionary_2_Add_m3746728377(L_98, _stringLiteral3182036393, ((int32_t)402), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_99 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_99);
		SortedDictionary_2_Add_m3746728377(L_99, _stringLiteral2396581328, ((int32_t)913), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_100 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_100);
		SortedDictionary_2_Add_m3746728377(L_100, _stringLiteral2036990756, ((int32_t)914), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_101 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_101);
		SortedDictionary_2_Add_m3746728377(L_101, _stringLiteral398186601, ((int32_t)915), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_102 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_102);
		SortedDictionary_2_Add_m3746728377(L_102, _stringLiteral1528652911, ((int32_t)916), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_103 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_103);
		SortedDictionary_2_Add_m3746728377(L_103, _stringLiteral4046077096, ((int32_t)917), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_104 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_104);
		SortedDictionary_2_Add_m3746728377(L_104, _stringLiteral2036990780, ((int32_t)918), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_105 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_105);
		SortedDictionary_2_Add_m3746728377(L_105, _stringLiteral3670077184, ((int32_t)919), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_106 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_106);
		SortedDictionary_2_Add_m3746728377(L_106, _stringLiteral346914738, ((int32_t)920), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_107 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_107);
		SortedDictionary_2_Add_m3746728377(L_107, _stringLiteral2037383981, ((int32_t)921), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_108 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_108);
		SortedDictionary_2_Add_m3746728377(L_108, _stringLiteral3915115990, ((int32_t)922), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_109 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_109);
		SortedDictionary_2_Add_m3746728377(L_109, _stringLiteral1596053975, ((int32_t)923), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_110 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_110);
		SortedDictionary_2_Add_m3746728377(L_110, _stringLiteral3455432675, ((int32_t)924), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_111 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_111);
		SortedDictionary_2_Add_m3746728377(L_111, _stringLiteral3455432674, ((int32_t)925), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_112 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_112);
		SortedDictionary_2_Add_m3746728377(L_112, _stringLiteral3455170552, ((int32_t)926), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_113 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_113);
		SortedDictionary_2_Add_m3746728377(L_113, _stringLiteral429238270, ((int32_t)927), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_114 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_114);
		SortedDictionary_2_Add_m3746728377(L_114, _stringLiteral3455170544, ((int32_t)928), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_115 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_115);
		SortedDictionary_2_Add_m3746728377(L_115, _stringLiteral2507015645, ((int32_t)929), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_116 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_116);
		SortedDictionary_2_Add_m3746728377(L_116, _stringLiteral1934518475, ((int32_t)931), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_117 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_117);
		SortedDictionary_2_Add_m3746728377(L_117, _stringLiteral987396045, ((int32_t)932), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_118 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_118);
		SortedDictionary_2_Add_m3746728377(L_118, _stringLiteral4046077560, ((int32_t)933), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_119 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_119);
		SortedDictionary_2_Add_m3746728377(L_119, _stringLiteral3313584701, ((int32_t)934), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_120 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_120);
		SortedDictionary_2_Add_m3746728377(L_120, _stringLiteral3313584682, ((int32_t)935), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_121 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_121);
		SortedDictionary_2_Add_m3746728377(L_121, _stringLiteral3313912381, ((int32_t)936), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_122 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_122);
		SortedDictionary_2_Add_m3746728377(L_122, _stringLiteral3146350153, ((int32_t)937), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_123 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_123);
		SortedDictionary_2_Add_m3746728377(L_123, _stringLiteral2396580080, ((int32_t)945), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_124 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_124);
		SortedDictionary_2_Add_m3746728377(L_124, _stringLiteral2036990724, ((int32_t)946), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_125 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_125);
		SortedDictionary_2_Add_m3746728377(L_125, _stringLiteral398185609, ((int32_t)947), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_126 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_126);
		SortedDictionary_2_Add_m3746728377(L_126, _stringLiteral1528651919, ((int32_t)948), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_127 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_127);
		SortedDictionary_2_Add_m3746728377(L_127, _stringLiteral4046075848, ((int32_t)949), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_128 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_128);
		SortedDictionary_2_Add_m3746728377(L_128, _stringLiteral2036990748, ((int32_t)950), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_129 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_129);
		SortedDictionary_2_Add_m3746728377(L_129, _stringLiteral3670077152, ((int32_t)951), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_130 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_130);
		SortedDictionary_2_Add_m3746728377(L_130, _stringLiteral346913746, ((int32_t)952), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_131 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_131);
		SortedDictionary_2_Add_m3746728377(L_131, _stringLiteral2037383949, ((int32_t)953), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_132 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_132);
		SortedDictionary_2_Add_m3746728377(L_132, _stringLiteral3915114998, ((int32_t)954), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_133 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_133);
		SortedDictionary_2_Add_m3746728377(L_133, _stringLiteral1596052983, ((int32_t)955), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_134 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_134);
		SortedDictionary_2_Add_m3746728377(L_134, _stringLiteral3455432643, ((int32_t)956), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_135 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_135);
		SortedDictionary_2_Add_m3746728377(L_135, _stringLiteral3455432642, ((int32_t)957), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_136 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_136);
		SortedDictionary_2_Add_m3746728377(L_136, _stringLiteral3455170520, ((int32_t)958), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_137 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_137);
		SortedDictionary_2_Add_m3746728377(L_137, _stringLiteral429237278, ((int32_t)959), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_138 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_138);
		SortedDictionary_2_Add_m3746728377(L_138, _stringLiteral3455170512, ((int32_t)960), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_139 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_139);
		SortedDictionary_2_Add_m3746728377(L_139, _stringLiteral2507015613, ((int32_t)961), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_140 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_140);
		SortedDictionary_2_Add_m3746728377(L_140, _stringLiteral1936483563, ((int32_t)962), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_141 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_141);
		SortedDictionary_2_Add_m3746728377(L_141, _stringLiteral1934517483, ((int32_t)963), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_142 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_142);
		SortedDictionary_2_Add_m3746728377(L_142, _stringLiteral987396013, ((int32_t)964), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_143 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_143);
		SortedDictionary_2_Add_m3746728377(L_143, _stringLiteral4046076568, ((int32_t)965), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_144 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_144);
		SortedDictionary_2_Add_m3746728377(L_144, _stringLiteral3313584669, ((int32_t)966), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_145 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_145);
		SortedDictionary_2_Add_m3746728377(L_145, _stringLiteral3313584650, ((int32_t)967), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_146 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_146);
		SortedDictionary_2_Add_m3746728377(L_146, _stringLiteral3313912349, ((int32_t)968), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_147 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_147);
		SortedDictionary_2_Add_m3746728377(L_147, _stringLiteral3146349161, ((int32_t)969), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_148 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_148);
		SortedDictionary_2_Add_m3746728377(L_148, _stringLiteral2568007469, ((int32_t)977), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_149 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_149);
		SortedDictionary_2_Add_m3746728377(L_149, _stringLiteral3975563524, ((int32_t)978), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_150 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_150);
		SortedDictionary_2_Add_m3746728377(L_150, _stringLiteral3716803660, ((int32_t)982), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_151 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_151);
		SortedDictionary_2_Add_m3746728377(L_151, _stringLiteral1202628572, ((int32_t)8226), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_152 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_152);
		SortedDictionary_2_Add_m3746728377(L_152, _stringLiteral4547043, ((int32_t)8230), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_153 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_153);
		SortedDictionary_2_Add_m3746728377(L_153, _stringLiteral2399995150, ((int32_t)8242), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_154 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_154);
		SortedDictionary_2_Add_m3746728377(L_154, _stringLiteral2399996142, ((int32_t)8243), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_155 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_155);
		SortedDictionary_2_Add_m3746728377(L_155, _stringLiteral39715617, ((int32_t)8254), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_156 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_156);
		SortedDictionary_2_Add_m3746728377(L_156, _stringLiteral372942553, ((int32_t)8260), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_157 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_157);
		SortedDictionary_2_Add_m3746728377(L_157, _stringLiteral834798586, ((int32_t)8472), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_158 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_158);
		SortedDictionary_2_Add_m3746728377(L_158, _stringLiteral820750591, ((int32_t)8465), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_159 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_159);
		SortedDictionary_2_Add_m3746728377(L_159, _stringLiteral1961094899, ((int32_t)8476), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_160 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_160);
		SortedDictionary_2_Add_m3746728377(L_160, _stringLiteral3565529450, ((int32_t)8482), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_161 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_161);
		SortedDictionary_2_Add_m3746728377(L_161, _stringLiteral2180419800, ((int32_t)8501), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_162 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_162);
		SortedDictionary_2_Add_m3746728377(L_162, _stringLiteral1594497492, ((int32_t)8592), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_163 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_163);
		SortedDictionary_2_Add_m3746728377(L_163, _stringLiteral1594497499, ((int32_t)8593), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_164 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_164);
		SortedDictionary_2_Add_m3746728377(L_164, _stringLiteral1594497502, ((int32_t)8594), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_165 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_165);
		SortedDictionary_2_Add_m3746728377(L_165, _stringLiteral1594497484, ((int32_t)8595), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_166 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_166);
		SortedDictionary_2_Add_m3746728377(L_166, _stringLiteral1594497496, ((int32_t)8596), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_167 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_167);
		SortedDictionary_2_Add_m3746728377(L_167, _stringLiteral2711594854, ((int32_t)8629), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_168 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_168);
		SortedDictionary_2_Add_m3746728377(L_168, _stringLiteral1596594644, ((int32_t)8656), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_169 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_169);
		SortedDictionary_2_Add_m3746728377(L_169, _stringLiteral1596594651, ((int32_t)8657), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_170 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_170);
		SortedDictionary_2_Add_m3746728377(L_170, _stringLiteral1596594654, ((int32_t)8658), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_171 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_171);
		SortedDictionary_2_Add_m3746728377(L_171, _stringLiteral1596594636, ((int32_t)8659), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_172 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_172);
		SortedDictionary_2_Add_m3746728377(L_172, _stringLiteral1596594648, ((int32_t)8660), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_173 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_173);
		SortedDictionary_2_Add_m3746728377(L_173, _stringLiteral3976974788, ((int32_t)8704), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_174 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_174);
		SortedDictionary_2_Add_m3746728377(L_174, _stringLiteral1212160480, ((int32_t)8706), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_175 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_175);
		SortedDictionary_2_Add_m3746728377(L_175, _stringLiteral38339026, ((int32_t)8707), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_176 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_176);
		SortedDictionary_2_Add_m3746728377(L_176, _stringLiteral3159091284, ((int32_t)8709), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_177 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_177);
		SortedDictionary_2_Add_m3746728377(L_177, _stringLiteral3496352887, ((int32_t)8711), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_178 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_178);
		SortedDictionary_2_Add_m3746728377(L_178, _stringLiteral1223707156, ((int32_t)8712), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_179 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_179);
		SortedDictionary_2_Add_m3746728377(L_179, _stringLiteral2377038832, ((int32_t)8713), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_180 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_180);
		SortedDictionary_2_Add_m3746728377(L_180, _stringLiteral3455170498, ((int32_t)8715), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_181 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_181);
		SortedDictionary_2_Add_m3746728377(L_181, _stringLiteral3565159871, ((int32_t)8719), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_182 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_182);
		SortedDictionary_2_Add_m3746728377(L_182, _stringLiteral1344412806, ((int32_t)8721), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_183 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_183);
		SortedDictionary_2_Add_m3746728377(L_183, _stringLiteral378751680, ((int32_t)8722), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_184 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_184);
		SortedDictionary_2_Add_m3746728377(L_184, _stringLiteral440998498, ((int32_t)8727), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_185 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_185);
		SortedDictionary_2_Add_m3746728377(L_185, _stringLiteral3085174519, ((int32_t)8730), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_186 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_186);
		SortedDictionary_2_Add_m3746728377(L_186, _stringLiteral3093562815, ((int32_t)8733), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_187 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_187);
		SortedDictionary_2_Add_m3746728377(L_187, _stringLiteral4254461967, ((int32_t)8734), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_188 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_188);
		SortedDictionary_2_Add_m3746728377(L_188, _stringLiteral2862852742, ((int32_t)8736), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_189 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_189);
		SortedDictionary_2_Add_m3746728377(L_189, _stringLiteral3266137269, ((int32_t)8743), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_190 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_190);
		SortedDictionary_2_Add_m3746728377(L_190, _stringLiteral3455629249, ((int32_t)8744), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_191 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_191);
		SortedDictionary_2_Add_m3746728377(L_191, _stringLiteral227881111, ((int32_t)8745), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_192 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_192);
		SortedDictionary_2_Add_m3746728377(L_192, _stringLiteral228667543, ((int32_t)8746), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_193 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_193);
		SortedDictionary_2_Add_m3746728377(L_193, _stringLiteral2553676557, ((int32_t)8747), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_194 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_194);
		SortedDictionary_2_Add_m3746728377(L_194, _stringLiteral732134358, ((int32_t)8756), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_195 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_195);
		SortedDictionary_2_Add_m3746728377(L_195, _stringLiteral1344150662, ((int32_t)8764), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_196 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_196);
		SortedDictionary_2_Add_m3746728377(L_196, _stringLiteral2409402641, ((int32_t)8773), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_197 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_197);
		SortedDictionary_2_Add_m3746728377(L_197, _stringLiteral1685371042, ((int32_t)8776), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_198 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_198);
		SortedDictionary_2_Add_m3746728377(L_198, _stringLiteral3454384066, ((int32_t)8800), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_199 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_199);
		SortedDictionary_2_Add_m3746728377(L_199, _stringLiteral841232232, ((int32_t)8801), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_200 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_200);
		SortedDictionary_2_Add_m3746728377(L_200, _stringLiteral3454384068, ((int32_t)8804), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_201 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_201);
		SortedDictionary_2_Add_m3746728377(L_201, _stringLiteral3454384057, ((int32_t)8805), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_202 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_202);
		SortedDictionary_2_Add_m3746728377(L_202, _stringLiteral2103927693, ((int32_t)8834), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_203 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_203);
		SortedDictionary_2_Add_m3746728377(L_203, _stringLiteral228667559, ((int32_t)8835), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_204 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_204);
		SortedDictionary_2_Add_m3746728377(L_204, _stringLiteral2428401571, ((int32_t)8836), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_205 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_205);
		SortedDictionary_2_Add_m3746728377(L_205, _stringLiteral823026573, ((int32_t)8838), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_206 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_206);
		SortedDictionary_2_Add_m3746728377(L_206, _stringLiteral3242733735, ((int32_t)8839), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_207 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_207);
		SortedDictionary_2_Add_m3746728377(L_207, _stringLiteral3530383588, ((int32_t)8853), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_208 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_208);
		SortedDictionary_2_Add_m3746728377(L_208, _stringLiteral2394555169, ((int32_t)8855), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_209 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_209);
		SortedDictionary_2_Add_m3746728377(L_209, _stringLiteral1976572384, ((int32_t)8869), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_210 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_210);
		SortedDictionary_2_Add_m3746728377(L_210, _stringLiteral2327709116, ((int32_t)8901), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_211 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_211);
		SortedDictionary_2_Add_m3746728377(L_211, _stringLiteral1514765015, ((int32_t)8968), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_212 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_212);
		SortedDictionary_2_Add_m3746728377(L_212, _stringLiteral1514765201, ((int32_t)8969), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_213 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_213);
		SortedDictionary_2_Add_m3746728377(L_213, _stringLiteral1563910501, ((int32_t)8970), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_214 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_214);
		SortedDictionary_2_Add_m3746728377(L_214, _stringLiteral1563910683, ((int32_t)8971), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_215 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_215);
		SortedDictionary_2_Add_m3746728377(L_215, _stringLiteral2409271576, ((int32_t)9001), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_216 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_216);
		SortedDictionary_2_Add_m3746728377(L_216, _stringLiteral2409271586, ((int32_t)9002), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_217 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_217);
		SortedDictionary_2_Add_m3746728377(L_217, _stringLiteral1034581244, ((int32_t)9674), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_218 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_218);
		SortedDictionary_2_Add_m3746728377(L_218, _stringLiteral3568740685, ((int32_t)9824), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_219 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_219);
		SortedDictionary_2_Add_m3746728377(L_219, _stringLiteral1244409891, ((int32_t)9827), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_220 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_220);
		SortedDictionary_2_Add_m3746728377(L_220, _stringLiteral2675812591, ((int32_t)9829), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_221 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_221);
		SortedDictionary_2_Add_m3746728377(L_221, _stringLiteral2741086088, ((int32_t)9830), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_222 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_222);
		SortedDictionary_2_Add_m3746728377(L_222, _stringLiteral2328692158, ((int32_t)34), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_223 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_223);
		SortedDictionary_2_Add_m3746728377(L_223, _stringLiteral228143257, ((int32_t)38), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_224 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_224);
		SortedDictionary_2_Add_m3746728377(L_224, _stringLiteral3455498180, ((int32_t)60), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_225 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_225);
		SortedDictionary_2_Add_m3746728377(L_225, _stringLiteral3455498169, ((int32_t)62), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_226 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_226);
		SortedDictionary_2_Add_m3746728377(L_226, _stringLiteral2789500112, ((int32_t)338), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_227 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_227);
		SortedDictionary_2_Add_m3746728377(L_227, _stringLiteral2720293104, ((int32_t)339), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_228 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_228);
		SortedDictionary_2_Add_m3746728377(L_228, _stringLiteral2672340259, ((int32_t)352), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_229 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_229);
		SortedDictionary_2_Add_m3746728377(L_229, _stringLiteral2672339267, ((int32_t)353), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_230 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_230);
		SortedDictionary_2_Add_m3746728377(L_230, _stringLiteral3931511984, ((int32_t)376), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_231 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_231);
		SortedDictionary_2_Add_m3746728377(L_231, _stringLiteral492640717, ((int32_t)710), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_232 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_232);
		SortedDictionary_2_Add_m3746728377(L_232, _stringLiteral2790875747, ((int32_t)732), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_233 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_233);
		SortedDictionary_2_Add_m3746728377(L_233, _stringLiteral410947174, ((int32_t)8194), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_234 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_234);
		SortedDictionary_2_Add_m3746728377(L_234, _stringLiteral411012710, ((int32_t)8195), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_235 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_235);
		SortedDictionary_2_Add_m3746728377(L_235, _stringLiteral47318176, ((int32_t)8201), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_236 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_236);
		SortedDictionary_2_Add_m3746728377(L_236, _stringLiteral2747633962, ((int32_t)8204), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_237 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_237);
		SortedDictionary_2_Add_m3746728377(L_237, _stringLiteral1747566270, ((int32_t)8205), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_238 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_238);
		SortedDictionary_2_Add_m3746728377(L_238, _stringLiteral1344609405, ((int32_t)8206), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_239 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_239);
		SortedDictionary_2_Add_m3746728377(L_239, _stringLiteral1343954055, ((int32_t)8207), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_240 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_240);
		SortedDictionary_2_Add_m3746728377(L_240, _stringLiteral334014421, ((int32_t)8211), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_241 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_241);
		SortedDictionary_2_Add_m3746728377(L_241, _stringLiteral334014598, ((int32_t)8212), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_242 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_242);
		SortedDictionary_2_Add_m3746728377(L_242, _stringLiteral3570949820, ((int32_t)8216), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_243 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_243);
		SortedDictionary_2_Add_m3746728377(L_243, _stringLiteral3570950002, ((int32_t)8217), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_244 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_244);
		SortedDictionary_2_Add_m3746728377(L_244, _stringLiteral3538509715, ((int32_t)8218), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_245 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_245);
		SortedDictionary_2_Add_m3746728377(L_245, _stringLiteral3534184124, ((int32_t)8220), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_246 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_246);
		SortedDictionary_2_Add_m3746728377(L_246, _stringLiteral3534184306, ((int32_t)8221), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_247 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_247);
		SortedDictionary_2_Add_m3746728377(L_247, _stringLiteral3534183842, ((int32_t)8222), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_248 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_248);
		SortedDictionary_2_Add_m3746728377(L_248, _stringLiteral10904380, ((int32_t)8224), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_249 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_249);
		SortedDictionary_2_Add_m3746728377(L_249, _stringLiteral10905372, ((int32_t)8225), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_250 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_250);
		SortedDictionary_2_Add_m3746728377(L_250, _stringLiteral442619085, ((int32_t)8240), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_251 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_251);
		SortedDictionary_2_Add_m3746728377(L_251, _stringLiteral746367090, ((int32_t)8249), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_252 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_252);
		SortedDictionary_2_Add_m3746728377(L_252, _stringLiteral746367292, ((int32_t)8250), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		SortedDictionary_2_t547269768 * L_253 = ((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->get_entities_2();
		NullCheck(L_253);
		SortedDictionary_2_Add_m3746728377(L_253, _stringLiteral1257576907, ((int32_t)8364), /*hidden argument*/SortedDictionary_2_Add_m3746728377_RuntimeMethod_var);
		return;
	}
}
// System.Void SagoUtils.HttpUtility/HttpEncoder::.cctor()
extern "C"  void HttpEncoder__cctor_m731574518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpEncoder__cctor_m731574518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck(_stringLiteral3445932352);
		CharU5BU5D_t3528271667* L_0 = String_ToCharArray_m1492846834(_stringLiteral3445932352, /*hidden argument*/NULL);
		((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->set_hexChars_0(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_1, /*hidden argument*/NULL);
		((HttpEncoder_t1079200364_StaticFields*)il2cpp_codegen_static_fields_for(HttpEncoder_t1079200364_il2cpp_TypeInfo_var))->set_entitiesLock_1(L_1);
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
// System.Void SagoUtils.HttpUtility/HttpQSCollection::.ctor()
extern "C"  void HttpQSCollection__ctor_m1930281858 (HttpQSCollection_t520254410 * __this, const RuntimeMethod* method)
{
	{
		NameValueCollection__ctor_m1115358332(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String SagoUtils.HttpUtility/HttpQSCollection::ToString()
extern "C"  String_t* HttpQSCollection_ToString_m251500098 (HttpQSCollection_t520254410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpQSCollection_ToString_m251500098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t * V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_0013:
	{
		StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		StringU5BU5D_t1281789340* L_4 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(16 /* System.String[] System.Collections.Specialized.NameValueCollection::get_AllKeys() */, __this);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0048;
	}

IL_0027:
	{
		StringBuilder_t * L_5 = V_1;
		StringU5BU5D_t1281789340* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		StringU5BU5D_t1281789340* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		String_t* L_14 = NameValueCollection_get_Item_m3979995533(__this, L_13, /*hidden argument*/NULL);
		String_t* L_15 = HttpUtility_UrlEncode_m516994993(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_AppendFormat_m3255666490(L_5, _stringLiteral1456300074, L_9, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0027;
		}
	}
	{
		StringBuilder_t * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = StringBuilder_get_Length_m3238060835(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t * L_21 = V_1;
		StringBuilder_t * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = StringBuilder_get_Length_m3238060835(L_22, /*hidden argument*/NULL);
		NullCheck(L_22);
		StringBuilder_set_Length_m1410065908(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0069:
	{
		StringBuilder_t * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
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
// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::get_CSharpToJsonSettings()
extern "C"  JsonSerializerSettings_t2139255314 * JsonConvert_get_CSharpToJsonSettings_m2426135370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_get_CSharpToJsonSettings_m2426135370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t2139255314 * L_0 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get__CSharpToJsonSettings_1();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonSerializerSettings_t2139255314 * L_1 = (JsonSerializerSettings_t2139255314 *)il2cpp_codegen_object_new(JsonSerializerSettings_t2139255314_il2cpp_TypeInfo_var);
		JsonSerializerSettings__ctor_m1558552505(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->set__CSharpToJsonSettings_1(L_1);
		JsonSerializerSettings_t2139255314 * L_2 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get__CSharpToJsonSettings_1();
		UnderscoreLowerCasePropertyNameContractResolver_t1847614001 * L_3 = (UnderscoreLowerCasePropertyNameContractResolver_t1847614001 *)il2cpp_codegen_object_new(UnderscoreLowerCasePropertyNameContractResolver_t1847614001_il2cpp_TypeInfo_var);
		UnderscoreLowerCasePropertyNameContractResolver__ctor_m2242214215(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		JsonSerializerSettings_set_ContractResolver_m3015043835(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t2139255314 * L_4 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get__CSharpToJsonSettings_1();
		return L_4;
	}
}
// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::get_JsonToCSharpSettings()
extern "C"  JsonSerializerSettings_t2139255314 * JsonConvert_get_JsonToCSharpSettings_m1865309167 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_get_JsonToCSharpSettings_m1865309167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t2139255314 * L_0 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get__JsonToCSharpSettings_2();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonSerializerSettings_t2139255314 * L_1 = (JsonSerializerSettings_t2139255314 *)il2cpp_codegen_object_new(JsonSerializerSettings_t2139255314_il2cpp_TypeInfo_var);
		JsonSerializerSettings__ctor_m1558552505(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->set__JsonToCSharpSettings_2(L_1);
		JsonSerializerSettings_t2139255314 * L_2 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get__JsonToCSharpSettings_2();
		UnderscoreLowerCasePropertyNameContractResolver_t1847614001 * L_3 = (UnderscoreLowerCasePropertyNameContractResolver_t1847614001 *)il2cpp_codegen_object_new(UnderscoreLowerCasePropertyNameContractResolver_t1847614001_il2cpp_TypeInfo_var);
		UnderscoreLowerCasePropertyNameContractResolver__ctor_m2242214215(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		JsonSerializerSettings_set_ContractResolver_m3015043835(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t2139255314 * L_4 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get__JsonToCSharpSettings_2();
		return L_4;
	}
}
// Newtonsoft.Json.Formatting SagoUtils.JsonConvert::MapFormatting(SagoUtils.JsonConvert/Formatting)
extern "C"  int32_t JsonConvert_MapFormatting_m3344890768 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000e;
	}

IL_000c:
	{
		return (int32_t)(1);
	}

IL_000e:
	{
		return (int32_t)(0);
	}
}
// Newtonsoft.Json.JsonSerializerSettings SagoUtils.JsonConvert::MapSettings(SagoUtils.JsonConvert/Settings)
extern "C"  JsonSerializerSettings_t2139255314 * JsonConvert_MapSettings_m3107228651 (RuntimeObject * __this /* static, unused */, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_MapSettings_m3107228651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_001f;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t2139255314 * L_2 = JsonConvert_get_CSharpToJsonSettings_m2426135370(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_2;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t2139255314 * L_3 = JsonConvert_get_JsonToCSharpSettings_m1865309167(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_3;
	}

IL_001f:
	{
		return (JsonSerializerSettings_t2139255314 *)NULL;
	}
}
// System.String SagoUtils.JsonConvert::SerializeObject(System.Object)
extern "C"  String_t* JsonConvert_SerializeObject_m601022409 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_SerializeObject_m601022409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		String_t* L_1 = JsonConvert_SerializeObject_m1962767517(NULL /*static, unused*/, L_0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String SagoUtils.JsonConvert::SerializeObject(System.Object,SagoUtils.JsonConvert/Formatting)
extern "C"  String_t* JsonConvert_SerializeObject_m3049646501 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___formatting1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_SerializeObject_m3049646501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = ___formatting1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		String_t* L_2 = JsonConvert_SerializeObject_m1962767517(NULL /*static, unused*/, L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String SagoUtils.JsonConvert::SerializeObject(System.Object,SagoUtils.JsonConvert/Formatting,SagoUtils.JsonConvert/Settings)
extern "C"  String_t* JsonConvert_SerializeObject_m1962767517 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___formatting1, int32_t ___settings2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_SerializeObject_m1962767517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = ___formatting1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		int32_t L_2 = JsonConvert_MapFormatting_m3344890768(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___settings2;
		JsonSerializerSettings_t2139255314 * L_4 = JsonConvert_MapSettings_m3107228651(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t3077351166_il2cpp_TypeInfo_var);
		String_t* L_5 = JsonConvert_SerializeObject_m2550185670(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String SagoUtils.JsonConvert::UnwrapDictionary(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  String_t* JsonConvert_UnwrapDictionary_m105442745 (RuntimeObject * __this /* static, unused */, Dictionary_2_t2865362463 * ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvert_UnwrapDictionary_m105442745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t968067334  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t524577942  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral3453007829;
		Dictionary_2_t2865362463 * L_0 = ___dict0;
		NullCheck(L_0);
		Enumerator_t524577942  L_1 = Dictionary_2_GetEnumerator_m205717112(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m205717112_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0171;
		}

IL_0012:
		{
			KeyValuePair_2_t968067334  L_2 = Enumerator_get_Current_m2826511327((&V_2), /*hidden argument*/Enumerator_get_Current_m2826511327_RuntimeMethod_var);
			V_1 = L_2;
			RuntimeObject * L_3 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			if (!((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
			{
				goto IL_0074;
			}
		}

IL_002b:
		{
			String_t* L_4 = V_0;
			String_t* L_5 = KeyValuePair_2_get_Key_m3201775128((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3201775128_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m2163913788(NULL /*static, unused*/, L_4, _stringLiteral3452614526, L_5, _stringLiteral3787497672, /*hidden argument*/NULL);
			V_0 = L_6;
			String_t* L_7 = V_0;
			V_3 = L_7;
			ObjectU5BU5D_t2843939325* L_8 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
			String_t* L_9 = V_3;
			NullCheck(L_8);
			ArrayElementTypeCheck (L_8, L_9);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
			ObjectU5BU5D_t2843939325* L_10 = L_8;
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, _stringLiteral3452614526);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614526);
			ObjectU5BU5D_t2843939325* L_11 = L_10;
			RuntimeObject * L_12 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
			ObjectU5BU5D_t2843939325* L_13 = L_11;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, _stringLiteral3167965638);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3167965638);
			String_t* L_14 = String_Concat_m2971454694(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			V_0 = L_14;
			goto IL_0171;
		}

IL_0074:
		{
			RuntimeObject * L_15 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Single_t1397266774_il2cpp_TypeInfo_var)))
			{
				goto IL_00b8;
			}
		}

IL_0085:
		{
			RuntimeObject * L_16 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Double_t594665363_il2cpp_TypeInfo_var)))
			{
				goto IL_00b8;
			}
		}

IL_0096:
		{
			RuntimeObject * L_17 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Int32_t2950945753_il2cpp_TypeInfo_var)))
			{
				goto IL_00b8;
			}
		}

IL_00a7:
		{
			RuntimeObject * L_18 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Boolean_t97287965_il2cpp_TypeInfo_var)))
			{
				goto IL_00e8;
			}
		}

IL_00b8:
		{
			String_t* L_19 = V_0;
			String_t* L_20 = KeyValuePair_2_get_Key_m3201775128((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3201775128_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m2163913788(NULL /*static, unused*/, L_19, _stringLiteral3452614526, L_20, _stringLiteral3787497672, /*hidden argument*/NULL);
			V_0 = L_21;
			String_t* L_22 = V_0;
			RuntimeObject * L_23 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			String_t* L_24 = String_Concat_m1715369213(NULL /*static, unused*/, L_22, L_23, _stringLiteral3453007748, /*hidden argument*/NULL);
			V_0 = L_24;
			goto IL_0171;
		}

IL_00e8:
		{
			RuntimeObject * L_25 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			if (!((Dictionary_2_t2865362463 *)IsInstClass((RuntimeObject*)L_25, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)))
			{
				goto IL_0133;
			}
		}

IL_00f9:
		{
			String_t* L_26 = V_0;
			String_t* L_27 = KeyValuePair_2_get_Key_m3201775128((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3201775128_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_28 = String_Concat_m2163913788(NULL /*static, unused*/, L_26, _stringLiteral3452614526, L_27, _stringLiteral3787497672, /*hidden argument*/NULL);
			V_0 = L_28;
			String_t* L_29 = V_0;
			RuntimeObject * L_30 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
			String_t* L_31 = JsonConvert_UnwrapDictionary_m105442745(NULL /*static, unused*/, ((Dictionary_2_t2865362463 *)CastclassClass((RuntimeObject*)L_30, Dictionary_2_t2865362463_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			String_t* L_32 = String_Concat_m3755062657(NULL /*static, unused*/, L_29, L_31, _stringLiteral3453007748, /*hidden argument*/NULL);
			V_0 = L_32;
			goto IL_0171;
		}

IL_0133:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
			bool L_33 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get_EnableLogging_0();
			if (!L_33)
			{
				goto IL_0171;
			}
		}

IL_013d:
		{
			ObjectU5BU5D_t2843939325* L_34 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, _stringLiteral590663513);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral590663513);
			ObjectU5BU5D_t2843939325* L_35 = L_34;
			String_t* L_36 = KeyValuePair_2_get_Key_m3201775128((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3201775128_RuntimeMethod_var);
			NullCheck(L_35);
			ArrayElementTypeCheck (L_35, L_36);
			(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_36);
			ObjectU5BU5D_t2843939325* L_37 = L_35;
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, _stringLiteral2698798832);
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2698798832);
			ObjectU5BU5D_t2843939325* L_38 = L_37;
			RuntimeObject * L_39 = KeyValuePair_2_get_Value_m644949463((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m644949463_RuntimeMethod_var);
			NullCheck(L_38);
			ArrayElementTypeCheck (L_38, L_39);
			(L_38)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_39);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_40 = String_Concat_m2971454694(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		}

IL_0171:
		{
			bool L_41 = Enumerator_MoveNext_m1546927415((&V_2), /*hidden argument*/Enumerator_MoveNext_m1546927415_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_0012;
			}
		}

IL_017d:
		{
			IL2CPP_LEAVE(0x190, FINALLY_0182);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0182;
	}

FINALLY_0182:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2607424534((&V_2), /*hidden argument*/Enumerator_Dispose_m2607424534_RuntimeMethod_var);
		IL2CPP_END_FINALLY(386)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(386)
	{
		IL2CPP_JUMP_TBL(0x190, IL_0190)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0190:
	{
		String_t* L_42 = V_0;
		String_t* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m3847582255(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		String_t* L_45 = String_Substring_m1610150815(L_42, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_45;
		String_t* L_46 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_47 = String_Concat_m3937257545(NULL /*static, unused*/, L_46, _stringLiteral3455956902, /*hidden argument*/NULL);
		V_0 = L_47;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t892733386_il2cpp_TypeInfo_var);
		bool L_48 = ((JsonConvert_t892733386_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t892733386_il2cpp_TypeInfo_var))->get_EnableLogging_0();
		if (!L_48)
		{
			goto IL_01bc;
		}
	}
	{
		String_t* L_49 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
	}

IL_01bc:
	{
		String_t* L_50 = V_0;
		return L_50;
	}
}
// System.Void SagoUtils.JsonConvert::.cctor()
extern "C"  void JsonConvert__cctor_m1219979144 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
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
// System.String SagoUtils.JsonConvertStringExtensions::SingleWordToPascalCase(System.String)
extern "C"  String_t* JsonConvertStringExtensions_SingleWordToPascalCase_m3277782807 (RuntimeObject * __this /* static, unused */, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvertStringExtensions_SingleWordToPascalCase_m3277782807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		String_t* L_0 = ___word0;
		NullCheck(L_0);
		Il2CppChar L_1 = String_get_Chars_m2986988803(L_0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_2 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		Il2CppChar L_3 = Char_ToUpper_m3659851865(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		CultureInfo_t4157843068 * L_4 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = Char_ToString_m278452217((&V_1), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = ___word0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_8 = V_0;
		String_t* L_9 = ___word0;
		NullCheck(L_9);
		String_t* L_10 = String_Substring_m2848979100(L_9, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.String SagoUtils.JsonConvertStringExtensions::UnderscoreWordsToPascalCase(System.String)
extern "C"  String_t* JsonConvertStringExtensions_UnderscoreWordsToPascalCase_m3315807175 (RuntimeObject * __this /* static, unused */, String_t* ___underscore_lowercase_words0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvertStringExtensions_UnderscoreWordsToPascalCase_m3315807175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___underscore_lowercase_words0;
		StringU5BU5D_t1281789340* L_1 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3452614641);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614641);
		NullCheck(L_0);
		StringU5BU5D_t1281789340* L_2 = String_Split_m4013853433(L_0, L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_1 = L_3;
		StringU5BU5D_t1281789340* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_003e;
	}

IL_0026:
	{
		StringU5BU5D_t1281789340* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		String_t* L_9 = V_1;
		String_t* L_10 = V_2;
		String_t* L_11 = JsonConvertStringExtensions_SingleWordToPascalCase_m3277782807(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_14 = V_4;
		StringU5BU5D_t1281789340* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.String SagoUtils.JsonConvertStringExtensions::PascalToUnderscoreCase(System.String)
extern "C"  String_t* JsonConvertStringExtensions_PascalToUnderscoreCase_m1164626889 (RuntimeObject * __this /* static, unused */, String_t* ___words0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonConvertStringExtensions_PascalToUnderscoreCase_m1164626889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0086;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_2 = V_0;
		String_t* L_3 = ___words0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		Il2CppChar L_6 = Char_ToLower_m844856331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = L_6;
		RuntimeObject * L_8 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, L_2, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0082;
	}

IL_0030:
	{
		String_t* L_10 = ___words0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Il2CppChar L_12 = String_get_Chars_m2986988803(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_13 = Char_IsUpper_m3564669513(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, L_14, _stringLiteral3452614641, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = V_0;
		String_t* L_17 = ___words0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		Il2CppChar L_19 = String_get_Chars_m2986988803(L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		Il2CppChar L_20 = Char_ToLower_m844856331(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Il2CppChar L_21 = L_20;
		RuntimeObject * L_22 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Concat_m904156431(NULL /*static, unused*/, L_16, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0082;
	}

IL_006a:
	{
		String_t* L_24 = V_0;
		String_t* L_25 = ___words0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		Il2CppChar L_27 = String_get_Chars_m2986988803(L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		Il2CppChar L_28 = Char_ToLower_m844856331(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Il2CppChar L_29 = L_28;
		RuntimeObject * L_30 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m904156431(NULL /*static, unused*/, L_24, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
	}

IL_0082:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_33 = V_1;
		String_t* L_34 = ___words0;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_36 = V_0;
		return L_36;
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
// System.Void SagoUtils.LayerAttribute::.ctor()
extern "C"  void LayerAttribute__ctor_m539972591 (LayerAttribute_t666607663 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
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
// System.Void SagoUtils.MathUtil::.ctor()
extern "C"  void MathUtil__ctor_m1318462704 (MathUtil_t1433719625 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 SagoUtils.MathUtil::Bezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  MathUtil_Bezier_m2186420777 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___p00, Vector3_t3722313464  ___p11, Vector3_t3722313464  ___p22, float ___t3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_Bezier_m2186420777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		float L_0 = ___t3;
		float L_1 = ___t3;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		float L_2 = ___t3;
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2));
		float L_3 = V_1;
		float L_4 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		float L_5 = V_2;
		Vector3_t3722313464  L_6 = ___p00;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Vector3_t3722313464  L_8 = V_3;
		float L_9 = V_1;
		float L_10 = ___t3;
		Vector3_t3722313464  L_11 = ___p11;
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_9)), (float)L_10)), L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_8, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		Vector3_t3722313464  L_14 = V_3;
		float L_15 = V_0;
		Vector3_t3722313464  L_16 = ___p22;
		Vector3_t3722313464  L_17 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_14, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		Vector3_t3722313464  L_19 = V_3;
		return L_19;
	}
}
// UnityEngine.Vector3 SagoUtils.MathUtil::Bezier(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  MathUtil_Bezier_m2846492175 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___p00, Vector3_t3722313464  ___p11, Vector3_t3722313464  ___p22, Vector3_t3722313464  ___p33, float ___t4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_Bezier_m2846492175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = ___t4;
		float L_1 = ___t4;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		float L_2 = ___t4;
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2));
		float L_3 = V_1;
		float L_4 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		float L_5 = V_1;
		float L_6 = V_2;
		Vector3_t3722313464  L_7 = ___p00;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), L_7, /*hidden argument*/NULL);
		float L_9 = V_2;
		float L_10 = ___t4;
		Vector3_t3722313464  L_11 = ___p11;
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_9)), (float)L_10)), L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_8, L_12, /*hidden argument*/NULL);
		float L_14 = V_1;
		float L_15 = V_0;
		Vector3_t3722313464  L_16 = ___p22;
		Vector3_t3722313464  L_17 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_14)), (float)L_15)), L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_17, /*hidden argument*/NULL);
		float L_19 = V_0;
		float L_20 = ___t4;
		Vector3_t3722313464  L_21 = ___p33;
		Vector3_t3722313464  L_22 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_18, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// UnityEngine.Vector3 SagoUtils.MathUtil::BezierTangent(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  MathUtil_BezierTangent_m776689999 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___p00, Vector3_t3722313464  ___p11, Vector3_t3722313464  ___p22, Vector3_t3722313464  ___p33, float ___t4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_BezierTangent_m776689999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___t4;
		float L_1 = ___t4;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		float L_2 = ___t4;
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2));
		float L_3 = V_1;
		float L_4 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		float L_5 = V_1;
		float L_6 = ___t4;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		float L_7 = V_2;
		Vector3_t3722313464  L_8 = ___p00;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(-3.0f), (float)L_7)), L_8, /*hidden argument*/NULL);
		float L_10 = V_2;
		float L_11 = V_3;
		Vector3_t3722313464  L_12 = ___p11;
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_10)), (float)((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_11)))), L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_9, L_13, /*hidden argument*/NULL);
		float L_15 = V_3;
		float L_16 = V_0;
		Vector3_t3722313464  L_17 = ___p22;
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_15)), (float)((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_16)))), L_17, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_14, L_18, /*hidden argument*/NULL);
		float L_20 = V_0;
		Vector3_t3722313464  L_21 = ___p33;
		Vector3_t3722313464  L_22 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(3.0f), (float)L_20)), L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_19, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Single SagoUtils.MathUtil::RandomSign()
extern "C"  float MathUtil_RandomSign_m1546353020 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_RandomSign_m1546353020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = powf((-1.0f), (((float)((float)L_0))));
		return L_1;
	}
}
// System.Single SagoUtils.MathUtil::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtil_SignedAngle_m97277328 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___from0, Vector3_t3722313464  ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_SignedAngle_m97277328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = ___from0;
		Vector3_t3722313464  L_1 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = MathUtil_SignedAngle_m2001049097(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single SagoUtils.MathUtil::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtil_SignedAngle_m2001049097 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___from0, Vector3_t3722313464  ___to1, Vector3_t3722313464  ___positiveAxis2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_SignedAngle_m2001049097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		Vector3_t3722313464  L_0 = ___from0;
		Vector3_t3722313464  L_1 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_Cross_m418170344(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector3_get_sqrMagnitude_m1474274574((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		return (0.0f);
	}

IL_001f:
	{
		Vector3_t3722313464  L_4 = ___from0;
		Vector3_t3722313464  L_5 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_6 = Vector3_Angle_m3731191531(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = fabsf(L_6);
		V_1 = L_7;
		Vector3_t3722313464  L_8 = V_0;
		Vector3_t3722313464  L_9 = ___positiveAxis2;
		float L_10 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		G_B5_0 = (-1);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 1;
	}

IL_0044:
	{
		V_2 = G_B5_0;
		int32_t L_11 = V_2;
		float L_12 = V_1;
		return ((float)il2cpp_codegen_multiply((float)(((float)((float)L_11))), (float)L_12));
	}
}
// UnityEngine.Vector2 SagoUtils.MathUtil::PolarToCartesian(SagoUtils.Polar)
extern "C"  Vector2_t2156229523  MathUtil_PolarToCartesian_m3590942331 (RuntimeObject * __this /* static, unused */, Polar_t1112275984  ___polar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_PolarToCartesian_m3590942331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___polar0)->get_Theta_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(57.29578f), (float)L_0)), L_1, /*hidden argument*/NULL);
		float L_3 = (&___polar0)->get_Radius_0();
		Vector3_t3722313464  L_4 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// SagoUtils.Polar SagoUtils.MathUtil::CartesianToPolar(UnityEngine.Vector2)
extern "C"  Polar_t1112275984  MathUtil_CartesianToPolar_m4003070333 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___cartesian0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_CartesianToPolar_m4003070333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Polar_t1112275984  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Polar_t1112275984 ));
		float L_0 = Vector2_get_magnitude_m2752892833((&___cartesian0), /*hidden argument*/NULL);
		(&V_0)->set_Radius_0(L_0);
		float L_1 = (&___cartesian0)->get_y_1();
		float L_2 = (&___cartesian0)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = atan2f(L_1, L_2);
		(&V_0)->set_Theta_1(L_3);
		Polar_t1112275984  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 SagoUtils.MathUtil::SphericalToCartesian(SagoUtils.Spherical)
extern "C"  Vector3_t3722313464  MathUtil_SphericalToCartesian_m1559608336 (RuntimeObject * __this /* static, unused */, Spherical_t93246893  ___spherical0, const RuntimeMethod* method)
{
	{
		float L_0 = (&___spherical0)->get_Radius_0();
		float L_1 = (&___spherical0)->get_Theta_1();
		float L_2 = (&___spherical0)->get_Phi_2();
		Vector3_t3722313464  L_3 = MathUtil_SphericalToCartesian_m1683036392(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 SagoUtils.MathUtil::SphericalToCartesian(System.Single,System.Single,System.Single)
extern "C"  Vector3_t3722313464  MathUtil_SphericalToCartesian_m1683036392 (RuntimeObject * __this /* static, unused */, float ___r0, float ___theta1, float ___phi2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_SphericalToCartesian_m1683036392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		float L_0 = ___theta1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = cosf(L_0);
		V_0 = L_1;
		float L_2 = ___theta1;
		float L_3 = sinf(L_2);
		V_1 = L_3;
		float L_4 = ___phi2;
		float L_5 = cosf(L_4);
		V_2 = L_5;
		float L_6 = ___phi2;
		float L_7 = sinf(L_6);
		V_3 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = ___r0;
		float L_10 = V_0;
		float L_11 = V_3;
		(&V_4)->set_x_1(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), (float)L_11)));
		float L_12 = ___r0;
		float L_13 = V_1;
		float L_14 = V_3;
		(&V_4)->set_y_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)L_14)));
		float L_15 = ___r0;
		float L_16 = V_2;
		(&V_4)->set_z_3(((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)));
		Vector3_t3722313464  L_17 = V_4;
		return L_17;
	}
}
// SagoUtils.Spherical SagoUtils.MathUtil::CartesianToSpherical(UnityEngine.Vector3)
extern "C"  Spherical_t93246893  MathUtil_CartesianToSpherical_m3002420058 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___cartesian0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_CartesianToSpherical_m3002420058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Spherical_t93246893  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Spherical_t93246893 ));
		float L_0 = Vector3_get_magnitude_m27958459((&___cartesian0), /*hidden argument*/NULL);
		(&V_0)->set_Radius_0(L_0);
		float L_1 = (&___cartesian0)->get_y_2();
		float L_2 = (&___cartesian0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = atan2f(L_1, L_2);
		(&V_0)->set_Theta_1(L_3);
		float L_4 = (&___cartesian0)->get_z_3();
		float L_5 = (&V_0)->get_Radius_0();
		float L_6 = acosf(((float)((float)L_4/(float)L_5)));
		(&V_0)->set_Phi_2(L_6);
		Spherical_t93246893  L_7 = V_0;
		return L_7;
	}
}
// System.Single SagoUtils.MathUtil::PositiveAngle(System.Single)
extern "C"  float MathUtil_PositiveAngle_m2217697342 (RuntimeObject * __this /* static, unused */, float ___degrees0, const RuntimeMethod* method)
{
	{
		float L_0 = ___degrees0;
		float L_1 = MathUtil_WrappedPeriodic_m2041737671(NULL /*static, unused*/, L_0, (360.0f), (180.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single SagoUtils.MathUtil::WrappedAngle(System.Single)
extern "C"  float MathUtil_WrappedAngle_m3527226034 (RuntimeObject * __this /* static, unused */, float ___degrees0, const RuntimeMethod* method)
{
	{
		float L_0 = ___degrees0;
		float L_1 = MathUtil_WrappedPeriodic_m1327718945(NULL /*static, unused*/, L_0, (360.0f), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single SagoUtils.MathUtil::WrappedPeriodic(System.Single,System.Single)
extern "C"  float MathUtil_WrappedPeriodic_m1327718945 (RuntimeObject * __this /* static, unused */, float ___t0, float ___period1, const RuntimeMethod* method)
{
	{
		float L_0 = ___t0;
		float L_1 = ___period1;
		float L_2 = MathUtil_WrappedPeriodic_m2041737671(NULL /*static, unused*/, L_0, L_1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single SagoUtils.MathUtil::WrappedPeriodic(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_WrappedPeriodic_m2041737671 (RuntimeObject * __this /* static, unused */, float ___t0, float ___period1, float ___shift2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_WrappedPeriodic_m2041737671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___period1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		___period1 = L_1;
		float L_2 = ___period1;
		V_0 = ((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_2));
		float L_3 = ___t0;
		float L_4 = ___shift2;
		___t0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		float L_5 = ___t0;
		float L_6 = ___period1;
		___t0 = (fmodf(L_5, L_6));
		float L_7 = ___t0;
		float L_8 = V_0;
		if ((!(((float)L_7) <= ((float)((-L_8))))))
		{
			goto IL_002c;
		}
	}
	{
		float L_9 = ___t0;
		float L_10 = ___period1;
		___t0 = ((float)il2cpp_codegen_add((float)L_9, (float)L_10));
		goto IL_0038;
	}

IL_002c:
	{
		float L_11 = ___t0;
		float L_12 = V_0;
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0038;
		}
	}
	{
		float L_13 = ___t0;
		float L_14 = ___period1;
		___t0 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_14));
	}

IL_0038:
	{
		float L_15 = ___t0;
		float L_16 = ___shift2;
		return ((float)il2cpp_codegen_add((float)L_15, (float)L_16));
	}
}
// System.Single SagoUtils.MathUtil::Gaussian01(System.Single)
extern "C"  float MathUtil_Gaussian01_m2057007154 (RuntimeObject * __this /* static, unused */, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtil_Gaussian01_m2057007154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		float L_1 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = expf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(-0.5f), (float)L_0)), (float)L_1)));
		return ((float)((float)L_2/(float)(2.50662827f)));
	}
}
// System.Single SagoUtils.MathUtil::Gaussian(System.Single,System.Single,System.Single)
extern "C"  float MathUtil_Gaussian_m147103659 (RuntimeObject * __this /* static, unused */, float ___mean0, float ___standardDeviation1, float ___x2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x2;
		float L_1 = ___mean0;
		float L_2 = ___standardDeviation1;
		float L_3 = MathUtil_Gaussian01_m2057007154(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))/(float)L_2)), /*hidden argument*/NULL);
		float L_4 = ___standardDeviation1;
		return ((float)((float)L_3/(float)L_4));
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
// System.Void SagoUtils.MinMaxAttribute::.ctor(System.Single,System.Single)
extern "C"  void MinMaxAttribute__ctor_m783331338 (MinMaxAttribute_t3517683683 * __this, float ___min0, float ___max1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		float L_0 = ___max1;
		float L_1 = ___min0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = ___min0;
		V_0 = L_2;
		float L_3 = ___max1;
		___min0 = L_3;
		float L_4 = V_0;
		___max1 = L_4;
	}

IL_0015:
	{
		float L_5 = ___min0;
		float L_6 = ___max1;
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), L_5, L_6, /*hidden argument*/NULL);
		MinMaxAttribute_set_Range_m3041826637(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.MinMaxAttribute::.ctor(System.Int32,System.Int32)
extern "C"  void MinMaxAttribute__ctor_m523144411 (MinMaxAttribute_t3517683683 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___min0;
		int32_t L_1 = ___max1;
		MinMaxAttribute__ctor_m783331338(__this, (((float)((float)L_0))), (((float)((float)L_1))), /*hidden argument*/NULL);
		MinMaxAttribute_set_IsInteger_m2578033018(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SagoUtils.MinMaxAttribute::get_IsInteger()
extern "C"  bool MinMaxAttribute_get_IsInteger_m982033890 (MinMaxAttribute_t3517683683 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsIntegerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SagoUtils.MinMaxAttribute::set_IsInteger(System.Boolean)
extern "C"  void MinMaxAttribute_set_IsInteger_m2578033018 (MinMaxAttribute_t3517683683 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsIntegerU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Vector2 SagoUtils.MinMaxAttribute::get_Range()
extern "C"  Vector2_t2156229523  MinMaxAttribute_get_Range_m141766539 (MinMaxAttribute_t3517683683 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_U3CRangeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SagoUtils.MinMaxAttribute::set_Range(UnityEngine.Vector2)
extern "C"  void MinMaxAttribute_set_Range_m3041826637 (MinMaxAttribute_t3517683683 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = ___value0;
		__this->set_U3CRangeU3Ek__BackingField_1(L_0);
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
// System.Void SagoUtils.PascalCasePropertyNameContractResolver::.ctor()
extern "C"  void PascalCasePropertyNameContractResolver__ctor_m1856548388 (PascalCasePropertyNameContractResolver_t3764767062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PascalCasePropertyNameContractResolver__ctor_m1856548388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultContractResolver_t270250618_il2cpp_TypeInfo_var);
		DefaultContractResolver__ctor_m1568516071(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.String SagoUtils.PascalCasePropertyNameContractResolver::ResolvePropertyName(System.String)
extern "C"  String_t* PascalCasePropertyNameContractResolver_ResolvePropertyName_m3896440718 (PascalCasePropertyNameContractResolver_t3764767062 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___propertyName0;
		String_t* L_1 = JsonConvertStringExtensions_UnderscoreWordsToPascalCase_m3315807175(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void SagoUtils.RandomArrayIndex::.ctor(System.Int32)
extern "C"  void RandomArrayIndex__ctor_m2568135554 (RandomArrayIndex_t3579152736 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomArrayIndex__ctor_m2568135554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RandomArrayIndex_set_CurrentIndex_m197402667(__this, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		List_1_t128053199 * L_1 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m2098009717(L_1, L_0, /*hidden argument*/List_1__ctor_m2098009717_RuntimeMethod_var);
		RandomArrayIndex_set_Indices_m204986401(__this, L_1, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0030;
	}

IL_0020:
	{
		List_1_t128053199 * L_2 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_m697420525(L_2, L_3, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___count0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0020;
		}
	}
	{
		RandomArrayIndex_Shuffle_m3193772106(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SagoUtils.RandomArrayIndex::op_Implicit(SagoUtils.RandomArrayIndex)
extern "C"  int32_t RandomArrayIndex_op_Implicit_m2142257174 (RuntimeObject * __this /* static, unused */, RandomArrayIndex_t3579152736 * ___rai0, const RuntimeMethod* method)
{
	{
		RandomArrayIndex_t3579152736 * L_0 = ___rai0;
		NullCheck(L_0);
		int32_t L_1 = RandomArrayIndex_get_Current_m552785780(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 SagoUtils.RandomArrayIndex::get_Current()
extern "C"  int32_t RandomArrayIndex_get_Current_m552785780 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomArrayIndex_get_Current_m552785780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t128053199 * L_0 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_1 = RandomArrayIndex_get_CurrentIndex_m2701359768(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_2 = List_1_get_Item_m888956288(L_0, L_1, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 SagoUtils.RandomArrayIndex::get_Next()
extern "C"  int32_t RandomArrayIndex_get_Next_m1502763811 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	{
		RandomArrayIndex_Increment_m3426233089(__this, /*hidden argument*/NULL);
		int32_t L_0 = RandomArrayIndex_get_Current_m552785780(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 SagoUtils.RandomArrayIndex::get_Advance()
extern "C"  int32_t RandomArrayIndex_get_Advance_m1950599273 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = RandomArrayIndex_get_Current_m552785780(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		RandomArrayIndex_Increment_m3426233089(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 SagoUtils.RandomArrayIndex::get_Count()
extern "C"  int32_t RandomArrayIndex_get_Count_m2135701068 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomArrayIndex_get_Count_m2135701068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t128053199 * L_0 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m361000296(L_0, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 SagoUtils.RandomArrayIndex::get_CurrentIndex()
extern "C"  int32_t RandomArrayIndex_get_CurrentIndex_m2701359768 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CCurrentIndexU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SagoUtils.RandomArrayIndex::set_CurrentIndex(System.Int32)
extern "C"  void RandomArrayIndex_set_CurrentIndex_m197402667 (RandomArrayIndex_t3579152736 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCurrentIndexU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> SagoUtils.RandomArrayIndex::get_Indices()
extern "C"  List_1_t128053199 * RandomArrayIndex_get_Indices_m3403232278 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	{
		List_1_t128053199 * L_0 = __this->get_U3CIndicesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SagoUtils.RandomArrayIndex::set_Indices(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void RandomArrayIndex_set_Indices_m204986401 (RandomArrayIndex_t3579152736 * __this, List_1_t128053199 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t128053199 * L_0 = ___value0;
		__this->set_U3CIndicesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void SagoUtils.RandomArrayIndex::Increment()
extern "C"  void RandomArrayIndex_Increment_m3426233089 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomArrayIndex_Increment_m3426233089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = RandomArrayIndex_get_Current_m552785780(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = RandomArrayIndex_get_CurrentIndex_m2701359768(__this, /*hidden argument*/NULL);
		RandomArrayIndex_set_CurrentIndex_m197402667(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_2 = RandomArrayIndex_get_CurrentIndex_m2701359768(__this, /*hidden argument*/NULL);
		int32_t L_3 = RandomArrayIndex_get_Count_m2135701068(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_008b;
		}
	}
	{
		RandomArrayIndex_set_CurrentIndex_m197402667(__this, 0, /*hidden argument*/NULL);
		RandomArrayIndex_Shuffle_m3193772106(__this, /*hidden argument*/NULL);
		int32_t L_4 = RandomArrayIndex_get_Current_m552785780(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_6 = RandomArrayIndex_get_Count_m2135701068(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		List_1_t128053199 * L_7 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Item_m888956288(L_7, 0, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		V_1 = L_8;
		List_1_t128053199 * L_9 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		List_1_t128053199 * L_10 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_11 = RandomArrayIndex_get_Count_m2135701068(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_12 = List_1_get_Item_m888956288(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_set_Item_m2256214292(L_9, 0, L_12, /*hidden argument*/List_1_set_Item_m2256214292_RuntimeMethod_var);
		List_1_t128053199 * L_13 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_14 = RandomArrayIndex_get_Count_m2135701068(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		NullCheck(L_13);
		List_1_set_Item_m2256214292(L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), L_15, /*hidden argument*/List_1_set_Item_m2256214292_RuntimeMethod_var);
	}

IL_008b:
	{
		return;
	}
}
// System.Void SagoUtils.RandomArrayIndex::Shuffle()
extern "C"  void RandomArrayIndex_Shuffle_m3193772106 (RandomArrayIndex_t3579152736 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RandomArrayIndex_Shuffle_m3193772106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0051;
	}

IL_0007:
	{
		int32_t L_0 = RandomArrayIndex_get_Count_m2135701068(__this, /*hidden argument*/NULL);
		int32_t L_1 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t128053199 * L_4 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = List_1_get_Item_m888956288(L_4, L_5, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		V_2 = L_6;
		List_1_t128053199 * L_7 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		List_1_t128053199 * L_9 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = List_1_get_Item_m888956288(L_9, L_10, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_set_Item_m2256214292(L_7, L_8, L_11, /*hidden argument*/List_1_set_Item_m2256214292_RuntimeMethod_var);
		List_1_t128053199 * L_12 = RandomArrayIndex_get_Indices_m3403232278(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		List_1_set_Item_m2256214292(L_12, L_13, L_14, /*hidden argument*/List_1_set_Item_m2256214292_RuntimeMethod_var);
	}

IL_004d:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = RandomArrayIndex_get_Count_m2135701068(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0007;
		}
	}
	{
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
// UnityEngine.Bounds SagoUtils.RendererExtensions::GetBounds(UnityEngine.Renderer)
extern "C"  Bounds_t2266837910  RendererExtensions_GetBounds_m3650581035 (RuntimeObject * __this /* static, unused */, Renderer_t2627027031 * ___renderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RendererExtensions_GetBounds_m3650581035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Renderer_t2627027031 * L_0 = ___renderer0;
		NullCheck(L_0);
		Bounds_t2266837910  L_1 = Renderer_get_bounds_m1803204000(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3722313464  L_2 = Bounds_get_size_m1178783246((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Vector3_op_Equality_m4231250055(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Renderer_t2627027031 * L_5 = ___renderer0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_GetComponent_TisTransform_t3600365921_m1200784320(L_5, /*hidden argument*/Component_GetComponent_TisTransform_t3600365921_m1200784320_RuntimeMethod_var);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Bounds_set_center_m335768106((&V_0), L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		Bounds_t2266837910  L_8 = V_0;
		return L_8;
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
// System.Void SagoUtils.ShakeDetector::.ctor()
extern "C"  void ShakeDetector__ctor_m3273601623 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_ShakeAllowance_3((5.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.ShakeDetector::add_ShakeDetected(System.Action`1<SagoUtils.ShakeDetector>)
extern "C"  void ShakeDetector_add_ShakeDetected_m3589749250 (ShakeDetector_t2778083360 * __this, Action_1_t2950550955 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShakeDetector_add_ShakeDetected_m3589749250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2950550955 * V_0 = NULL;
	Action_1_t2950550955 * V_1 = NULL;
	{
		Action_1_t2950550955 * L_0 = __this->get_ShakeDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t2950550955 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t2950550955 ** L_2 = __this->get_address_of_ShakeDetected_2();
		Action_1_t2950550955 * L_3 = V_1;
		Action_1_t2950550955 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_1_t2950550955 * L_6 = V_0;
		Action_1_t2950550955 * L_7 = InterlockedCompareExchangeImpl<Action_1_t2950550955 *>(L_2, ((Action_1_t2950550955 *)CastclassSealed((RuntimeObject*)L_5, Action_1_t2950550955_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t2950550955 * L_8 = V_0;
		Action_1_t2950550955 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2950550955 *)L_8) == ((RuntimeObject*)(Action_1_t2950550955 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.ShakeDetector::remove_ShakeDetected(System.Action`1<SagoUtils.ShakeDetector>)
extern "C"  void ShakeDetector_remove_ShakeDetected_m4157117299 (ShakeDetector_t2778083360 * __this, Action_1_t2950550955 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShakeDetector_remove_ShakeDetected_m4157117299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2950550955 * V_0 = NULL;
	Action_1_t2950550955 * V_1 = NULL;
	{
		Action_1_t2950550955 * L_0 = __this->get_ShakeDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t2950550955 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t2950550955 ** L_2 = __this->get_address_of_ShakeDetected_2();
		Action_1_t2950550955 * L_3 = V_1;
		Action_1_t2950550955 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Action_1_t2950550955 * L_6 = V_0;
		Action_1_t2950550955 * L_7 = InterlockedCompareExchangeImpl<Action_1_t2950550955 *>(L_2, ((Action_1_t2950550955 *)CastclassSealed((RuntimeObject*)L_5, Action_1_t2950550955_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t2950550955 * L_8 = V_0;
		Action_1_t2950550955 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2950550955 *)L_8) == ((RuntimeObject*)(Action_1_t2950550955 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SagoUtils.ShakeDetector::Start()
extern "C"  void ShakeDetector_Start_m3635989155 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShakeDetector_Start_m3635989155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0166666675f);
		V_1 = (1.0f);
		float L_0 = V_0;
		float L_1 = V_1;
		ShakeDetector_set_LowPassFilterFactor_m2653359489(__this, ((float)((float)L_0/(float)L_1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		ShakeDetector_set_LowPassValue_m1003706393(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.ShakeDetector::FixedUpdate()
extern "C"  void ShakeDetector_FixedUpdate_m1116969993 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShakeDetector_FixedUpdate_m1116969993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t3722313464  L_1 = V_0;
		Vector3_t3722313464  L_2 = ShakeDetector_LowPassFilter_m2172051850(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t3722313464  L_4 = V_1;
		float L_5 = Vector3_SqrMagnitude_m3025115945(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = V_2;
		float L_7 = ShakeDetector_get_ShakeAllowance_m2262525406(__this, /*hidden argument*/NULL);
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t2950550955 * L_8 = __this->get_ShakeDetected_2();
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t2950550955 * L_9 = __this->get_ShakeDetected_2();
		NullCheck(L_9);
		Action_1_Invoke_m2963213119(L_9, __this, /*hidden argument*/Action_1_Invoke_m2963213119_RuntimeMethod_var);
	}

IL_003d:
	{
		return;
	}
}
// System.Single SagoUtils.ShakeDetector::get_ShakeAllowance()
extern "C"  float ShakeDetector_get_ShakeAllowance_m2262525406 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_ShakeAllowance_3();
		return L_0;
	}
}
// System.Void SagoUtils.ShakeDetector::set_ShakeAllowance(System.Single)
extern "C"  void ShakeDetector_set_ShakeAllowance_m2467165669 (ShakeDetector_t2778083360 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_ShakeAllowance_3(L_0);
		return;
	}
}
// System.Single SagoUtils.ShakeDetector::get_LowPassFilterFactor()
extern "C"  float ShakeDetector_get_LowPassFilterFactor_m3616048145 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CLowPassFilterFactorU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void SagoUtils.ShakeDetector::set_LowPassFilterFactor(System.Single)
extern "C"  void ShakeDetector_set_LowPassFilterFactor_m2653359489 (ShakeDetector_t2778083360 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CLowPassFilterFactorU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector3 SagoUtils.ShakeDetector::get_LowPassValue()
extern "C"  Vector3_t3722313464  ShakeDetector_get_LowPassValue_m1683160545 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_U3CLowPassValueU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void SagoUtils.ShakeDetector::set_LowPassValue(UnityEngine.Vector3)
extern "C"  void ShakeDetector_set_LowPassValue_m1003706393 (ShakeDetector_t2778083360 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CLowPassValueU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Vector3 SagoUtils.ShakeDetector::LowPassFilter()
extern "C"  Vector3_t3722313464  ShakeDetector_LowPassFilter_m2172051850 (ShakeDetector_t2778083360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShakeDetector_LowPassFilter_m2172051850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = ShakeDetector_get_LowPassValue_m1683160545(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = ShakeDetector_get_LowPassFilterFactor_m3616048145(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		ShakeDetector_set_LowPassValue_m1003706393(__this, L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = ShakeDetector_get_LowPassValue_m1683160545(__this, /*hidden argument*/NULL);
		return L_4;
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
// System.Void SagoUtils.SimplePooledObject::.ctor()
extern "C"  void SimplePooledObject__ctor_m940235362 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SagoUtils.SimplePooledObject::get_MaxDuration()
extern "C"  float SimplePooledObject_get_MaxDuration_m2201005988 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_MaxDuration_2();
		return L_0;
	}
}
// System.Void SagoUtils.SimplePooledObject::set_MaxDuration(System.Single)
extern "C"  void SimplePooledObject_set_MaxDuration_m1413394574 (SimplePooledObject_t1040664057 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_MaxDuration_2(L_0);
		return;
	}
}
// SagoUtils.GameObjectPool SagoUtils.SimplePooledObject::get_GameObjectPool()
extern "C"  GameObjectPool_t652050872 * SimplePooledObject_get_GameObjectPool_m367816766 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method)
{
	{
		GameObjectPool_t652050872 * L_0 = __this->get_U3CGameObjectPoolU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void SagoUtils.SimplePooledObject::set_GameObjectPool(SagoUtils.GameObjectPool)
extern "C"  void SimplePooledObject_set_GameObjectPool_m653538839 (SimplePooledObject_t1040664057 * __this, GameObjectPool_t652050872 * ___value0, const RuntimeMethod* method)
{
	{
		GameObjectPool_t652050872 * L_0 = ___value0;
		__this->set_U3CGameObjectPoolU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void SagoUtils.SimplePooledObject::Destroy()
extern "C"  void SimplePooledObject_Destroy_m1335984534 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method)
{
	{
		GameObjectPool_t652050872 * L_0 = SimplePooledObject_get_GameObjectPool_m367816766(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObjectPool_Destroy_m3456973204(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SagoUtils.SimplePooledObject::Reset()
extern "C"  void SimplePooledObject_Reset_m2446411735 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_MaxDuration_2((1.0f));
		return;
	}
}
// System.Void SagoUtils.SimplePooledObject::OnEnable()
extern "C"  void SimplePooledObject_OnEnable_m831523600 (SimplePooledObject_t1040664057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimplePooledObject_OnEnable_m831523600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = SimplePooledObject_get_MaxDuration_m2201005988(__this, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral1061709674, L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
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
// System.Void SagoUtils.SubmoduleInfo::.ctor()
extern "C"  void SubmoduleInfo__ctor_m3029496360 (SubmoduleInfo_t4043851990 * __this, const RuntimeMethod* method)
{
	{
		SubmoduleInfo__ctor_m1019278132(__this, /*hidden argument*/NULL);
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
// System.Void SagoUtils.UnderscoreLowerCasePropertyNameContractResolver::.ctor()
extern "C"  void UnderscoreLowerCasePropertyNameContractResolver__ctor_m2242214215 (UnderscoreLowerCasePropertyNameContractResolver_t1847614001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnderscoreLowerCasePropertyNameContractResolver__ctor_m2242214215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultContractResolver_t270250618_il2cpp_TypeInfo_var);
		DefaultContractResolver__ctor_m1568516071(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.String SagoUtils.UnderscoreLowerCasePropertyNameContractResolver::ResolvePropertyName(System.String)
extern "C"  String_t* UnderscoreLowerCasePropertyNameContractResolver_ResolvePropertyName_m1964119379 (UnderscoreLowerCasePropertyNameContractResolver_t1847614001 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___propertyName0;
		String_t* L_1 = JsonConvertStringExtensions_PascalToUnderscoreCase_m1164626889(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void System.Runtime.Serialization.DataContractAttribute::.ctor()
extern "C"  void DataContractAttribute__ctor_m380468717 (DataContractAttribute_t412496005 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Runtime.Serialization.DataContractAttribute::get_Name()
extern "C"  String_t* DataContractAttribute_get_Name_m470360884 (DataContractAttribute_t412496005 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.DataContractAttribute::set_Name(System.String)
extern "C"  void DataContractAttribute_set_Name_m2501550246 (DataContractAttribute_t412496005 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_name_0(L_0);
		return;
	}
}
// System.String System.Runtime.Serialization.DataContractAttribute::get_Namespace()
extern "C"  String_t* DataContractAttribute_get_Namespace_m1070691015 (DataContractAttribute_t412496005 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ns_1();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.DataContractAttribute::set_Namespace(System.String)
extern "C"  void DataContractAttribute_set_Namespace_m1222069197 (DataContractAttribute_t412496005 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_ns_1(L_0);
		return;
	}
}
// System.Boolean System.Runtime.Serialization.DataContractAttribute::get_IsReference()
extern "C"  bool DataContractAttribute_get_IsReference_m2519771622 (DataContractAttribute_t412496005 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsReferenceU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.DataContractAttribute::set_IsReference(System.Boolean)
extern "C"  void DataContractAttribute_set_IsReference_m3723509015 (DataContractAttribute_t412496005 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsReferenceU3Ek__BackingField_2(L_0);
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
// System.Void System.Runtime.Serialization.DataMemberAttribute::.ctor()
extern "C"  void DataMemberAttribute__ctor_m1942670755 (DataMemberAttribute_t1339837472 * __this, const RuntimeMethod* method)
{
	{
		__this->set_emit_default_1((bool)1);
		__this->set_order_3((-1));
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_EmitDefaultValue()
extern "C"  bool DataMemberAttribute_get_EmitDefaultValue_m2496661382 (DataMemberAttribute_t1339837472 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_emit_default_1();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.DataMemberAttribute::set_EmitDefaultValue(System.Boolean)
extern "C"  void DataMemberAttribute_set_EmitDefaultValue_m1061512926 (DataMemberAttribute_t1339837472 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_emit_default_1(L_0);
		return;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_IsRequired()
extern "C"  bool DataMemberAttribute_get_IsRequired_m1648523583 (DataMemberAttribute_t1339837472 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_required_0();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.DataMemberAttribute::set_IsRequired(System.Boolean)
extern "C"  void DataMemberAttribute_set_IsRequired_m3080281958 (DataMemberAttribute_t1339837472 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_is_required_0(L_0);
		return;
	}
}
// System.String System.Runtime.Serialization.DataMemberAttribute::get_Name()
extern "C"  String_t* DataMemberAttribute_get_Name_m1153013548 (DataMemberAttribute_t1339837472 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_2();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.DataMemberAttribute::set_Name(System.String)
extern "C"  void DataMemberAttribute_set_Name_m4277535972 (DataMemberAttribute_t1339837472 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_name_2(L_0);
		return;
	}
}
// System.Int32 System.Runtime.Serialization.DataMemberAttribute::get_Order()
extern "C"  int32_t DataMemberAttribute_get_Order_m4108288623 (DataMemberAttribute_t1339837472 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_order_3();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.DataMemberAttribute::set_Order(System.Int32)
extern "C"  void DataMemberAttribute_set_Order_m1321819713 (DataMemberAttribute_t1339837472 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_order_3(L_0);
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
// System.Void System.Runtime.Serialization.EnumMemberAttribute::.ctor()
extern "C"  void EnumMemberAttribute__ctor_m1711882993 (EnumMemberAttribute_t1084128815 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
extern "C"  String_t* EnumMemberAttribute_get_Value_m436482311 (EnumMemberAttribute_t1084128815 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.EnumMemberAttribute::set_Value(System.String)
extern "C"  void EnumMemberAttribute_set_Value_m3257871639 (EnumMemberAttribute_t1084128815 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_value_0(L_0);
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
// System.Void UnityEngine.CloudBuild.BuildManifestObject::.ctor()
extern "C"  void BuildManifestObject__ctor_m3588250042 (BuildManifestObject_t354914896 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CloudBuild.BuildManifestObject::SetValue(System.String,System.Object)
extern "C"  void BuildManifestObject_SetValue_m3392393811 (BuildManifestObject_t354914896 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.CloudBuild.BuildManifestObject::SetValues(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void BuildManifestObject_SetValues_m2158868620 (BuildManifestObject_t354914896 * __this, Dictionary_2_t2865362463 * ___sourceDict0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.CloudBuild.BuildManifestObject::ClearValues()
extern "C"  void BuildManifestObject_ClearValues_m4171026893 (BuildManifestObject_t354914896 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.CloudBuild.BuildManifestObject::ToDictionary()
extern "C"  Dictionary_2_t2865362463 * BuildManifestObject_ToDictionary_m3644057863 (BuildManifestObject_t354914896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildManifestObject_ToDictionary_m3644057863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2865362463 * L_0 = (Dictionary_2_t2865362463 *)il2cpp_codegen_object_new(Dictionary_2_t2865362463_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1346091703(L_0, /*hidden argument*/Dictionary_2__ctor_m1346091703_RuntimeMethod_var);
		return L_0;
	}
}
// System.String UnityEngine.CloudBuild.BuildManifestObject::ToJson()
extern "C"  String_t* BuildManifestObject_ToJson_m3299752525 (BuildManifestObject_t354914896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildManifestObject_ToJson_m3299752525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_0;
	}
}
// System.String UnityEngine.CloudBuild.BuildManifestObject::ToString()
extern "C"  String_t* BuildManifestObject_ToString_m3945459438 (BuildManifestObject_t354914896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BuildManifestObject_ToString_m3945459438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_0;
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
// UnityEngine.Rect World.Store.CanvasExtentions::GetScreenRect(UnityEngine.Canvas,UnityEngine.RectTransform)
extern "C"  Rect_t2360479859  CanvasExtentions_GetScreenRect_m2638299737 (RuntimeObject * __this /* static, unused */, Canvas_t3310196443 * ___canvas0, RectTransform_t3704657025 * ___rectTransform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CanvasExtentions_GetScreenRect_m2638299737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	{
		V_0 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4));
		RectTransform_t3704657025 * L_0 = ___rectTransform1;
		Vector3U5BU5D_t1718750761* L_1 = V_0;
		NullCheck(L_0);
		RectTransform_GetWorldCorners_m3553547973(L_0, L_1, /*hidden argument*/NULL);
		V_1 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)2));
		Canvas_t3310196443 * L_2 = ___canvas0;
		NullCheck(L_2);
		int32_t L_3 = Canvas_get_renderMode_m841659411(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		Canvas_t3310196443 * L_4 = ___canvas0;
		NullCheck(L_4);
		int32_t L_5 = Canvas_get_renderMode_m841659411(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0082;
		}
	}

IL_002d:
	{
		Vector3U5BU5D_t1718750761* L_6 = V_1;
		NullCheck(L_6);
		Canvas_t3310196443 * L_7 = ___canvas0;
		NullCheck(L_7);
		Camera_t4157153871 * L_8 = Canvas_get_worldCamera_m3516267897(L_7, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_9 = V_0;
		NullCheck(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = RectTransformUtility_WorldToScreenPoint_m3914148572(NULL /*static, unused*/, L_8, (*(Vector3_t3722313464 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_11;
		Vector3U5BU5D_t1718750761* L_12 = V_1;
		NullCheck(L_12);
		Canvas_t3310196443 * L_13 = ___canvas0;
		NullCheck(L_13);
		Camera_t4157153871 * L_14 = Canvas_get_worldCamera_m3516267897(L_13, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_15 = V_0;
		NullCheck(L_15);
		Vector2_t2156229523  L_16 = RectTransformUtility_WorldToScreenPoint_m3914148572(NULL /*static, unused*/, L_14, (*(Vector3_t3722313464 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_17;
		goto IL_00c8;
	}

IL_0082:
	{
		Vector3U5BU5D_t1718750761* L_18 = V_1;
		NullCheck(L_18);
		Vector3U5BU5D_t1718750761* L_19 = V_0;
		NullCheck(L_19);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1743242446_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_20 = RectTransformUtility_WorldToScreenPoint_m3914148572(NULL /*static, unused*/, (Camera_t4157153871 *)NULL, (*(Vector3_t3722313464 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_21;
		Vector3U5BU5D_t1718750761* L_22 = V_1;
		NullCheck(L_22);
		Vector3U5BU5D_t1718750761* L_23 = V_0;
		NullCheck(L_23);
		Vector2_t2156229523  L_24 = RectTransformUtility_WorldToScreenPoint_m3914148572(NULL /*static, unused*/, (Camera_t4157153871 *)NULL, (*(Vector3_t3722313464 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_25;
	}

IL_00c8:
	{
		Vector3U5BU5D_t1718750761* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_28 = V_1;
		NullCheck(L_28);
		float L_29 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_2();
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_y_2(((float)il2cpp_codegen_subtract((float)(((float)((float)L_27))), (float)L_29)));
		Vector3U5BU5D_t1718750761* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_32 = V_1;
		NullCheck(L_32);
		float L_33 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_y_2();
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_y_2(((float)il2cpp_codegen_subtract((float)(((float)((float)L_31))), (float)L_33)));
		Vector3U5BU5D_t1718750761* L_34 = V_1;
		NullCheck(L_34);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_35 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, (*(Vector3_t3722313464 *)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		Vector3U5BU5D_t1718750761* L_36 = V_1;
		NullCheck(L_36);
		Vector3U5BU5D_t1718750761* L_37 = V_1;
		NullCheck(L_37);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_38 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, (*(Vector3_t3722313464 *)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), (*(Vector3_t3722313464 *)((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_39 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		Rect_t2360479859  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Rect__ctor_m1342368573((&L_40), L_35, L_39, /*hidden argument*/NULL);
		return L_40;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
