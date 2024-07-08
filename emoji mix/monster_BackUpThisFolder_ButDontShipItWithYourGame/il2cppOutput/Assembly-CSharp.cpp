#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<InforCharacter>
struct List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// InforCharacter[]
struct InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AnswerManagers
struct AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Autodestroy
struct Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CharacterControl
struct CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B;
// ChoiceOB
struct ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE;
// Cmh
struct Cmh_t6AC88AACAA9B269A16E3492E4A2930B22E43F2A0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameControl
struct GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F;
// GameControllers
struct GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InforCharacter
struct InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD;
// InputControl
struct InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// ItemChoice
struct ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0;
// ItemClick
struct ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324;
// ItemLevel
struct ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA;
// KeySave
struct KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// ListItem
struct ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// MenuControl
struct MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// ShowHideOb
struct ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Autodestroy/<delayDestroy>d__2
struct U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// ShowHideOb/<delayHide>d__5
struct U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* typeItemChoice_t086AF20222CE28212001BA42AB15AF5E26B949F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral283E4974B7E4073D57FC3712F73B21A1EDDBFA4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2AC52C34E113FF72BE8953CBA7BB57DD2BF574D4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C99004CEE5E015CDA6952214CE3558506208D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral3A9AC714D9B78BE9FD8D8488AC619D7F2556992A;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87;
IL2CPP_EXTERN_C String_t* _stringLiteral6B62645FAFC5EC15ACD0A0027CFFEE9788A86211;
IL2CPP_EXTERN_C String_t* _stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75;
IL2CPP_EXTERN_C String_t* _stringLiteral79F0B534E43BCE9F7C6D0A5EA8622D12190CE3D2;
IL2CPP_EXTERN_C String_t* _stringLiteral7F9A1E7889259C62D7A72B830CF64E19AF41A39B;
IL2CPP_EXTERN_C String_t* _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
IL2CPP_EXTERN_C String_t* _stringLiteral94740C7FFCB499DB68327924BB2E17E97361D1B1;
IL2CPP_EXTERN_C String_t* _stringLiteralA5180BD843EC1A6FF3D9D97BDFF2C50F33CBADE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA6EA1385B24C03AF273167FD618CBADC47508EBA;
IL2CPP_EXTERN_C String_t* _stringLiteralB21F7E7E10020AEF098575E4FD27D7AF50EF27C3;
IL2CPP_EXTERN_C String_t* _stringLiteralB694DE905AC194440C8D34E3510005821BBB39F6;
IL2CPP_EXTERN_C String_t* _stringLiteralBF7EDADDE72D0D718618CB01B67CBBF8773F883F;
IL2CPP_EXTERN_C String_t* _stringLiteralC46A46206EE6AF3F604EF23BA343434727CDC22F;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralD42CA74FD2FD51A463A57B97F3C4E75F730F782C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralE2B940AFAE21F809BA93660B390EF28332B368F1;
IL2CPP_EXTERN_C String_t* _stringLiteralEAE519390F4B621CC49C9A6304EF3B68EFD27B15;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3FEDB4AFD06D3A877E1A3C6A6250CD4E64EB973;
IL2CPP_EXTERN_C String_t* _stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B3D31EE0C8CB1E9EE147FB1108A7A34F9FFEA5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_ClickItemEar_m3C6A682D6716B1BE1F012A133918555129D65582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_ClickItemEye_m3400E939A3051412E4B89BE63FE0FC0CC52B25E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_ClickItemFootwear_m8F3D1017F15929E9B6D662A154E27436AF83E196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_ClickItemMouth_mCB00AD999A63D80E9DFC4A3504A425AF57381EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_ClickItemShirt_mBA4CA665DF2F9EE812D08326D64ADB9A9186B895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_ClickItemTrousers_m32003DAE5573527C83757DF624CDB58ADD8D35EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_ClickItemWing_m22A3E8B3EBEA6F46EB44E09D8031E3BC363887EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameControl_CloseHelp_m6BF5062F1C2508CD17009ECF41232979B5E4E0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0_m3008B6461D9F13E505BEC0CD986F84A717E9DBE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA_m0D7589524964BE464CFF65C1359F442DD58BF146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ItemChoice_ClickOnButton_m802CCA26A69C1B5432248ADC05DDDD8B69FEC36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ItemLevel_ClickOpenLevel_mD80DB9FF072439B18D4DC0C331F70FA34171AC03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHelper_FromJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mA4EC4FFA1B147CAC32CB649578981672B25DDBF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonHelper_ToJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mBF243C376D653F3212BF3E2CF9A1C4DA13C051E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m224A73A1F067C7E957F0BEAC06758EBFFE544AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m14ECB5FE72F665E90491C0D1A416AAFBC27D6FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD172D9B7570D17BB978B39DCF7738D418F11EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mB12B442130D0FEBF2E89878F40775A9CCBC0C501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CdelayDestroyU3Ed__2_System_Collections_IEnumerator_Reset_m9AB07652BA5AB1446EFD374B2F0170C6E393D698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CdelayHideU3Ed__5_System_Collections_IEnumerator_Reset_m93BDBB82A45AE3643239D30160E7B5A3E90C2B53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<InforCharacter>
struct List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// DG.Tweening.DOTweenAnimationExtensions
struct DOTweenAnimationExtensions_t322F12945BA2ABB5DA1E5C986FC693E30DE1D5C6  : public RuntimeObject
{
};

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0  : public RuntimeObject
{
};

struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields
{
	// System.Int32 DG.Tweening.Core.Debugger::logPriority
	int32_t ___logPriority_0;
};

// InforCharacter
struct InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD  : public RuntimeObject
{
	// System.Int32 InforCharacter::idHair
	int32_t ___idHair_0;
	// System.Int32 InforCharacter::idEye
	int32_t ___idEye_1;
	// System.Int32 InforCharacter::idMouth
	int32_t ___idMouth_2;
	// System.Int32 InforCharacter::idShirt
	int32_t ___idShirt_3;
	// System.Int32 InforCharacter::idEar
	int32_t ___idEar_4;
	// System.Int32 InforCharacter::idTrousers
	int32_t ___idTrousers_5;
	// System.Int32 InforCharacter::idFootwear
	int32_t ___idFootwear_6;
	// System.Int32 InforCharacter::idWings
	int32_t ___idWings_7;
};

// JsonHelper
struct JsonHelper_t74F181470A256BAED8E585DCE6B11850EEAA0504  : public RuntimeObject
{
};

// KeySave
struct KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727  : public RuntimeObject
{
};

struct KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields
{
	// System.String KeySave::levelWin
	String_t* ___levelWin_0;
	// System.String KeySave::levelPlay
	String_t* ___levelPlay_1;
	// System.String KeySave::KeyHelp
	String_t* ___KeyHelp_2;
	// System.String KeySave::InforLevel
	String_t* ___InforLevel_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Autodestroy/<delayDestroy>d__2
struct U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5  : public RuntimeObject
{
	// System.Int32 Autodestroy/<delayDestroy>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Autodestroy/<delayDestroy>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Autodestroy Autodestroy/<delayDestroy>d__2::<>4__this
	Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* ___U3CU3E4__this_2;
};

// ShowHideOb/<delayHide>d__5
struct U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256  : public RuntimeObject
{
	// System.Int32 ShowHideOb/<delayHide>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ShowHideOb/<delayHide>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ShowHideOb ShowHideOb/<delayHide>d__5::<>4__this
	ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* ___U3CU3E4__this_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_6;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_7;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_8;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_9;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_10;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_16;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_17;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_18;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_19;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_20;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_21;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_22;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_23;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_24;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_25;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_26;
	// System.Boolean DG.Tweening.Tween::isRelative
	bool ___isRelative_27;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_28;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_29;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_30;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_31;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_32;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_33;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_34;
	// System.Boolean DG.Tweening.Tween::active
	bool ___active_35;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_36;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_37;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_38;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_39;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_40;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_41;
	// System.Boolean DG.Tweening.Tween::playedOnce
	bool ___playedOnce_42;
	// System.Single DG.Tweening.Tween::position
	float ___position_43;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_44;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_45;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_46;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_47;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_48;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_49;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_50;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* ___sequencedTweens_51;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC* ____sequencedObjs_52;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_53;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_51;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_52;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DG.Tweening.UpdateType DG.Tweening.Core.ABSAnimationComponent::updateType
	int32_t ___updateType_4;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::isSpeedBased
	bool ___isSpeedBased_5;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStart
	bool ___hasOnStart_6;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnPlay
	bool ___hasOnPlay_7;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnUpdate
	bool ___hasOnUpdate_8;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStepComplete
	bool ___hasOnStepComplete_9;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnComplete
	bool ___hasOnComplete_10;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnTweenCreated
	bool ___hasOnTweenCreated_11;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStart_12;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onPlay
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlay_13;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onUpdate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onUpdate_14;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStepComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStepComplete_15;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onComplete_16;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onTweenCreated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTweenCreated_17;
	// DG.Tweening.Tween DG.Tweening.Core.ABSAnimationComponent::tween
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween_18;
};

// AnswerManagers
struct AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AnswerManagers::_canDrag
	bool ____canDrag_4;
	// System.Boolean AnswerManagers::_isRight
	bool ____isRight_5;
	// System.Boolean AnswerManagers::_canScale
	bool ____canScale_6;
	// System.Boolean AnswerManagers::_canCheck
	bool ____canCheck_7;
	// System.Boolean AnswerManagers::_limitDrag
	bool ____limitDrag_8;
	// System.Boolean AnswerManagers::_isSavePos
	bool ____isSavePos_9;
	// System.Single AnswerManagers::_minScale
	float ____minScale_10;
	// System.Single AnswerManagers::_maxScale
	float ____maxScale_11;
	// UnityEngine.Vector2 AnswerManagers::_tempPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____tempPos_12;
	// System.Boolean AnswerManagers::_isDragToTarget
	bool ____isDragToTarget_13;
	// UnityEngine.Vector2 AnswerManagers::_posTarget
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____posTarget_14;
	// System.Boolean AnswerManagers::_isTouchUp
	bool ____isTouchUp_15;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Autodestroy
struct Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Autodestroy::timeDestroy
	float ___timeDestroy_4;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// CharacterControl
struct CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer CharacterControl::SpriteHair
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteHair_4;
	// UnityEngine.SpriteRenderer CharacterControl::SpriteEye
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteEye_5;
	// UnityEngine.SpriteRenderer CharacterControl::SpriteMouth
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteMouth_6;
	// UnityEngine.SpriteRenderer CharacterControl::SpriteShirt
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteShirt_7;
	// UnityEngine.SpriteRenderer CharacterControl::SpriteEar
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteEar_8;
	// UnityEngine.SpriteRenderer CharacterControl::SpriteTrousers
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteTrousers_9;
	// UnityEngine.SpriteRenderer CharacterControl::SpriteFootwear
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteFootwear_10;
	// UnityEngine.SpriteRenderer CharacterControl::SpriteWings
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___SpriteWings_11;
};

// ChoiceOB
struct ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ChoiceOB::isClick
	bool ___isClick_4;
};

// Cmh
struct Cmh_t6AC88AACAA9B269A16E3492E4A2930B22E43F2A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Cmh::folder
	String_t* ___folder_4;
	// System.Int32 Cmh::frameRate
	int32_t ___frameRate_5;
	// System.Boolean Cmh::snap
	bool ___snap_6;
	// System.Single Cmh::timecheck
	float ___timecheck_7;
};

// GameControl
struct GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button GameControl::btItemHair
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemHair_5;
	// UnityEngine.UI.Button GameControl::btItemEye
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemEye_6;
	// UnityEngine.UI.Button GameControl::btItemMouth
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemMouth_7;
	// UnityEngine.UI.Button GameControl::btItemShirt
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemShirt_8;
	// UnityEngine.UI.Button GameControl::btItemEar
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemEar_9;
	// UnityEngine.UI.Button GameControl::btItemTrousers
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemTrousers_10;
	// UnityEngine.UI.Button GameControl::btItemFootwear
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemFootwear_11;
	// UnityEngine.UI.Button GameControl::btItemWings
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btItemWings_12;
	// UnityEngine.GameObject GameControl::pnItemHair
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemHair_13;
	// UnityEngine.GameObject GameControl::pnItemEye
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemEye_14;
	// UnityEngine.GameObject GameControl::pnItemMouth
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemMouth_15;
	// UnityEngine.GameObject GameControl::pnItemShirt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemShirt_16;
	// UnityEngine.GameObject GameControl::pnItemEar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemEar_17;
	// UnityEngine.GameObject GameControl::pnItemTrousers
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemTrousers_18;
	// UnityEngine.GameObject GameControl::pnItemFootwear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemFootwear_19;
	// UnityEngine.GameObject GameControl::pnItemWings
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pnItemWings_20;
	// UnityEngine.Transform GameControl::ParentItemHair
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemHair_21;
	// UnityEngine.Transform GameControl::ParentItemEye
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemEye_22;
	// UnityEngine.Transform GameControl::ParentItemMouth
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemMouth_23;
	// UnityEngine.Transform GameControl::ParentItemShirt
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemShirt_24;
	// UnityEngine.Transform GameControl::ParentItemEar
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemEar_25;
	// UnityEngine.Transform GameControl::ParentItemTrousers
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemTrousers_26;
	// UnityEngine.Transform GameControl::ParentItemFootwear
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemFootwear_27;
	// UnityEngine.Transform GameControl::ParentItemWings
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentItemWings_28;
	// UnityEngine.GameObject GameControl::PrefabItemChoice
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PrefabItemChoice_29;
	// UnityEngine.GameObject GameControl::efTouch
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___efTouch_30;
	// UnityEngine.GameObject GameControl::efHelp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___efHelp_31;
	// UnityEngine.UI.Text GameControl::txtTime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtTime_32;
	// System.Single GameControl::timePlay
	float ___timePlay_33;
	// UnityEngine.GameObject GameControl::PanelHelp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PanelHelp_34;
	// UnityEngine.UI.Button GameControl::btHelp
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btHelp_35;
	// UnityEngine.UI.Image GameControl::imItemHelp
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imItemHelp_36;
	// UnityEngine.UI.Button GameControl::btCloseHelp
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btCloseHelp_37;
	// UnityEngine.GameObject GameControl::PanelWin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PanelWin_38;
	// UnityEngine.GameObject GameControl::BGRFaild
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BGRFaild_39;
	// UnityEngine.GameObject GameControl::PanelPause
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PanelPause_40;
	// InforCharacter GameControl::tempCharacter
	InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* ___tempCharacter_41;
	// CharacterControl GameControl::tempIMCharacter
	CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* ___tempIMCharacter_42;
	// CharacterControl GameControl::targetIMCharacter
	CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* ___targetIMCharacter_43;
	// InforCharacter[] GameControl::arrinforLevel
	InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8* ___arrinforLevel_44;
	// System.Int32 GameControl::LevelPlay
	int32_t ___LevelPlay_45;
	// System.Boolean GameControl::isPlay
	bool ___isPlay_46;
	// System.Int32 GameControl::numHelp
	int32_t ___numHelp_47;
	// UnityEngine.UI.Text GameControl::txtNumHelp
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtNumHelp_48;
};

struct GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_StaticFields
{
	// GameControl GameControl::Instance
	GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* ___Instance_4;
};

// GameControllers
struct GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text GameControllers::txtKey
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtKey_4;
	// System.Boolean GameControllers::_checkComplete
	bool ____checkComplete_6;
	// UnityEngine.Vector2 GameControllers::_tempPosMouse
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____tempPosMouse_7;
	// UnityEngine.Vector2 GameControllers::_mOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____mOffset_8;
	// UnityEngine.GameObject GameControllers::_effectTouch
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____effectTouch_9;
	// UnityEngine.GameObject GameControllers::_effectRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____effectRight_10;
	// UnityEngine.GameObject GameControllers::_effectWrong
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____effectWrong_11;
	// System.Boolean GameControllers::_checkCanDrag
	bool ____checkCanDrag_12;
	// System.Boolean GameControllers::_stopDrag
	bool ____stopDrag_13;
	// System.Boolean GameControllers::_checkDone
	bool ____checkDone_14;
	// UnityEngine.GameObject[] GameControllers::_ArrLevel
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____ArrLevel_15;
	// System.Int32 GameControllers::_level
	int32_t ____level_16;
	// UnityEngine.GameObject GameControllers::_objectLevel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____objectLevel_17;
	// UnityEngine.GameObject GameControllers::_curentObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____curentObject_18;
	// System.Boolean GameControllers::_checkFalse
	bool ____checkFalse_19;
	// UnityEngine.Vector3 GameControllers::delta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___delta_20;
	// UnityEngine.Vector3 GameControllers::lastPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPos_21;
};

struct GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_StaticFields
{
	// GameControllers GameControllers::<Instance>k__BackingField
	GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* ___U3CInstanceU3Ek__BackingField_5;
};

// InputControl
struct InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean InputControl::isClick
	bool ___isClick_4;
	// UnityEngine.Vector2 InputControl::oldPosTouch
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oldPosTouch_5;
	// UnityEngine.Vector2 InputControl::oldPosOB
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oldPosOB_6;
	// System.Single InputControl::defaultzoom
	float ___defaultzoom_7;
	// System.Single InputControl::defaultScale
	float ___defaultScale_8;
	// System.Single InputControl::tempScale
	float ___tempScale_9;
	// UnityEngine.Vector3 InputControl::defaultPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultPos_10;
	// UnityEngine.Vector3 InputControl::tempPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempPos_11;
	// UnityEngine.Transform InputControl::downPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___downPos_12;
	// UnityEngine.Transform InputControl::topPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___topPos_13;
	// System.Single InputControl::sizeX
	float ___sizeX_14;
	// System.Single InputControl::sizeY
	float ___sizeY_15;
	// UnityEngine.Transform InputControl::TopDefault
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TopDefault_16;
	// UnityEngine.Transform InputControl::DownDefeult
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___DownDefeult_17;
};

// ItemChoice
struct ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button ItemChoice::btClick
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btClick_4;
	// UnityEngine.UI.Image ItemChoice::imItem
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imItem_5;
	// typeItemChoice ItemChoice::typeItem
	int32_t ___typeItem_6;
	// System.Int32 ItemChoice::idItem
	int32_t ___idItem_7;
};

// ItemClick
struct ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ItemClick::imHide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___imHide_4;
	// UnityEngine.GameObject ItemClick::imActive
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___imActive_5;
	// UnityEngine.UI.Image ItemClick::imItem
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imItem_6;
	// UnityEngine.UI.Button ItemClick::btClick
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btClick_7;
};

// ItemLevel
struct ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ItemLevel::Level
	int32_t ___Level_4;
	// System.Int32 ItemLevel::maxLevel
	int32_t ___maxLevel_5;
	// UnityEngine.GameObject ItemLevel::imLock
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___imLock_6;
	// UnityEngine.UI.Button ItemLevel::btClick
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btClick_7;
	// UnityEngine.UI.Text ItemLevel::txtLevel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtLevel_8;
};

// ListItem
struct ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemHair
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemHair_4;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemEye
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemEye_5;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemMouth
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemMouth_6;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemShirt
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemShirt_7;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemEar
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemEar_8;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemTrousers
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemTrousers_9;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemFootwear
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemFootwear_10;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> ListItem::ListItemWings
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___ListItemWings_11;
};

struct ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_StaticFields
{
	// ListItem ListItem::instance
	ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* ___instance_12;
};

// MenuControl
struct MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MenuControl::numHelp
	int32_t ___numHelp_5;
	// UnityEngine.UI.Text MenuControl::txtHelp
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___txtHelp_6;
	// UnityEngine.UI.Button MenuControl::btShowADS
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btShowADS_7;
	// UnityEngine.GameObject MenuControl::prefabBtClick
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabBtClick_8;
	// UnityEngine.Transform MenuControl::ParentButton
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ParentButton_9;
};

struct MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD_StaticFields
{
	// MenuControl MenuControl::Instance
	MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* ___Instance_4;
};

// ShowHideOb
struct ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ShowHideOb::stage1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stage1_4;
	// UnityEngine.GameObject ShowHideOb::stage2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stage2_5;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SoundManager::audSM
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audSM_4;
	// UnityEngine.AudioSource SoundManager::audSS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audSS_5;
	// UnityEngine.AudioClip SoundManager::audClick
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audClick_6;
	// UnityEngine.AudioClip SoundManager::audWin
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audWin_7;
	// UnityEngine.AudioClip SoundManager::audTrue
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audTrue_8;
	// System.Boolean SoundManager::isMusic
	bool ___isMusic_9;
	// System.Boolean SoundManager::isSound
	bool ___isSound_10;
};

struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::instance
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___instance_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89  : public ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C
{
	// System.Single DG.Tweening.DOTweenAnimation::delay
	float ___delay_19;
	// System.Single DG.Tweening.DOTweenAnimation::duration
	float ___duration_20;
	// DG.Tweening.Ease DG.Tweening.DOTweenAnimation::easeType
	int32_t ___easeType_21;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenAnimation::easeCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___easeCurve_22;
	// DG.Tweening.LoopType DG.Tweening.DOTweenAnimation::loopType
	int32_t ___loopType_23;
	// System.Int32 DG.Tweening.DOTweenAnimation::loops
	int32_t ___loops_24;
	// System.String DG.Tweening.DOTweenAnimation::id
	String_t* ___id_25;
	// System.Boolean DG.Tweening.DOTweenAnimation::isRelative
	bool ___isRelative_26;
	// System.Boolean DG.Tweening.DOTweenAnimation::isFrom
	bool ___isFrom_27;
	// System.Boolean DG.Tweening.DOTweenAnimation::isIndependentUpdate
	bool ___isIndependentUpdate_28;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoKill
	bool ___autoKill_29;
	// System.Boolean DG.Tweening.DOTweenAnimation::isActive
	bool ___isActive_30;
	// System.Boolean DG.Tweening.DOTweenAnimation::isValid
	bool ___isValid_31;
	// UnityEngine.Component DG.Tweening.DOTweenAnimation::target
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___target_32;
	// DG.Tweening.Core.DOTweenAnimationType DG.Tweening.DOTweenAnimation::animationType
	int32_t ___animationType_33;
	// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::targetType
	int32_t ___targetType_34;
	// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::forcedTargetType
	int32_t ___forcedTargetType_35;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoPlay
	bool ___autoPlay_36;
	// System.Boolean DG.Tweening.DOTweenAnimation::useTargetAsV3
	bool ___useTargetAsV3_37;
	// System.Single DG.Tweening.DOTweenAnimation::endValueFloat
	float ___endValueFloat_38;
	// UnityEngine.Vector3 DG.Tweening.DOTweenAnimation::endValueV3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValueV3_39;
	// UnityEngine.Vector2 DG.Tweening.DOTweenAnimation::endValueV2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValueV2_40;
	// UnityEngine.Color DG.Tweening.DOTweenAnimation::endValueColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValueColor_41;
	// System.String DG.Tweening.DOTweenAnimation::endValueString
	String_t* ___endValueString_42;
	// UnityEngine.Rect DG.Tweening.DOTweenAnimation::endValueRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValueRect_43;
	// UnityEngine.Transform DG.Tweening.DOTweenAnimation::endValueTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endValueTransform_44;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool0
	bool ___optionalBool0_45;
	// System.Single DG.Tweening.DOTweenAnimation::optionalFloat0
	float ___optionalFloat0_46;
	// System.Int32 DG.Tweening.DOTweenAnimation::optionalInt0
	int32_t ___optionalInt0_47;
	// DG.Tweening.RotateMode DG.Tweening.DOTweenAnimation::optionalRotationMode
	int32_t ___optionalRotationMode_48;
	// DG.Tweening.ScrambleMode DG.Tweening.DOTweenAnimation::optionalScrambleMode
	int32_t ___optionalScrambleMode_49;
	// System.String DG.Tweening.DOTweenAnimation::optionalString
	String_t* ___optionalString_50;
	// System.Boolean DG.Tweening.DOTweenAnimation::_tweenCreated
	bool ____tweenCreated_51;
	// System.Int32 DG.Tweening.DOTweenAnimation::_playCount
	int32_t ____playCount_52;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// InforCharacter[]
struct InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8  : public RuntimeArray
{
	ALIGN_FIELD (8) InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* m_Items[1];

	inline InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33  : public RuntimeArray
{
	ALIGN_FIELD (8) DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* m_Items[1];

	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32,DG.Tweening.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m55DE4F0E60F0EF4B3868810B0DAE90931E0111D9_gshared (RuntimeObject* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Play_TisRuntimeObject_m9C5B8B16699BA91E6605510B84969F71F944D46F_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T[] JsonHelper::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* JsonHelper_FromJson_TisRuntimeObject_m0CF79B28B3202876D1F44D54E7F6B1627D62E228_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.String JsonHelper::ToJson<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonHelper_ToJson_TisRuntimeObject_m3140592A14E317CFB11533336F60A4573DF948E0_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___list0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_From_TisRuntimeObject_m18F9FB66E1E1400083082A2DD5378B9B9DF379F3_gshared (RuntimeObject* ___t0, bool ___isRelative1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetRelative<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA5D7BA78B5523DC9FD8FB8E0B16DE48ACD1EE936_gshared (RuntimeObject* ___t0, bool ___isRelative1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetTarget_TisRuntimeObject_mCF848380E6792301099B777BD786D24C155EDFE5_gshared (RuntimeObject* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetDelay<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetDelay_TisRuntimeObject_m445C871C485F006B4A7FB7A4F6CF5A72FBC4D413_gshared (RuntimeObject* ___t0, float ___delay1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m1C8E72C53CBD98A9746DDA001A56721DEC3B2DC7_gshared (RuntimeObject* ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnKill_TisRuntimeObject_m079FD49FE122B593A452FD7E3E79EEA002D14F51_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_mBE3F75D4A5DCF47CD9781E41C999D6CD22BDFE6A_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m0BE19CC2AB8DA24EA038AEDFBC2FC8E4F85028AF_gshared (RuntimeObject* ___t0, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animCurve1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetId_TisRuntimeObject_mA60D08D08193FE3A81488E993ECBE10FAF16F324_gshared (RuntimeObject* ___t0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m036B5BAF7D6315B9E0B7AD0CBBD7CFEEC6CED946_gshared (RuntimeObject* ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStart<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStart_TisRuntimeObject_m520A807423D9F89B8401A562D0941BAC0060C802_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnPlay<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnPlay_TisRuntimeObject_mC55B79E4F8FE235150C56AD18BB4F0BE89303A53_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnUpdate_TisRuntimeObject_mF0B0740A5477A406F974C728C8BD308A66AB3454_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mABBA37B39BAEA8692DABC0685E66A09AD4027118_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Pause<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Pause_TisRuntimeObject_m8B72FD21DD2AB12230B9B80A043E47E51B6944B6_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF (String_t* ___filename0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// GameControllers GameControllers::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void AnswerManagers::MouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_MouseDrag_mC1BFF19FB43851700819ECF8FAAD7D54642A2BC8 (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void AnswerManagers::MouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_MouseUp_m7D6A8405447E0A72A267D78B8419F580333D043B (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void GameControllers::EffectCheck(System.Boolean,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_EffectCheck_mED0835B39A3685049F8A0E8196A9E591D2A8DE10 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, bool ___check0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Pos1, bool ___toWorld2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void GameControllers::DragObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_DragObject_m6C544E8A0060AAB17A7B2B12582F899B8ED46430 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____object0, const RuntimeMethod* method) ;
// System.Void AnswerManagers::LimitDrag(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_LimitDrag_mF94A7BD0AEEE6DFA99A19188FCF71AF4BCE7535C (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, float ___minX0, float ___maxX1, float ___minY2, float ___maxY3, const RuntimeMethod* method) ;
// System.Void GameControllers::ScaleControl(UnityEngine.GameObject,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_ScaleControl_m0A8B02168EBBE360D698F377287566F4A7769ED4 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____object0, float ___minSize1, float ___maxSize2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// System.Void GameControllers::TouchUp(System.Boolean,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_TouchUp_m01DDBA82F8E124FB3F3B134682AE81C6E4763456 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, bool ___check0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Autodestroy::delayDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Autodestroy_delayDestroy_m130880A0B137DC09909E4842FCA003804B0FB551 (Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Autodestroy/<delayDestroy>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayDestroyU3Ed__2__ctor_mE77F6F5A5403E8286A0D5BF1DC2856A01CA2F48C (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// ListItem ListItem::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void CharacterControl::ChangeSpriteEar(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteEar_m15E1B49341929C14DE786692DE074F00DE6CC7DC (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) ;
// System.Void CharacterControl::ChangeSpriteEye(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteEye_m30AE9DCC049EC7EDDF3CD494CA698D7653127AAC (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) ;
// System.Void CharacterControl::ChangeSpriteMouth(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteMouth_mA22CF3CC849F6D83D76A7B1FEA0606AE423BE5F2 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) ;
// System.Void CharacterControl::ChangeSpriteShirt(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteShirt_mDB8F18D8A4533740E1BFD24A39CCB75FF0357C1F (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) ;
// System.Void CharacterControl::ChangeSpriteTrousers(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteTrousers_m2FF30F13AB92259AB00B0C52EBE84985D0395226 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) ;
// System.Void CharacterControl::ChangeSpriteWings(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteWings_mF372663A3C43D2B6D11687F2FA725AD69734BA70 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void CharacterControl::ChangeSprite(UnityEngine.SpriteRenderer,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____sp0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newsprite1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ChoiceOB::OnClickOBJ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceOB_OnClickOBJ_m0F4024CB51C16F136A920B84BA8DBA19AE4B52E2 (ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.DOTween::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOScale_m8F8E53E7E68C2D015C982B6EB0927A6779A1A5BD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___s0, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Sequence>(T,System.Int32,DG.Tweening.LoopType)
inline Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mB12B442130D0FEBF2E89878F40775A9CCBC0C501 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method)
{
	return ((  Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* (*) (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C*, int32_t, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m55DE4F0E60F0EF4B3868810B0DAE90931E0111D9_gshared)(___t0, ___loops1, ___loopType2, method);
}
// T DG.Tweening.TweenExtensions::Play<DG.Tweening.Sequence>(T)
inline Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___t0, const RuntimeMethod* method)
{
	return ((  Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* (*) (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C*, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_m9C5B8B16699BA91E6605510B84969F71F944D46F_gshared)(___t0, method);
}
// System.String GameControl::FormatTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameControl_FormatTime_m23B083E011BC227934D1A0752E1F2A7757ED6312 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameControl::ChangeNumHelp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ChangeNumHelp_m0C2AC365BCA5BA98B111E8C4A97863FB36DD91D1 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, int32_t ____change0, const RuntimeMethod* method) ;
// System.Void GameControl::HideAllItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) ;
// System.Void GameControl::AddAllItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddAllItem_m42E7F889171A1AE1208655E23961D2F36362CFEE (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) ;
// System.Void GameControl::GetInforLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_GetInforLevel_mA1932B2AC27A5CB50288CEFD5F9EB6BFD7092C8D (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) ;
// System.Void GameControl::ClickItemShirt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemShirt_mBA4CA665DF2F9EE812D08326D64ADB9A9186B895 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// SoundManager SoundManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline (const RuntimeMethod* method) ;
// System.Void SoundManager::PlayClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void GameControl::CHeckFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_CHeckFail_m49D1CC4026278AA6469C8EC77D1A00DAC74A1F24 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayWin_mA7741B892310262924D85D909B686B7AABD0D8A0 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T[] JsonHelper::FromJson<InforCharacter>(System.String)
inline InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8* JsonHelper_FromJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mA4EC4FFA1B147CAC32CB649578981672B25DDBF8 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8* (*) (String_t*, const RuntimeMethod*))JsonHelper_FromJson_TisRuntimeObject_m0CF79B28B3202876D1F44D54E7F6B1627D62E228_gshared)(___json0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_LoadLevel_mC9D8F3BE3706BCD9867380D386E2C16A72D1F3D5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_loadedLevelName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_loadedLevelName_m2E1ADDD7E0429B1B66AD8F8A2C601BF3AB3DED27 (const RuntimeMethod* method) ;
// System.Void GameControl::HideAllimItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<ItemClick>()
inline ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void ItemClick::ShowClickItem(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569 (ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* __this, bool ____isShow0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ItemChoice>()
inline ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* GameObject_GetComponent_TisItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0_m3008B6461D9F13E505BEC0CD986F84A717E9DBE9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ItemChoice::SetImageItem(UnityEngine.Sprite,typeItemChoice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemChoice_SetImageItem_m5FE43B12043F4557A776D0543AC10907D1A03473 (ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____sprite0, int32_t ____type1, int32_t ____id2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Count()
inline int32_t List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GameControl::AddItemChoice(UnityEngine.Sprite,UnityEngine.Transform,typeItemChoice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddItemChoice_m6F01D101616CE473523056F4CB46D57AD21EA570 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____sprite0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____parent1, int32_t ____type2, int32_t ____id3, const RuntimeMethod* method) ;
// System.Void GameControl::AddAllItemOnList(System.Collections.Generic.List`1<UnityEngine.Sprite>,UnityEngine.Transform,typeItemChoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____newList0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____parent1, int32_t ____type2, const RuntimeMethod* method) ;
// System.Void CharacterControl::SetInforIMCharacter(InforCharacter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_SetInforIMCharacter_mF392CB9A9272FA4064EA56C586A336A1BC519186 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* ____infor0, const RuntimeMethod* method) ;
// System.Void GameControl::CheckWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_CheckWin_mDA7C11DF14536E333A86BFAA5C4ED4DB72AF8170 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameControllers::set_Instance(GameControllers)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameControllers_set_Instance_m1275B83CB787B1D650D0DD5FEF21972FF4FFE503_inline (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Input::set_multiTouchEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_multiTouchEnabled_m4B654B59BBFF0CA1C8A2E2325EFB8063F77FA616 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void GameControllers::EffectTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_EffectTouch_m013D6BB9E5F7B9C54F0355C4E7DAAE20AA493C4C (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) ;
// System.Void GameControllers::TouchDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_TouchDown_m15EF160FD05E31C69DB3DFBAD818892506A163BD (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) ;
// System.Void GameControllers::InitLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_InitLevel_m6617C908D8C21B11E96C495EDF5003D797728471 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, int32_t ___Lv0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D GameControllers::Raycast2DWithOrder(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GameControllers_Raycast2DWithOrder_m59E00BA420E15EB17C96D14699E46BC8559BDD52 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject GameControllers::ChooseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameControllers_ChooseObject_m67A23AA55070B716293E8EBF24621F0C44EB4B0B (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) ;
// System.Boolean GameControllers::IsMouseOverUi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControllers_IsMouseOverUi_m1C75BC179D3E5DD5D60E084E5DA9038B4938553A (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void GameControllers::Scale(UnityEngine.GameObject,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_Scale_m8D544B89E36FA15BE6FCE21B3F110A24BF7A0949 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____object0, float ___size1, float ___minSize2, float ___maxSize3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Physics2D_RaycastAll_m0EBAB1266E23657A8F089323B7B71784AF6B3C7B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void InputControl::CheckDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_CheckDrag_m02562D0CCD2C9BD32E129F1D6CC2FFC8D012C41E (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) ;
// System.Void InputControl::ZoomGameOB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_ZoomGameOB_m4A120ECCC3B9A584EB5FF01837108A80AA9A7F77 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void InputControl::checkPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_checkPosition_m2967015FF1ABF406990F7C2ED353DCDD4A2FB128 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) ;
// System.Void InputControl::limitScale(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_limitScale_mC0F75A45E0DE0BA6538F3C8BDBA4BD8701653767 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, float ____min0, float ____max1, float ____manitude2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GameControl::ChangeValuesItem(typeItemChoice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ChangeValuesItem_m1910AA41451344285AD164447E6FE9D9FE6D990A (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, int32_t ____type0, int32_t ____id1, const RuntimeMethod* method) ;
// System.Void ItemLevel::CheckLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemLevel_CheckLock_m72C57183375998A3C625196E8EF03B8616AAA04B (ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void ListItem::CreatenewList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_CreatenewList_m1F0101AFE077D633785837B884BCA20443AC9A01 (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<InforCharacter>::.ctor()
inline void List_1__ctor_m14ECB5FE72F665E90491C0D1A416AAFBC27D6FE8 (List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void InforCharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InforCharacter__ctor_mDDAD54202D12DCF59A20CB62DA98ED9268F8BCC2 (InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* __this, const RuntimeMethod* method) ;
// System.Int32 ListItem::RandomItem(System.Collections.Generic.List`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____List0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<InforCharacter>::Add(T)
inline void List_1_Add_m224A73A1F067C7E957F0BEAC06758EBFFE544AD9_inline (List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9* __this, InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9*, InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String JsonHelper::ToJson<InforCharacter>(System.Collections.Generic.List`1<T>)
inline String_t* JsonHelper_ToJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mBF243C376D653F3212BF3E2CF9A1C4DA13C051E8 (List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9* ___list0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9*, const RuntimeMethod*))JsonHelper_ToJson_TisRuntimeObject_m3140592A14E317CFB11533336F60A4573DF948E0_gshared)(___list0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void MenuControl::CheckHelp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_CheckHelp_mB5A4185CBC6A02EE7EF06627CFCE5329355D477C (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) ;
// System.Void MenuControl::AddButtonLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_AddButtonLevel_m3552F736F8D47EC8BBBDBAAC7BDCF3DDD30F8E7A (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ItemLevel>()
inline ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* GameObject_GetComponent_TisItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA_m0D7589524964BE464CFF65C1359F442DD58BF146 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ItemLevel::SetInforLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemLevel_SetInforLevel_mB4CDDD3A490151890C3138A8B9A53BA24B191817 (ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* __this, int32_t ____lv0, const RuntimeMethod* method) ;
// System.Void ShowHideOb::ChangeStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowHideOb_ChangeStage_m11A3D36606CD25A536A90C9F0EEC1D6394B88719 (ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ShowHideOb::delayHide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowHideOb_delayHide_m48ACA68C51641CAB8E64275E56E721B6A4D26EAC (ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* __this, const RuntimeMethod* method) ;
// System.Void ShowHideOb/<delayHide>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayHideU3Ed__5__ctor_m67AC06784505A7A9E88A4CD47E42F21E0F293A3D (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayMusic_mA59828D21F5C3C42C16CA84E80704DFBF85D067E (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayAud(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayAud_mBC43D3CA13A42BD285FBC2F56CE668AB92442C0D (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____aud0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsActive(DG.Tweening.Tween)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TweenExtensions_IsActive_m0361F513A18C4128C4DBF88EF1E2F4752D97DF4A_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_m41BEF5EBF8C1633EC918DD60ADF82F5C63EC8ED5 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___complete1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_m075A18B16BBDF65F7672023E472B6A92B8051F71 (Type_t* ___t0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DG.Tweening.DOTweenUtils46::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DOTweenUtils46_SwitchToRectTransform_mBC04140DECCDB1BC1ABC350B0DD5053810122ED2 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___from0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___to1, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOAnchorPos3D_m448F0426905A6E0061CEBD5EDDB7368F472C12F9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOMove_mCABA3EC61CA937575A3597629B32332025003BC0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DOMove_m448E4F52E0A6909E2DDBAF142139DA26F5F23404 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOMove_m813A23087929AF9F3B6C7F160D4CD7F3DCE34104 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOLocalMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOLocalMove_m3BBF288EF72070FBE83140752E97B3F0FD75C06E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DORotate_m5CB803FB23BE05C2E2EB14BB00C58B05F5562BF1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DORotate_m42D753D74A7846A9B3BA9F358D74985D6107E789 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DORotate_mC2A53E2C3D65AF9F45EDBAC44EFA6B55F0CD6DF4 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOLocalRotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOLocalRotate_mC97921F1AE28D8288CE9A4A567E1987DD436C809 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOSizeDelta_m88662C05BC698464D7BD2CC1FAD50F9122A8D20B (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DOColor_m58469B24BF3360CFDFCD51C949490D8CE11ADAB8 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOColor_mC922C9C42EE205AFF45010AA8E409704F6BEBEAA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOColor_mA849E66F5B1CB697BFF92B94EC3313FD19C1392D (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOColor_mF0C6C5ED3B10BF6942A74AFB4F3375F9DC3BC13F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Light,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOColor_m031F42AAA5312900A74011F58329ACF809BD42A0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions43::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions43_DOFade_m3DB205E6A07E27B814AEFFF72BC69CB15D98A7ED (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOFade(UnityEngine.Material,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOFade_m4A9722B57A6C86A5B5C0E46A6AD2BEEC1F2D439B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOFade_m6D3C0485C22587DD26890ED66E7DABAFBD53F7EC (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOFade_m5914032B7CC02D79197D327EFFE3A5E2319AA42F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOIntensity(UnityEngine.Light,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOIntensity_m6C3F835279084DFCCBDADD22F1A50BA6271DC0F8 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOFade_m8AB1763A279B4D6975F1DB7771A5B659085C3383 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOText_mC4006F3DF326A2AC3D5881092212E8AC04F543B4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, String_t* ___endValue1, float ___duration2, bool ___richTextEnabled3, int32_t ___scrambleMode4, String_t* ___scrambleChars5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOPunchAnchorPos_m065577330770D0547B80860039CD8570260636B8 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchPosition(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchPosition_mC6141C2E6F415ACB10B664B3F2DDADDEE1CCF9B7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchScale_m11086B1F15446E2DBD1BBED2FE1855DC12C05867 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchRotation(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchRotation_mBD603C44E24516A904CEF8D707E016B03C71DC5F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions46::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions46_DOShakeAnchorPos_m1FCBBAF0256D614E8B1861C5311D05092546AA5C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, float ___duration1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakePosition(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakePosition_m9EF301EB964DC2278AD68CA43D1A920727C3CD4C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeScale(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeScale_m20469753DB848159A9A8C84A5654F72C346EE00D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeRotation(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeRotation_m9B4EAD50DFAFD7A55A0BBFC7B26E4E532E796EF6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOAspect(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOAspect_m0F86118D4B9E5B33951923A94504A27E9DE31BE4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Camera,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOColor_m74D0B25F7E19EB85F325B61616E0F50D1221377D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOFieldOfView(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOFieldOfView_m89342F24B2C0D043F691C7009943E31AE72E73EA (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOOrthoSize(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOOrthoSize_m8CCDEE3E8D1127C693F4E64EE1786DC5549CE3FA (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPixelRect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPixelRect_m68A8869F313E63850B71B7CE8233EC92F30619EF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DORect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DORect_m1F6205405427F2A86B19E80DB22D1BE94F1F205E (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<DG.Tweening.Tweener>(T,System.Boolean)
inline Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95 (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* (*) (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool, const RuntimeMethod*))TweenSettingsExtensions_From_TisRuntimeObject_m18F9FB66E1E1400083082A2DD5378B9B9DF379F3_gshared)(___t0, ___isRelative1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetRelative<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA5D7BA78B5523DC9FD8FB8E0B16DE48ACD1EE936_gshared)(___t0, ___isRelative1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Tween>(T,System.Object)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_mCF848380E6792301099B777BD786D24C155EDFE5_gshared)(___t0, ___target1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetDelay<DG.Tweening.Tween>(T,System.Single)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, float ___delay1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, float, const RuntimeMethod*))TweenSettingsExtensions_SetDelay_TisRuntimeObject_m445C871C485F006B4A7FB7A4F6CF5A72FBC4D413_gshared)(___t0, ___delay1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Tween>(T,System.Int32,DG.Tweening.LoopType)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m55DE4F0E60F0EF4B3868810B0DAE90931E0111D9_gshared)(___t0, ___loops1, ___loopType2, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m1C8E72C53CBD98A9746DDA001A56721DEC3B2DC7_gshared)(___t0, ___autoKillOnCompletion1, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnKill_TisRuntimeObject_m079FD49FE122B593A452FD7E3E79EEA002D14F51_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_mBE3F75D4A5DCF47CD9781E41C999D6CD22BDFE6A_gshared)(___t0, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,UnityEngine.AnimationCurve)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animCurve1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m0BE19CC2AB8DA24EA038AEDFBC2FC8E4F85028AF_gshared)(___t0, ___animCurve1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,DG.Tweening.Ease)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared)(___t0, ___ease1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<DG.Tweening.Tween>(T,System.Object)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD172D9B7570D17BB978B39DCF7738D418F11EF86 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, RuntimeObject* ___id1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetId_TisRuntimeObject_mA60D08D08193FE3A81488E993ECBE10FAF16F324_gshared)(___t0, ___id1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m036B5BAF7D6315B9E0B7AD0CBBD7CFEEC6CED946_gshared)(___t0, ___isIndependentUpdate1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStart<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStart_TisRuntimeObject_m520A807423D9F89B8401A562D0941BAC0060C802_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnPlay<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnPlay_TisRuntimeObject_mC55B79E4F8FE235150C56AD18BB4F0BE89303A53_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnUpdate_TisRuntimeObject_mF0B0740A5477A406F974C728C8BD308A66AB3454_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mABBA37B39BAEA8692DABC0685E66A09AD4027118_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenExtensions::Play<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_m9C5B8B16699BA91E6605510B84969F71F944D46F_gshared)(___t0, method);
}
// T DG.Tweening.TweenExtensions::Pause<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Pause_TisRuntimeObject_m8B72FD21DD2AB12230B9B80A043E47E51B6944B6_gshared)(___t0, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_mE146D1154F52E49E529517BB36D29EADA337F5FF (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_m98D93F84137C304FDA25BF99E45108494E18F39B (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_m32808EC4264B337995A4E260E96AF7A454029637 (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Pause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Pause_m58CD7313179E53DE741D41B6CAAB7ABFF1BABA6C (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::TogglePause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_TogglePause_m306F889F632F7B3C429F108A81AFD644727D0F7D (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared)(__this, method);
}
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsInitialized_m70878E071A2B3F02B43A47A4CEAE674A64341AF1 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Rewind_m3E891F32358D3D459EA15BE3A25D49B49D6BAC0C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___includeDelay1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m462D3B435A8ADE6FEB0330E4A31710226DB613BC (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_m68B555E809C1F3B88BE6CC613765FC38F407AA40 (RuntimeObject* ___targetOrId0, bool ___includeDelay1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Complete(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Complete_m22D90DCCA1970B8AA12787F43263BF16DC49C4CB (RuntimeObject* ___targetOrId0, bool ___withCallbacks1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Kill(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Kill_m1D0A70349523060E7198D3256BC2DC555E422331 (RuntimeObject* ___targetOrId0, bool ___complete1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_m2992F5D85F5BCA090173D20045950D6EA8CB8A6C (RuntimeObject* ___target0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsPlaying_m21C049B7FC765108ABCD80F6DA263F21A0AF7461 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_mCB9C775CFE13C8F43A5AD89A171D7A65DD1470AF (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Rewind(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Rewind_mD73DE9114E50F4BC68F8837D5E813A8862D757AD (RuntimeObject* ___targetOrId0, bool ___includeDelay1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_mEFA746FA37804A08FC41AFA595EFCAED0B9F959C (RuntimeObject* ___target0, RuntimeObject* ___id1, bool ___includeDelay2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTween::TweensByTarget(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* DOTween_TweensByTarget_m140CC38E6A8C742B1AEB86DAF401143C96CBD40E (RuntimeObject* ___target0, bool ___playingOnly1, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257 (Type_t* ___enumType0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.ABSAnimationComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328 (ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void Cmh::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cmh_Start_mF57DCF7210E258E994B96054644EB9C4584D32AD (Cmh_t6AC88AACAA9B269A16E3492E4A2930B22E43F2A0* __this, const RuntimeMethod* method) 
{
	{
		// System.IO.Directory.CreateDirectory(folder);
		String_t* L_0 = __this->___folder_4;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1;
		L_1 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Cmh::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cmh_Update_m5B6BBF9FF41EE367F066143F459E03ACF72AE899 (Cmh_t6AC88AACAA9B269A16E3492E4A2930B22E43F2A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79F0B534E43BCE9F7C6D0A5EA8622D12190CE3D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (snap)
		bool L_0 = __this->___snap_6;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// timecheck += Time.deltaTime;
		float L_1 = __this->___timecheck_7;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timecheck_7 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (timecheck>=0.5f)
		float L_3 = __this->___timecheck_7;
		if ((!(((float)L_3) >= ((float)(0.5f)))))
		{
			goto IL_0051;
		}
	}
	{
		// timecheck = 0;
		__this->___timecheck_7 = (0.0f);
		// string name = string.Format("{0}/{1:D04} shot.png", folder, Time.frameCount);
		String_t* L_4 = __this->___folder_4;
		int32_t L_5;
		L_5 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral79F0B534E43BCE9F7C6D0A5EA8622D12190CE3D2, L_4, L_7, NULL);
		// ScreenCapture.CaptureScreenshot(name);
		ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF(L_8, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Cmh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cmh__ctor_mFFD418FE8EEE132AC38D27D695223C387DC6B9D0 (Cmh_t6AC88AACAA9B269A16E3492E4A2930B22E43F2A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF7EDADDE72D0D718618CB01B67CBBF8773F883F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string folder = "ScreenshotFolder";
		__this->___folder_4 = _stringLiteralBF7EDADDE72D0D718618CB01B67CBBF8773F883F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___folder_4), (void*)_stringLiteralBF7EDADDE72D0D718618CB01B67CBBF8773F883F);
		// public int frameRate = 1;
		__this->___frameRate_5 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AnswerManagers::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_Start_mD92050C77D3E134AD52562E1E97993DE755F718B (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, const RuntimeMethod* method) 
{
	{
		// if (_isSavePos)
		bool L_0 = __this->____isSavePos_9;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// _tempPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		__this->____tempPos_12 = L_3;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void AnswerManagers::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_Update_mE57767506E2198CA8FFFAF20CCC1863F4859D937 (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameControllers.Instance._checkComplete && !GameControllers.Instance._checkDone)
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_0;
		L_0 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->____checkComplete_6;
		if (L_1)
		{
			goto IL_011a;
		}
	}
	{
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_2;
		L_2 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		NullCheck(L_2);
		bool L_3 = L_2->____checkDone_14;
		if (L_3)
		{
			goto IL_011a;
		}
	}
	{
		// if (GameControllers.Instance._curentObject != null && GameControllers.Instance._curentObject.name.Equals(gameObject.name))
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_4;
		L_4 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->____curentObject_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_011a;
		}
	}
	{
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_7;
		L_7 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->____curentObject_18;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_011a;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_13;
		L_13 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		// if (_isTouchUp)
		bool L_14 = __this->____isTouchUp_15;
		if (!L_14)
		{
			goto IL_006e;
		}
	}
	{
		// _isTouchUp = false;
		__this->____isTouchUp_15 = (bool)0;
	}

IL_006e:
	{
		// MouseDrag();
		AnswerManagers_MouseDrag_mC1BFF19FB43851700819ECF8FAAD7D54642A2BC8(__this, NULL);
	}

IL_0074:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_15;
		L_15 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_15)
		{
			goto IL_00b8;
		}
	}
	{
		// _isTouchUp = true;
		__this->____isTouchUp_15 = (bool)1;
		// MouseUp();
		AnswerManagers_MouseUp_m7D6A8405447E0A72A267D78B8419F580333D043B(__this, NULL);
		// if (_isSavePos)
		bool L_16 = __this->____isSavePos_9;
		if (!L_16)
		{
			goto IL_00b8;
		}
	}
	{
		// GameControllers.Instance.EffectCheck(false, Vector2.zero, true);
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_17;
		L_17 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_17);
		GameControllers_EffectCheck_mED0835B39A3685049F8A0E8196A9E591D2A8DE10(L_17, (bool)0, L_18, (bool)1, NULL);
		// transform.position = _tempPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->____tempPos_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_20, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_21, NULL);
	}

IL_00b8:
	{
		// if (_isTouchUp && _isDragToTarget)
		bool L_22 = __this->____isTouchUp_15;
		if (!L_22)
		{
			goto IL_011a;
		}
	}
	{
		bool L_23 = __this->____isDragToTarget_13;
		if (!L_23)
		{
			goto IL_011a;
		}
	}
	{
		// if (Vector2.Distance(transform.position, _posTarget) < 2f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->____posTarget_14;
		float L_28;
		L_28 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_26, L_27, NULL);
		if ((!(((float)L_28) < ((float)(2.0f)))))
		{
			goto IL_011a;
		}
	}
	{
		// transform.position = Vector2.Lerp(transform.position, _posTarget, .1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = __this->____posTarget_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_32, L_33, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_34, NULL);
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_35, NULL);
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void AnswerManagers::MouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_MouseDrag_mC1BFF19FB43851700819ECF8FAAD7D54642A2BC8 (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, const RuntimeMethod* method) 
{
	{
		// if (_canDrag && !GameControllers.Instance._stopDrag)
		bool L_0 = __this->____canDrag_4;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_1;
		L_1 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		NullCheck(L_1);
		bool L_2 = L_1->____stopDrag_13;
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		// GameControllers.Instance.DragObject(gameObject);
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_3;
		L_3 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameControllers_DragObject_m6C544E8A0060AAB17A7B2B12582F899B8ED46430(L_3, L_4, NULL);
		// if (_limitDrag)
		bool L_5 = __this->____limitDrag_8;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// LimitDrag(-2.5f, 2.5f, -5f, 4f);
		AnswerManagers_LimitDrag_mF94A7BD0AEEE6DFA99A19188FCF71AF4BCE7535C(__this, (-2.5f), (2.5f), (-5.0f), (4.0f), NULL);
	}

IL_0046:
	{
		// if (_canScale)
		bool L_6 = __this->____canScale_6;
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// GameControllers.Instance.ScaleControl(gameObject, _minScale, _maxScale);
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_7;
		L_7 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_9 = __this->____minScale_10;
		float L_10 = __this->____maxScale_11;
		NullCheck(L_7);
		GameControllers_ScaleControl_m0A8B02168EBBE360D698F377287566F4A7769ED4(L_7, L_8, L_9, L_10, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void AnswerManagers::MouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_MouseUp_m7D6A8405447E0A72A267D78B8419F580333D043B (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.touchCount < 2 && _canCheck)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0030;
		}
	}
	{
		bool L_1 = __this->____canCheck_7;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// GameControllers.Instance.TouchUp(_isRight, transform.position);
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_2;
		L_2 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		bool L_3 = __this->____isRight_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		NullCheck(L_2);
		GameControllers_TouchUp_m01DDBA82F8E124FB3F3B134682AE81C6E4763456(L_2, L_3, L_6, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void AnswerManagers::LimitDrag(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers_LimitDrag_mF94A7BD0AEEE6DFA99A19188FCF71AF4BCE7535C (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, float ___minX0, float ___maxX1, float ___minY2, float ___maxY3, const RuntimeMethod* method) 
{
	{
		// if (transform.position.x < minX)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3 = ___minX0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		// transform.position = new Vector2(minX, transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_5 = ___minX0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_5, L_8, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_9, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
	}

IL_0039:
	{
		// if (transform.position.x > maxX)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		float L_14 = ___maxX1;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		// transform.position = new Vector2(maxX, transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_16 = ___maxX1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_16, L_19, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_20, NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_21, NULL);
	}

IL_0072:
	{
		// if (transform.position.y < minY)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___y_3;
		float L_25 = ___minY2;
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00ab;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, minY);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		float L_30 = ___minY2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), L_29, L_30, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_31, NULL);
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_32, NULL);
	}

IL_00ab:
	{
		// if (transform.position.y > maxY)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___y_3;
		float L_36 = ___maxY3;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_00e6;
		}
	}
	{
		// transform.position = new Vector2(transform.position.x, maxY);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40 = L_39.___x_2;
		float L_41 = ___maxY3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), L_40, L_41, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_42, NULL);
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_43, NULL);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void AnswerManagers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerManagers__ctor_m9A2CF70EC304C3CC03B9C633E4A20152F7C0AE6A (AnswerManagers_t4801214300CD4E67842FC94D1AD06BBF15F64B8A* __this, const RuntimeMethod* method) 
{
	{
		// public bool _limitDrag = true;
		__this->____limitDrag_8 = (bool)1;
		// public float _minScale = 1f;
		__this->____minScale_10 = (1.0f);
		// public float _maxScale = 3f;
		__this->____maxScale_11 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autodestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Autodestroy_Start_mE81367D5A2B15EEBC5E0223587DCC09C44D2DEB5 (Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(delayDestroy());
		RuntimeObject* L_0;
		L_0 = Autodestroy_delayDestroy_m130880A0B137DC09909E4842FCA003804B0FB551(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Autodestroy::delayDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Autodestroy_delayDestroy_m130880A0B137DC09909E4842FCA003804B0FB551 (Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* L_0 = (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5*)il2cpp_codegen_object_new(U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CdelayDestroyU3Ed__2__ctor_mE77F6F5A5403E8286A0D5BF1DC2856A01CA2F48C(L_0, 0, NULL);
		U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Autodestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Autodestroy__ctor_m109428E41A4EFE26E1B94276BD0BDFA1FB4EECEC (Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Autodestroy/<delayDestroy>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayDestroyU3Ed__2__ctor_mE77F6F5A5403E8286A0D5BF1DC2856A01CA2F48C (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Autodestroy/<delayDestroy>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayDestroyU3Ed__2_System_IDisposable_Dispose_m425505124E395667D19B22B3772596CBF4B9488C (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Autodestroy/<delayDestroy>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CdelayDestroyU3Ed__2_MoveNext_mCFF038C1C752F420112BD9D07A2471AB6B6F8A29 (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(timeDestroy);
		Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___timeDestroy_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(this.gameObject);
		Autodestroy_t2BCDC3D19E88FBC88C0E36C4D6ECA7C850366A04* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Autodestroy/<delayDestroy>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdelayDestroyU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC6C0617CCC27BC25D883455BF4AB2075CB54DF6 (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Autodestroy/<delayDestroy>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayDestroyU3Ed__2_System_Collections_IEnumerator_Reset_m9AB07652BA5AB1446EFD374B2F0170C6E393D698 (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CdelayDestroyU3Ed__2_System_Collections_IEnumerator_Reset_m9AB07652BA5AB1446EFD374B2F0170C6E393D698_RuntimeMethod_var)));
	}
}
// System.Object Autodestroy/<delayDestroy>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdelayDestroyU3Ed__2_System_Collections_IEnumerator_get_Current_m3EDFE59CE194249E8E4EED1E9619A9FA988D7099 (U3CdelayDestroyU3Ed__2_t91CB8B186C000EA65CDD72BF1E0D3A8FEF81A7A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CharacterControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_Start_m8E428963DC777EB1D3D907CAD2A749B9AB96E872 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CharacterControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_Update_mE7CCAB380248689D5F26E08A4B9D77F8DE3B564C (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CharacterControl::SetInforIMCharacter(InforCharacter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_SetInforIMCharacter_mF392CB9A9272FA4064EA56C586A336A1BC519186 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* ____infor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChangeSpriteEar(ListItem.Instance.ListItemEar[_infor.idEar]);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_0;
		L_0 = ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline(NULL);
		NullCheck(L_0);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = L_0->___ListItemEar_8;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_2 = ____infor0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___idEar_4;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4;
		L_4 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_1, L_3, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		CharacterControl_ChangeSpriteEar_m15E1B49341929C14DE786692DE074F00DE6CC7DC(__this, L_4, NULL);
		// ChangeSpriteEye(ListItem.Instance.ListItemEye[_infor.idEye]);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_5;
		L_5 = ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline(NULL);
		NullCheck(L_5);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_6 = L_5->___ListItemEye_5;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_7 = ____infor0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___idEye_1;
		NullCheck(L_6);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_6, L_8, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		CharacterControl_ChangeSpriteEye_m30AE9DCC049EC7EDDF3CD494CA698D7653127AAC(__this, L_9, NULL);
		// ChangeSpriteMouth(ListItem.Instance.ListItemMouth[_infor.idMouth]);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_10;
		L_10 = ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline(NULL);
		NullCheck(L_10);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_11 = L_10->___ListItemMouth_6;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_12 = ____infor0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___idMouth_2;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14;
		L_14 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_11, L_13, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		CharacterControl_ChangeSpriteMouth_mA22CF3CC849F6D83D76A7B1FEA0606AE423BE5F2(__this, L_14, NULL);
		// ChangeSpriteShirt(ListItem.Instance.ListItemShirt[_infor.idShirt]);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_15;
		L_15 = ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline(NULL);
		NullCheck(L_15);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_16 = L_15->___ListItemShirt_7;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_17 = ____infor0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___idShirt_3;
		NullCheck(L_16);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19;
		L_19 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_16, L_18, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		CharacterControl_ChangeSpriteShirt_mDB8F18D8A4533740E1BFD24A39CCB75FF0357C1F(__this, L_19, NULL);
		// ChangeSpriteTrousers(ListItem.Instance.ListItemTrousers[_infor.idTrousers]);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_20;
		L_20 = ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline(NULL);
		NullCheck(L_20);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_21 = L_20->___ListItemTrousers_9;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_22 = ____infor0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___idTrousers_5;
		NullCheck(L_21);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24;
		L_24 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_21, L_23, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		CharacterControl_ChangeSpriteTrousers_m2FF30F13AB92259AB00B0C52EBE84985D0395226(__this, L_24, NULL);
		// ChangeSpriteWings(ListItem.Instance.ListItemWings[_infor.idWings]);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_25;
		L_25 = ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline(NULL);
		NullCheck(L_25);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_26 = L_25->___ListItemWings_11;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_27 = ____infor0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___idWings_7;
		NullCheck(L_26);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29;
		L_29 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_26, L_28, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		CharacterControl_ChangeSpriteWings_mF372663A3C43D2B6D11687F2FA725AD69734BA70(__this, L_29, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSprite(UnityEngine.SpriteRenderer,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____sp0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newsprite1, const RuntimeMethod* method) 
{
	{
		// _sp.sprite = _newsprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ____sp0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newsprite1;
		NullCheck(L_0);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteHair(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteHair_m122E85B0BDE3029A738232F3960D3953CFB5B845 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteHair, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteHair_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteEye(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteEye_m30AE9DCC049EC7EDDF3CD494CA698D7653127AAC (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteEye, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteEye_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteMouth(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteMouth_mA22CF3CC849F6D83D76A7B1FEA0606AE423BE5F2 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteMouth, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteMouth_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteShirt(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteShirt_mDB8F18D8A4533740E1BFD24A39CCB75FF0357C1F (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteShirt, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteShirt_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteEar(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteEar_m15E1B49341929C14DE786692DE074F00DE6CC7DC (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteEar, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteEar_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteTrousers(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteTrousers_m2FF30F13AB92259AB00B0C52EBE84985D0395226 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteTrousers, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteTrousers_9;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteFootwear(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteFootwear_mC28B9A7F0F6449B8F487AAF0806D84D87E88F2A8 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteFootwear, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteFootwear_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::ChangeSpriteWings(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl_ChangeSpriteWings_mF372663A3C43D2B6D11687F2FA725AD69734BA70 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____newvl0, const RuntimeMethod* method) 
{
	{
		// ChangeSprite(SpriteWings, _newvl);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___SpriteWings_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____newvl0;
		CharacterControl_ChangeSprite_mC232403FEDC4A3C4C55CF623FAA8D4B8AF25245F(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void CharacterControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterControl__ctor_mC4400046FB45D7967756E940E2B26452CBA9D1D7 (CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ChoiceOB::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceOB_OnPointerDown_m1D6D909ECF55A1D7F8251F575CFF4D9E9E78CFA9 (ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B3D31EE0C8CB1E9EE147FB1108A7A34F9FFEA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Click to OBJ:"+gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF7B3D31EE0C8CB1E9EE147FB1108A7A34F9FFEA5, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// OnClickOBJ();
		ChoiceOB_OnClickOBJ_m0F4024CB51C16F136A920B84BA8DBA19AE4B52E2(__this, NULL);
		// }
		return;
	}
}
// System.Void ChoiceOB::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceOB_Start_mBB9ECDF2BB91CBC57EA9C7FBCA759BB01128C5C0 (ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChoiceOB::OnClickOBJ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceOB_OnClickOBJ_m0F4024CB51C16F136A920B84BA8DBA19AE4B52E2 (ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mB12B442130D0FEBF2E89878F40775A9CCBC0C501_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (isClick)
		bool L_0 = __this->___isClick_4;
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		// float temScale = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		V_0 = L_3;
		// temScale = temScale * 1.05f;
		float L_4 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_4, (1.04999995f)));
		// Sequence mysequence = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_5;
		L_5 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		// mysequence.Append(transform.DOScale(new Vector3(temScale, temScale, temScale), 0.5f)).SetLoops(-1, LoopType.Yoyo);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_6 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_12;
		L_12 = ShortcutExtensions_DOScale_m8F8E53E7E68C2D015C982B6EB0927A6779A1A5BD(L_7, L_11, (0.5f), NULL);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_13;
		L_13 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_6, L_12, NULL);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_14;
		L_14 = TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mB12B442130D0FEBF2E89878F40775A9CCBC0C501(L_13, (-1), 1, TweenSettingsExtensions_SetLoops_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mB12B442130D0FEBF2E89878F40775A9CCBC0C501_RuntimeMethod_var);
		// mysequence.Play();
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_15;
		L_15 = TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7(L_6, TweenExtensions_Play_TisSequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C_mAE376A6BE21D1F94CE5EAA4DA0C1683A7D6DFDE7_RuntimeMethod_var);
		// isClick = false;
		__this->___isClick_4 = (bool)0;
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void ChoiceOB::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceOB_Update_m5020CDFE44F591544E3E1D718C3C9B63032033E5 (ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChoiceOB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceOB__ctor_m59215B20BED1E7E5B6439A8E7BA73EBE61F6289A (ChoiceOB_t82FC0DB35263F782E78B854C0E3F853E8078DBBE* __this, const RuntimeMethod* method) 
{
	{
		// public bool isClick = true;
		__this->___isClick_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Awake_m802DD36E6092142E5A5879D2B0DAD86FD7260FCC (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_StaticFields*)il2cpp_codegen_static_fields_for(GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_StaticFields*)il2cpp_codegen_static_fields_for(GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void GameControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Start_m1B81A3A747085E94CC8962FD4FCF12995361FDDC (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_ClickItemEar_m3C6A682D6716B1BE1F012A133918555129D65582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_ClickItemEye_m3400E939A3051412E4B89BE63FE0FC0CC52B25E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_ClickItemFootwear_m8F3D1017F15929E9B6D662A154E27436AF83E196_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_ClickItemMouth_mCB00AD999A63D80E9DFC4A3504A425AF57381EDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_ClickItemShirt_mBA4CA665DF2F9EE812D08326D64ADB9A9186B895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_ClickItemTrousers_m32003DAE5573527C83757DF624CDB58ADD8D35EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_ClickItemWing_m22A3E8B3EBEA6F46EB44E09D8031E3BC363887EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_CloseHelp_m6BF5062F1C2508CD17009ECF41232979B5E4E0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// txtTime.text = "" + FormatTime(timePlay);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___txtTime_32;
		float L_1 = __this->___timePlay_33;
		String_t* L_2;
		L_2 = GameControl_FormatTime_m23B083E011BC227934D1A0752E1F2A7757ED6312(__this, L_1, NULL);
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_001b:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// btCloseHelp.onClick.AddListener(CloseHelp);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___btCloseHelp_37;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)GameControl_CloseHelp_m6BF5062F1C2508CD17009ECF41232979B5E4E0C1_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// PanelHelp.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___PanelHelp_34;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// PanelWin.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___PanelWin_38;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// PanelPause.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___PanelPause_40;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// BGRFaild.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___BGRFaild_39;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// ChangeNumHelp(0);
		GameControl_ChangeNumHelp_m0C2AC365BCA5BA98B111E8C4A97863FB36DD91D1(__this, 0, NULL);
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// btItemEar.onClick.AddListener(ClickItemEar);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___btItemEar_9;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)GameControl_ClickItemEar_m3C6A682D6716B1BE1F012A133918555129D65582_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_13, NULL);
		// btItemEye.onClick.AddListener(ClickItemEye);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___btItemEye_6;
		NullCheck(L_14);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_15;
		L_15 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_14, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, __this, (intptr_t)((void*)GameControl_ClickItemEye_m3400E939A3051412E4B89BE63FE0FC0CC52B25E7_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_15, L_16, NULL);
		// btItemFootwear.onClick.AddListener(ClickItemFootwear);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___btItemFootwear_11;
		NullCheck(L_17);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_18;
		L_18 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_17, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, __this, (intptr_t)((void*)GameControl_ClickItemFootwear_m8F3D1017F15929E9B6D662A154E27436AF83E196_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_18, L_19, NULL);
		// btItemMouth.onClick.AddListener(ClickItemMouth);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___btItemMouth_7;
		NullCheck(L_20);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_21;
		L_21 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_20, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_22 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_22, __this, (intptr_t)((void*)GameControl_ClickItemMouth_mCB00AD999A63D80E9DFC4A3504A425AF57381EDF_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_21, L_22, NULL);
		// btItemShirt.onClick.AddListener(ClickItemShirt);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___btItemShirt_8;
		NullCheck(L_23);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_24;
		L_24 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_23, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_25, __this, (intptr_t)((void*)GameControl_ClickItemShirt_mBA4CA665DF2F9EE812D08326D64ADB9A9186B895_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_24, L_25, NULL);
		// btItemTrousers.onClick.AddListener(ClickItemTrousers);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = __this->___btItemTrousers_10;
		NullCheck(L_26);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_27;
		L_27 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_26, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_28 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_28, __this, (intptr_t)((void*)GameControl_ClickItemTrousers_m32003DAE5573527C83757DF624CDB58ADD8D35EF_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_27, L_28, NULL);
		// btItemWings.onClick.AddListener(ClickItemWing);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = __this->___btItemWings_12;
		NullCheck(L_29);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_30;
		L_30 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_29, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_31, __this, (intptr_t)((void*)GameControl_ClickItemWing_m22A3E8B3EBEA6F46EB44E09D8031E3BC363887EF_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_30, L_31, NULL);
		// AddAllItem();
		GameControl_AddAllItem_m42E7F889171A1AE1208655E23961D2F36362CFEE(__this, NULL);
		// GetInforLevel();
		GameControl_GetInforLevel_mA1932B2AC27A5CB50288CEFD5F9EB6BFD7092C8D(__this, NULL);
		// ClickItemShirt();
		GameControl_ClickItemShirt_mBA4CA665DF2F9EE812D08326D64ADB9A9186B895(__this, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ChangeNumHelp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ChangeNumHelp_m0C2AC365BCA5BA98B111E8C4A97863FB36DD91D1 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, int32_t ____change0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// numHelp = PlayerPrefs.GetInt(KeySave.KeyHelp, 0);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___KeyHelp_2;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		__this->___numHelp_47 = L_1;
		// numHelp += _change;
		int32_t L_2 = __this->___numHelp_47;
		int32_t L_3 = ____change0;
		__this->___numHelp_47 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		// txtNumHelp.text = "" + numHelp;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___txtNumHelp_48;
		int32_t* L_5 = (&__this->___numHelp_47);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_4;
			goto IL_0039;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0039:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// PlayerPrefs.SetInt(KeySave.KeyHelp, numHelp);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_8 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___KeyHelp_2;
		int32_t L_9 = __this->___numHelp_47;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_8, L_9, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		return;
	}
}
// System.Void GameControl::ShowPanelHelp(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ShowPanelHelp_m6E21DD8E5339771EC0EAAB6C7E859CD41C2603E4 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____sprite0, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_0);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_0, NULL);
		// PanelHelp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___PanelHelp_34;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// imItemHelp.sprite = _sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___imItemHelp_36;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ____sprite0;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::CloseHelp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_CloseHelp_m6BF5062F1C2508CD17009ECF41232979B5E4E0C1 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_0);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_0, NULL);
		// PanelHelp.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___PanelHelp_34;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameControl::AddEfect(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddEfect_m4EF61707957FC7EA34D01A75FA9C2E2F352D23E6 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject _ef = GameObject.Instantiate(efTouch, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___efTouch_30;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// _ef.transform.position = _pos;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ____pos0;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void GameControl::AddHelp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddHelp_mE64D8DF32DAAB144A7D9E9F66E488EBB73049559 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pos.x += 0.3f;
		float* L_0 = (&(&____pos0)->___x_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		*((float*)L_1) = (float)((float)il2cpp_codegen_add(L_2, (0.300000012f)));
		// _pos.y -= 0.3f;
		float* L_3 = (&(&____pos0)->___y_3);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_subtract(L_5, (0.300000012f)));
		// GameObject _ef = GameObject.Instantiate(efHelp, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___efHelp_31;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// _ef.transform.position = _pos;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ____pos0;
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void GameControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Update_m5C6C1398A3CBEE8718E10B4AD10E30C5162727D3 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// if (isPlay)
		bool L_0 = __this->___isPlay_46;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		// if (timePlay > 0)
		float L_1 = __this->___timePlay_33;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// timePlay -= Time.deltaTime;
		float L_2 = __this->___timePlay_33;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timePlay_33 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// txtTime.text = "" + FormatTime(timePlay);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___txtTime_32;
		float L_5 = __this->___timePlay_33;
		String_t* L_6;
		L_6 = GameControl_FormatTime_m23B083E011BC227934D1A0752E1F2A7757ED6312(__this, L_5, NULL);
		String_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_4;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_4;
			goto IL_0042;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0042:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// CHeckFail();
		GameControl_CHeckFail_m49D1CC4026278AA6469C8EC77D1A00DAC74A1F24(__this, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.String GameControl::FormatTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameControl_FormatTime_m23B083E011BC227934D1A0752E1F2A7757ED6312 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int minutes = (int)time / 60;
		float L_0 = ___time0;
		V_0 = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_0)/((int32_t)60)));
		// int seconds = (int)time - 60 * minutes;
		float L_1 = ___time0;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_1), ((int32_t)il2cpp_codegen_multiply(((int32_t)60), L_2))));
		// return string.Format("{0:00}:{1:00}", minutes, seconds);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralD3C6FF105F16F36B05CE62DC0895F7A6B90F6ED8, L_5, L_8, NULL);
		return L_9;
	}
}
// System.Void GameControl::CheckWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_CheckWin_mDA7C11DF14536E333A86BFAA5C4ED4DB72AF8170 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameControl::CheckLevelPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_CheckLevelPlay_mD0FBF4621C9A2A2EF3246A804D902A4D6F250F66 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// LevelPlay = PlayerPrefs.GetInt(KeySave.levelPlay, 0);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelPlay_1;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		__this->___LevelPlay_45 = L_1;
		// int numLevelWin = PlayerPrefs.GetInt(KeySave.levelWin,0);
		String_t* L_2 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelWin_0;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_2, 0, NULL);
		V_0 = L_3;
		// if (LevelPlay <= numLevelWin)
		int32_t L_4 = __this->___LevelPlay_45;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_003a;
		}
	}
	{
		// numLevelWin += 1;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// PlayerPrefs.SetInt(KeySave.levelWin,numLevelWin);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_7 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelWin_0;
		int32_t L_8 = V_0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_7, L_8, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void GameControl::CHeckFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_CHeckFail_m49D1CC4026278AA6469C8EC77D1A00DAC74A1F24 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B62645FAFC5EC15ACD0A0027CFFEE9788A86211);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timePlay <= 0)
		float L_0 = __this->___timePlay_33;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// SoundManager.Instance.PlayWin();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_1);
		SoundManager_PlayWin_mA7741B892310262924D85D909B686B7AABD0D8A0(L_1, NULL);
		// Debug.Log(" 8888Win ");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6B62645FAFC5EC15ACD0A0027CFFEE9788A86211, NULL);
		// PanelWin.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PanelWin_38;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// isPlay = false;
		__this->___isPlay_46 = (bool)0;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void GameControl::GetInforLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_GetInforLevel_mA1932B2AC27A5CB50288CEFD5F9EB6BFD7092C8D (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHelper_FromJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mA4EC4FFA1B147CAC32CB649578981672B25DDBF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F9A1E7889259C62D7A72B830CF64E19AF41A39B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94740C7FFCB499DB68327924BB2E17E97361D1B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC46A46206EE6AF3F604EF23BA343434727CDC22F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// LevelPlay = PlayerPrefs.GetInt(KeySave.levelPlay,0);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelPlay_1;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		__this->___LevelPlay_45 = L_1;
		// string temp = PlayerPrefs.GetString(KeySave.InforLevel,"null");
		String_t* L_2 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___InforLevel_3;
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(L_2, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		V_0 = L_3;
		// Debug.Log("inForlevel"+temp);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral94740C7FFCB499DB68327924BB2E17E97361D1B1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// if (temp != "null")
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_6, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// arrinforLevel = JsonHelper.FromJson<InforCharacter>(temp);
		String_t* L_8 = V_0;
		InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8* L_9;
		L_9 = JsonHelper_FromJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mA4EC4FFA1B147CAC32CB649578981672B25DDBF8(L_8, JsonHelper_FromJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mA4EC4FFA1B147CAC32CB649578981672B25DDBF8_RuntimeMethod_var);
		__this->___arrinforLevel_44 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrinforLevel_44), (void*)L_9);
	}

IL_004a:
	{
		// Debug.Log("LevelPlay:"+LevelPlay + "  LeghtArr:"+arrinforLevel.Length);
		int32_t* L_10 = (&__this->___LevelPlay_45);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		InforCharacterU5BU5D_t9C36E6AF4B3A8C08A283D0F1F446AA9A73EB8DA8* L_12 = __this->___arrinforLevel_44;
		NullCheck(L_12);
		V_1 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_14;
		L_14 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral7F9A1E7889259C62D7A72B830CF64E19AF41A39B, L_11, _stringLiteralC46A46206EE6AF3F604EF23BA343434727CDC22F, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ShowPanelWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ShowPanelWin_m25A7B70769A297198F93784AF3696AE44D596E39 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// PanelWin.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PanelWin_38;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_1);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickBackHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickBackHome_mC7B8B76E7F40D6A90C14DB5B871AA846FFA35B5B (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.LoadLevel("Menu");
		Application_LoadLevel_mC9D8F3BE3706BCD9867380D386E2C16A72D1F3D5(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_0);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickResume_m76C4B03C6D931BFD8A89D112C799364BAEDC5F20 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// PanelPause.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PanelPause_40;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_1);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickPlayAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickPlayAgain_m37C460FC74CD639C69427D3D699CF2E17D793FC6 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// string name = Application.loadedLevelName;
		String_t* L_0;
		L_0 = Application_get_loadedLevelName_m2E1ADDD7E0429B1B66AD8F8A2C601BF3AB3DED27(NULL);
		// Application.LoadLevel(name);
		Application_LoadLevel_mC9D8F3BE3706BCD9867380D386E2C16A72D1F3D5(L_0, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_1);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickNextLevel_mB547D8B0512F2B8210A2A4B95C45CC5F2BCAEBA0 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LevelPlay < 200)
		int32_t L_0 = __this->___LevelPlay_45;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)200))))
		{
			goto IL_0030;
		}
	}
	{
		// LevelPlay += 1;
		int32_t L_1 = __this->___LevelPlay_45;
		__this->___LevelPlay_45 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// PlayerPrefs.SetInt(KeySave.levelPlay, LevelPlay);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_2 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelPlay_1;
		int32_t L_3 = __this->___LevelPlay_45;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_2, L_3, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
	}

IL_0030:
	{
		// string name = Application.loadedLevelName;
		String_t* L_4;
		L_4 = Application_get_loadedLevelName_m2E1ADDD7E0429B1B66AD8F8A2C601BF3AB3DED27(NULL);
		// Application.LoadLevel(name);
		Application_LoadLevel_mC9D8F3BE3706BCD9867380D386E2C16A72D1F3D5(L_4, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_5;
		L_5 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_5);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_5, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ShowPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ShowPause_mA0B31374647500225E36F4AC046133D9C01EEFC4 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// PanelPause.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PanelPause_40;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_1);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClosePanelPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClosePanelPause_m904DC53895515B39339592E1D8BA1505CE1E7E2A (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// PanelPause.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PanelPause_40;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_1);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemEye_m3400E939A3051412E4B89BE63FE0FC0CC52B25E7 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3FEDB4AFD06D3A877E1A3C6A6250CD4E64EB973);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Clickbtn Eye");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF3FEDB4AFD06D3A877E1A3C6A6250CD4E64EB973, NULL);
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemEye.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemEye_14;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemEye.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemEye_6;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemHair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemHair_mEC38D25EB659C2F234587914B2BE37435EDF5D4F (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemHair.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemHair_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemHair.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemHair_5;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemMouth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemMouth_mCB00AD999A63D80E9DFC4A3504A425AF57381EDF (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemMouth.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemMouth_15;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemMouth.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemMouth_7;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemShirt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemShirt_mBA4CA665DF2F9EE812D08326D64ADB9A9186B895 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemShirt.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemShirt_16;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemShirt.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemShirt_8;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemEar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemEar_m3C6A682D6716B1BE1F012A133918555129D65582 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemEar.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemEar_17;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemEar.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemEar_9;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemTrousers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemTrousers_m32003DAE5573527C83757DF624CDB58ADD8D35EF (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemTrousers.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemTrousers_18;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemTrousers.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemTrousers_10;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemFootwear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemFootwear_m8F3D1017F15929E9B6D662A154E27436AF83E196 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemFootwear.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemFootwear_19;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemFootwear.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemFootwear_11;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::ClickItemWing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ClickItemWing_m22A3E8B3EBEA6F46EB44E09D8031E3BC363887EF (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HideAllItem();
		GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF(__this, NULL);
		// HideAllimItem();
		GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5(__this, NULL);
		// pnItemWings.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemWings_20;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btItemWings.GetComponentInParent<ItemClick>().ShowClickItem(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btItemWings_12;
		NullCheck(L_1);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_2;
		L_2 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_1, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_2);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_2, (bool)1, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameControl::HideAllItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_HideAllItem_m1D30640C346A89B60768BDB03078C73D3D45ABBF (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// pnItemEar.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pnItemEar_17;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// pnItemEye.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pnItemEye_14;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// pnItemFootwear.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pnItemFootwear_19;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// pnItemHair.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___pnItemHair_13;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// pnItemMouth.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___pnItemMouth_15;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// pnItemShirt.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___pnItemShirt_16;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// pnItemTrousers.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___pnItemTrousers_18;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// pnItemWings.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___pnItemWings_20;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameControl::HideAllimItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_HideAllimItem_m8C1332575E00286392EFC25D174BAD2203B8A0F5 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btItemEar.GetComponentInParent<ItemClick>().ShowClickItem(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btItemEar_9;
		NullCheck(L_0);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_1;
		L_1 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_0, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_1);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_1, (bool)0, NULL);
		// btItemEye.GetComponentInParent<ItemClick>().ShowClickItem(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___btItemEye_6;
		NullCheck(L_2);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_3;
		L_3 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_2, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_3);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_3, (bool)0, NULL);
		// btItemMouth.GetComponentInParent<ItemClick>().ShowClickItem(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___btItemMouth_7;
		NullCheck(L_4);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_5;
		L_5 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_4, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_5);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_5, (bool)0, NULL);
		// btItemShirt.GetComponentInParent<ItemClick>().ShowClickItem(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___btItemShirt_8;
		NullCheck(L_6);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_7;
		L_7 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_6, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_7);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_7, (bool)0, NULL);
		// btItemTrousers.GetComponentInParent<ItemClick>().ShowClickItem(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___btItemTrousers_10;
		NullCheck(L_8);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_9;
		L_9 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_8, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_9);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_9, (bool)0, NULL);
		// btItemWings.GetComponentInParent<ItemClick>().ShowClickItem(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___btItemWings_12;
		NullCheck(L_10);
		ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* L_11;
		L_11 = Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02(L_10, Component_GetComponentInParent_TisItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324_mCD42E0492B2815FDBD5086367ABCA0F0C7564B02_RuntimeMethod_var);
		NullCheck(L_11);
		ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569(L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameControl::AddItemChoice(UnityEngine.Sprite,UnityEngine.Transform,typeItemChoice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddItemChoice_m6F01D101616CE473523056F4CB46D57AD21EA570 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____sprite0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____parent1, int32_t ____type2, int32_t ____id3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0_m3008B6461D9F13E505BEC0CD986F84A717E9DBE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject temp = GameObject.Instantiate(PrefabItemChoice, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PrefabItemChoice_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// temp.transform.parent = _parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ____parent1;
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_7, NULL);
		// temp.transform.localScale = new Vector3(1,1,1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// temp.GetComponent<ItemChoice>().SetImageItem(_sprite,_type,_id);
		NullCheck(L_8);
		ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* L_11;
		L_11 = GameObject_GetComponent_TisItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0_m3008B6461D9F13E505BEC0CD986F84A717E9DBE9(L_8, GameObject_GetComponent_TisItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0_m3008B6461D9F13E505BEC0CD986F84A717E9DBE9_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = ____sprite0;
		int32_t L_13 = ____type2;
		int32_t L_14 = ____id3;
		NullCheck(L_11);
		ItemChoice_SetImageItem_m5FE43B12043F4557A776D0543AC10907D1A03473(L_11, L_12, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void GameControl::AddAllItemOnList(System.Collections.Generic.List`1<UnityEngine.Sprite>,UnityEngine.Transform,typeItemChoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____newList0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____parent1, int32_t ____type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_newList.Count > 0)
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = ____newList0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_0, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// for (int i = 0; i < _newList.Count; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		// AddItemChoice(_newList[i] , _parent,_type,i);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_2 = ____newList0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4;
		L_4 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_2, L_3, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ____parent1;
		int32_t L_6 = ____type2;
		int32_t L_7 = V_0;
		GameControl_AddItemChoice_m6F01D101616CE473523056F4CB46D57AD21EA570(__this, L_4, L_5, L_6, L_7, NULL);
		// for (int i = 0; i < _newList.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < _newList.Count; i++)
		int32_t L_9 = V_0;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_10 = ____newList0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_10, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void GameControl::AddAllItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_AddAllItem_m42E7F889171A1AE1208655E23961D2F36362CFEE (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* V_0 = NULL;
	{
		// ListItem temp = ListItem.Instance;
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_0;
		L_0 = ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline(NULL);
		V_0 = L_0;
		// if (temp != null) {
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00aa;
		}
	}
	{
		// AddAllItemOnList(temp.ListItemEar,ParentItemEar,typeItemChoice.itemEar);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_3 = V_0;
		NullCheck(L_3);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_4 = L_3->___ListItemEar_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___ParentItemEar_25;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_4, L_5, 4, NULL);
		// AddAllItemOnList(temp.ListItemEye, ParentItemEye, typeItemChoice.itemEye);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_6 = V_0;
		NullCheck(L_6);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_7 = L_6->___ListItemEye_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___ParentItemEye_22;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_7, L_8, 1, NULL);
		// AddAllItemOnList(temp.ListItemFootwear, ParentItemFootwear, typeItemChoice.itemFootwear);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_9 = V_0;
		NullCheck(L_9);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_10 = L_9->___ListItemFootwear_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___ParentItemFootwear_27;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_10, L_11, 6, NULL);
		// AddAllItemOnList(temp.ListItemHair, ParentItemHair, typeItemChoice.itemHair);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_12 = V_0;
		NullCheck(L_12);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_13 = L_12->___ListItemHair_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___ParentItemHair_21;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_13, L_14, 0, NULL);
		// AddAllItemOnList(temp.ListItemMouth, ParentItemMouth, typeItemChoice.itemMouth);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_15 = V_0;
		NullCheck(L_15);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_16 = L_15->___ListItemMouth_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___ParentItemMouth_23;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_16, L_17, 2, NULL);
		// AddAllItemOnList(temp.ListItemShirt, ParentItemShirt, typeItemChoice.itemShirt);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_18 = V_0;
		NullCheck(L_18);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_19 = L_18->___ListItemShirt_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___ParentItemShirt_24;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_19, L_20, 3, NULL);
		// AddAllItemOnList(temp.ListItemTrousers, ParentItemTrousers, typeItemChoice.itemTrousers);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_21 = V_0;
		NullCheck(L_21);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_22 = L_21->___ListItemTrousers_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___ParentItemTrousers_26;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_22, L_23, 5, NULL);
		// AddAllItemOnList(temp.ListItemWings, ParentItemWings, typeItemChoice.itemWings);
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_24 = V_0;
		NullCheck(L_24);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_25 = L_24->___ListItemWings_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___ParentItemWings_28;
		GameControl_AddAllItemOnList_m141B988DE7597B57A0F65DF41C56FA5A66A3E8D5(__this, L_25, L_26, 7, NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void GameControl::ChangeValuesItem(typeItemChoice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_ChangeValuesItem_m1910AA41451344285AD164447E6FE9D9FE6D990A (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, int32_t ____type0, int32_t ____id1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ____type0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0052;
			}
			case 4:
			{
				goto IL_0060;
			}
			case 5:
			{
				goto IL_006e;
			}
			case 6:
			{
				goto IL_0088;
			}
			case 7:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_0088;
	}

IL_0028:
	{
		// tempCharacter.idHair = _id;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_1 = __this->___tempCharacter_41;
		int32_t L_2 = ____id1;
		NullCheck(L_1);
		L_1->___idHair_0 = L_2;
		// break;
		goto IL_0088;
	}

IL_0036:
	{
		// tempCharacter.idEye = _id;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_3 = __this->___tempCharacter_41;
		int32_t L_4 = ____id1;
		NullCheck(L_3);
		L_3->___idEye_1 = L_4;
		// break;
		goto IL_0088;
	}

IL_0044:
	{
		// tempCharacter.idMouth = _id;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_5 = __this->___tempCharacter_41;
		int32_t L_6 = ____id1;
		NullCheck(L_5);
		L_5->___idMouth_2 = L_6;
		// break;
		goto IL_0088;
	}

IL_0052:
	{
		// tempCharacter.idShirt = _id;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_7 = __this->___tempCharacter_41;
		int32_t L_8 = ____id1;
		NullCheck(L_7);
		L_7->___idShirt_3 = L_8;
		// break;
		goto IL_0088;
	}

IL_0060:
	{
		// tempCharacter.idEar = _id;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_9 = __this->___tempCharacter_41;
		int32_t L_10 = ____id1;
		NullCheck(L_9);
		L_9->___idEar_4 = L_10;
		// break;
		goto IL_0088;
	}

IL_006e:
	{
		// tempCharacter.idTrousers = _id;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_11 = __this->___tempCharacter_41;
		int32_t L_12 = ____id1;
		NullCheck(L_11);
		L_11->___idTrousers_5 = L_12;
		// break;
		goto IL_0088;
	}

IL_007c:
	{
		// tempCharacter.idWings = _id;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_13 = __this->___tempCharacter_41;
		int32_t L_14 = ____id1;
		NullCheck(L_13);
		L_13->___idWings_7 = L_14;
	}

IL_0088:
	{
		// tempIMCharacter.SetInforIMCharacter(tempCharacter);
		CharacterControl_t760796F0A9887F37FBC1CC0AC1EC730619A5CA5B* L_15 = __this->___tempIMCharacter_42;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_16 = __this->___tempCharacter_41;
		NullCheck(L_15);
		CharacterControl_SetInforIMCharacter_mF392CB9A9272FA4064EA56C586A336A1BC519186(L_15, L_16, NULL);
		// CheckWin();
		GameControl_CheckWin_mDA7C11DF14536E333A86BFAA5C4ED4DB72AF8170(__this, NULL);
		// }
		return;
	}
}
// System.Void GameControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl__ctor_m4650C9F61DFC74BEDDADA2654D755EEB825AD161 (GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* __this, const RuntimeMethod* method) 
{
	{
		// float timePlay = 150;
		__this->___timePlay_33 = (150.0f);
		// bool isPlay = true;
		__this->___isPlay_46 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// GameControllers GameControllers::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameControllers Instance { get; set; }
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_0 = ((GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_StaticFields*)il2cpp_codegen_static_fields_for(GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void GameControllers::set_Instance(GameControllers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_set_Instance_m1275B83CB787B1D650D0DD5FEF21972FF4FFE503 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameControllers Instance { get; set; }
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_0 = ___value0;
		((GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_StaticFields*)il2cpp_codegen_static_fields_for(GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_StaticFields*)il2cpp_codegen_static_fields_for(GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void GameControllers::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_Awake_m8C35402B615EC4D38100AC92F18CFB49880CAFD1 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_0;
		L_0 = GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		GameControllers_set_Instance_m1275B83CB787B1D650D0DD5FEF21972FF4FFE503_inline(__this, NULL);
	}

IL_0013:
	{
		// Input.multiTouchEnabled = true;
		Input_set_multiTouchEnabled_m4B654B59BBFF0CA1C8A2E2325EFB8063F77FA616((bool)1, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// }
		return;
	}
}
// System.Void GameControllers::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_Update_mB54CF9D219245BC290CDE2BAA9BC7F8FD69414CE (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// EffectTouch();
		GameControllers_EffectTouch_m013D6BB9E5F7B9C54F0355C4E7DAAE20AA493C4C(__this, NULL);
		// TouchDown();
		GameControllers_TouchDown_m15EF160FD05E31C69DB3DFBAD818892506A163BD(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void GameControllers::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_Start_m50B9A380A9EF47D7BA729D626481BE03B627125B (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	{
		// InitLevel(_level);
		int32_t L_0 = __this->____level_16;
		GameControllers_InitLevel_m6617C908D8C21B11E96C495EDF5003D797728471(__this, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject GameControllers::ChooseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameControllers_ChooseObject_m67A23AA55070B716293E8EBF24621F0C44EB4B0B (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 clickPosition = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_3 = L_2.___y_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_1, L_3, NULL);
		// if (Input.touchCount > 1)
		int32_t L_4;
		L_4 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		// Touch touch = Input.GetTouch(Input.touchCount-1);
		int32_t L_5;
		L_5 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6;
		L_6 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		V_2 = L_6;
		// clickPosition = new Vector2(touch.position.x, touch.position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		float L_8 = L_7.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		float L_10 = L_9.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_8, L_10, NULL);
	}

IL_004f:
	{
		// RaycastHit2D hit = Raycast2DWithOrder(Camera.main.ScreenToWorldPoint(clickPosition),Vector2.zero);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_12, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_11, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_17;
		L_17 = GameControllers_Raycast2DWithOrder_m59E00BA420E15EB17C96D14699E46BC8559BDD52(L_15, L_16, (std::numeric_limits<float>::infinity()), ((int32_t)-5), NULL);
		V_1 = L_17;
		// if (hit)
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_18 = V_1;
		bool L_19;
		L_19 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_18, NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		// return hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A((&V_1), NULL);
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		return L_21;
	}

IL_008b:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Void GameControllers::DragObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_DragObject_m6C544E8A0060AAB17A7B2B12582F899B8ED46430 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____object0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_object != null && _checkCanDrag)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ____object0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		bool L_2 = __this->____checkCanDrag_12;
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		V_0 = L_6;
		// _object.transform.position = new Vector2(pos.x + _mOffset.x, pos.y + _mOffset.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ____object0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->____mOffset_8);
		float L_12 = L_11->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->____mOffset_8);
		float L_16 = L_15->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_add(L_10, L_12)), ((float)il2cpp_codegen_add(L_14, L_16)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_17, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_18, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void GameControllers::TouchDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_TouchDown_m15EF160FD05E31C69DB3DFBAD818892506A163BD (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _curentObject = ChooseObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameControllers_ChooseObject_m67A23AA55070B716293E8EBF24621F0C44EB4B0B(__this, NULL);
		__this->____curentObject_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curentObject_18), (void*)L_0);
		// if (_curentObject != null && !IsMouseOverUi())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____curentObject_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0098;
		}
	}
	{
		bool L_3;
		L_3 = GameControllers_IsMouseOverUi_m1C75BC179D3E5DD5D60E084E5DA9038B4938553A(__this, NULL);
		if (L_3)
		{
			goto IL_0098;
		}
	}
	{
		// _checkCanDrag = true;
		__this->____checkCanDrag_12 = (bool)1;
		// _tempPosMouse = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_4, NULL);
		__this->____tempPosMouse_7 = L_5;
		// Vector2 pos = Camera.main.ScreenToWorldPoint(_tempPosMouse);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->____tempPosMouse_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_7, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_6, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_9, NULL);
		V_0 = L_10;
		// _mOffset = new Vector2(_curentObject.transform.position.x - pos.x, _curentObject.transform.position.y - pos.y); // get offset
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->____curentObject_18;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___x_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->____curentObject_18;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), ((float)il2cpp_codegen_subtract(L_14, L_16)), ((float)il2cpp_codegen_subtract(L_20, L_22)), /*hidden argument*/NULL);
		__this->____mOffset_8 = L_23;
		return;
	}

IL_0098:
	{
		// _checkCanDrag = false;
		__this->____checkCanDrag_12 = (bool)0;
		// }
		return;
	}
}
// System.Void GameControllers::TouchUp(System.Boolean,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_TouchUp_m01DDBA82F8E124FB3F3B134682AE81C6E4763456 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, bool ___check0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_curentObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____curentObject_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// _curentObject = null;
		__this->____curentObject_18 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curentObject_18), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0015:
	{
		// Vector3 temp = new Vector3(_tempPosMouse.x - Input.mousePosition.x, _tempPosMouse.y - Input.mousePosition.y,0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->____tempPosMouse_7);
		float L_3 = L_2->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_5 = L_4.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->____tempPosMouse_7);
		float L_7 = L_6->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_9 = L_8.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_subtract(L_3, L_5)), ((float)il2cpp_codegen_subtract(L_7, L_9)), (0.0f), NULL);
		// if (temp.magnitude <=10f) // position don't change
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_10) <= ((float)(10.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// EffectCheck(check, pos, true);
		bool L_11 = ___check0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___pos1;
		GameControllers_EffectCheck_mED0835B39A3685049F8A0E8196A9E591D2A8DE10(__this, L_11, L_12, (bool)1, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void GameControllers::EffectTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_EffectTouch_m013D6BB9E5F7B9C54F0355C4E7DAAE20AA493C4C (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 posTouch = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		V_0 = L_3;
		// _effectTouch.transform.position = posTouch;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____effectTouch_9;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_6, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// Instantiate(_effectTouch, posTouch, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->____effectTouch_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_8, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameControllers::EffectCheck(System.Boolean,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_EffectCheck_mED0835B39A3685049F8A0E8196A9E591D2A8DE10 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, bool ___check0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Pos1, bool ___toWorld2, const RuntimeMethod* method) 
{
	{
		// if (!_checkComplete)
		bool L_0 = __this->____checkComplete_6;
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		// if (toWorld)
		bool L_1 = ___toWorld2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// Pos = Camera.main.WorldToScreenPoint(Pos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___Pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_3, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_2, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		___Pos1 = L_6;
	}

IL_0022:
	{
		// if (check)
		bool L_7 = ___check0;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// _checkComplete = true;
		__this->____checkComplete_6 = (bool)1;
		return;
	}

IL_002d:
	{
		// _checkFalse = true;
		__this->____checkFalse_19 = (bool)1;
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void GameControllers::ScaleControl(UnityEngine.GameObject,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_ScaleControl_m0A8B02168EBBE360D698F377287566F4A7769ED4 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____object0, float ___minSize1, float ___maxSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Input.touchCount == 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0083;
		}
	}
	{
		// Touch touchZero = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		// Touch touchOne = Input.GetTouch(1);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_1 = L_2;
		// Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_3, L_4, NULL);
		// Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_6, L_7, NULL);
		V_2 = L_8;
		// float prevMagnitude = (touchZeroPrevPos - touchOnePrevPos).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_5, L_9, NULL);
		V_5 = L_10;
		float L_11;
		L_11 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		V_3 = L_11;
		// float currentMagnitude = (touchZero.position - touchOne.position).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_12, L_13, NULL);
		V_5 = L_14;
		float L_15;
		L_15 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		// float difference = currentMagnitude - prevMagnitude;
		float L_16 = V_3;
		V_4 = ((float)il2cpp_codegen_subtract(L_15, L_16));
		// Scale(_object, difference * -0.01f, 1f, maxSize);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ____object0;
		float L_18 = V_4;
		float L_19 = ___maxSize2;
		GameControllers_Scale_m8D544B89E36FA15BE6FCE21B3F110A24BF7A0949(__this, L_17, ((float)il2cpp_codegen_multiply(L_18, (-0.00999999978f))), (1.0f), L_19, NULL);
		return;
	}

IL_0083:
	{
		// Scale(_object, Input.GetAxis("Mouse ScrollWheel"), minSize, maxSize);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ____object0;
		float L_21;
		L_21 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_22 = ___minSize1;
		float L_23 = ___maxSize2;
		GameControllers_Scale_m8D544B89E36FA15BE6FCE21B3F110A24BF7A0949(__this, L_20, L_21, L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void GameControllers::Scale(UnityEngine.GameObject,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_Scale_m8D544B89E36FA15BE6FCE21B3F110A24BF7A0949 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____object0, float ___size1, float ___minSize2, float ___maxSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (_object != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ____object0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// float value = Mathf.Clamp(_object.transform.localScale.x - size, minSize, maxSize);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ____object0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___x_2;
		float L_6 = ___size1;
		float L_7 = ___minSize2;
		float L_8 = ___maxSize3;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_5, L_6)), L_7, L_8, NULL);
		V_0 = L_9;
		// _object.transform.localScale = new Vector3(value, value, value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ____object0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_15, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean GameControllers::IsMouseOverUi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameControllers_IsMouseOverUi_m1C75BC179D3E5DD5D60E084E5DA9038B4938553A (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return EventSystem.current.IsPointerOverGameObject();
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_0, NULL);
		return L_1;
	}
}
// System.Void GameControllers::ProcessCompleteLv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_ProcessCompleteLv_mDEA5306B96385F250086D1C67C87220C6E3BE36B (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameControllers::InitLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_InitLevel_m6617C908D8C21B11E96C495EDF5003D797728471 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, int32_t ___Lv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_stopDrag)
		bool L_0 = __this->____stopDrag_13;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// _stopDrag = false;
		__this->____stopDrag_13 = (bool)0;
	}

IL_000f:
	{
		// _checkComplete = false;
		__this->____checkComplete_6 = (bool)0;
		// _checkFalse = false;
		__this->____checkFalse_19 = (bool)0;
		// _checkDone = false;
		__this->____checkDone_14 = (bool)0;
		// if (Lv < _ArrLevel.Length)
		int32_t L_1 = ___Lv0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->____ArrLevel_15;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		// _objectLevel = Instantiate(_ArrLevel[Lv], Vector3.zero, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->____ArrLevel_15;
		int32_t L_4 = ___Lv0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->____objectLevel_17 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectLevel_17), (void*)L_9);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Single GameControllers::GetSpeedMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameControllers_GetSpeedMouseDrag_mFE31334B6624DF44C1FF626BFCB2EA247A64E259 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float speed = 0f;
		V_0 = (0.0f);
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// lastPos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		__this->___lastPos_21 = L_1;
		goto IL_0090;
	}

IL_001b:
	{
		// else if (Input.GetMouseButton(0))
		bool L_2;
		L_2 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_2)
		{
			goto IL_0090;
		}
	}
	{
		// delta = Input.mousePosition - lastPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___lastPos_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		__this->___delta_20 = L_5;
		// delta.x = delta.x / Screen.width;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___delta_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___delta_20);
		float L_8 = L_7->___x_2;
		int32_t L_9;
		L_9 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		L_6->___x_2 = ((float)(L_8/((float)L_9)));
		// delta.y = delta.y / Screen.height;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___delta_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___delta_20);
		float L_12 = L_11->___y_3;
		int32_t L_13;
		L_13 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		L_10->___y_3 = ((float)(L_12/((float)L_13)));
		// speed = delta.magnitude / Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___delta_20);
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_14, NULL);
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = ((float)(L_15/L_16));
		// lastPos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		__this->___lastPos_21 = L_17;
	}

IL_0090:
	{
		// return speed;
		float L_18 = V_0;
		return L_18;
	}
}
// System.Void GameControllers::ButtonAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers_ButtonAnim_m49DC118DCA93A8C6D4CF5E049AB2335A329DB5D4 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	{
		// var currentSelection = EventSystem.current.currentSelectedGameObject;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		// Animator anim = currentSelection.GetComponent<Animator>();
		NullCheck(L_1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_1, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		V_0 = L_2;
		// if (anim != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// anim.Play("Scale");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = V_0;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.RaycastHit2D GameControllers::Raycast2DWithOrder(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GameControllers_Raycast2DWithOrder_m59E00BA420E15EB17C96D14699E46BC8559BDD52 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// RaycastHit2D[] hits = Physics2D.RaycastAll(origin, direction, distance, layerMask);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___origin0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___direction1;
		float L_2 = ___distance2;
		int32_t L_3 = ___layerMask3;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4;
		L_4 = Physics2D_RaycastAll_m0EBAB1266E23657A8F089323B7B71784AF6B3C7B(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// if (hits.Length > 0) //Only function if we actually hit something
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_5 = V_0;
		NullCheck(L_5);
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			goto IL_008c;
		}
	}
	{
		// int closestItem = 0; //Set our top hit to a default of the first index in our "hits" array, in case there are no others
		V_1 = 0;
		// int lowestLayerID = int.MaxValue;
		V_2 = ((int32_t)2147483647LL);
		// int highestSortingOrder = int.MaxValue;
		V_3 = ((int32_t)2147483647LL);
		// for (int i = 0; i < hits.Length; i++) //Loop for every extra item the raycast hit
		V_4 = 0;
		goto IL_007d;
	}

IL_0021:
	{
		// SpriteRenderer myRenderer = hits[i].transform.GetComponent<SpriteRenderer>();
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6 = V_0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9;
		L_9 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_8, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		V_5 = L_9;
		// if (myRenderer == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		// int currentLayerID = myRenderer.sortingLayerID; //Store SortingLayerID of the current item in the array being accessed
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = V_5;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_12, NULL);
		V_6 = L_13;
		// if (currentLayerID < lowestLayerID) //If the SortingLayerID of the current array item is lower than the previous lowest
		int32_t L_14 = V_6;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_005d;
		}
	}
	{
		// lowestLayerID = currentLayerID; //Set the "Previous Value" to the current one since it's lower, as it will become the "Previous Lowest" on the next loop
		int32_t L_16 = V_6;
		V_2 = L_16;
		// closestItem = i; //Set our topHit with the Array Index value of the current closest Array item, since it currently has the highest/closest SortingLayerID
		int32_t L_17 = V_4;
		V_1 = L_17;
		// highestSortingOrder = myRenderer.sortingOrder; //Store SortingOrder value of the current closest object, for comparison next loop if we end up going to the "else if"
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_18, NULL);
		V_3 = L_19;
		goto IL_0077;
	}

IL_005d:
	{
		// else if (currentLayerID == lowestLayerID)
		int32_t L_20 = V_6;
		int32_t L_21 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_0077;
		}
	}
	{
		// if (myRenderer.sortingOrder > highestSortingOrder)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = V_5;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_22, NULL);
		int32_t L_24 = V_3;
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_0077;
		}
	}
	{
		// closestItem = i;
		int32_t L_25 = V_4;
		V_1 = L_25;
		// highestSortingOrder = myRenderer.sortingOrder;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_26 = V_5;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_26, NULL);
		V_3 = L_27;
	}

IL_0077:
	{
		// for (int i = 0; i < hits.Length; i++) //Loop for every extra item the raycast hit
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_007d:
	{
		// for (int i = 0; i < hits.Length; i++) //Loop for every extra item the raycast hit
		int32_t L_29 = V_4;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0021;
		}
	}

IL_0084:
	{
		// return hits[closestItem];
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		return L_34;
	}

IL_008c:
	{
		// return Physics2D.Raycast(origin, direction, distance, layerMask);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___origin0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = ___direction1;
		float L_37 = ___distance2;
		int32_t L_38 = ___layerMask3;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_39;
		L_39 = Physics2D_Raycast_m6B89CCCAF549D1917B95F663E007382899E66BA7(L_35, L_36, L_37, L_38, NULL);
		return L_39;
	}
}
// System.Void GameControllers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControllers__ctor_m2594AB8CB031776FBDA821C909D96D8CBFE234C8 (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 delta = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___delta_20 = L_0;
		// private Vector3 lastPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___lastPos_21 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InforCharacter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InforCharacter__ctor_mDDAD54202D12DCF59A20CB62DA98ED9268F8BCC2 (InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void InputControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_Start_mD7FD5FFA930041177D43811CD9F8182890FD0C67 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283E4974B7E4073D57FC3712F73B21A1EDDBFA4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6EA1385B24C03AF273167FD618CBADC47508EBA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// defaultScale = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___defaultScale_8 = L_2;
		// defaultPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___defaultPos_10 = L_4;
		// sizeX =  GetComponent<BoxCollider2D>().size.x;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_5;
		L_5 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_5, NULL);
		float L_7 = L_6.___x_0;
		__this->___sizeX_14 = L_7;
		// sizeY =  GetComponent<BoxCollider2D>().size.y;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_8;
		L_8 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_8, NULL);
		float L_10 = L_9.___y_1;
		__this->___sizeY_15 = L_10;
		// GameObject newTop = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_11, NULL);
		V_0 = L_11;
		// newTop.name = "topPos";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, _stringLiteral283E4974B7E4073D57FC3712F73B21A1EDDBFA4F, NULL);
		// newTop.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, L_15, NULL);
		// newTop.transform.position = new Vector3( defaultPos.x + defaultScale*sizeX/2,defaultPos.y + defaultScale* sizeY/2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___defaultPos_10);
		float L_19 = L_18->___x_2;
		float L_20 = __this->___defaultScale_8;
		float L_21 = __this->___sizeX_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___defaultPos_10);
		float L_23 = L_22->___y_3;
		float L_24 = __this->___defaultScale_8;
		float L_25 = __this->___sizeY_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_26), ((float)il2cpp_codegen_add(L_19, ((float)(((float)il2cpp_codegen_multiply(L_20, L_21))/(2.0f))))), ((float)il2cpp_codegen_add(L_23, ((float)(((float)il2cpp_codegen_multiply(L_24, L_25))/(2.0f))))), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_26, NULL);
		// topPos = newTop.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		__this->___topPos_13 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topPos_13), (void*)L_28);
		// GameObject newDown = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_29, NULL);
		V_1 = L_29;
		// newDown.name = "downPos";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_1;
		NullCheck(L_30);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_30, _stringLiteralA6EA1385B24C03AF273167FD618CBADC47508EBA, NULL);
		// newDown.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_1;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_32, L_33, NULL);
		// newDown.transform.position = new Vector3(defaultPos.x - defaultScale * sizeX / 2, defaultPos.y - defaultScale * sizeY / 2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_1;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (&__this->___defaultPos_10);
		float L_37 = L_36->___x_2;
		float L_38 = __this->___defaultScale_8;
		float L_39 = __this->___sizeX_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&__this->___defaultPos_10);
		float L_41 = L_40->___y_3;
		float L_42 = __this->___defaultScale_8;
		float L_43 = __this->___sizeY_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_44), ((float)il2cpp_codegen_subtract(L_37, ((float)(((float)il2cpp_codegen_multiply(L_38, L_39))/(2.0f))))), ((float)il2cpp_codegen_subtract(L_41, ((float)(((float)il2cpp_codegen_multiply(L_42, L_43))/(2.0f))))), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_44, NULL);
		// downPos = newDown.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_1;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		__this->___downPos_12 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___downPos_12), (void*)L_46);
		// }
		return;
	}
}
// System.Void InputControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_Update_m44CD71F2F21B0BCBFD39B062D08653CCD4144B3F (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	{
		// if (isClick)
		bool L_0 = __this->___isClick_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// CheckDrag();
		InputControl_CheckDrag_m02562D0CCD2C9BD32E129F1D6CC2FFC8D012C41E(__this, NULL);
	}

IL_000e:
	{
		// if (isClick && Input.touchCount >= 2)
		bool L_1 = __this->___isClick_4;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2;
		L_2 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_2) < ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		// ZoomGameOB();
		InputControl_ZoomGameOB_m4A120ECCC3B9A584EB5FF01837108A80AA9A7F77(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void InputControl::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_OnMouseDown_m2A1B11CE64EF68B4A0277C7EEE6BB44CE211EEBB (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	{
		// isClick = true;
		__this->___isClick_4 = (bool)1;
		// oldPosTouch = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_0, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		__this->___oldPosTouch_5 = L_3;
		// oldPosOB = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		__this->___oldPosOB_6 = L_6;
		// tempScale = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___x_2;
		__this->___tempScale_9 = L_9;
		// tempPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___tempPos_11 = L_10;
		// }
		return;
	}
}
// System.Void InputControl::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_OnMouseUp_m53FC030AC702EE452A2287870E376E39AF1355A3 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	{
		// isClick = false;
		__this->___isClick_4 = (bool)0;
		// defaultzoom = 0;
		__this->___defaultzoom_7 = (0.0f);
		// tempScale = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___tempScale_9 = L_2;
		// }
		return;
	}
}
// System.Void InputControl::CheckDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_CheckDrag_m02562D0CCD2C9BD32E129F1D6CC2FFC8D012C41E (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.GetMouseButton(0) && (Input.touchCount <= 1))
		bool L_0;
		L_0 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		// Vector2 newPosTouch = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_2, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_4, NULL);
		V_0 = L_5;
		// Vector3 delta = oldPosOB + newPosTouch - oldPosTouch;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___oldPosOB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___oldPosTouch_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		V_1 = L_11;
		// transform.position = Vector3.MoveTowards(transform.position, delta, 15 * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_14, L_15, ((float)il2cpp_codegen_multiply((15.0f), L_16)), NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_17, NULL);
		// checkPosition();
		InputControl_checkPosition_m2967015FF1ABF406990F7C2ED353DCDD4A2FB128(__this, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void InputControl::ZoomGameOB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_ZoomGameOB_m4A120ECCC3B9A584EB5FF01837108A80AA9A7F77 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// if (Input.touchCount >= 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0098;
		}
	}
	{
		// Touch touchOne = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		// Touch touchTwo = Input.GetTouch(1);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_1 = L_2;
		// Vector2 newZoom = Camera.main.ScreenToWorldPoint(touchOne.position) - Camera.main.ScreenToWorldPoint(touchTwo.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_3, L_5, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_8, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_11, NULL);
		V_2 = L_12;
		// if (defaultzoom == 0)
		float L_13 = __this->___defaultzoom_7;
		if ((!(((float)L_13) == ((float)(0.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// defaultzoom = newZoom.magnitude;
		float L_14;
		L_14 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_2), NULL);
		__this->___defaultzoom_7 = L_14;
	}

IL_006a:
	{
		// float tempmag = newZoom.magnitude - defaultzoom;
		float L_15;
		L_15 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_2), NULL);
		float L_16 = __this->___defaultzoom_7;
		V_3 = ((float)il2cpp_codegen_subtract(L_15, L_16));
		// limitScale(defaultScale, defaultScale*2f, tempmag);
		float L_17 = __this->___defaultScale_8;
		float L_18 = __this->___defaultScale_8;
		float L_19 = V_3;
		InputControl_limitScale_mC0F75A45E0DE0BA6538F3C8BDBA4BD8701653767(__this, L_17, ((float)il2cpp_codegen_multiply(L_18, (2.0f))), L_19, NULL);
		// checkPosition();
		InputControl_checkPosition_m2967015FF1ABF406990F7C2ED353DCDD4A2FB128(__this, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void InputControl::limitScale(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_limitScale_mC0F75A45E0DE0BA6538F3C8BDBA4BD8701653767 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, float ____min0, float ____max1, float ____manitude2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float delta = _manitude / 5;
		float L_0 = ____manitude2;
		V_0 = ((float)(L_0/(5.0f)));
		// float newScale =  tempScale + delta;
		float L_1 = __this->___tempScale_9;
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (newScale < _min)
		float L_3 = V_1;
		float L_4 = ____min0;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		// newScale = _min;
		float L_5 = ____min0;
		V_1 = L_5;
		goto IL_001f;
	}

IL_0019:
	{
		// if (newScale > _max)
		float L_6 = V_1;
		float L_7 = ____max1;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_001f;
		}
	}
	{
		// newScale = _max;
		float L_8 = ____max1;
		V_1 = L_8;
	}

IL_001f:
	{
		// transform.localScale = new Vector2(newScale, newScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_10 = V_1;
		float L_11 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_12, NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_13, NULL);
		// }
		return;
	}
}
// System.Void InputControl::GetInforSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_GetInforSize_m060839B1FE32B2C12A3550EC50BF47700482FDCE (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InputControl::checkPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_checkPosition_m2967015FF1ABF406990F7C2ED353DCDD4A2FB128 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// if (topPos.transform.position.x < TopDefault.transform.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___topPos_13;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___TopDefault_16;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		if ((!(((float)L_5) < ((float)L_9))))
		{
			goto IL_006f;
		}
	}
	{
		// tempPos.x = defaultPos.x - ((transform.localScale.x - defaultScale)*sizeX)/2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___defaultPos_10);
		float L_11 = L_10->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		float L_14 = L_13.___x_2;
		float L_15 = __this->___defaultScale_8;
		float L_16 = __this->___sizeX_14;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_14, L_15)), L_16))/(2.0f)))));
	}

IL_006f:
	{
		// if (downPos.transform.position.x > DownDefeult.transform.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___downPos_12;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___DownDefeult_17;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___x_2;
		if ((!(((float)L_20) > ((float)L_24))))
		{
			goto IL_00d2;
		}
	}
	{
		// tempPos.x = defaultPos.x + ((transform.localScale.x - defaultScale) * sizeX) / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___defaultPos_10);
		float L_26 = L_25->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_27, NULL);
		float L_29 = L_28.___x_2;
		float L_30 = __this->___defaultScale_8;
		float L_31 = __this->___sizeX_14;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_add(L_26, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_29, L_30)), L_31))/(2.0f)))));
	}

IL_00d2:
	{
		// if (topPos.transform.position.y < TopDefault.transform.position.y)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___topPos_13;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___TopDefault_16;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___y_3;
		if ((!(((float)L_35) < ((float)L_39))))
		{
			goto IL_0135;
		}
	}
	{
		// tempPos.y = defaultPos.y - ((transform.localScale.y - defaultScale) * sizeY) / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&__this->___defaultPos_10);
		float L_41 = L_40->___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_42, NULL);
		float L_44 = L_43.___y_3;
		float L_45 = __this->___defaultScale_8;
		float L_46 = __this->___sizeY_15;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_subtract(L_41, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_44, L_45)), L_46))/(2.0f)))));
	}

IL_0135:
	{
		// if (downPos.transform.position.y > DownDefeult.transform.position.y)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___downPos_12;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		float L_50 = L_49.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___DownDefeult_17;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		float L_54 = L_53.___y_3;
		if ((!(((float)L_50) > ((float)L_54))))
		{
			goto IL_0198;
		}
	}
	{
		// tempPos.y = defaultPos.y + ((transform.localScale.y - defaultScale) * sizeY) / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_55 = (&__this->___defaultPos_10);
		float L_56 = L_55->___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_57, NULL);
		float L_59 = L_58.___y_3;
		float L_60 = __this->___defaultScale_8;
		float L_61 = __this->___sizeY_15;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_add(L_56, ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_59, L_60)), L_61))/(2.0f)))));
	}

IL_0198:
	{
		// transform.position = tempPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_0;
		NullCheck(L_62);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_62, L_63, NULL);
		// }
		return;
	}
}
// System.Void InputControl::checkisMOve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_checkisMOve_m933373BAE1EFFBDB78AED7922AFD49DAA538C9C1 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InputControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl__ctor_m1A4D972A31B282788502EB1491D04218AB574618 (InputControl_tC573375D504BAF93BADCB7033A04F68C3530491A* __this, const RuntimeMethod* method) 
{
	{
		// Vector2 oldPosTouch = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___oldPosTouch_5 = L_0;
		// Vector2 oldPosOB = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___oldPosOB_6 = L_1;
		// float defaultScale = 1f;
		__this->___defaultScale_8 = (1.0f);
		// float tempScale = 1f;
		__this->___tempScale_9 = (1.0f);
		// Vector3 defaultPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___defaultPos_10 = L_2;
		// Vector3 tempPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___tempPos_11 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ItemChoice::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemChoice_Start_m77FE426B1C2737E9CFDA0DABD541C8DDE3B90CBA (ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemChoice_ClickOnButton_m802CCA26A69C1B5432248ADC05DDDD8B69FEC36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btClick.onClick.AddListener(ClickOnButton);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btClick_4;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ItemChoice_ClickOnButton_m802CCA26A69C1B5432248ADC05DDDD8B69FEC36F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ItemChoice::SetImageItem(UnityEngine.Sprite,typeItemChoice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemChoice_SetImageItem_m5FE43B12043F4557A776D0543AC10907D1A03473 (ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____sprite0, int32_t ____type1, int32_t ____id2, const RuntimeMethod* method) 
{
	{
		// imItem.sprite = _sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___imItem_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ____sprite0;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// typeItem = _type;
		int32_t L_2 = ____type1;
		__this->___typeItem_6 = L_2;
		// idItem = _id;
		int32_t L_3 = ____id2;
		__this->___idItem_7 = L_3;
		// }
		return;
	}
}
// System.Void ItemChoice::ClickOnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemChoice_ClickOnButton_m802CCA26A69C1B5432248ADC05DDDD8B69FEC36F (ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5180BD843EC1A6FF3D9D97BDFF2C50F33CBADE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42CA74FD2FD51A463A57B97F3C4E75F730F782C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&typeItemChoice_t086AF20222CE28212001BA42AB15AF5E26B949F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("CHange item " + typeItem + " id:" + idItem);
		int32_t* L_0 = (&__this->___typeItem_6);
		Il2CppFakeBox<int32_t> L_1(typeItemChoice_t086AF20222CE28212001BA42AB15AF5E26B949F2_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		int32_t* L_3 = (&__this->___idItem_7);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralA5180BD843EC1A6FF3D9D97BDFF2C50F33CBADE3, L_2, _stringLiteralD42CA74FD2FD51A463A57B97F3C4E75F730F782C, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// GameControl.Instance.ChangeValuesItem(typeItem,idItem);
		GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F* L_6 = ((GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_StaticFields*)il2cpp_codegen_static_fields_for(GameControl_t949119569FC9ECF26C6D35BA6DA42D3C3254AB1F_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_7 = __this->___typeItem_6;
		int32_t L_8 = __this->___idItem_7;
		NullCheck(L_6);
		GameControl_ChangeValuesItem_m1910AA41451344285AD164447E6FE9D9FE6D990A(L_6, L_7, L_8, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_9;
		L_9 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_9);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_9, NULL);
		// }
		return;
	}
}
// System.Void ItemChoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemChoice__ctor_m5AD44F8010BC3B7106FAC2714CD3EE434C7C7FC6 (ItemChoice_t83CD8EE73DD7CE2DDC0E21FDB8D17BC1DC6911E0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ItemClick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemClick_Start_m21B12A1F9B2388A26345A92FBB371F91407E009A (ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* __this, const RuntimeMethod* method) 
{
	{
		// imHide.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___imHide_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// imActive.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___imActive_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ItemClick::ShowClickItem(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemClick_ShowClickItem_m7A7EE6CE80049ED464CBC36EE993BBD3BFEE5569 (ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* __this, bool ____isShow0, const RuntimeMethod* method) 
{
	{
		// imActive.SetActive(_isShow);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___imActive_5;
		bool L_1 = ____isShow0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ItemClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemClick__ctor_mC6B1D42A98034ACC7F56D3189082361A8B5BB016 (ItemClick_t0ABDA8D39A1A3C8BE4BDB61F73D5412ADBCD9324* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ItemLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemLevel_Start_mCEBD0C14D640BA37582F4BF61CBA426A199496D3 (ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemLevel_ClickOpenLevel_mD80DB9FF072439B18D4DC0C331F70FA34171AC03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imLock.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___imLock_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// btClick.onClick.AddListener(ClickOpenLevel);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___btClick_7;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)ItemLevel_ClickOpenLevel_mD80DB9FF072439B18D4DC0C331F70FA34171AC03_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// CheckLock();
		ItemLevel_CheckLock_m72C57183375998A3C625196E8EF03B8616AAA04B(__this, NULL);
		// }
		return;
	}
}
// System.Void ItemLevel::SetInforLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemLevel_SetInforLevel_mB4CDDD3A490151890C3138A8B9A53BA24B191817 (ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* __this, int32_t ____lv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// Level = _lv;
		int32_t L_0 = ____lv0;
		__this->___Level_4 = L_0;
		// _lv += 1;
		int32_t L_1 = ____lv0;
		____lv0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// txtLevel.text = "" + _lv ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txtLevel_8;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&____lv0), NULL);
		String_t* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_0022;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0022:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void ItemLevel::CheckLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemLevel_CheckLock_m72C57183375998A3C625196E8EF03B8616AAA04B (ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// maxLevel = PlayerPrefs.GetInt(KeySave.levelWin, 0);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelWin_0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		__this->___maxLevel_5 = L_1;
		// if (Level <= maxLevel)
		int32_t L_2 = __this->___Level_4;
		int32_t L_3 = __this->___maxLevel_5;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		// imLock.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___imLock_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void ItemLevel::ClickOpenLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemLevel_ClickOpenLevel_mD80DB9FF072439B18D4DC0C331F70FA34171AC03 (ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!imLock.active)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___imLock_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5(L_0, NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// string LevelName = "PlayGame";
		// Application.LoadLevel(LevelName);
		Application_LoadLevel_mC9D8F3BE3706BCD9867380D386E2C16A72D1F3D5(_stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_2;
		L_2 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_2);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_2, NULL);
		// PlayerPrefs.SetInt(KeySave.levelPlay, Level);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_3 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelPlay_1;
		int32_t L_4 = __this->___Level_4;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_3, L_4, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void ItemLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemLevel__ctor_mDB30E723CFD28C9CE0234AAF35EF9E4238419F04 (ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void KeySave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySave__ctor_mF636301B2B17F5F81C21CD6222D9F570B6C9670F (KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void KeySave::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySave__cctor_m10C0554A51764B0C6BDDA49D323E5413780A6D53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC52C34E113FF72BE8953CBA7BB57DD2BF574D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB21F7E7E10020AEF098575E4FD27D7AF50EF27C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB694DE905AC194440C8D34E3510005821BBB39F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2B940AFAE21F809BA93660B390EF28332B368F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string levelWin= "levelWin";
		((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelWin_0 = _stringLiteralB694DE905AC194440C8D34E3510005821BBB39F6;
		Il2CppCodeGenWriteBarrier((void**)(&((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelWin_0), (void*)_stringLiteralB694DE905AC194440C8D34E3510005821BBB39F6);
		// public static readonly string levelPlay = "levelPlay";
		((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelPlay_1 = _stringLiteral2AC52C34E113FF72BE8953CBA7BB57DD2BF574D4;
		Il2CppCodeGenWriteBarrier((void**)(&((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelPlay_1), (void*)_stringLiteral2AC52C34E113FF72BE8953CBA7BB57DD2BF574D4);
		// public static readonly string KeyHelp = "KeyHelp";
		((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___KeyHelp_2 = _stringLiteralE2B940AFAE21F809BA93660B390EF28332B368F1;
		Il2CppCodeGenWriteBarrier((void**)(&((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___KeyHelp_2), (void*)_stringLiteralE2B940AFAE21F809BA93660B390EF28332B368F1);
		// public static readonly string InforLevel = "InforLevel";
		((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___InforLevel_3 = _stringLiteralB21F7E7E10020AEF098575E4FD27D7AF50EF27C3;
		Il2CppCodeGenWriteBarrier((void**)(&((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___InforLevel_3), (void*)_stringLiteralB21F7E7E10020AEF098575E4FD27D7AF50EF27C3);
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
// ListItem ListItem::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_0 = ((ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_StaticFields*)il2cpp_codegen_static_fields_for(ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var))->___instance_12;
		return L_0;
	}
}
// System.Void ListItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_Awake_m97EB74C3B93A42B0A9AAE6FF34D1D91982077C80 (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_0 = ((ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_StaticFields*)il2cpp_codegen_static_fields_for(ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var))->___instance_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		((ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_StaticFields*)il2cpp_codegen_static_fields_for(ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var))->___instance_12 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_StaticFields*)il2cpp_codegen_static_fields_for(ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var))->___instance_12), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		return;
	}

IL_001f:
	{
		// else if (instance != this)
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_3 = ((ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_StaticFields*)il2cpp_codegen_static_fields_for(ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var))->___instance_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, __this, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void ListItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_Start_m6C4ACA0F7306E9DAA84AE5B854ECA4C12C9F2E18 (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C99004CEE5E015CDA6952214CE3558506208D7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string temp = PlayerPrefs.GetString(KeySave.InforLevel,"null");
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___InforLevel_3;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mC671EDA77D8D35BE514817F54950630327A74F63(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		V_0 = L_1;
		// if (temp == "null")
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// CreatenewList();
		ListItem_CreatenewList_m1F0101AFE077D633785837B884BCA20443AC9A01(__this, NULL);
		return;
	}

IL_0024:
	{
		// Debug.Log("INforLevel:" + temp);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2C99004CEE5E015CDA6952214CE3558506208D7A, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// }
		return;
	}
}
// System.Int32 ListItem::RandomItem(System.Collections.Generic.List`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____List0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_List.Count > 0)
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = ____List0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_0, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// int _id = Random.Range(0, _List.Count);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_2 = ____List0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_2, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_3, NULL);
		// return _id;
		return L_4;
	}

IL_0016:
	{
		// else return 0;
		return 0;
	}
}
// System.Void ListItem::CreatenewList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem_CreatenewList_m1F0101AFE077D633785837B884BCA20443AC9A01 (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHelper_ToJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mBF243C376D653F3212BF3E2CF9A1C4DA13C051E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m224A73A1F067C7E957F0BEAC06758EBFFE544AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m14ECB5FE72F665E90491C0D1A416AAFBC27D6FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* V_3 = NULL;
	{
		// List<InforCharacter> listQuest = new List<InforCharacter>();
		List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9* L_0 = (List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9*)il2cpp_codegen_object_new(List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m14ECB5FE72F665E90491C0D1A416AAFBC27D6FE8(L_0, List_1__ctor_m14ECB5FE72F665E90491C0D1A416AAFBC27D6FE8_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < 200; i++)
		V_2 = 0;
		goto IL_00ae;
	}

IL_000d:
	{
		// InforCharacter newInfor = new InforCharacter();
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_1 = (InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD*)il2cpp_codegen_object_new(InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InforCharacter__ctor_mDDAD54202D12DCF59A20CB62DA98ED9268F8BCC2(L_1, NULL);
		V_3 = L_1;
		// newInfor.idEar = RandomItem(ListItemEar);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_2 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_3 = __this->___ListItemEar_8;
		int32_t L_4;
		L_4 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_3, NULL);
		NullCheck(L_2);
		L_2->___idEar_4 = L_4;
		// newInfor.idEye = RandomItem(ListItemEye);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_5 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_6 = __this->___ListItemEye_5;
		int32_t L_7;
		L_7 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_6, NULL);
		NullCheck(L_5);
		L_5->___idEye_1 = L_7;
		// newInfor.idFootwear = RandomItem(ListItemFootwear);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_8 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_9 = __this->___ListItemFootwear_10;
		int32_t L_10;
		L_10 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_9, NULL);
		NullCheck(L_8);
		L_8->___idFootwear_6 = L_10;
		// newInfor.idHair = RandomItem(ListItemHair);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_11 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_12 = __this->___ListItemHair_4;
		int32_t L_13;
		L_13 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_12, NULL);
		NullCheck(L_11);
		L_11->___idHair_0 = L_13;
		// newInfor.idMouth = RandomItem(ListItemMouth);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_14 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_15 = __this->___ListItemMouth_6;
		int32_t L_16;
		L_16 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_15, NULL);
		NullCheck(L_14);
		L_14->___idMouth_2 = L_16;
		// newInfor.idShirt = RandomItem(ListItemShirt);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_17 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_18 = __this->___ListItemShirt_7;
		int32_t L_19;
		L_19 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_18, NULL);
		NullCheck(L_17);
		L_17->___idShirt_3 = L_19;
		// newInfor.idTrousers = RandomItem(ListItemTrousers);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_20 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_21 = __this->___ListItemTrousers_9;
		int32_t L_22;
		L_22 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_21, NULL);
		NullCheck(L_20);
		L_20->___idTrousers_5 = L_22;
		// newInfor.idWings = RandomItem(ListItemWings);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_23 = V_3;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_24 = __this->___ListItemWings_11;
		int32_t L_25;
		L_25 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_24, NULL);
		NullCheck(L_23);
		L_23->___idWings_7 = L_25;
		// listQuest.Add(newInfor);
		List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9* L_26 = V_0;
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_27 = V_3;
		NullCheck(L_26);
		List_1_Add_m224A73A1F067C7E957F0BEAC06758EBFFE544AD9_inline(L_26, L_27, List_1_Add_m224A73A1F067C7E957F0BEAC06758EBFFE544AD9_RuntimeMethod_var);
		// for (int i = 0; i < 200; i++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00ae:
	{
		// for (int i = 0; i < 200; i++)
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)200))))
		{
			goto IL_000d;
		}
	}
	{
		// string inforLevel = JsonHelper.ToJson(listQuest);
		List_1_t82635876FEA04FD41C7BD2B04E98E438C7E054C9* L_30 = V_0;
		String_t* L_31;
		L_31 = JsonHelper_ToJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mBF243C376D653F3212BF3E2CF9A1C4DA13C051E8(L_30, JsonHelper_ToJson_TisInforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_mBF243C376D653F3212BF3E2CF9A1C4DA13C051E8_RuntimeMethod_var);
		V_1 = L_31;
		// PlayerPrefs.SetString(KeySave.InforLevel, inforLevel);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_32 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___InforLevel_3;
		String_t* L_33 = V_1;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_32, L_33, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		return;
	}
}
// InforCharacter ListItem::RandomInforCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* ListItem_RandomInforCharacter_mEEE830F38D27CA2DEEC131754037E41C0A90B842 (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InforCharacter newInfor = new InforCharacter();
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_0 = (InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD*)il2cpp_codegen_object_new(InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InforCharacter__ctor_mDDAD54202D12DCF59A20CB62DA98ED9268F8BCC2(L_0, NULL);
		// newInfor.idEar = RandomItem(ListItemEar);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_1 = L_0;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_2 = __this->___ListItemEar_8;
		int32_t L_3;
		L_3 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_2, NULL);
		NullCheck(L_1);
		L_1->___idEar_4 = L_3;
		// newInfor.idEye = RandomItem(ListItemEye);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_4 = L_1;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = __this->___ListItemEye_5;
		int32_t L_6;
		L_6 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_5, NULL);
		NullCheck(L_4);
		L_4->___idEye_1 = L_6;
		// newInfor.idFootwear = RandomItem(ListItemFootwear);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_7 = L_4;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8 = __this->___ListItemFootwear_10;
		int32_t L_9;
		L_9 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_8, NULL);
		NullCheck(L_7);
		L_7->___idFootwear_6 = L_9;
		// newInfor.idHair = RandomItem(ListItemHair);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_10 = L_7;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_11 = __this->___ListItemHair_4;
		int32_t L_12;
		L_12 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_11, NULL);
		NullCheck(L_10);
		L_10->___idHair_0 = L_12;
		// newInfor.idMouth = RandomItem(ListItemMouth);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_13 = L_10;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_14 = __this->___ListItemMouth_6;
		int32_t L_15;
		L_15 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_14, NULL);
		NullCheck(L_13);
		L_13->___idMouth_2 = L_15;
		// newInfor.idShirt = RandomItem(ListItemShirt);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_16 = L_13;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_17 = __this->___ListItemShirt_7;
		int32_t L_18;
		L_18 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_17, NULL);
		NullCheck(L_16);
		L_16->___idShirt_3 = L_18;
		// newInfor.idTrousers = RandomItem(ListItemTrousers);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_19 = L_16;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_20 = __this->___ListItemTrousers_9;
		int32_t L_21;
		L_21 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_20, NULL);
		NullCheck(L_19);
		L_19->___idTrousers_5 = L_21;
		// newInfor.idWings = RandomItem(ListItemWings);
		InforCharacter_t885CD60D2F971222289F106DD1C6880DA8D354DD* L_22 = L_19;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_23 = __this->___ListItemWings_11;
		int32_t L_24;
		L_24 = ListItem_RandomItem_m3C4B930C2599237C256BD12260519F648022249B(__this, L_23, NULL);
		NullCheck(L_22);
		L_22->___idWings_7 = L_24;
		// return newInfor;
		return L_22;
	}
}
// System.Void ListItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListItem__ctor_m0C84BC84FC9ABB63D0A13D7BD0B27DF31FE29FDF (ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Sprite> ListItemHair = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_0, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemHair_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemHair_4), (void*)L_0);
		// public List<Sprite> ListItemEye = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_1, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemEye_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemEye_5), (void*)L_1);
		// public List<Sprite> ListItemMouth = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_2 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_2, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemMouth_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemMouth_6), (void*)L_2);
		// public List<Sprite> ListItemShirt = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_3 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_3, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemShirt_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemShirt_7), (void*)L_3);
		// public List<Sprite> ListItemEar = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_4 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_4, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemEar_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemEar_8), (void*)L_4);
		// public List<Sprite> ListItemTrousers = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_5, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemTrousers_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemTrousers_9), (void*)L_5);
		// public List<Sprite> ListItemFootwear = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_6 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_6, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemFootwear_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemFootwear_10), (void*)L_6);
		// public List<Sprite> ListItemWings = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_7 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_7, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___ListItemWings_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListItemWings_11), (void*)L_7);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MenuControl::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_Awake_mB9E64B0EEA0375412CA82987AF2C59C12ABAF598 (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD_StaticFields*)il2cpp_codegen_static_fields_for(MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD_StaticFields*)il2cpp_codegen_static_fields_for(MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void MenuControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_Start_m8B0AA1CD86215A8918FFE15A0781A76D81181BA3 (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) 
{
	{
		// CheckHelp();
		MenuControl_CheckHelp_mB5A4185CBC6A02EE7EF06627CFCE5329355D477C(__this, NULL);
		// AddButtonLevel();
		MenuControl_AddButtonLevel_m3552F736F8D47EC8BBBDBAAC7BDCF3DDD30F8E7A(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuControl::CheckHelp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_CheckHelp_mB5A4185CBC6A02EE7EF06627CFCE5329355D477C (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// numHelp = PlayerPrefs.GetInt(KeySave.KeyHelp, 3);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___KeyHelp_2;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 3, NULL);
		__this->___numHelp_5 = L_1;
		// txtHelp.text = "" + numHelp;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___txtHelp_6;
		int32_t* L_3 = (&__this->___numHelp_5);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_2;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_2;
			goto IL_002b;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// PlayerPrefs.SetInt(KeySave.KeyHelp, numHelp);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_6 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___KeyHelp_2;
		int32_t L_7 = __this->___numHelp_5;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_6, L_7, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// }
		return;
	}
}
// System.Void MenuControl::ShowAdsReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_ShowAdsReward_m3FB01E7F6EBB7F2626F34F3E12FF8001F781BB4F (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuControl::AddButtonLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_AddButtonLevel_m3552F736F8D47EC8BBBDBAAC7BDCF3DDD30F8E7A (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA_m0D7589524964BE464CFF65C1359F442DD58BF146_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int tempOpenLevel = PlayerPrefs.GetInt(KeySave.levelWin,0);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_0 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelWin_0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		// if (tempOpenLevel <= 19)
		if ((((int32_t)L_1) > ((int32_t)((int32_t)19))))
		{
			goto IL_0020;
		}
	}
	{
		// PlayerPrefs.SetInt(KeySave.levelWin,19);
		il2cpp_codegen_runtime_class_init_inline(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var);
		String_t* L_2 = ((KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_StaticFields*)il2cpp_codegen_static_fields_for(KeySave_t7FBA39762F9EE280030C8BC00C0A473EE0CD0727_il2cpp_TypeInfo_var))->___levelWin_0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_2, ((int32_t)19), NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
	}

IL_0020:
	{
		// for (int i = 0; i < 200; i++)
		V_0 = 0;
		goto IL_007e;
	}

IL_0024:
	{
		// GameObject _btClick = GameObject.Instantiate(prefabBtClick, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___prefabBtClick_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// _btClick.transform.parent = ParentButton;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___ParentButton_9;
		NullCheck(L_9);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_9, L_10, NULL);
		// _btClick.transform.localScale = new Vector3(1,1,1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_8;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// ItemLevel _Scripts = _btClick.GetComponent<ItemLevel>();
		NullCheck(L_11);
		ItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA* L_14;
		L_14 = GameObject_GetComponent_TisItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA_m0D7589524964BE464CFF65C1359F442DD58BF146(L_11, GameObject_GetComponent_TisItemLevel_t9102A295093C67C0E9888A2E3B7990C0BF1931DA_m0D7589524964BE464CFF65C1359F442DD58BF146_RuntimeMethod_var);
		// _Scripts.SetInforLevel(i);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		ItemLevel_SetInforLevel_mB4CDDD3A490151890C3138A8B9A53BA24B191817(L_14, L_15, NULL);
		// for (int i = 0; i < 200; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_007e:
	{
		// for (int i = 0; i < 200; i++)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)200))))
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MenuControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl__ctor_m44D57674AD6E4E690A77C18C8CD1BE3F2DAC15C5 (MenuControl_t96142E79F9793AED1E3F4B6DE19B788A8F8B7CAD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ShowHideOb::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowHideOb_OnPointerDown_m1946230D7C55B1D4D714A76C395938B239F2870A (ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAE519390F4B621CC49C9A6304EF3B68EFD27B15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Click on :" + this.gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEAE519390F4B621CC49C9A6304EF3B68EFD27B15, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// ChangeStage();
		ShowHideOb_ChangeStage_m11A3D36606CD25A536A90C9F0EEC1D6394B88719(__this, NULL);
		// SoundManager.Instance.PlayClick();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3;
		L_3 = SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline(NULL);
		NullCheck(L_3);
		SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660(L_3, NULL);
		// }
		return;
	}
}
// System.Void ShowHideOb::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowHideOb_Start_m7FC1DBAC2B5383D6AB39E57A088C8DCB194EA7E7 (ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* __this, const RuntimeMethod* method) 
{
	{
		// stage1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___stage1_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// stage2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___stage2_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// StartCoroutine(delayHide());
		RuntimeObject* L_2;
		L_2 = ShowHideOb_delayHide_m48ACA68C51641CAB8E64275E56E721B6A4D26EAC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void ShowHideOb::ChangeStage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowHideOb_ChangeStage_m11A3D36606CD25A536A90C9F0EEC1D6394B88719 (ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* __this, const RuntimeMethod* method) 
{
	{
		// if (stage1.active)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___stage1_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// stage1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___stage1_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// stage2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___stage2_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_0026:
	{
		// stage2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___stage2_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// stage1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___stage1_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ShowHideOb::delayHide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowHideOb_delayHide_m48ACA68C51641CAB8E64275E56E721B6A4D26EAC (ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* L_0 = (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256*)il2cpp_codegen_object_new(U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CdelayHideU3Ed__5__ctor_m67AC06784505A7A9E88A4CD47E42F21E0F293A3D(L_0, 0, NULL);
		U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ShowHideOb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowHideOb__ctor_m2B7F9227BC15B8C9D8EB4B8A7D7DAD11A37E6E81 (ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ShowHideOb/<delayHide>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayHideU3Ed__5__ctor_m67AC06784505A7A9E88A4CD47E42F21E0F293A3D (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ShowHideOb/<delayHide>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayHideU3Ed__5_System_IDisposable_Dispose_m688D2F99A8B2C1EF755FA8934A1E71F8682C7A53 (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ShowHideOb/<delayHide>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CdelayHideU3Ed__5_MoveNext_mFF8EEE1D3C033F646B0A96C380A673E2D3EEC8B3 (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// stage1.SetActive(true);
		ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___stage1_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// stage2.SetActive(false);
		ShowHideOb_t03DC602D29B84115576F2DD29CC9B40CF0C7FFFC* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___stage2_5;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ShowHideOb/<delayHide>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdelayHideU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6367C18B9436E556AF8CA89AF50F81BB0DA1078E (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ShowHideOb/<delayHide>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdelayHideU3Ed__5_System_Collections_IEnumerator_Reset_m93BDBB82A45AE3643239D30160E7B5A3E90C2B53 (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CdelayHideU3Ed__5_System_Collections_IEnumerator_Reset_m93BDBB82A45AE3643239D30160E7B5A3E90C2B53_RuntimeMethod_var)));
	}
}
// System.Object ShowHideOb/<delayHide>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdelayHideU3Ed__5_System_Collections_IEnumerator_get_Current_mCED7B998EE8131FB4BC5234B86B7D2C8322EA02F (U3CdelayHideU3Ed__5_tD3A1B7339A667366DE4603D2F1BE4316CCBAD256* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// SoundManager SoundManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance;
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_11;
		return L_0;
	}
}
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_11), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		return;
	}

IL_001f:
	{
		// else if (instance != this)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_3 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, __this, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_m114BCC9E38EB73FB08543ABE6B95FFA5756D7AF7 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// PlayMusic();
		SoundManager_PlayMusic_mA59828D21F5C3C42C16CA84E80704DFBF85D067E(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ChangeIsSound(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ChangeIsSound_mD69E9AFED7555E2FD44908499873F225DD16FAA5 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, bool ____vl0, const RuntimeMethod* method) 
{
	{
		// isSound = _vl;
		bool L_0 = ____vl0;
		__this->___isSound_10 = L_0;
		// }
		return;
	}
}
// System.Void SoundManager::ChangeIsMusic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ChangeIsMusic_m44DAE21F597B8B9F2DFB8915EF7A86DF6D80E0BF (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, bool ____vl0, const RuntimeMethod* method) 
{
	{
		// isMusic = _vl;
		bool L_0 = ____vl0;
		__this->___isMusic_9 = L_0;
		// PlayMusic();
		SoundManager_PlayMusic_mA59828D21F5C3C42C16CA84E80704DFBF85D067E(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayClick_m2B1E2741D33BC2F8272F49AF2C2302DCE2DB6660 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// PlayAud(audClick);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___audClick_6;
		SoundManager_PlayAud_mBC43D3CA13A42BD285FBC2F56CE668AB92442C0D(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayWin_mA7741B892310262924D85D909B686B7AABD0D8A0 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// PlayAud(audWin);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___audWin_7;
		SoundManager_PlayAud_mBC43D3CA13A42BD285FBC2F56CE668AB92442C0D(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayTrue_m1B758E50014D1E5EC124AF947DCC9FE3C896FAF8 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// PlayAud(audTrue);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___audTrue_8;
		SoundManager_PlayAud_mBC43D3CA13A42BD285FBC2F56CE668AB92442C0D(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayAud(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayAud_mBC43D3CA13A42BD285FBC2F56CE668AB92442C0D (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____aud0, const RuntimeMethod* method) 
{
	{
		// if (isSound) {
		bool L_0 = __this->___isSound_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// audSS.PlayOneShot(_aud);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audSS_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ____aud0;
		NullCheck(L_1);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void SoundManager::PlayMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayMusic_mA59828D21F5C3C42C16CA84E80704DFBF85D067E (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// if (isMusic)
		bool L_0 = __this->___isMusic_9;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// audSM.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audSM_4;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		return;
	}

IL_0014:
	{
		// audSM.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audSM_4;
		NullCheck(L_2);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_2, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// bool isMusic = true;
		__this->___isMusic_9 = (bool)1;
		// bool isSound = true;
		__this->___isSound_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DG.Tweening.DOTweenAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Awake_m8531F674633C180916C447ACF6C986EC18AF7B3B (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (!isActive || !isValid) return;
		bool L_0 = __this->___isActive_30;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___isValid_31;
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (!isActive || !isValid) return;
		return;
	}

IL_0011:
	{
		// if (animationType != DOTweenAnimationType.Move || !useTargetAsV3) {
		int32_t L_2 = __this->___animationType_33;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->___useTargetAsV3_37;
		if (L_3)
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		// CreateTween();
		DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2(__this, NULL);
		// _tweenCreated = true;
		__this->____tweenCreated_51 = (bool)1;
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Start_m908C8FD2C7336E4F04E22B4C7A821F22F621C905 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (_tweenCreated) return;
		bool L_0 = __this->____tweenCreated_51;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_tweenCreated) return;
		return;
	}

IL_0009:
	{
		// CreateTween();
		DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2(__this, NULL);
		// _tweenCreated = true;
		__this->____tweenCreated_51 = (bool)1;
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_OnDestroy_mCE1919BF0059EA93C96345E2D2F7C0BE0F61B9AC (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (tween != null && tween.IsActive()) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_2;
		L_2 = TweenExtensions_IsActive_m0361F513A18C4128C4DBF88EF1E2F4752D97DF4A_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.IsActive()) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		TweenExtensions_Kill_m41BEF5EBF8C1633EC918DD60ADF82F5C63EC8ED5(L_3, (bool)0, NULL);
	}

IL_0021:
	{
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD172D9B7570D17BB978B39DCF7738D418F11EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A9AC714D9B78BE9FD8D8488AC619D7F2556992A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B33_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B33_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B32_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B32_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B34_1 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B34_2 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B37_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B37_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B36_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B36_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B38_0;
	memset((&G_B38_0), 0, sizeof(G_B38_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B38_1 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B38_2 = NULL;
	{
		// if (target == null) {
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->___target_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's target is NULL, because the animation was created with a DOTween Pro version older than 0.9.255. To fix this, exit Play mode then simply select this object, and it will update automatically", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3A9AC714D9B78BE9FD8D8488AC619D7F2556992A, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_4, L_5, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_6 = __this->___forcedTargetType_35;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_7 = __this->___forcedTargetType_35;
		__this->___targetType_34 = L_7;
	}

IL_0043:
	{
		// if (targetType == TargetType.Unset) {
		int32_t L_8 = __this->___targetType_34;
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// targetType = TypeToDOTargetType(target.GetType());
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_9 = __this->___target_32;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		int32_t L_11;
		L_11 = DOTweenAnimation_TypeToDOTargetType_m075A18B16BBDF65F7672023E472B6A92B8051F71(L_10, NULL);
		__this->___targetType_34 = L_11;
	}

IL_0061:
	{
		// switch (animationType) {
		int32_t L_12 = __this->___animationType_33;
		V_0 = L_12;
		int32_t L_13 = V_0;
		switch (L_13)
		{
			case 0:
			{
				goto IL_094c;
			}
			case 1:
			{
				goto IL_00cb;
			}
			case 2:
			{
				goto IL_02ae;
			}
			case 3:
			{
				goto IL_02d6;
			}
			case 4:
			{
				goto IL_037b;
			}
			case 5:
			{
				goto IL_03a3;
			}
			case 6:
			{
				goto IL_0429;
			}
			case 7:
			{
				goto IL_052c;
			}
			case 8:
			{
				goto IL_065a;
			}
			case 9:
			{
				goto IL_06a0;
			}
			case 10:
			{
				goto IL_075a;
			}
			case 11:
			{
				goto IL_072c;
			}
			case 12:
			{
				goto IL_0788;
			}
			case 13:
			{
				goto IL_0842;
			}
			case 14:
			{
				goto IL_0814;
			}
			case 15:
			{
				goto IL_0870;
			}
			case 16:
			{
				goto IL_0897;
			}
			case 17:
			{
				goto IL_08be;
			}
			case 18:
			{
				goto IL_08e2;
			}
			case 19:
			{
				goto IL_0906;
			}
			case 20:
			{
				goto IL_092a;
			}
			case 21:
			{
				goto IL_03e6;
			}
		}
	}
	{
		goto IL_094c;
	}

IL_00cb:
	{
		// if (useTargetAsV3) {
		bool L_14 = __this->___useTargetAsV3_37;
		if (!L_14)
		{
			goto IL_01c5;
		}
	}
	{
		// isRelative = false;
		__this->___isRelative_26 = (bool)0;
		// if (endValueTransform == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___endValueTransform_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_011b;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target is NULL, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		String_t* L_19;
		L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB, L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_19, L_20, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___endValueV3_39 = L_21;
		goto IL_01c5;
	}

IL_011b:
	{
		// if (targetType == TargetType.RectTransform) {
		int32_t L_22 = __this->___targetType_34;
		if ((!(((uint32_t)L_22) == ((uint32_t)5))))
		{
			goto IL_01b4;
		}
	}
	{
		// RectTransform endValueT = endValueTransform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___endValueTransform_44;
		V_1 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_23, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (endValueT == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_0169;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target should be a RectTransform, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		String_t* L_28;
		L_28 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75, L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_28, L_29, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___endValueV3_39 = L_30;
		goto IL_01c5;
	}

IL_0169:
	{
		// RectTransform rTarget = target as RectTransform;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_31 = __this->___target_32;
		V_2 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_31, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (rTarget == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01a0;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's target and TO target are not of the same type. Please reassign the values", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_34, NULL);
		String_t* L_36;
		L_36 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F, L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_36, L_37, NULL);
		goto IL_01c5;
	}

IL_01a0:
	{
		// endValueV3 = DOTweenUtils46.SwitchToRectTransform(endValueT, rTarget);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = DOTweenUtils46_SwitchToRectTransform_mBC04140DECCDB1BC1ABC350B0DD5053810122ED2(L_38, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_40, NULL);
		__this->___endValueV3_39 = L_41;
		goto IL_01c5;
	}

IL_01b4:
	{
		// } else endValueV3 = endValueTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___endValueTransform_44;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		__this->___endValueV3_39 = L_43;
	}

IL_01c5:
	{
		// switch (targetType) {
		int32_t L_44 = __this->___targetType_34;
		V_3 = L_44;
		int32_t L_45 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_45, 5)))
		{
			case 0:
			{
				goto IL_01f5;
			}
			case 1:
			{
				goto IL_094c;
			}
			case 2:
			{
				goto IL_094c;
			}
			case 3:
			{
				goto IL_0281;
			}
			case 4:
			{
				goto IL_024f;
			}
			case 5:
			{
				goto IL_094c;
			}
			case 6:
			{
				goto IL_0222;
			}
		}
	}
	{
		goto IL_094c;
	}

IL_01f5:
	{
		// tween = ((RectTransform)target).DOAnchorPos3D(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_46 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___endValueV3_39;
		float L_48 = __this->___duration_20;
		bool L_49 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_50;
		L_50 = ShortcutExtensions46_DOAnchorPos3D_m448F0426905A6E0061CEBD5EDDB7368F472C12F9(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_46, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_47, L_48, L_49, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_50);
		// break;
		goto IL_094c;
	}

IL_0222:
	{
		// tween = ((Transform)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_51 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = __this->___endValueV3_39;
		float L_53 = __this->___duration_20;
		bool L_54 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_55;
		L_55 = ShortcutExtensions_DOMove_mCABA3EC61CA937575A3597629B32332025003BC0(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_51, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_52, L_53, L_54, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_55);
		// break;
		goto IL_094c;
	}

IL_024f:
	{
		// tween = ((Rigidbody2D)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_56 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->___endValueV3_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_57, NULL);
		float L_59 = __this->___duration_20;
		bool L_60 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_61;
		L_61 = ShortcutExtensions43_DOMove_m448E4F52E0A6909E2DDBAF142139DA26F5F23404(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_56, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_58, L_59, L_60, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_61);
		// break;
		goto IL_094c;
	}

IL_0281:
	{
		// tween = ((Rigidbody)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_62 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = __this->___endValueV3_39;
		float L_64 = __this->___duration_20;
		bool L_65 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_66;
		L_66 = ShortcutExtensions_DOMove_m813A23087929AF9F3B6C7F160D4CD7F3DCE34104(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_62, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_63, L_64, L_65, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_66);
		// break;
		goto IL_094c;
	}

IL_02ae:
	{
		// tween = transform.DOLocalMove(endValueV3, duration, optionalBool0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->___endValueV3_39;
		float L_69 = __this->___duration_20;
		bool L_70 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_71;
		L_71 = ShortcutExtensions_DOLocalMove_m3BBF288EF72070FBE83140752E97B3F0FD75C06E(L_67, L_68, L_69, L_70, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_71);
		// break;
		goto IL_094c;
	}

IL_02d6:
	{
		// switch (targetType) {
		int32_t L_72 = __this->___targetType_34;
		V_3 = L_72;
		int32_t L_73 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_73, 8)))
		{
			case 0:
			{
				goto IL_034e;
			}
			case 1:
			{
				goto IL_0327;
			}
			case 2:
			{
				goto IL_094c;
			}
			case 3:
			{
				goto IL_02fa;
			}
		}
	}
	{
		goto IL_094c;
	}

IL_02fa:
	{
		// tween = ((Transform)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_74 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = __this->___endValueV3_39;
		float L_76 = __this->___duration_20;
		int32_t L_77 = __this->___optionalRotationMode_48;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_78;
		L_78 = ShortcutExtensions_DORotate_m5CB803FB23BE05C2E2EB14BB00C58B05F5562BF1(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_74, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_75, L_76, L_77, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_78);
		// break;
		goto IL_094c;
	}

IL_0327:
	{
		// tween = ((Rigidbody2D)target).DORotate(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_79 = __this->___target_32;
		float L_80 = __this->___endValueFloat_38;
		float L_81 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_82;
		L_82 = ShortcutExtensions43_DORotate_m42D753D74A7846A9B3BA9F358D74985D6107E789(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_79, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_80, L_81, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_82);
		// break;
		goto IL_094c;
	}

IL_034e:
	{
		// tween = ((Rigidbody)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_83 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = __this->___endValueV3_39;
		float L_85 = __this->___duration_20;
		int32_t L_86 = __this->___optionalRotationMode_48;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_87;
		L_87 = ShortcutExtensions_DORotate_mC2A53E2C3D65AF9F45EDBAC44EFA6B55F0CD6DF4(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_83, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_84, L_85, L_86, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_87);
		// break;
		goto IL_094c;
	}

IL_037b:
	{
		// tween = transform.DOLocalRotate(endValueV3, duration, optionalRotationMode);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = __this->___endValueV3_39;
		float L_90 = __this->___duration_20;
		int32_t L_91 = __this->___optionalRotationMode_48;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_92;
		L_92 = ShortcutExtensions_DOLocalRotate_mC97921F1AE28D8288CE9A4A567E1987DD436C809(L_88, L_89, L_90, L_91, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_92);
		// break;
		goto IL_094c;
	}

IL_03a3:
	{
		// tween = transform.DOScale(optionalBool0 ? new Vector3(endValueFloat, endValueFloat, endValueFloat) : endValueV3, duration);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		bool L_94 = __this->___optionalBool0_45;
		G_B32_0 = L_93;
		G_B32_1 = __this;
		if (L_94)
		{
			G_B33_0 = L_93;
			G_B33_1 = __this;
			goto IL_03ba;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = __this->___endValueV3_39;
		G_B34_0 = L_95;
		G_B34_1 = G_B32_0;
		G_B34_2 = G_B32_1;
		goto IL_03d1;
	}

IL_03ba:
	{
		float L_96 = __this->___endValueFloat_38;
		float L_97 = __this->___endValueFloat_38;
		float L_98 = __this->___endValueFloat_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		memset((&L_99), 0, sizeof(L_99));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_99), L_96, L_97, L_98, /*hidden argument*/NULL);
		G_B34_0 = L_99;
		G_B34_1 = G_B33_0;
		G_B34_2 = G_B33_1;
	}

IL_03d1:
	{
		float L_100 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_101;
		L_101 = ShortcutExtensions_DOScale_m8F8E53E7E68C2D015C982B6EB0927A6779A1A5BD(G_B34_1, G_B34_0, L_100, NULL);
		NullCheck(G_B34_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B34_2)->___tween_18 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B34_2)->___tween_18), (void*)L_101);
		// break;
		goto IL_094c;
	}

IL_03e6:
	{
		// tween = ((RectTransform)target).DOSizeDelta(optionalBool0 ? new Vector2(endValueFloat, endValueFloat) : endValueV2, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_102 = __this->___target_32;
		bool L_103 = __this->___optionalBool0_45;
		G_B36_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_102, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		G_B36_1 = __this;
		if (L_103)
		{
			G_B37_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_102, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
			G_B37_1 = __this;
			goto IL_0402;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = __this->___endValueV2_40;
		G_B38_0 = L_104;
		G_B38_1 = G_B36_0;
		G_B38_2 = G_B36_1;
		goto IL_0413;
	}

IL_0402:
	{
		float L_105 = __this->___endValueFloat_38;
		float L_106 = __this->___endValueFloat_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_107), L_105, L_106, /*hidden argument*/NULL);
		G_B38_0 = L_107;
		G_B38_1 = G_B37_0;
		G_B38_2 = G_B37_1;
	}

IL_0413:
	{
		float L_108 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_109;
		L_109 = ShortcutExtensions46_DOSizeDelta_m88662C05BC698464D7BD2CC1FAD50F9122A8D20B(G_B38_1, G_B38_0, L_108, (bool)0, NULL);
		NullCheck(G_B38_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B38_2)->___tween_18 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B38_2)->___tween_18), (void*)L_109);
		// break;
		goto IL_094c;
	}

IL_0429:
	{
		// isRelative = false;
		__this->___isRelative_26 = (bool)0;
		// switch (targetType) {
		int32_t L_110 = __this->___targetType_34;
		V_3 = L_110;
		int32_t L_111 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_111, 3)))
		{
			case 0:
			{
				goto IL_04b7;
			}
			case 1:
			{
				goto IL_0505;
			}
			case 2:
			{
				goto IL_094c;
			}
			case 3:
			{
				goto IL_048b;
			}
			case 4:
			{
				goto IL_0464;
			}
			case 5:
			{
				goto IL_094c;
			}
			case 6:
			{
				goto IL_094c;
			}
			case 7:
			{
				goto IL_04de;
			}
		}
	}
	{
		goto IL_094c;
	}

IL_0464:
	{
		// tween = ((SpriteRenderer)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_112 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_113 = __this->___endValueColor_41;
		float L_114 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_115;
		L_115 = ShortcutExtensions43_DOColor_m58469B24BF3360CFDFCD51C949490D8CE11ADAB8(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_112, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_113, L_114, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_115);
		// break;
		goto IL_094c;
	}

IL_048b:
	{
		// tween = ((Renderer)target).material.DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_116 = __this->___target_32;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_116, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117;
		L_117 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_116, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_118 = __this->___endValueColor_41;
		float L_119 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_120;
		L_120 = ShortcutExtensions_DOColor_mC922C9C42EE205AFF45010AA8E409704F6BEBEAA(L_117, L_118, L_119, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_120);
		// break;
		goto IL_094c;
	}

IL_04b7:
	{
		// tween = ((Image)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_121 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_122 = __this->___endValueColor_41;
		float L_123 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_124;
		L_124 = ShortcutExtensions46_DOColor_mA849E66F5B1CB697BFF92B94EC3313FD19C1392D(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_121, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), L_122, L_123, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_124);
		// break;
		goto IL_094c;
	}

IL_04de:
	{
		// tween = ((Text)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_125 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_126 = __this->___endValueColor_41;
		float L_127 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_128;
		L_128 = ShortcutExtensions46_DOColor_mF0C6C5ED3B10BF6942A74AFB4F3375F9DC3BC13F(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_125, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_126, L_127, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_128);
		// break;
		goto IL_094c;
	}

IL_0505:
	{
		// tween = ((Light)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_129 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_130 = __this->___endValueColor_41;
		float L_131 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_132;
		L_132 = ShortcutExtensions_DOColor_m031F42AAA5312900A74011F58329ACF809BD42A0(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_129, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_130, L_131, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_132;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_132);
		// break;
		goto IL_094c;
	}

IL_052c:
	{
		// isRelative = false;
		__this->___isRelative_26 = (bool)0;
		// switch (targetType) {
		int32_t L_133 = __this->___targetType_34;
		V_3 = L_133;
		int32_t L_134 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_134, 2)))
		{
			case 0:
			{
				goto IL_0633;
			}
			case 1:
			{
				goto IL_05be;
			}
			case 2:
			{
				goto IL_060c;
			}
			case 3:
			{
				goto IL_094c;
			}
			case 4:
			{
				goto IL_0592;
			}
			case 5:
			{
				goto IL_056b;
			}
			case 6:
			{
				goto IL_094c;
			}
			case 7:
			{
				goto IL_094c;
			}
			case 8:
			{
				goto IL_05e5;
			}
		}
	}
	{
		goto IL_094c;
	}

IL_056b:
	{
		// tween = ((SpriteRenderer)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_135 = __this->___target_32;
		float L_136 = __this->___endValueFloat_38;
		float L_137 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_138;
		L_138 = ShortcutExtensions43_DOFade_m3DB205E6A07E27B814AEFFF72BC69CB15D98A7ED(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_135, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_136, L_137, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_138;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_138);
		// break;
		goto IL_094c;
	}

IL_0592:
	{
		// tween = ((Renderer)target).material.DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_139 = __this->___target_32;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_139, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_140;
		L_140 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_139, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		float L_141 = __this->___endValueFloat_38;
		float L_142 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_143;
		L_143 = ShortcutExtensions_DOFade_m4A9722B57A6C86A5B5C0E46A6AD2BEEC1F2D439B(L_140, L_141, L_142, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_143);
		// break;
		goto IL_094c;
	}

IL_05be:
	{
		// tween = ((Image)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_144 = __this->___target_32;
		float L_145 = __this->___endValueFloat_38;
		float L_146 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_147;
		L_147 = ShortcutExtensions46_DOFade_m6D3C0485C22587DD26890ED66E7DABAFBD53F7EC(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_144, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), L_145, L_146, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_147);
		// break;
		goto IL_094c;
	}

IL_05e5:
	{
		// tween = ((Text)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_148 = __this->___target_32;
		float L_149 = __this->___endValueFloat_38;
		float L_150 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_151;
		L_151 = ShortcutExtensions46_DOFade_m5914032B7CC02D79197D327EFFE3A5E2319AA42F(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_148, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_149, L_150, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_151;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_151);
		// break;
		goto IL_094c;
	}

IL_060c:
	{
		// tween = ((Light)target).DOIntensity(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_152 = __this->___target_32;
		float L_153 = __this->___endValueFloat_38;
		float L_154 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_155;
		L_155 = ShortcutExtensions_DOIntensity_m6C3F835279084DFCCBDADD22F1A50BA6271DC0F8(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_152, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_153, L_154, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_155);
		// break;
		goto IL_094c;
	}

IL_0633:
	{
		// tween = ((CanvasGroup)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_156 = __this->___target_32;
		float L_157 = __this->___endValueFloat_38;
		float L_158 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_159;
		L_159 = ShortcutExtensions46_DOFade_m8AB1763A279B4D6975F1DB7771A5B659085C3383(((CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)CastclassSealed((RuntimeObject*)L_156, CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var)), L_157, L_158, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_159);
		// break;
		goto IL_094c;
	}

IL_065a:
	{
		// switch (targetType) {
		int32_t L_160 = __this->___targetType_34;
		if ((!(((uint32_t)L_160) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_094c;
		}
	}
	{
		// tween = ((Text)target).DOText(endValueString, duration, optionalBool0, optionalScrambleMode, optionalString);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_161 = __this->___target_32;
		String_t* L_162 = __this->___endValueString_42;
		float L_163 = __this->___duration_20;
		bool L_164 = __this->___optionalBool0_45;
		int32_t L_165 = __this->___optionalScrambleMode_49;
		String_t* L_166 = __this->___optionalString_50;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_167;
		L_167 = ShortcutExtensions46_DOText_mC4006F3DF326A2AC3D5881092212E8AC04F543B4(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_161, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_162, L_163, L_164, L_165, L_166, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_167);
		// break;
		goto IL_094c;
	}

IL_06a0:
	{
		// switch (targetType) {
		int32_t L_168 = __this->___targetType_34;
		V_3 = L_168;
		int32_t L_169 = V_3;
		if ((((int32_t)L_169) == ((int32_t)5)))
		{
			goto IL_06b5;
		}
	}
	{
		int32_t L_170 = V_3;
		if ((((int32_t)L_170) == ((int32_t)((int32_t)11))))
		{
			goto IL_06f3;
		}
	}
	{
		goto IL_094c;
	}

IL_06b5:
	{
		// tween = ((RectTransform)target).DOPunchAnchorPos(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_171 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172 = __this->___endValueV3_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_173;
		L_173 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_172, NULL);
		float L_174 = __this->___duration_20;
		int32_t L_175 = __this->___optionalInt0_47;
		float L_176 = __this->___optionalFloat0_46;
		bool L_177 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_178;
		L_178 = ShortcutExtensions46_DOPunchAnchorPos_m065577330770D0547B80860039CD8570260636B8(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_171, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_173, L_174, L_175, L_176, L_177, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_178);
		// break;
		goto IL_094c;
	}

IL_06f3:
	{
		// tween = ((Transform)target).DOPunchPosition(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_179 = __this->___target_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = __this->___endValueV3_39;
		float L_181 = __this->___duration_20;
		int32_t L_182 = __this->___optionalInt0_47;
		float L_183 = __this->___optionalFloat0_46;
		bool L_184 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_185;
		L_185 = ShortcutExtensions_DOPunchPosition_mC6141C2E6F415ACB10B664B3F2DDADDEE1CCF9B7(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_179, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_180, L_181, L_182, L_183, L_184, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_185;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_185);
		// break;
		goto IL_094c;
	}

IL_072c:
	{
		// tween = transform.DOPunchScale(endValueV3, duration, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_186;
		L_186 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = __this->___endValueV3_39;
		float L_188 = __this->___duration_20;
		int32_t L_189 = __this->___optionalInt0_47;
		float L_190 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_191;
		L_191 = ShortcutExtensions_DOPunchScale_m11086B1F15446E2DBD1BBED2FE1855DC12C05867(L_186, L_187, L_188, L_189, L_190, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_191;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_191);
		// break;
		goto IL_094c;
	}

IL_075a:
	{
		// tween = transform.DOPunchRotation(endValueV3, duration, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_192;
		L_192 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193 = __this->___endValueV3_39;
		float L_194 = __this->___duration_20;
		int32_t L_195 = __this->___optionalInt0_47;
		float L_196 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_197;
		L_197 = ShortcutExtensions_DOPunchRotation_mBD603C44E24516A904CEF8D707E016B03C71DC5F(L_192, L_193, L_194, L_195, L_196, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_197;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_197);
		// break;
		goto IL_094c;
	}

IL_0788:
	{
		// switch (targetType) {
		int32_t L_198 = __this->___targetType_34;
		V_3 = L_198;
		int32_t L_199 = V_3;
		if ((((int32_t)L_199) == ((int32_t)5)))
		{
			goto IL_079d;
		}
	}
	{
		int32_t L_200 = V_3;
		if ((((int32_t)L_200) == ((int32_t)((int32_t)11))))
		{
			goto IL_07db;
		}
	}
	{
		goto IL_094c;
	}

IL_079d:
	{
		// tween = ((RectTransform)target).DOShakeAnchorPos(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_201 = __this->___target_32;
		float L_202 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = __this->___endValueV3_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_204;
		L_204 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_203, NULL);
		int32_t L_205 = __this->___optionalInt0_47;
		float L_206 = __this->___optionalFloat0_46;
		bool L_207 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_208;
		L_208 = ShortcutExtensions46_DOShakeAnchorPos_m1FCBBAF0256D614E8B1861C5311D05092546AA5C(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_201, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_202, L_204, L_205, L_206, L_207, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_208;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_208);
		// break;
		goto IL_094c;
	}

IL_07db:
	{
		// tween = ((Transform)target).DOShakePosition(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_209 = __this->___target_32;
		float L_210 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_211 = __this->___endValueV3_39;
		int32_t L_212 = __this->___optionalInt0_47;
		float L_213 = __this->___optionalFloat0_46;
		bool L_214 = __this->___optionalBool0_45;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_215;
		L_215 = ShortcutExtensions_DOShakePosition_m9EF301EB964DC2278AD68CA43D1A920727C3CD4C(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_209, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_210, L_211, L_212, L_213, L_214, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_215;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_215);
		// break;
		goto IL_094c;
	}

IL_0814:
	{
		// tween = transform.DOShakeScale(duration, endValueV3, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_216;
		L_216 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_217 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_218 = __this->___endValueV3_39;
		int32_t L_219 = __this->___optionalInt0_47;
		float L_220 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_221;
		L_221 = ShortcutExtensions_DOShakeScale_m20469753DB848159A9A8C84A5654F72C346EE00D(L_216, L_217, L_218, L_219, L_220, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_221;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_221);
		// break;
		goto IL_094c;
	}

IL_0842:
	{
		// tween = transform.DOShakeRotation(duration, endValueV3, optionalInt0, optionalFloat0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_222;
		L_222 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_223 = __this->___duration_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_224 = __this->___endValueV3_39;
		int32_t L_225 = __this->___optionalInt0_47;
		float L_226 = __this->___optionalFloat0_46;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_227;
		L_227 = ShortcutExtensions_DOShakeRotation_m9B4EAD50DFAFD7A55A0BBFC7B26E4E532E796EF6(L_222, L_223, L_224, L_225, L_226, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_227;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_227);
		// break;
		goto IL_094c;
	}

IL_0870:
	{
		// tween = ((Camera)target).DOAspect(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_228 = __this->___target_32;
		float L_229 = __this->___endValueFloat_38;
		float L_230 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_231;
		L_231 = ShortcutExtensions_DOAspect_m0F86118D4B9E5B33951923A94504A27E9DE31BE4(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_228, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_229, L_230, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_231;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_231);
		// break;
		goto IL_094c;
	}

IL_0897:
	{
		// tween = ((Camera)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_232 = __this->___target_32;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_233 = __this->___endValueColor_41;
		float L_234 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_235;
		L_235 = ShortcutExtensions_DOColor_m74D0B25F7E19EB85F325B61616E0F50D1221377D(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_232, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_233, L_234, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_235;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_235);
		// break;
		goto IL_094c;
	}

IL_08be:
	{
		// tween = ((Camera)target).DOFieldOfView(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_236 = __this->___target_32;
		float L_237 = __this->___endValueFloat_38;
		float L_238 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_239;
		L_239 = ShortcutExtensions_DOFieldOfView_m89342F24B2C0D043F691C7009943E31AE72E73EA(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_236, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_237, L_238, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_239;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_239);
		// break;
		goto IL_094c;
	}

IL_08e2:
	{
		// tween = ((Camera)target).DOOrthoSize(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_240 = __this->___target_32;
		float L_241 = __this->___endValueFloat_38;
		float L_242 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_243;
		L_243 = ShortcutExtensions_DOOrthoSize_m8CCDEE3E8D1127C693F4E64EE1786DC5549CE3FA(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_240, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_241, L_242, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_243;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_243);
		// break;
		goto IL_094c;
	}

IL_0906:
	{
		// tween = ((Camera)target).DOPixelRect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_244 = __this->___target_32;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_245 = __this->___endValueRect_43;
		float L_246 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_247;
		L_247 = ShortcutExtensions_DOPixelRect_m68A8869F313E63850B71B7CE8233EC92F30619EF(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_244, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_245, L_246, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_247;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_247);
		// break;
		goto IL_094c;
	}

IL_092a:
	{
		// tween = ((Camera)target).DORect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_248 = __this->___target_32;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_249 = __this->___endValueRect_43;
		float L_250 = __this->___duration_20;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_251;
		L_251 = ShortcutExtensions_DORect_m1F6205405427F2A86B19E80DB22D1BE94F1F205E(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_248, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_249, L_250, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = L_251;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)L_251);
	}

IL_094c:
	{
		// if (tween == null) return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_252 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		if (L_252)
		{
			goto IL_0955;
		}
	}
	{
		// if (tween == null) return;
		return;
	}

IL_0955:
	{
		// if (isFrom) {
		bool L_253 = __this->___isFrom_27;
		if (!L_253)
		{
			goto IL_0976;
		}
	}
	{
		// ((Tweener)tween).From(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_254 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_255 = __this->___isRelative_26;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_256;
		L_256 = TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_254, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_255, TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95_RuntimeMethod_var);
		goto IL_0988;
	}

IL_0976:
	{
		// tween.SetRelative(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_257 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_258 = __this->___isRelative_26;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_259;
		L_259 = TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483(L_257, L_258, TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483_RuntimeMethod_var);
	}

IL_0988:
	{
		// tween.SetTarget(this.gameObject).SetDelay(delay).SetLoops(loops, loopType).SetAutoKill(autoKill)
		//     .OnKill(()=> tween = null);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_260 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_261;
		L_261 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_262;
		L_262 = TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5(L_260, L_261, TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5_RuntimeMethod_var);
		float L_263 = __this->___delay_19;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_264;
		L_264 = TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC(L_262, L_263, TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC_RuntimeMethod_var);
		int32_t L_265 = __this->___loops_24;
		int32_t L_266 = __this->___loopType_23;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_267;
		L_267 = TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0(L_264, L_265, L_266, TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0_RuntimeMethod_var);
		bool L_268 = __this->___autoKill_29;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_269;
		L_269 = TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21(L_267, L_268, TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_270 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_270);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_270, __this, (intptr_t)((void*)DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_271;
		L_271 = TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913(L_269, L_270, TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913_RuntimeMethod_var);
		// if (isSpeedBased) tween.SetSpeedBased();
		bool L_272 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___isSpeedBased_5;
		if (!L_272)
		{
			goto IL_09e6;
		}
	}
	{
		// if (isSpeedBased) tween.SetSpeedBased();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_273 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_274;
		L_274 = TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8(L_273, TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8_RuntimeMethod_var);
	}

IL_09e6:
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		int32_t L_275 = __this->___easeType_21;
		if ((!(((uint32_t)L_275) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0a04;
		}
	}
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_276 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_277 = __this->___easeCurve_22;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_278;
		L_278 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049(L_276, L_277, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049_RuntimeMethod_var);
		goto IL_0a16;
	}

IL_0a04:
	{
		// else tween.SetEase(easeType);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_279 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		int32_t L_280 = __this->___easeType_21;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_281;
		L_281 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6(L_279, L_280, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6_RuntimeMethod_var);
	}

IL_0a16:
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		String_t* L_282 = __this->___id_25;
		bool L_283;
		L_283 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_282, NULL);
		if (L_283)
		{
			goto IL_0a35;
		}
	}
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_284 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		String_t* L_285 = __this->___id_25;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_286;
		L_286 = TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD172D9B7570D17BB978B39DCF7738D418F11EF86(L_284, L_285, TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD172D9B7570D17BB978B39DCF7738D418F11EF86_RuntimeMethod_var);
	}

IL_0a35:
	{
		// tween.SetUpdate(isIndependentUpdate);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_287 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		bool L_288 = __this->___isIndependentUpdate_28;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_289;
		L_289 = TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36(L_287, L_288, TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36_RuntimeMethod_var);
		// if (hasOnStart) {
		bool L_290 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStart_6;
		if (!L_290)
		{
			goto IL_0a76;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_291 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12;
		if (!L_291)
		{
			goto IL_0a7d;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_292 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_293 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_294 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_294);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_294, L_293, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_295;
		L_295 = TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F(L_292, L_294, TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F_RuntimeMethod_var);
		goto IL_0a7d;
	}

IL_0a76:
	{
		// } else onStart = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_12), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0a7d:
	{
		// if (hasOnPlay) {
		bool L_296 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnPlay_7;
		if (!L_296)
		{
			goto IL_0aac;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_297 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13;
		if (!L_297)
		{
			goto IL_0ab3;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_298 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_299 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_300 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_300);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_300, L_299, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_301;
		L_301 = TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6(L_298, L_300, TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6_RuntimeMethod_var);
		goto IL_0ab3;
	}

IL_0aac:
	{
		// } else onPlay = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_13), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0ab3:
	{
		// if (hasOnUpdate) {
		bool L_302 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnUpdate_8;
		if (!L_302)
		{
			goto IL_0ae2;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_303 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14;
		if (!L_303)
		{
			goto IL_0ae9;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_304 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_305 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_306 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_306);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_306, L_305, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_307;
		L_307 = TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D(L_304, L_306, TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D_RuntimeMethod_var);
		goto IL_0ae9;
	}

IL_0ae2:
	{
		// } else onUpdate = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_14), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0ae9:
	{
		// if (hasOnStepComplete) {
		bool L_308 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStepComplete_9;
		if (!L_308)
		{
			goto IL_0b18;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_309 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15;
		if (!L_309)
		{
			goto IL_0b1f;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_310 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_311 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_312 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_312);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_312, L_311, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_313;
		L_313 = TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB(L_310, L_312, TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB_RuntimeMethod_var);
		goto IL_0b1f;
	}

IL_0b18:
	{
		// } else onStepComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_15), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b1f:
	{
		// if (hasOnComplete) {
		bool L_314 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnComplete_10;
		if (!L_314)
		{
			goto IL_0b4e;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_315 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16;
		if (!L_315)
		{
			goto IL_0b55;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_316 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_317 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_318 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_318);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_318, L_317, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_319;
		L_319 = TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371(L_316, L_318, TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371_RuntimeMethod_var);
		goto IL_0b55;
	}

IL_0b4e:
	{
		// } else onComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_16), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b55:
	{
		// if (autoPlay) tween.Play();
		bool L_320 = __this->___autoPlay_36;
		if (!L_320)
		{
			goto IL_0b6b;
		}
	}
	{
		// if (autoPlay) tween.Play();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_321 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_322;
		L_322 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6(L_321, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		goto IL_0b77;
	}

IL_0b6b:
	{
		// else tween.Pause();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_323 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_324;
		L_324 = TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD(L_323, TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD_RuntimeMethod_var);
	}

IL_0b77:
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		bool L_325 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnTweenCreated_11;
		if (!L_325)
		{
			goto IL_0b92;
		}
	}
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_326 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_17;
		if (!L_326)
		{
			goto IL_0b92;
		}
	}
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_327 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_17;
		NullCheck(L_327);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_327, NULL);
	}

IL_0b92:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlay_m13FCD1B90C270CC6A4CDC37D45B9C7906759EB65 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_mE146D1154F52E49E529517BB36D29EADA337F5FF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwards_m7DAD71BF7390EE5BB26CEE5E002A9F61BBD790BB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m98D93F84137C304FDA25BF99E45108494E18F39B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForward_m1C460584821358C681FFB2A3824D8F532B94A3D6 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_m32808EC4264B337995A4E260E96AF7A454029637(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPause_m579FECCC254EDE65F38B0BB132FA796876409547 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_m58CD7313179E53DE741D41B6CAAB7ABFF1BABA6C(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOTogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOTogglePause_m3976C710434A81CEF46C8202D6D43A4F09FAE91E (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.TogglePause(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_TogglePause_m306F889F632F7B3C429F108A81AFD644727D0F7D(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewind_m0ACC3EE9A69E368F08360B45500AF6417853AACF (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_0 = NULL;
	int32_t V_1 = 0;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* V_2 = NULL;
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTweenAnimation[] anims = this.gameObject.GetComponents<DOTweenAnimation>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_1;
		L_1 = GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B(L_0, GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = anims.Length - 1; i > -1; --i) {
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		goto IL_0041;
	}

IL_001b:
	{
		// Tween t = anims[i].tween;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_7 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_6)->___tween_18;
		V_2 = L_7;
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = V_2;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = V_2;
		bool L_10;
		L_10 = TweenExtensions_IsInitialized_m70878E071A2B3F02B43A47A4CEAE674A64341AF1(L_9, NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_14)->___tween_18;
		TweenExtensions_Rewind_m3E891F32358D3D459EA15BE3A25D49B49D6BAC0C(L_15, (bool)1, NULL);
	}

IL_003d:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0041:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) > ((int32_t)(-1))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_m3991D3973BAB757263F5B7DF49236854F7CFFDD6 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, bool ___fromHere0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// if (tween == null) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		int32_t L_1 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Debugger_LogNullTween_m462D3B435A8ADE6FEB0330E4A31710226DB613BC(L_2, NULL);
	}

IL_0022:
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		return;
	}

IL_0023:
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		bool L_3 = ___fromHere0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = __this->___isRelative_26;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884(__this, NULL);
	}

IL_0034:
	{
		// DOTween.Restart(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = DOTween_Restart_m68B555E809C1F3B88BE6CC613765FC38F407AA40(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOComplete_mA22769F47C0477E80CEFD1278B2400F6944B6111 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Complete(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Complete_m22D90DCCA1970B8AA12787F43263BF16DC49C4CB(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKill_m58766FE1B51A4ACB4AADF618088B24CA8BB558BE (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Kill_m1D0A70349523060E7198D3256BC2DC555E422331(L_0, (bool)0, NULL);
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayById_mB1AD544F5E83C3E5EE30EC09F55E3034625DD1FB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Play_m2992F5D85F5BCA090173D20045950D6EA8CB8A6C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayAllById_m17BFE4D2AC992F441DA7DE57B06E1D8226F3422F (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_mE146D1154F52E49E529517BB36D29EADA337F5FF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* V_1 = NULL;
	{
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_0;
		L_0 = Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204(__this, Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0058;
	}

IL_0009:
	{
		// _playCount++;
		int32_t L_1 = __this->____playCount_52;
		__this->____playCount_52 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// DOTweenAnimation anim = anims[_playCount];
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_0;
		int32_t L_3 = __this->____playCount_52;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (anim != null && anim.tween != null && !anim.tween.IsPlaying() && !anim.tween.IsComplete()) {
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_8 = V_1;
		NullCheck(L_8);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_8)->___tween_18;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_10 = V_1;
		NullCheck(L_10);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_11 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_10)->___tween_18;
		bool L_12;
		L_12 = TweenExtensions_IsPlaying_m21C049B7FC765108ABCD80F6DA263F21A0AF7461(L_11, NULL);
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_13 = V_1;
		NullCheck(L_13);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_14 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_13)->___tween_18;
		bool L_15;
		L_15 = TweenExtensions_IsComplete_mCB9C775CFE13C8F43A5AD89A171D7A65DD1470AF(L_14, NULL);
		if (L_15)
		{
			goto IL_0058;
		}
	}
	{
		// anim.tween.Play();
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_16 = V_1;
		NullCheck(L_16);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_16)->___tween_18;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_18;
		L_18 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6(L_17, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		// break;
		return;
	}

IL_0058:
	{
		// while (_playCount < anims.Length - 1) {
		int32_t L_19 = __this->____playCount_52;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAndPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAndPlayNext_m72276B3E5704C60C1F3662786656A0CAA4A63756 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTween.Rewind(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_mD73DE9114E50F4BC68F8837D5E813A8862D757AD(L_0, (bool)1, NULL);
		// DOPlayNext();
		DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA(__this, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartById_m79A437D8087A41B5B1DB998B2D95ACBC06C92F34 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTween.Restart(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Restart_mEFA746FA37804A08FC41AFA595EFCAED0B9F959C(L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartAllById_mB4956E8A288B61CE7BFD1E091BE0F0E75B360E20 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_52 = (-1);
		// DOTween.Restart(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Restart_m68B555E809C1F3B88BE6CC613765FC38F407AA40(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTweenAnimation::GetTweens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* DOTweenAnimation_GetTweens_mFA2D6C6863BE615A2D33B8D0E97C5FA40DF9B4EF (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DOTween.TweensByTarget(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_1;
		L_1 = DOTween_TweensByTarget_m140CC38E6A8C742B1AEB86DAF401143C96CBD40E(L_0, (bool)0, NULL);
		return L_1;
	}
}
// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_m075A18B16BBDF65F7672023E472B6A92B8051F71 (Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string str = t.ToString();
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// int dotIndex = str.LastIndexOf(".");
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_1 = L_3;
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		V_0 = L_7;
	}

IL_0021:
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_8, _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C, NULL);
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_10, _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87, NULL);
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		V_0 = _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
	}

IL_0042:
	{
		// return (TargetType)Enum.Parse(typeof(TargetType), str);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		String_t* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_13, L_14, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, TargetType_tE4DB348E98FD1C36F140C2FC6345676DA92998F0_il2cpp_TypeInfo_var))));
	}
}
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (animationType == DOTweenAnimationType.Move) {
		int32_t L_0 = __this->___animationType_33;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(transform.position + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___endValueV3_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_6);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_1, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_8;
		L_8 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_1, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_7, (bool)1);
		return;
	}

IL_0037:
	{
		// } else if (animationType == DOTweenAnimationType.LocalMove) {
		int32_t L_9 = __this->___animationType_33;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_006d;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(transform.localPosition + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_10 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___endValueV3_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14;
		RuntimeObject* L_16 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_15);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_10, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_17;
		L_17 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_10, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_16, (bool)1);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation__ctor_m250D5B591D9CDF8F9F165FF1F355597D2E615715 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float duration = 1;
		__this->___duration_20 = (1.0f);
		// public Ease easeType = Ease.OutQuad;
		__this->___easeType_21 = 6;
		// public AnimationCurve easeCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___easeCurve_22 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easeCurve_22), (void*)L_5);
		// public int loops = 1;
		__this->___loops_24 = 1;
		// public string id = "";
		__this->___id_25 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_25), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool autoKill = true;
		__this->___autoKill_29 = (bool)1;
		// public bool isActive = true;
		__this->___isActive_30 = (bool)1;
		// public bool autoPlay = true;
		__this->___autoPlay_36 = (bool)1;
		// public Color endValueColor = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___endValueColor_41 = L_6;
		// public string endValueString = "";
		__this->___endValueString_42 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endValueString_42), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public Rect endValueRect = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___endValueRect_43 = L_7;
		// int _playCount = -1; // Used when calling DOPlayNext
		__this->____playCount_52 = (-1);
		ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328(__this, NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::<CreateTween>b__37_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_U3CCreateTweenU3Eb__37_0_m95FA03B2968100181E275C79D45DF9C36C47482F (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// .OnKill(()=> tween = null);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_18), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* GameControllers_get_Instance_m081390E97DCA5C1A1F4439C7721CCD0AE3CBBF18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameControllers Instance { get; set; }
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_0 = ((GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_StaticFields*)il2cpp_codegen_static_fields_for(GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* ListItem_get_Instance_mE2D15CEC61FBF7BBED01B389C29DCC610A2606C0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766* L_0 = ((ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_StaticFields*)il2cpp_codegen_static_fields_for(ListItem_t76A63EA6193CD9803DFF2DFA5E890EEB50D7B766_il2cpp_TypeInfo_var))->___instance_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_Instance_m0EF952CE1130121391E7D8E641C44DC6DBA73E8A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance;
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameControllers_set_Instance_m1275B83CB787B1D650D0DD5FEF21972FF4FFE503_inline (GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameControllers Instance { get; set; }
		GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F* L_0 = ___value0;
		((GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_StaticFields*)il2cpp_codegen_static_fields_for(GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_StaticFields*)il2cpp_codegen_static_fields_for(GameControllers_t4CAB418C5B77978B59AE5B6CF5287663311EB70F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TweenExtensions_IsActive_m0361F513A18C4128C4DBF88EF1E2F4752D97DF4A_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) 
{
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = L_0->___active_35;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
