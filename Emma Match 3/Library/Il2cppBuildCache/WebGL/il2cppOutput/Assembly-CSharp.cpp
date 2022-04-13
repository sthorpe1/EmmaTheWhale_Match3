#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<FlippedPieces>
struct List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<NodePiece>
struct List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Point>
struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002;
// System.Collections.Generic.List`1<QuestionAndAnswer>
struct List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// FlippedPieces[]
struct FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// NodePiece[]
struct NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Point[]
struct PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389;
// QuestionAndAnswer[]
struct QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ArrayLayout/rowData[]
struct rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1;
// Node[0...,0...]
struct NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// Answers
struct Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18;
// ArrayLayout
struct ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// BobbingAnimation
struct BobbingAnimation_t251E77C03571E702517233AC11998403319917AE;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// CrossSceneAudio
struct CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// FlippedPieces
struct FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.Grid
struct Grid_t22D0DEF54366450C35DA4B795F06534948AA0236;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// KilledPiece
struct KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// Match3
struct Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MouseTracker
struct MouseTracker_t824CC78321645E56FF8C03DD2E2802AB68C57053;
// MovePieces
struct MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001;
// Node
struct Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0;
// NodePiece
struct NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Pausing
struct Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD;
// Point
struct Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// QuestionAndAnswer
struct QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8;
// QuizManager
struct QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// ScoreManager
struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SetVolume
struct SetVolume_tCB0816C5DE61AD960843BAD6B1F17F26CC96644A;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral35D9ED53BBAA2266D8B0DC3F6D707E036D2D29B2;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2E1BB4D5697F46C81A5A87547F6F503A88AF0B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F96C71814E73292F536FF7D183927FD2296E4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral63D0716BC6E71CF8171A831003482E728DFDD739;
IL2CPP_EXTERN_C String_t* _stringLiteral6E6ECC895170B1AA59EAEB33A49B242A05B89869;
IL2CPP_EXTERN_C String_t* _stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral99BEAA2A937044CF412AC6E8C4A5A408610951E1;
IL2CPP_EXTERN_C String_t* _stringLiteral9C078ABC04CC661FAB2652993934BDCF2296DEC6;
IL2CPP_EXTERN_C String_t* _stringLiteralA07789DA4558DD0E191274AA549454CD90B7F1F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700;
IL2CPP_EXTERN_C String_t* _stringLiteralB87A12D6A3F0265650E06C7286F63B07343256F9;
IL2CPP_EXTERN_C String_t* _stringLiteralC4B71C4DA2EB613C4251565A7392B71D455D4FD8;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMatch3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D_m621EEDBAF0CAB6A837E2CCEA335A1E648C7287CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnswers_t0B72380C5532E123D155372BF2EDB151D5C67C18_m8C200EA4D125CEE3B675F40A102A49306E9E15E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3140430F5F472BDDD452B7758CCA0B1AC9C7F524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDA2DE2B43B279E250E5D53CA33034B7EAAD35B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m202FB1648D45283A6464130D165B2416E3201E0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m7B44EDE913271B41426A19535DE5E3D1565A0E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1D2CDF8BF1ABE065A5879CA2CCF38232187AAACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m45389A0A55B4B8753E8FED7C0C8F63D413DA2F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4BD860A3114BED9455F852184D6C3409AE5A1A8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC2418AE902BB9D58CE332F2B74FDCFC541BC930D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_mBCDE7995997A8446C08019423A3075DABEA928AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_m70D76CE53752C3D89A5B112DB0E56F74A75DDEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1;
struct NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<FlippedPieces>
struct List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A, ____items_1)); }
	inline FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453* get__items_1() const { return ____items_1; }
	inline FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A_StaticFields, ____emptyArray_5)); }
	inline FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FlippedPiecesU5BU5D_tAE604FA4D7FAFF7ADCBC44C6CA839FBBB0B1E453* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<NodePiece>
struct List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C, ____items_1)); }
	inline NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E* get__items_1() const { return ____items_1; }
	inline NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_StaticFields, ____emptyArray_5)); }
	inline NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NodePieceU5BU5D_tB096981E5310C8C62BA93BE4BD38A2F785F6163E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Point>
struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____items_1)); }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* get__items_1() const { return ____items_1; }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_StaticFields, ____emptyArray_5)); }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<QuestionAndAnswer>
struct List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF, ____items_1)); }
	inline QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD* get__items_1() const { return ____items_1; }
	inline QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF_StaticFields, ____emptyArray_5)); }
	inline QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QuestionAndAnswerU5BU5D_t8EA81E0DF43BFD496D7C044D8B07F8E480D819FD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// ArrayLayout
struct ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE  : public RuntimeObject
{
public:
	// UnityEngine.Grid ArrayLayout::grid
	Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 * ___grid_0;
	// ArrayLayout/rowData[] ArrayLayout::rows
	rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1* ___rows_1;

public:
	inline static int32_t get_offset_of_grid_0() { return static_cast<int32_t>(offsetof(ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE, ___grid_0)); }
	inline Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 * get_grid_0() const { return ___grid_0; }
	inline Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 ** get_address_of_grid_0() { return &___grid_0; }
	inline void set_grid_0(Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 * value)
	{
		___grid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_0), (void*)value);
	}

	inline static int32_t get_offset_of_rows_1() { return static_cast<int32_t>(offsetof(ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE, ___rows_1)); }
	inline rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1* get_rows_1() const { return ___rows_1; }
	inline rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1** get_address_of_rows_1() { return &___rows_1; }
	inline void set_rows_1(rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1* value)
	{
		___rows_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rows_1), (void*)value);
	}
};


// FlippedPieces
struct FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E  : public RuntimeObject
{
public:
	// NodePiece FlippedPieces::one
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___one_0;
	// NodePiece FlippedPieces::two
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___two_1;

public:
	inline static int32_t get_offset_of_one_0() { return static_cast<int32_t>(offsetof(FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E, ___one_0)); }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * get_one_0() const { return ___one_0; }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 ** get_address_of_one_0() { return &___one_0; }
	inline void set_one_0(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * value)
	{
		___one_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___one_0), (void*)value);
	}

	inline static int32_t get_offset_of_two_1() { return static_cast<int32_t>(offsetof(FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E, ___two_1)); }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * get_two_1() const { return ___two_1; }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 ** get_address_of_two_1() { return &___two_1; }
	inline void set_two_1(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * value)
	{
		___two_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___two_1), (void*)value);
	}
};


// Node
struct Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0  : public RuntimeObject
{
public:
	// System.Int32 Node::value
	int32_t ___value_0;
	// Point Node::index
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___index_1;
	// NodePiece Node::piece
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___piece_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___index_1)); }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * get_index_1() const { return ___index_1; }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 ** get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * value)
	{
		___index_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___index_1), (void*)value);
	}

	inline static int32_t get_offset_of_piece_2() { return static_cast<int32_t>(offsetof(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0, ___piece_2)); }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * get_piece_2() const { return ___piece_2; }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 ** get_address_of_piece_2() { return &___piece_2; }
	inline void set_piece_2(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * value)
	{
		___piece_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___piece_2), (void*)value);
	}
};


// Point
struct Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28  : public RuntimeObject
{
public:
	// System.Int32 Point::x
	int32_t ___x_0;
	// System.Int32 Point::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};


// QuestionAndAnswer
struct QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8  : public RuntimeObject
{
public:
	// System.String QuestionAndAnswer::question
	String_t* ___question_0;
	// System.String[] QuestionAndAnswer::answer
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___answer_1;
	// System.Int32 QuestionAndAnswer::correctAnswer
	int32_t ___correctAnswer_2;

public:
	inline static int32_t get_offset_of_question_0() { return static_cast<int32_t>(offsetof(QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8, ___question_0)); }
	inline String_t* get_question_0() const { return ___question_0; }
	inline String_t** get_address_of_question_0() { return &___question_0; }
	inline void set_question_0(String_t* value)
	{
		___question_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___question_0), (void*)value);
	}

	inline static int32_t get_offset_of_answer_1() { return static_cast<int32_t>(offsetof(QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8, ___answer_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_answer_1() const { return ___answer_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_answer_1() { return &___answer_1; }
	inline void set_answer_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___answer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___answer_1), (void*)value);
	}

	inline static int32_t get_offset_of_correctAnswer_2() { return static_cast<int32_t>(offsetof(QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8, ___correctAnswer_2)); }
	inline int32_t get_correctAnswer_2() const { return ___correctAnswer_2; }
	inline int32_t* get_address_of_correctAnswer_2() { return &___correctAnswer_2; }
	inline void set_correctAnswer_2(int32_t value)
	{
		___correctAnswer_2 = value;
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
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

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Point>
struct Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___list_0)); }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * get_list_0() const { return ___list_0; }
	inline List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F, ___current_3)); }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * get_current_3() const { return ___current_3; }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// ArrayLayout/rowData
struct rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26 
{
public:
	// System.Boolean[] ArrayLayout/rowData::row
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___row_0;

public:
	inline static int32_t get_offset_of_row_0() { return static_cast<int32_t>(offsetof(rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26, ___row_0)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_row_0() const { return ___row_0; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_row_0() { return &___row_0; }
	inline void set_row_0(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___row_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___row_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of ArrayLayout/rowData
struct rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_pinvoke
{
	int32_t* ___row_0;
};
// Native definition for COM marshalling of ArrayLayout/rowData
struct rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_com
{
	int32_t* ___row_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
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
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Answers
struct Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Answers::isCorrect
	bool ___isCorrect_4;
	// QuizManager Answers::quizManager
	QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * ___quizManager_5;

public:
	inline static int32_t get_offset_of_isCorrect_4() { return static_cast<int32_t>(offsetof(Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18, ___isCorrect_4)); }
	inline bool get_isCorrect_4() const { return ___isCorrect_4; }
	inline bool* get_address_of_isCorrect_4() { return &___isCorrect_4; }
	inline void set_isCorrect_4(bool value)
	{
		___isCorrect_4 = value;
	}

	inline static int32_t get_offset_of_quizManager_5() { return static_cast<int32_t>(offsetof(Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18, ___quizManager_5)); }
	inline QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * get_quizManager_5() const { return ___quizManager_5; }
	inline QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B ** get_address_of_quizManager_5() { return &___quizManager_5; }
	inline void set_quizManager_5(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * value)
	{
		___quizManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizManager_5), (void*)value);
	}
};


// BobbingAnimation
struct BobbingAnimation_t251E77C03571E702517233AC11998403319917AE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AnimationCurve BobbingAnimation::bobCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___bobCurve_4;

public:
	inline static int32_t get_offset_of_bobCurve_4() { return static_cast<int32_t>(offsetof(BobbingAnimation_t251E77C03571E702517233AC11998403319917AE, ___bobCurve_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_bobCurve_4() const { return ___bobCurve_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_bobCurve_4() { return &___bobCurve_4; }
	inline void set_bobCurve_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___bobCurve_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bobCurve_4), (void*)value);
	}
};


// CrossSceneAudio
struct CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields
{
public:
	// CrossSceneAudio CrossSceneAudio::_instance
	CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields, ____instance_4)); }
	inline CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * get__instance_4() const { return ____instance_4; }
	inline CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// KilledPiece
struct KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean KilledPiece::falling
	bool ___falling_4;
	// System.Single KilledPiece::speed
	float ___speed_5;
	// System.Single KilledPiece::gravity
	float ___gravity_6;
	// UnityEngine.Vector2 KilledPiece::moveDir
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___moveDir_7;
	// UnityEngine.RectTransform KilledPiece::rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect_8;
	// UnityEngine.UI.Image KilledPiece::img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img_9;

public:
	inline static int32_t get_offset_of_falling_4() { return static_cast<int32_t>(offsetof(KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A, ___falling_4)); }
	inline bool get_falling_4() const { return ___falling_4; }
	inline bool* get_address_of_falling_4() { return &___falling_4; }
	inline void set_falling_4(bool value)
	{
		___falling_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_gravity_6() { return static_cast<int32_t>(offsetof(KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A, ___gravity_6)); }
	inline float get_gravity_6() const { return ___gravity_6; }
	inline float* get_address_of_gravity_6() { return &___gravity_6; }
	inline void set_gravity_6(float value)
	{
		___gravity_6 = value;
	}

	inline static int32_t get_offset_of_moveDir_7() { return static_cast<int32_t>(offsetof(KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A, ___moveDir_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_moveDir_7() const { return ___moveDir_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_moveDir_7() { return &___moveDir_7; }
	inline void set_moveDir_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___moveDir_7 = value;
	}

	inline static int32_t get_offset_of_rect_8() { return static_cast<int32_t>(offsetof(KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A, ___rect_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rect_8() const { return ___rect_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rect_8() { return &___rect_8; }
	inline void set_rect_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rect_8), (void*)value);
	}

	inline static int32_t get_offset_of_img_9() { return static_cast<int32_t>(offsetof(KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A, ___img_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img_9() const { return ___img_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img_9() { return &___img_9; }
	inline void set_img_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img_9), (void*)value);
	}
};


// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Match3
struct Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ArrayLayout Match3::boardLayout
	ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE * ___boardLayout_4;
	// ScoreManager Match3::scoreManager
	ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * ___scoreManager_5;
	// UnityEngine.Sprite[] Match3::pieces
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___pieces_6;
	// UnityEngine.RectTransform Match3::gameBoard
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___gameBoard_7;
	// UnityEngine.GameObject Match3::nodePiece
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nodePiece_8;
	// System.Int32 Match3::width
	int32_t ___width_9;
	// System.Int32 Match3::height
	int32_t ___height_10;
	// System.Int32[] Match3::fills
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fills_11;
	// Node[0...,0...] Match3::board
	NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* ___board_12;
	// System.Collections.Generic.List`1<NodePiece> Match3::update
	List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * ___update_13;
	// System.Collections.Generic.List`1<FlippedPieces> Match3::flipped
	List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * ___flipped_14;
	// System.Collections.Generic.List`1<NodePiece> Match3::dead
	List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * ___dead_15;
	// System.Random Match3::random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random_16;

public:
	inline static int32_t get_offset_of_boardLayout_4() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___boardLayout_4)); }
	inline ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE * get_boardLayout_4() const { return ___boardLayout_4; }
	inline ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE ** get_address_of_boardLayout_4() { return &___boardLayout_4; }
	inline void set_boardLayout_4(ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE * value)
	{
		___boardLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoreManager_5() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___scoreManager_5)); }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * get_scoreManager_5() const { return ___scoreManager_5; }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 ** get_address_of_scoreManager_5() { return &___scoreManager_5; }
	inline void set_scoreManager_5(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * value)
	{
		___scoreManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_pieces_6() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___pieces_6)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_pieces_6() const { return ___pieces_6; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_pieces_6() { return &___pieces_6; }
	inline void set_pieces_6(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___pieces_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pieces_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameBoard_7() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___gameBoard_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_gameBoard_7() const { return ___gameBoard_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_gameBoard_7() { return &___gameBoard_7; }
	inline void set_gameBoard_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___gameBoard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameBoard_7), (void*)value);
	}

	inline static int32_t get_offset_of_nodePiece_8() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___nodePiece_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nodePiece_8() const { return ___nodePiece_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nodePiece_8() { return &___nodePiece_8; }
	inline void set_nodePiece_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nodePiece_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodePiece_8), (void*)value);
	}

	inline static int32_t get_offset_of_width_9() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___width_9)); }
	inline int32_t get_width_9() const { return ___width_9; }
	inline int32_t* get_address_of_width_9() { return &___width_9; }
	inline void set_width_9(int32_t value)
	{
		___width_9 = value;
	}

	inline static int32_t get_offset_of_height_10() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___height_10)); }
	inline int32_t get_height_10() const { return ___height_10; }
	inline int32_t* get_address_of_height_10() { return &___height_10; }
	inline void set_height_10(int32_t value)
	{
		___height_10 = value;
	}

	inline static int32_t get_offset_of_fills_11() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___fills_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fills_11() const { return ___fills_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fills_11() { return &___fills_11; }
	inline void set_fills_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fills_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fills_11), (void*)value);
	}

	inline static int32_t get_offset_of_board_12() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___board_12)); }
	inline NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* get_board_12() const { return ___board_12; }
	inline NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5** get_address_of_board_12() { return &___board_12; }
	inline void set_board_12(NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* value)
	{
		___board_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_12), (void*)value);
	}

	inline static int32_t get_offset_of_update_13() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___update_13)); }
	inline List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * get_update_13() const { return ___update_13; }
	inline List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C ** get_address_of_update_13() { return &___update_13; }
	inline void set_update_13(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * value)
	{
		___update_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___update_13), (void*)value);
	}

	inline static int32_t get_offset_of_flipped_14() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___flipped_14)); }
	inline List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * get_flipped_14() const { return ___flipped_14; }
	inline List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A ** get_address_of_flipped_14() { return &___flipped_14; }
	inline void set_flipped_14(List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * value)
	{
		___flipped_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipped_14), (void*)value);
	}

	inline static int32_t get_offset_of_dead_15() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___dead_15)); }
	inline List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * get_dead_15() const { return ___dead_15; }
	inline List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C ** get_address_of_dead_15() { return &___dead_15; }
	inline void set_dead_15(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * value)
	{
		___dead_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dead_15), (void*)value);
	}

	inline static int32_t get_offset_of_random_16() { return static_cast<int32_t>(offsetof(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D, ___random_16)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_random_16() const { return ___random_16; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_random_16() { return &___random_16; }
	inline void set_random_16(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___random_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_16), (void*)value);
	}
};


// MouseTracker
struct MouseTracker_t824CC78321645E56FF8C03DD2E2802AB68C57053  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 MouseTracker::mousePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePosition_4;
	// System.Single MouseTracker::moveSpeed
	float ___moveSpeed_5;

public:
	inline static int32_t get_offset_of_mousePosition_4() { return static_cast<int32_t>(offsetof(MouseTracker_t824CC78321645E56FF8C03DD2E2802AB68C57053, ___mousePosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mousePosition_4() const { return ___mousePosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mousePosition_4() { return &___mousePosition_4; }
	inline void set_mousePosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mousePosition_4 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(MouseTracker_t824CC78321645E56FF8C03DD2E2802AB68C57053, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}
};


// MovePieces
struct MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Match3 MovePieces::game
	Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * ___game_5;
	// NodePiece MovePieces::moving
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___moving_6;
	// Point MovePieces::newIndex
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___newIndex_7;
	// UnityEngine.Vector2 MovePieces::mouseStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mouseStart_8;

public:
	inline static int32_t get_offset_of_game_5() { return static_cast<int32_t>(offsetof(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001, ___game_5)); }
	inline Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * get_game_5() const { return ___game_5; }
	inline Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D ** get_address_of_game_5() { return &___game_5; }
	inline void set_game_5(Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * value)
	{
		___game_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___game_5), (void*)value);
	}

	inline static int32_t get_offset_of_moving_6() { return static_cast<int32_t>(offsetof(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001, ___moving_6)); }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * get_moving_6() const { return ___moving_6; }
	inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 ** get_address_of_moving_6() { return &___moving_6; }
	inline void set_moving_6(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * value)
	{
		___moving_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moving_6), (void*)value);
	}

	inline static int32_t get_offset_of_newIndex_7() { return static_cast<int32_t>(offsetof(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001, ___newIndex_7)); }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * get_newIndex_7() const { return ___newIndex_7; }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 ** get_address_of_newIndex_7() { return &___newIndex_7; }
	inline void set_newIndex_7(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * value)
	{
		___newIndex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newIndex_7), (void*)value);
	}

	inline static int32_t get_offset_of_mouseStart_8() { return static_cast<int32_t>(offsetof(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001, ___mouseStart_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mouseStart_8() const { return ___mouseStart_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mouseStart_8() { return &___mouseStart_8; }
	inline void set_mouseStart_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mouseStart_8 = value;
	}
};

struct MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_StaticFields
{
public:
	// MovePieces MovePieces::instance
	MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_StaticFields, ___instance_4)); }
	inline MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * get_instance_4() const { return ___instance_4; }
	inline MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// NodePiece
struct NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 NodePiece::value
	int32_t ___value_4;
	// Point NodePiece::index
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___index_5;
	// UnityEngine.Vector2 NodePiece::pos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos_6;
	// UnityEngine.RectTransform NodePiece::rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect_7;
	// System.Boolean NodePiece::updating
	bool ___updating_8;
	// UnityEngine.UI.Image NodePiece::img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img_9;

public:
	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6, ___index_5)); }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * get_index_5() const { return ___index_5; }
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 ** get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * value)
	{
		___index_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___index_5), (void*)value);
	}

	inline static int32_t get_offset_of_pos_6() { return static_cast<int32_t>(offsetof(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6, ___pos_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pos_6() const { return ___pos_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pos_6() { return &___pos_6; }
	inline void set_pos_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pos_6 = value;
	}

	inline static int32_t get_offset_of_rect_7() { return static_cast<int32_t>(offsetof(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6, ___rect_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rect_7() const { return ___rect_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rect_7() { return &___rect_7; }
	inline void set_rect_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rect_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rect_7), (void*)value);
	}

	inline static int32_t get_offset_of_updating_8() { return static_cast<int32_t>(offsetof(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6, ___updating_8)); }
	inline bool get_updating_8() const { return ___updating_8; }
	inline bool* get_address_of_updating_8() { return &___updating_8; }
	inline void set_updating_8(bool value)
	{
		___updating_8 = value;
	}

	inline static int32_t get_offset_of_img_9() { return static_cast<int32_t>(offsetof(NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6, ___img_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img_9() const { return ___img_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img_9() { return &___img_9; }
	inline void set_img_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img_9), (void*)value);
	}
};


// Pausing
struct Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Pausing::pauseMenuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenuUI_4;

public:
	inline static int32_t get_offset_of_pauseMenuUI_4() { return static_cast<int32_t>(offsetof(Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD, ___pauseMenuUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenuUI_4() const { return ___pauseMenuUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenuUI_4() { return &___pauseMenuUI_4; }
	inline void set_pauseMenuUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenuUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuUI_4), (void*)value);
	}
};


// QuizManager
struct QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<QuestionAndAnswer> QuizManager::qna
	List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * ___qna_4;
	// UnityEngine.GameObject[] QuizManager::option
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___option_5;
	// System.Int32 QuizManager::currentQuestion
	int32_t ___currentQuestion_6;
	// UnityEngine.GameObject QuizManager::quizPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___quizPanel_7;
	// UnityEngine.GameObject QuizManager::activationButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___activationButton_8;
	// UnityEngine.GameObject QuizManager::quizScorePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___quizScorePanel_9;
	// UnityEngine.UI.Text QuizManager::questionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___questionText_10;
	// UnityEngine.UI.Text QuizManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_11;
	// System.Int32 QuizManager::answeredQuestion
	int32_t ___answeredQuestion_12;
	// System.Int32 QuizManager::score
	int32_t ___score_13;

public:
	inline static int32_t get_offset_of_qna_4() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___qna_4)); }
	inline List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * get_qna_4() const { return ___qna_4; }
	inline List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF ** get_address_of_qna_4() { return &___qna_4; }
	inline void set_qna_4(List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * value)
	{
		___qna_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qna_4), (void*)value);
	}

	inline static int32_t get_offset_of_option_5() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___option_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_option_5() const { return ___option_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_option_5() { return &___option_5; }
	inline void set_option_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___option_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___option_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentQuestion_6() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___currentQuestion_6)); }
	inline int32_t get_currentQuestion_6() const { return ___currentQuestion_6; }
	inline int32_t* get_address_of_currentQuestion_6() { return &___currentQuestion_6; }
	inline void set_currentQuestion_6(int32_t value)
	{
		___currentQuestion_6 = value;
	}

	inline static int32_t get_offset_of_quizPanel_7() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___quizPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_quizPanel_7() const { return ___quizPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_quizPanel_7() { return &___quizPanel_7; }
	inline void set_quizPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___quizPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_activationButton_8() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___activationButton_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_activationButton_8() const { return ___activationButton_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_activationButton_8() { return &___activationButton_8; }
	inline void set_activationButton_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___activationButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_quizScorePanel_9() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___quizScorePanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_quizScorePanel_9() const { return ___quizScorePanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_quizScorePanel_9() { return &___quizScorePanel_9; }
	inline void set_quizScorePanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___quizScorePanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizScorePanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_questionText_10() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___questionText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_questionText_10() const { return ___questionText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_questionText_10() { return &___questionText_10; }
	inline void set_questionText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___questionText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questionText_10), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_11() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___scoreText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_11() const { return ___scoreText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_11() { return &___scoreText_11; }
	inline void set_scoreText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_11), (void*)value);
	}

	inline static int32_t get_offset_of_answeredQuestion_12() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___answeredQuestion_12)); }
	inline int32_t get_answeredQuestion_12() const { return ___answeredQuestion_12; }
	inline int32_t* get_address_of_answeredQuestion_12() { return &___answeredQuestion_12; }
	inline void set_answeredQuestion_12(int32_t value)
	{
		___answeredQuestion_12 = value;
	}

	inline static int32_t get_offset_of_score_13() { return static_cast<int32_t>(offsetof(QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B, ___score_13)); }
	inline int32_t get_score_13() const { return ___score_13; }
	inline int32_t* get_address_of_score_13() { return &___score_13; }
	inline void set_score_13(int32_t value)
	{
		___score_13 = value;
	}
};


// ScoreManager
struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreManager::TextScoreUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TextScoreUI_4;
	// System.Int32 ScoreManager::_scr
	int32_t ____scr_5;

public:
	inline static int32_t get_offset_of_TextScoreUI_4() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ___TextScoreUI_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TextScoreUI_4() const { return ___TextScoreUI_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TextScoreUI_4() { return &___TextScoreUI_4; }
	inline void set_TextScoreUI_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TextScoreUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextScoreUI_4), (void*)value);
	}

	inline static int32_t get_offset_of__scr_5() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ____scr_5)); }
	inline int32_t get__scr_5() const { return ____scr_5; }
	inline int32_t* get_address_of__scr_5() { return &____scr_5; }
	inline void set__scr_5(int32_t value)
	{
		____scr_5 = value;
	}
};


// SetVolume
struct SetVolume_tCB0816C5DE61AD960843BAD6B1F17F26CC96644A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Audio.AudioMixer SetVolume::mixer
	AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * ___mixer_4;
	// UnityEngine.UI.Slider SetVolume::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_5;

public:
	inline static int32_t get_offset_of_mixer_4() { return static_cast<int32_t>(offsetof(SetVolume_tCB0816C5DE61AD960843BAD6B1F17F26CC96644A, ___mixer_4)); }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * get_mixer_4() const { return ___mixer_4; }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 ** get_address_of_mixer_4() { return &___mixer_4; }
	inline void set_mixer_4(AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * value)
	{
		___mixer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixer_4), (void*)value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(SetVolume_tCB0816C5DE61AD960843BAD6B1F17F26CC96644A, ___slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_5() const { return ___slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}
};


// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Timer::TimeLabelUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TimeLabelUI_4;
	// System.Single Timer::timeRemaining
	float ___timeRemaining_5;
	// System.Boolean Timer::timerRunning
	bool ___timerRunning_6;
	// UnityEngine.GameObject Timer::gameOverMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverMenu_7;
	// UnityEngine.GameObject Timer::gameActiveMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameActiveMenu_8;
	// UnityEngine.GameObject Timer::quizPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___quizPanel_9;
	// UnityEngine.UI.Text Timer::TextScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TextScore_10;
	// UnityEngine.UI.Text Timer::FinalScore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FinalScore_11;
	// ScoreManager Timer::scoreManager
	ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * ___scoreManager_12;

public:
	inline static int32_t get_offset_of_TimeLabelUI_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___TimeLabelUI_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TimeLabelUI_4() const { return ___TimeLabelUI_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TimeLabelUI_4() { return &___TimeLabelUI_4; }
	inline void set_TimeLabelUI_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TimeLabelUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeLabelUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeRemaining_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___timeRemaining_5)); }
	inline float get_timeRemaining_5() const { return ___timeRemaining_5; }
	inline float* get_address_of_timeRemaining_5() { return &___timeRemaining_5; }
	inline void set_timeRemaining_5(float value)
	{
		___timeRemaining_5 = value;
	}

	inline static int32_t get_offset_of_timerRunning_6() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___timerRunning_6)); }
	inline bool get_timerRunning_6() const { return ___timerRunning_6; }
	inline bool* get_address_of_timerRunning_6() { return &___timerRunning_6; }
	inline void set_timerRunning_6(bool value)
	{
		___timerRunning_6 = value;
	}

	inline static int32_t get_offset_of_gameOverMenu_7() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___gameOverMenu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverMenu_7() const { return ___gameOverMenu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverMenu_7() { return &___gameOverMenu_7; }
	inline void set_gameOverMenu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverMenu_7), (void*)value);
	}

	inline static int32_t get_offset_of_gameActiveMenu_8() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___gameActiveMenu_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameActiveMenu_8() const { return ___gameActiveMenu_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameActiveMenu_8() { return &___gameActiveMenu_8; }
	inline void set_gameActiveMenu_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameActiveMenu_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameActiveMenu_8), (void*)value);
	}

	inline static int32_t get_offset_of_quizPanel_9() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___quizPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_quizPanel_9() const { return ___quizPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_quizPanel_9() { return &___quizPanel_9; }
	inline void set_quizPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___quizPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quizPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_TextScore_10() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___TextScore_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TextScore_10() const { return ___TextScore_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TextScore_10() { return &___TextScore_10; }
	inline void set_TextScore_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TextScore_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextScore_10), (void*)value);
	}

	inline static int32_t get_offset_of_FinalScore_11() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___FinalScore_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FinalScore_11() const { return ___FinalScore_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FinalScore_11() { return &___FinalScore_11; }
	inline void set_FinalScore_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FinalScore_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FinalScore_11), (void*)value);
	}

	inline static int32_t get_offset_of_scoreManager_12() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___scoreManager_12)); }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * get_scoreManager_12() const { return ___scoreManager_12; }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 ** get_address_of_scoreManager_12() { return &___scoreManager_12; }
	inline void set_scoreManager_12(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * value)
	{
		___scoreManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreManager_12), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
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

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ArrayLayout/rowData[]
struct rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26  m_Items[1];

public:
	inline rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___row_0), (void*)NULL);
	}
	inline rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___row_0), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Node[0...,0...]
struct NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * m_Items[1];

public:
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// Point[]
struct PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * m_Items[1];

public:
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void QuizManager::Correct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_Correct_m82D6E405D30CBDBA195C391D307BFF0DC37642AF (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method);
// System.Void QuizManager::Incorrect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_Incorrect_m09C67436C9C2CFFEBE5778E4D7B3835FCDF8B837 (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<CrossSceneAudio>()
inline CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * Object_FindObjectOfType_TisCrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_mBCDE7995997A8446C08019423A3075DABEA928AD (const RuntimeMethod* method)
{
	return ((  CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void Match3::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_StartGame_m376EE04F25D57F00020A88C0F1880025B2F02627 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NodePiece>::.ctor()
inline void List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<NodePiece>::get_Item(System.Int32)
inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_inline (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * (*) (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean NodePiece::UpdatePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodePiece_UpdatePiece_m6F5E3DAE90A009FD24B72319472D606DA5C8F2BC (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NodePiece>::Add(!0)
inline void List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<NodePiece>::get_Count()
inline int32_t List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_inline (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// FlippedPieces Match3::getFlipped(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * Match3_getFlipped_m21B7D677FB05A8988CE170C886598ED224B94311 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Point> Match3::isConnected(Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Match3_isConnected_m85FD345D8B0B14F74964D95FD781A040539FC227 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, bool ___main1, const RuntimeMethod* method);
// NodePiece FlippedPieces::getOtherPiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * FlippedPieces_getOtherPiece_mA3006024E52147F69372588F162FD0B1895B9C89 (FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___p0, const RuntimeMethod* method);
// System.Void Match3::AddPoints(System.Collections.Generic.List`1<Point>&,System.Collections.Generic.List`1<Point>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_AddPoints_m727865BF9D21AA5EC8A5BEF3CB457B4D20058121 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** ___points0, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___add1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Point>::get_Count()
inline int32_t List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Match3::FlipPieces(Point,Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_FlipPieces_mFA04F415415B132F7875EEFF58B448063E4D7088 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___one0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___two1, bool ___main2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Point>::GetEnumerator()
inline Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6 (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Point>::get_Current()
inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F * __this, const RuntimeMethod* method)
{
	return ((  Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * (*) (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Int32 ScoreManager::get_Score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method);
// System.Void ScoreManager::set_Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method);
// Node Match3::getNodeAtPoint(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method);
// NodePiece Node::getPiece()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * Node_getPiece_mBC358D864F818F231309EA0E1768A7452C10D752_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Node::SetPiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Point>::MoveNext()
inline bool Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591 (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Point>::Dispose()
inline void Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137 (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Match3::ApplyGravityToBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_ApplyGravityToBoard_m30370D327D4E32450393729A2AF3B234B1D00CBB (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<FlippedPieces>::Remove(!0)
inline bool List_1_Remove_m202FB1648D45283A6464130D165B2416E3201E0E (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * __this, FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A *, FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<NodePiece>::Remove(!0)
inline bool List_1_Remove_m7B44EDE913271B41426A19535DE5E3D1565A0E48 (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___nx0, int32_t ___ny1, const RuntimeMethod* method);
// System.Int32 Match3::getValueAtPoint(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method);
// System.Int32 Match3::fillPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match3_fillPiece_m2099491433F04072016417DE99C5BED7F49962E6 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Match3::getPositionFromPoint(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Match3_getPositionFromPoint_mCEDF0D6F128E62A827F6DFBCC3CC8D075A264BD9 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NodePiece>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDA2DE2B43B279E250E5D53CA33034B7EAAD35B49 (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<NodePiece>()
inline NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void NodePiece::Initialize(System.Int32,Point,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_Initialize_m77C6E362D5C53475C17254BFB53F9EEC28E48870 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, int32_t ___v0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___piece2, const RuntimeMethod* method);
// System.Void Match3::ResetPiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_ResetPiece_mF97D173780B4F33A80D3E7E6E2E347090B45922F (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___piece0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<FlippedPieces>::get_Item(System.Int32)
inline FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * List_1_get_Item_mC2418AE902BB9D58CE332F2B74FDCFC541BC930D_inline (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * (*) (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<FlippedPieces>::get_Count()
inline int32_t List_1_get_Count_m4BD860A3114BED9455F852184D6C3409AE5A1A8D_inline (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String Match3::getRandomSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Match3_getRandomSeed_m5431D2E885FE4A0B5719355D4DE7E1893671DD9F (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, int32_t ___Seed0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlippedPieces>::.ctor()
inline void List_1__ctor_m1D2CDF8BF1ABE065A5879CA2CCF38232187AAACC (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Match3::InitializeBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_InitializeBoard_m51F5B21FC76F7C5261C80702494CE6FAB24C10A3 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method);
// System.Void Match3::VerifyBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_VerifyBoard_m1D97574B256D3C984F26C9D2B04D007C81211269 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method);
// System.Void Match3::InstantiateBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_InstantiateBoard_mDDF1BF6BB734D20D88914F055CC3A1D2F7E2756D (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<ScoreManager>()
inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * Object_FindObjectOfType_TisScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_m70D76CE53752C3D89A5B112DB0E56F74A75DDEE9 (const RuntimeMethod* method)
{
	return ((  ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void Node::.ctor(System.Int32,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mEA612FD366862326437830360A3B49B6788ECC07 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___v0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___i1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 Match3::newValue(System.Collections.Generic.List`1<System.Int32>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match3_newValue_m16F9E6FA7D6EB8808F5AF5A1A6FB21252A5EC577 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___remove0, const RuntimeMethod* method);
// System.Void Match3::setValueAtPoint(Point,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_setValueAtPoint_m9FFDAD0F81DB45C9E05C1E4AE0571727EED7CB4A (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, int32_t ___v1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void NodePiece::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_ResetPosition_mF13D369ED064809DFCE47B3D470066212354720A (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, const RuntimeMethod* method);
// System.Void FlippedPieces::.ctor(NodePiece,NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlippedPieces__ctor_m60F9EB7BFA88E9A021FF61B47ED89709D99DCB1C (FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___o0, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___t1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<FlippedPieces>::Add(!0)
inline void List_1_Add_m3140430F5F472BDDD452B7758CCA0B1AC9C7F524 (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * __this, FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A *, FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Point>::.ctor()
inline void List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// Point Point::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_up_mAD4FD2B6CD9CD5B487A7FE19EF51188FAD3E9496 (const RuntimeMethod* method);
// Point Point::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_right_mB42EF5AE23F568907E534A2D798E06B70E4195BF (const RuntimeMethod* method);
// Point Point::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_down_m760C2FF5EFA02D936C939F9537EC3DEDF88C3B17 (const RuntimeMethod* method);
// Point Point::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_left_mF30134CA4F7005B9D3939FE0A467DE2B3C7B48FE (const RuntimeMethod* method);
// Point Point::mult(Point,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_mult_mAD744E0D62A9A54F0A46FFFA64011C4ABDDE2D3B (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, int32_t ___m1, const RuntimeMethod* method);
// Point Point::add(Point,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_add_mD3586207981D50B2D8951E7948944ED5559AB155 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___o1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Point>::Add(!0)
inline void List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7 (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<Point>::get_Item(System.Int32)
inline Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * (*) (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean Point::Equals(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mA46526C0991295BBA45EA8C20419CAE9D49A3E1A (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Match3>()
inline Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * Component_GetComponent_TisMatch3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D_m621EEDBAF0CAB6A837E2CCEA335A1E648C7287CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// Point Point::clone(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_clone_m7DEDD6B446980B93151FBF5A46100FC13C8C1F4B (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method);
// Point Point::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_zero_m0F0A4F0E0772FF857408D21424B38E5C084DB9FE (const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void Point::add(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_add_mD76F8258FE0364E5EE2087B5E783F53BF06425BC (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method);
// UnityEngine.Vector2 Point::ToVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Point_ToVector_m20E3EB5C6E141984E667913100C86F9721BAAABB (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method);
// System.Void NodePiece::MovePositionTo(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_MovePositionTo_m567275E1BB4DB44DA3686EC32F9EB417CE0DC686 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___move0, const RuntimeMethod* method);
// System.Void NodePiece::SetIndex(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_SetIndex_mBF8CA3397CDC229D3FB3334A542EAAF6359231F6 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method);
// System.Void NodePiece::UpdateName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_UpdateName_m60A0143E9F2B20D51B26C5D4440ED46D677B126F (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void MovePieces::MovePiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces_MovePiece_mE10D746BE09964368DF0F679DA910A128353A7B0 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___piece0, const RuntimeMethod* method);
// System.Void MovePieces::DropPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces_DropPiece_mE13EA441ECF8511102EFE852E267D8F54CD13FD5 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void QuizManager::GenerateQuestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_GenerateQuestion_m682455D0862EC0ED4FBFC161DCA58583CA328D6D (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<QuestionAndAnswer>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823 (List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void QuizManager::QuizOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_QuizOver_mBA93171FFC59BDC9F1F58B08240E3199B8447077 (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Answers>()
inline Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18 * GameObject_GetComponent_TisAnswers_t0B72380C5532E123D155372BF2EDB151D5C67C18_m8C200EA4D125CEE3B675F40A102A49306E9E15E4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<QuestionAndAnswer>::get_Item(System.Int32)
inline QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8 * List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_inline (List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8 * (*) (List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<QuestionAndAnswer>::get_Count()
inline int32_t List_1_get_Count_m45389A0A55B4B8753E8FED7C0C8F63D413DA2F7B_inline (List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void QuizManager::SetAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_SetAnswer_m9004F97004BBFCAE265DEDC5BCA629AEFAD63B10 (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mCF1F69BE283197090AB08158CD05995136A1EBCF (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Answers::Answer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Answers_Answer_mD6AF82894509059A812CAD8889764F292773B690 (Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99BEAA2A937044CF412AC6E8C4A5A408610951E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07789DA4558DD0E191274AA549454CD90B7F1F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCorrect)
		bool L_0 = __this->get_isCorrect_4();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.Log("Correct Answer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA07789DA4558DD0E191274AA549454CD90B7F1F8, /*hidden argument*/NULL);
		// quizManager.Correct();
		QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * L_1 = __this->get_quizManager_5();
		QuizManager_Correct_m82D6E405D30CBDBA195C391D307BFF0DC37642AF(L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// Debug.Log("Incorrect Answer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral99BEAA2A937044CF412AC6E8C4A5A408610951E1, /*hidden argument*/NULL);
		// quizManager.Incorrect();
		QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * L_2 = __this->get_quizManager_5();
		QuizManager_Incorrect_m09C67436C9C2CFFEBE5778E4D7B3835FCDF8B837(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Answers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Answers__ctor_mA0FEABC20C91850BF7BFECA11305FBFE76DA0CE4 (Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ArrayLayout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayLayout__ctor_mC78642401E27E426D685BC1129F956211AD5B7CB (ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public rowData[] rows = new rowData[14]; //Grid of 7x7
		rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1* L_0 = (rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1*)(rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1*)SZArrayNew(rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		__this->set_rows_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void BobbingAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BobbingAnimation_Update_m84C3253B5D6A6E01290208E03C2BB8356E035B35 (BobbingAnimation_t251E77C03571E702517233AC11998403319917AE * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = new Vector3(transform.localPosition.x, bobCurve.Evaluate((Time.time % bobCurve.length)), transform.localPosition.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get_bobCurve_4();
		float L_5;
		L_5 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_bobCurve_4();
		int32_t L_7;
		L_7 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_6, /*hidden argument*/NULL);
		float L_8;
		L_8 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_4, (fmodf(L_5, ((float)((float)L_7)))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_3, L_8, L_11, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BobbingAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BobbingAnimation__ctor_mBEEB1D8B0A1342C91BA266525C60C3B7F8ED4601 (BobbingAnimation_t251E77C03571E702517233AC11998403319917AE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// CrossSceneAudio CrossSceneAudio::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * CrossSceneAudio_get_instance_m75D88A365B2CBEF2BCA9C1555F13194CD1438CC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_mBCDE7995997A8446C08019423A3075DABEA928AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_instance == null)
		CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * L_0 = ((CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields*)il2cpp_codegen_static_fields_for(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// _instance = GameObject.FindObjectOfType<CrossSceneAudio>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * L_2;
		L_2 = Object_FindObjectOfType_TisCrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_mBCDE7995997A8446C08019423A3075DABEA928AD(/*hidden argument*/Object_FindObjectOfType_TisCrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_mBCDE7995997A8446C08019423A3075DABEA928AD_RuntimeMethod_var);
		((CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields*)il2cpp_codegen_static_fields_for(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var))->set__instance_4(L_2);
		// DontDestroyOnLoad(_instance.gameObject);
		CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * L_3 = ((CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields*)il2cpp_codegen_static_fields_for(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var))->get__instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return _instance;
		CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * L_5 = ((CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields*)il2cpp_codegen_static_fields_for(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var))->get__instance_4();
		return L_5;
	}
}
// System.Void CrossSceneAudio::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossSceneAudio_Awake_m5994A933F9504B702087ACABB225B05CE037AC40 (CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_instance == null)
		CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * L_0 = ((CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields*)il2cpp_codegen_static_fields_for(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _instance = this;
		((CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields*)il2cpp_codegen_static_fields_for(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var))->set__instance_4(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// if(this != _instance)
		CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * L_2 = ((CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_StaticFields*)il2cpp_codegen_static_fields_for(CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void CrossSceneAudio::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossSceneAudio_Play_m35CE35986AB12EF90308E305256F7F703F4E18F8 (CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CrossSceneAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossSceneAudio__ctor_m92265F2959E77466C208F44E63A5E866899F317E (CrossSceneAudio_t9CD01EEEDDBD32F3D7A5CA1AF919DC670FAD3C7C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FlippedPieces::.ctor(NodePiece,NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlippedPieces__ctor_m60F9EB7BFA88E9A021FF61B47ED89709D99DCB1C (FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___o0, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___t1, const RuntimeMethod* method)
{
	{
		// public FlippedPieces(NodePiece o, NodePiece t)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// one = o; two = t;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = ___o0;
		__this->set_one_0(L_0);
		// one = o; two = t;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_1 = ___t1;
		__this->set_two_1(L_1);
		// }
		return;
	}
}
// NodePiece FlippedPieces::getOtherPiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * FlippedPieces_getOtherPiece_mA3006024E52147F69372588F162FD0B1895B9C89 (FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (p == one)
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = ___p0;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_1 = __this->get_one_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return two;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_3 = __this->get_two_1();
		return L_3;
	}

IL_0015:
	{
		// else if (p == two)
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_4 = ___p0;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_5 = __this->get_two_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return one;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_7 = __this->get_one_0();
		return L_7;
	}

IL_002a:
	{
		// return null;
		return (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 *)NULL;
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
// System.Void KilledPiece::Initialize(UnityEngine.Sprite,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KilledPiece_Initialize_m47E5283D998639FF6BB7ECA5A82B895F87D7E968 (KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___piece0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// falling = true;
		__this->set_falling_4((bool)1);
		// moveDir = Vector2.up;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		__this->set_moveDir_7(L_0);
		// moveDir.x = Random.Range(-1.0f, 1.0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_moveDir_7();
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		L_1->set_x_0(L_2);
		// moveDir *= speed / 2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_moveDir_7();
		float L_4 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, ((float)((float)L_4/(float)(2.0f))), /*hidden argument*/NULL);
		__this->set_moveDir_7(L_5);
		// img = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6;
		L_6 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_img_9(L_6);
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_8(L_7);
		// img.sprite = piece;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_img_9();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = ___piece0;
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_9, /*hidden argument*/NULL);
		// rect.anchoredPosition = start;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = __this->get_rect_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___start1;
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void KilledPiece::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KilledPiece_Update_mB7EB2357822AB27376127B6F1DF6505B58771E82 (KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A * __this, const RuntimeMethod* method)
{
	{
		// if (!falling)
		bool L_0 = __this->get_falling_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// moveDir.y -= Time.deltaTime * gravity;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_moveDir_7();
		float* L_2 = L_1->get_address_of_y_1();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6 = __this->get_gravity_6();
		*((float*)L_3) = (float)((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6))));
		// moveDir.x = Mathf.Lerp(moveDir.x, 0, Time.deltaTime);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_moveDir_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_moveDir_7();
		float L_9 = L_8->get_x_0();
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_11;
		L_11 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_9, (0.0f), L_10, /*hidden argument*/NULL);
		L_7->set_x_0(L_11);
		// rect.anchoredPosition += moveDir * Time.deltaTime * speed;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get_rect_8();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = L_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = __this->get_moveDir_7();
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_15, L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_17, L_18, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_14, L_19, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_13, L_20, /*hidden argument*/NULL);
		// if (rect.position.x < -32f || rect.position.x > Screen.width + 32f || rect.position.y < -32f || rect.position.y > Screen.height + 32f)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21 = __this->get_rect_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		if ((((float)L_23) < ((float)(-32.0f))))
		{
			goto IL_00e4;
		}
	}
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_24 = __this->get_rect_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		int32_t L_27;
		L_27 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((((float)L_26) > ((float)((float)il2cpp_codegen_add((float)((float)((float)L_27)), (float)(32.0f))))))
		{
			goto IL_00e4;
		}
	}
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_28 = __this->get_rect_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		if ((((float)L_30) < ((float)(-32.0f))))
		{
			goto IL_00e4;
		}
	}
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_31 = __this->get_rect_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		int32_t L_34;
		L_34 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		if ((!(((float)L_33) > ((float)((float)il2cpp_codegen_add((float)((float)((float)L_34)), (float)(32.0f)))))))
		{
			goto IL_00eb;
		}
	}

IL_00e4:
	{
		// falling = false;
		__this->set_falling_4((bool)0);
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void KilledPiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KilledPiece__ctor_mABAF87158EDFD8853AD26F12807066F425022F83 (KilledPiece_t30D616E31C318B08D8501D6FC6D1ADFF07C6BF9A * __this, const RuntimeMethod* method)
{
	{
		// float speed = 16f;
		__this->set_speed_5((16.0f));
		// float gravity = 32f;
		__this->set_gravity_6((32.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MainMenu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayGame_m96A3CE2743BCB00B665AA3AC575AE4EBD9ED40B0 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::ReturnToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ReturnToMenu_m418CE470F4E836D161D43ABC7A7DF5074DAF4540 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Match3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_Start_m37D8A5ABCA858B4628B0898699347F1F81ECE127 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	{
		// StartGame();
		Match3_StartGame_m376EE04F25D57F00020A88C0F1880025B2F02627(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Match3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_Update_mB3071737F17EC6CE9895A9C252CE6DF7F391F69F (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m202FB1648D45283A6464130D165B2416E3201E0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m7B44EDE913271B41426A19535DE5E3D1565A0E48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * V_0 = NULL;
	int32_t V_1 = 0;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_2 = NULL;
	int32_t V_3 = 0;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_4 = NULL;
	FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * V_5 = NULL;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_6 = NULL;
	int32_t V_7 = 0;
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_8 = NULL;
	bool V_9 = false;
	Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_11 = NULL;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B15_0 = NULL;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B14_0 = NULL;
	{
		// List<NodePiece> finishedUpdating = new List<NodePiece>();
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_0 = (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *)il2cpp_codegen_object_new(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_il2cpp_TypeInfo_var);
		List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B(L_0, /*hidden argument*/List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < update.Count; i++)
		V_1 = 0;
		goto IL_002a;
	}

IL_000a:
	{
		// NodePiece piece = update[i];
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_1 = __this->get_update_13();
		int32_t L_2 = V_1;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_3;
		L_3 = List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_RuntimeMethod_var);
		V_2 = L_3;
		// if (!piece.UpdatePiece()) finishedUpdating.Add(piece);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_4 = V_2;
		bool L_5;
		L_5 = NodePiece_UpdatePiece_m6F5E3DAE90A009FD24B72319472D606DA5C8F2BC(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (!piece.UpdatePiece()) finishedUpdating.Add(piece);
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_6 = V_0;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_7 = V_2;
		List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C(L_6, L_7, /*hidden argument*/List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
	}

IL_0026:
	{
		// for (int i = 0; i < update.Count; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < update.Count; i++)
		int32_t L_9 = V_1;
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_10 = __this->get_update_13();
		int32_t L_11;
		L_11 = List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_inline(L_10, /*hidden argument*/List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000a;
		}
	}
	{
		// for (int i = 0; i < finishedUpdating.Count; i++)
		V_3 = 0;
		goto IL_018a;
	}

IL_003f:
	{
		// NodePiece piece = finishedUpdating[i];
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_12 = V_0;
		int32_t L_13 = V_3;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_14;
		L_14 = List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_RuntimeMethod_var);
		V_4 = L_14;
		// FlippedPieces flip = getFlipped(piece);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_15 = V_4;
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_16;
		L_16 = Match3_getFlipped_m21B7D677FB05A8988CE170C886598ED224B94311(__this, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		// NodePiece flippedPiece = null;
		V_6 = (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 *)NULL;
		// int x = (int)piece.index.x;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_17 = V_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_18 = L_17->get_index_5();
		int32_t L_19 = L_18->get_x_0();
		V_7 = L_19;
		// fills[x] = Mathf.Clamp(fills[x] - 1, 0, width);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = __this->get_fills_11();
		int32_t L_21 = V_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = __this->get_fills_11();
		int32_t L_23 = V_7;
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = __this->get_width_9();
		int32_t L_27;
		L_27 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), 0, L_26, /*hidden argument*/NULL);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21), (int32_t)L_27);
		// List<Point> connected = isConnected(piece.index, true);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_28 = V_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_29 = L_28->get_index_5();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_30;
		L_30 = Match3_isConnected_m85FD345D8B0B14F74964D95FD781A040539FC227(__this, L_29, (bool)1, /*hidden argument*/NULL);
		V_8 = L_30;
		// bool wasFlipped = (flip != null);
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_31 = V_5;
		V_9 = (bool)((!(((RuntimeObject*)(FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E *)L_31) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		// if (wasFlipped)    // if flipped to make this update
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00bf;
		}
	}
	{
		// flippedPiece = flip.getOtherPiece(piece);
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_33 = V_5;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_34 = V_4;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_35;
		L_35 = FlippedPieces_getOtherPiece_mA3006024E52147F69372588F162FD0B1895B9C89(L_33, L_34, /*hidden argument*/NULL);
		V_6 = L_35;
		// AddPoints(ref connected, isConnected(flippedPiece.index, true));
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_36 = V_6;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_37 = L_36->get_index_5();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_38;
		L_38 = Match3_isConnected_m85FD345D8B0B14F74964D95FD781A040539FC227(__this, L_37, (bool)1, /*hidden argument*/NULL);
		Match3_AddPoints_m727865BF9D21AA5EC8A5BEF3CB457B4D20058121(__this, (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)(&V_8), L_38, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		// if(connected.Count == 0)
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_39 = V_8;
		int32_t L_40;
		L_40 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_39, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		if (L_40)
		{
			goto IL_00e9;
		}
	}
	{
		// if (wasFlipped)   // if flipped
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_016a;
		}
	}
	{
		// FlipPieces(piece.index, flippedPiece.index, false);   // flip back
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_42 = V_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_43 = L_42->get_index_5();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_44 = V_6;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_45 = L_44->get_index_5();
		Match3_FlipPieces_mFA04F415415B132F7875EEFF58B448063E4D7088(__this, L_43, L_45, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_016a;
	}

IL_00e9:
	{
		// foreach(Point pnt in connected) // remove node pieces connected
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_46 = V_8;
		Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  L_47;
		L_47 = List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6(L_46, /*hidden argument*/List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		V_10 = L_47;
	}

IL_00f2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014b;
		}

IL_00f4:
		{
			// foreach(Point pnt in connected) // remove node pieces connected
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_48;
			L_48 = Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_10), /*hidden argument*/Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
			V_11 = L_48;
			// scoreManager.Score+=10;
			ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_49 = __this->get_scoreManager_5();
			ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_50 = L_49;
			int32_t L_51;
			L_51 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(L_50, /*hidden argument*/NULL);
			ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3(L_50, ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
			// Node node = getNodeAtPoint(pnt);
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_52 = V_11;
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_53;
			L_53 = Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F(__this, L_52, /*hidden argument*/NULL);
			// NodePiece nodePiece = node.getPiece();
			Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_54 = L_53;
			NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_55;
			L_55 = Node_getPiece_mBC358D864F818F231309EA0E1768A7452C10D752_inline(L_54, /*hidden argument*/NULL);
			V_12 = L_55;
			// if (nodePiece != null)
			NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_56 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_57;
			L_57 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_56, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			G_B14_0 = L_54;
			if (!L_57)
			{
				G_B15_0 = L_54;
				goto IL_0145;
			}
		}

IL_012b:
		{
			// nodePiece.gameObject.SetActive(false);
			NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_58 = V_12;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
			L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_58, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_59, (bool)0, /*hidden argument*/NULL);
			// dead.Add(nodePiece);
			List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_60 = __this->get_dead_15();
			NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_61 = V_12;
			List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C(L_60, L_61, /*hidden argument*/List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
			G_B15_0 = G_B14_0;
		}

IL_0145:
		{
			// node.SetPiece(null);
			Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091(G_B15_0, (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 *)NULL, /*hidden argument*/NULL);
		}

IL_014b:
		{
			// foreach(Point pnt in connected) // remove node pieces connected
			bool L_62;
			L_62 = Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_00f4;
			}
		}

IL_0154:
		{
			IL2CPP_LEAVE(0x164, FINALLY_0156);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0156;
	}

FINALLY_0156:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_10), /*hidden argument*/Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		IL2CPP_END_FINALLY(342)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(342)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x164, IL_0164)
	}

IL_0164:
	{
		// ApplyGravityToBoard();
		Match3_ApplyGravityToBoard_m30370D327D4E32450393729A2AF3B234B1D00CBB(__this, /*hidden argument*/NULL);
	}

IL_016a:
	{
		// flipped.Remove(flip);   // remove flip
		List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * L_63 = __this->get_flipped_14();
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_64 = V_5;
		bool L_65;
		L_65 = List_1_Remove_m202FB1648D45283A6464130D165B2416E3201E0E(L_63, L_64, /*hidden argument*/List_1_Remove_m202FB1648D45283A6464130D165B2416E3201E0E_RuntimeMethod_var);
		// update.Remove(piece);
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_66 = __this->get_update_13();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_67 = V_4;
		bool L_68;
		L_68 = List_1_Remove_m7B44EDE913271B41426A19535DE5E3D1565A0E48(L_66, L_67, /*hidden argument*/List_1_Remove_m7B44EDE913271B41426A19535DE5E3D1565A0E48_RuntimeMethod_var);
		// for (int i = 0; i < finishedUpdating.Count; i++)
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_018a:
	{
		// for (int i = 0; i < finishedUpdating.Count; i++)
		int32_t L_70 = V_3;
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_71 = V_0;
		int32_t L_72;
		L_72 = List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_inline(L_71, /*hidden argument*/List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_RuntimeMethod_var);
		if ((((int32_t)L_70) < ((int32_t)L_72)))
		{
			goto IL_003f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Match3::ApplyGravityToBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_ApplyGravityToBoard_m30370D327D4E32450393729A2AF3B234B1D00CBB (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDA2DE2B43B279E250E5D53CA33034B7EAAD35B49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_2 = NULL;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_3 = NULL;
	int32_t V_4 = 0;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_5 = NULL;
	int32_t V_6 = 0;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_7 = NULL;
	int32_t V_8 = 0;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_9 = NULL;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_10 = NULL;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_11 = NULL;
	{
		// for (int x = 0; x < width; x++)
		V_0 = 0;
		goto IL_0178;
	}

IL_0007:
	{
		// for (int y = height - 1; y >= 0; y--)
		int32_t L_0 = __this->get_height_10();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_016d;
	}

IL_0015:
	{
		// Point p = new Point(x, y);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_3, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// Node node = getNodeAtPoint(p);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = V_2;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5;
		L_5 = Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F(__this, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// int val = getValueAtPoint(p);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6 = V_2;
		int32_t L_7;
		L_7 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_6, /*hidden argument*/NULL);
		// if (val != 0) // If it's not a hole, do nothing
		if (L_7)
		{
			goto IL_0169;
		}
	}
	{
		// for (int ny = (y -1); ny >= -1; ny--)
		int32_t L_8 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		goto IL_0161;
	}

IL_003b:
	{
		// Point next = new Point(x, ny);
		int32_t L_9 = V_0;
		int32_t L_10 = V_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_11 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_11, L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		// int nextVal = getValueAtPoint(next);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_12 = V_5;
		int32_t L_13;
		L_13 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		// if (nextVal == 0)
		int32_t L_14 = V_6;
		if (!L_14)
		{
			goto IL_015b;
		}
	}
	{
		// if (nextVal != -1) // If we did not hit an end, but it's not 0 then use this to fill the current hole
		int32_t L_15 = V_6;
		if ((((int32_t)L_15) == ((int32_t)(-1))))
		{
			goto IL_008b;
		}
	}
	{
		// Node got = getNodeAtPoint(next);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_16 = V_5;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_17;
		L_17 = Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F(__this, L_16, /*hidden argument*/NULL);
		// NodePiece piece = got.getPiece();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_18 = L_17;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_19;
		L_19 = Node_getPiece_mBC358D864F818F231309EA0E1768A7452C10D752_inline(L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		// node.SetPiece(piece);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_20 = V_3;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_21 = V_7;
		Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091(L_20, L_21, /*hidden argument*/NULL);
		// update.Add(piece);
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_22 = __this->get_update_13();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_23 = V_7;
		List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C(L_22, L_23, /*hidden argument*/List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		// got.SetPiece(null);
		Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091(L_18, (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 *)NULL, /*hidden argument*/NULL);
		// }
		goto IL_0169;
	}

IL_008b:
	{
		// int newVal = fillPiece();
		int32_t L_24;
		L_24 = Match3_fillPiece_m2099491433F04072016417DE99C5BED7F49962E6(__this, /*hidden argument*/NULL);
		V_8 = L_24;
		// Point fallPnt = new Point(x, (-1 - fills[x]));
		int32_t L_25 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = __this->get_fills_11();
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_30 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_30, L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)(-1), (int32_t)L_29)), /*hidden argument*/NULL);
		V_10 = L_30;
		// if (dead.Count > 0)
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_31 = __this->get_dead_15();
		int32_t L_32;
		L_32 = List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_inline(L_31, /*hidden argument*/List_1_get_Count_mE15F129EC396DA7F74581814E5EC7648991D916B_RuntimeMethod_var);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00ee;
		}
	}
	{
		// NodePiece revived = dead[0];
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_33 = __this->get_dead_15();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_34;
		L_34 = List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_inline(L_33, 0, /*hidden argument*/List_1_get_Item_m645F6F778F3C138194276AEE365EE0E7CA3778F2_RuntimeMethod_var);
		// revived.gameObject.SetActive(true);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_35 = L_34;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_36, (bool)1, /*hidden argument*/NULL);
		// revived.rect.anchoredPosition = getPositionFromPoint(fallPnt);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_37 = L_35;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_38 = L_37->get_rect_7();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_39 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Match3_getPositionFromPoint_mCEDF0D6F128E62A827F6DFBCC3CC8D075A264BD9(__this, L_39, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_38, L_40, /*hidden argument*/NULL);
		// piece = revived;
		V_9 = L_37;
		// dead.RemoveAt(0);
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_41 = __this->get_dead_15();
		List_1_RemoveAt_mDA2DE2B43B279E250E5D53CA33034B7EAAD35B49(L_41, 0, /*hidden argument*/List_1_RemoveAt_mDA2DE2B43B279E250E5D53CA33034B7EAAD35B49_RuntimeMethod_var);
		// }
		goto IL_011d;
	}

IL_00ee:
	{
		// GameObject obj = Instantiate(nodePiece, gameBoard);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_nodePiece_8();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_43 = __this->get_gameBoard_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_42, L_43, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// NodePiece n = obj.GetComponent<NodePiece>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = L_44;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_46;
		L_46 = GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0(L_45, /*hidden argument*/GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0_RuntimeMethod_var);
		V_11 = L_46;
		// RectTransform rect = obj.GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_47;
		L_47 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_45, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		// rect.anchoredPosition = getPositionFromPoint(fallPnt);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_48 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Match3_getPositionFromPoint_mCEDF0D6F128E62A827F6DFBCC3CC8D075A264BD9(__this, L_48, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_47, L_49, /*hidden argument*/NULL);
		// piece = n;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_50 = V_11;
		V_9 = L_50;
	}

IL_011d:
	{
		// piece.Initialize(newVal, p, pieces[newVal - 1]);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_51 = V_9;
		int32_t L_52 = V_8;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_53 = V_2;
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_54 = __this->get_pieces_6();
		int32_t L_55 = V_8;
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		NodePiece_Initialize_m77C6E362D5C53475C17254BFB53F9EEC28E48870(L_51, L_52, L_53, L_57, /*hidden argument*/NULL);
		// Node hole = getNodeAtPoint(p);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_58 = V_2;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_59;
		L_59 = Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F(__this, L_58, /*hidden argument*/NULL);
		// hole.SetPiece(piece);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_60 = V_9;
		Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091(L_59, L_60, /*hidden argument*/NULL);
		// ResetPiece(piece);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_61 = V_9;
		Match3_ResetPiece_mF97D173780B4F33A80D3E7E6E2E347090B45922F(__this, L_61, /*hidden argument*/NULL);
		// fills[x]++;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = __this->get_fills_11();
		int32_t L_63 = V_0;
		int32_t* L_64 = ((L_62)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_63)));
		int32_t L_65 = *((int32_t*)L_64);
		*((int32_t*)L_64) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		// break;
		goto IL_0169;
	}

IL_015b:
	{
		// for (int ny = (y -1); ny >= -1; ny--)
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1));
	}

IL_0161:
	{
		// for (int ny = (y -1); ny >= -1; ny--)
		int32_t L_67 = V_4;
		if ((((int32_t)L_67) >= ((int32_t)(-1))))
		{
			goto IL_003b;
		}
	}

IL_0169:
	{
		// for (int y = height - 1; y >= 0; y--)
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)1));
	}

IL_016d:
	{
		// for (int y = height - 1; y >= 0; y--)
		int32_t L_69 = V_1;
		if ((((int32_t)L_69) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// for (int x = 0; x < width; x++)
		int32_t L_70 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0178:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_71 = V_0;
		int32_t L_72 = __this->get_width_9();
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// FlippedPieces Match3::getFlipped(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * Match3_getFlipped_m21B7D677FB05A8988CE170C886598ED224B94311 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4BD860A3114BED9455F852184D6C3409AE5A1A8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC2418AE902BB9D58CE332F2B74FDCFC541BC930D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// FlippedPieces flip = null;
		V_0 = (FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E *)NULL;
		// for (int i = 0; i < flipped.Count; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_0006:
	{
		// if (flipped[i].getOtherPiece(p) != null)
		List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * L_0 = __this->get_flipped_14();
		int32_t L_1 = V_1;
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_2;
		L_2 = List_1_get_Item_mC2418AE902BB9D58CE332F2B74FDCFC541BC930D_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mC2418AE902BB9D58CE332F2B74FDCFC541BC930D_RuntimeMethod_var);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_3 = ___p0;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_4;
		L_4 = FlippedPieces_getOtherPiece_mA3006024E52147F69372588F162FD0B1895B9C89(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// flip = flipped[i];
		List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * L_6 = __this->get_flipped_14();
		int32_t L_7 = V_1;
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_8;
		L_8 = List_1_get_Item_mC2418AE902BB9D58CE332F2B74FDCFC541BC930D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mC2418AE902BB9D58CE332F2B74FDCFC541BC930D_RuntimeMethod_var);
		V_0 = L_8;
		// break;
		goto IL_0041;
	}

IL_002f:
	{
		// for (int i = 0; i < flipped.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < flipped.Count; i++)
		int32_t L_10 = V_1;
		List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * L_11 = __this->get_flipped_14();
		int32_t L_12;
		L_12 = List_1_get_Count_m4BD860A3114BED9455F852184D6C3409AE5A1A8D_inline(L_11, /*hidden argument*/List_1_get_Count_m4BD860A3114BED9455F852184D6C3409AE5A1A8D_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}

IL_0041:
	{
		// return flip;
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_13 = V_0;
		return L_13;
	}
}
// System.Void Match3::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_StartGame_m376EE04F25D57F00020A88C0F1880025B2F02627 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1D2CDF8BF1ABE065A5879CA2CCF38232187AAACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_m70D76CE53752C3D89A5B112DB0E56F74A75DDEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// fills = new int[width];
		int32_t L_0 = __this->get_width_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_fills_11(L_1);
		// string seed = getRandomSeed();
		String_t* L_2;
		L_2 = Match3_getRandomSeed_m5431D2E885FE4A0B5719355D4DE7E1893671DD9F(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// random = new System.Random(seed.GetHashCode());
		String_t* L_3 = V_0;
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_random_16(L_5);
		// update = new List<NodePiece>();
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_6 = (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *)il2cpp_codegen_object_new(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_il2cpp_TypeInfo_var);
		List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B(L_6, /*hidden argument*/List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B_RuntimeMethod_var);
		__this->set_update_13(L_6);
		// flipped = new List<FlippedPieces>();
		List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * L_7 = (List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A *)il2cpp_codegen_object_new(List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A_il2cpp_TypeInfo_var);
		List_1__ctor_m1D2CDF8BF1ABE065A5879CA2CCF38232187AAACC(L_7, /*hidden argument*/List_1__ctor_m1D2CDF8BF1ABE065A5879CA2CCF38232187AAACC_RuntimeMethod_var);
		__this->set_flipped_14(L_7);
		// dead = new List<NodePiece>();
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_8 = (List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C *)il2cpp_codegen_object_new(List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C_il2cpp_TypeInfo_var);
		List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B(L_8, /*hidden argument*/List_1__ctor_mDE3E7F84521660922C5749160EC04303E657B01B_RuntimeMethod_var);
		__this->set_dead_15(L_8);
		// InitializeBoard();
		Match3_InitializeBoard_m51F5B21FC76F7C5261C80702494CE6FAB24C10A3(__this, /*hidden argument*/NULL);
		// VerifyBoard();
		Match3_VerifyBoard_m1D97574B256D3C984F26C9D2B04D007C81211269(__this, /*hidden argument*/NULL);
		// InstantiateBoard();
		Match3_InstantiateBoard_mDDF1BF6BB734D20D88914F055CC3A1D2F7E2756D(__this, /*hidden argument*/NULL);
		// scoreManager = FindObjectOfType<ScoreManager> ();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_9;
		L_9 = Object_FindObjectOfType_TisScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_m70D76CE53752C3D89A5B112DB0E56F74A75DDEE9(/*hidden argument*/Object_FindObjectOfType_TisScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113_m70D76CE53752C3D89A5B112DB0E56F74A75DDEE9_RuntimeMethod_var);
		__this->set_scoreManager_5(L_9);
		// scoreManager.Score = PlayerPrefs.GetInt ("Score", 0);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_10 = __this->get_scoreManager_5();
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, 0, /*hidden argument*/NULL);
		ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3(L_10, L_11, /*hidden argument*/NULL);
		// scoreManager.Score = 0;
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_12 = __this->get_scoreManager_5();
		ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3(L_12, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Match3::InitializeBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_InitializeBoard_m51F5B21FC76F7C5261C80702494CE6FAB24C10A3 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* G_B5_3 = NULL;
	{
		// board = new Node[width, height];
		int32_t L_0 = __this->get_width_9();
		int32_t L_1 = __this->get_height_10();
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_2 = (NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5*)GenArrayNew(NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5_il2cpp_TypeInfo_var, L_3);
		__this->set_board_12(L_2);
		// for(int y = 0; y < height; y++)
		V_0 = 0;
		goto IL_006c;
	}

IL_001b:
	{
		// for(int x = 0; x < width; x++)
		V_1 = 0;
		goto IL_005f;
	}

IL_001f:
	{
		// board[x, y] = new Node((boardLayout.rows[y].row[x]) ? - 1 : fillPiece(), new Point(x, y));
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_4 = __this->get_board_12();
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		ArrayLayout_t2652E943C71D7AA66A081BC37EDC73DB718F84AE * L_7 = __this->get_boardLayout_4();
		rowDataU5BU5D_t9D2710D19AE4B50CBBAEAD63829F39A51D7624E1* L_8 = L_7->get_rows_1();
		int32_t L_9 = V_0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->get_row_0();
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		uint8_t L_13 = (uint8_t)(L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		G_B3_0 = L_6;
		G_B3_1 = L_5;
		G_B3_2 = L_4;
		if (L_13)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_5;
			G_B4_2 = L_4;
			goto IL_0049;
		}
	}
	{
		int32_t L_14;
		L_14 = Match3_fillPiece_m2099491433F04072016417DE99C5BED7F49962E6(__this, /*hidden argument*/NULL);
		G_B5_0 = L_14;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_004a;
	}

IL_0049:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_004a:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_17 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_17, L_15, L_16, /*hidden argument*/NULL);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_18 = (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 *)il2cpp_codegen_object_new(Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0_il2cpp_TypeInfo_var);
		Node__ctor_mEA612FD366862326437830360A3B49B6788ECC07(L_18, G_B5_0, L_17, /*hidden argument*/NULL);
		(G_B5_3)->SetAtUnchecked(G_B5_2, G_B5_1, L_18);
		// for(int x = 0; x < width; x++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005f:
	{
		// for(int x = 0; x < width; x++)
		int32_t L_20 = V_1;
		int32_t L_21 = __this->get_width_9();
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_001f;
		}
	}
	{
		// for(int y = 0; y < height; y++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006c:
	{
		// for(int y = 0; y < height; y++)
		int32_t L_23 = V_0;
		int32_t L_24 = __this->get_height_10();
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Match3::VerifyBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_VerifyBoard_m1D97574B256D3C984F26C9D2B04D007C81211269 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		// for (int x = 0; x < width; x++)
		V_1 = 0;
		goto IL_0071;
	}

IL_0004:
	{
		// for (int y = 0; y < height; y++)
		V_2 = 0;
		goto IL_0064;
	}

IL_0008:
	{
		// Point p = new Point(x, y);
		int32_t L_0 = V_1;
		int32_t L_1 = V_2;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		// int val = getValueAtPoint(p);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = V_3;
		int32_t L_4;
		L_4 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		// if (val <= 0) continue;
		int32_t L_5 = V_4;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		// remove = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_6, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_0050;
	}

IL_0026:
	{
		// val = getValueAtPoint(p);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7 = V_3;
		int32_t L_8;
		L_8 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// if (!remove.Contains(val))
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = V_0;
		int32_t L_10 = V_4;
		bool L_11;
		L_11 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_9, L_10, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		// remove.Add(val);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = V_0;
		int32_t L_13 = V_4;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_12, L_13, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0041:
	{
		// setValueAtPoint(p, newValue(ref remove));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_14 = V_3;
		int32_t L_15;
		L_15 = Match3_newValue_m16F9E6FA7D6EB8808F5AF5A1A6FB21252A5EC577(__this, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)(&V_0), /*hidden argument*/NULL);
		Match3_setValueAtPoint_m9FFDAD0F81DB45C9E05C1E4AE0571727EED7CB4A(__this, L_14, L_15, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// while (isConnected(p, true).Count > 0)
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_16 = V_3;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_17;
		L_17 = Match3_isConnected_m85FD345D8B0B14F74964D95FD781A040539FC227(__this, L_16, (bool)1, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_17, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0060:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0064:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_20 = V_2;
		int32_t L_21 = __this->get_height_10();
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int x = 0; x < width; x++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0071:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_23 = V_1;
		int32_t L_24 = __this->get_width_9();
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Match3::InstantiateBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_InstantiateBoard_mDDF1BF6BB734D20D88914F055CC3A1D2F7E2756D (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_2 = NULL;
	int32_t V_3 = 0;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_4 = NULL;
	{
		// for (int x = 0; x < width; x++)
		V_0 = 0;
		goto IL_00a0;
	}

IL_0007:
	{
		// for (int y = 0; y < height; y++)
		V_1 = 0;
		goto IL_0090;
	}

IL_000e:
	{
		// Node node = getNodeAtPoint(new Point(x, y));
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_2, L_0, L_1, /*hidden argument*/NULL);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_3;
		L_3 = Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F(__this, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// int val = board[x, y].value;
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_4 = __this->get_board_12();
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_7;
		L_7 = (L_4)->GetAtUnchecked(L_5, L_6);
		int32_t L_8 = L_7->get_value_0();
		V_3 = L_8;
		// if (val <= 0) continue;
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		// GameObject p = Instantiate(nodePiece, gameBoard);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_nodePiece_8();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = __this->get_gameBoard_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// NodePiece piece = p.GetComponent<NodePiece>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_14;
		L_14 = GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0(L_13, /*hidden argument*/GameObject_GetComponent_TisNodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6_mF5DA5795CD213EBD61FB3786DF7B79D5CBD033A0_RuntimeMethod_var);
		V_4 = L_14;
		// RectTransform rect = p.GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15;
		L_15 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_13, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		// rect.anchoredPosition = new Vector2(32 + (64 * x), -32 - (64 * y));
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)32), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)64), (int32_t)L_16)))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)-32), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)64), (int32_t)L_17)))))), /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_15, L_18, /*hidden argument*/NULL);
		// piece.Initialize(val, new Point(x, y), pieces[val - 1]);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_19 = V_4;
		int32_t L_20 = V_3;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_23 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_23, L_21, L_22, /*hidden argument*/NULL);
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_24 = __this->get_pieces_6();
		int32_t L_25 = V_3;
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		NodePiece_Initialize_m77C6E362D5C53475C17254BFB53F9EEC28E48870(L_19, L_20, L_23, L_27, /*hidden argument*/NULL);
		// node.SetPiece(piece);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_28 = V_2;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_29 = V_4;
		Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091(L_28, L_29, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0090:
	{
		// for (int y = 0; y < height; y++)
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_height_10();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_000e;
		}
	}
	{
		// for (int x = 0; x < width; x++)
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00a0:
	{
		// for (int x = 0; x < width; x++)
		int32_t L_34 = V_0;
		int32_t L_35 = __this->get_width_9();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Match3::ResetPiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_ResetPiece_mF97D173780B4F33A80D3E7E6E2E347090B45922F (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// piece.ResetPosition();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = ___piece0;
		NodePiece_ResetPosition_mF13D369ED064809DFCE47B3D470066212354720A(L_0, /*hidden argument*/NULL);
		// update.Add(piece);
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_1 = __this->get_update_13();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_2 = ___piece0;
		List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C(L_1, L_2, /*hidden argument*/List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Match3::FlipPieces(Point,Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_FlipPieces_mFA04F415415B132F7875EEFF58B448063E4D7088 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___one0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___two1, bool ___main2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3140430F5F472BDDD452B7758CCA0B1AC9C7F524_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * V_0 = NULL;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_1 = NULL;
	NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * V_2 = NULL;
	{
		// if (getValueAtPoint(one) < 0) return;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___one0;
		int32_t L_1;
		L_1 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// if (getValueAtPoint(one) < 0) return;
		return;
	}

IL_000b:
	{
		// Node nodeOne = getNodeAtPoint(one);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = ___one0;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_3;
		L_3 = Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// NodePiece pieceOne = nodeOne.getPiece();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_4 = V_0;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_5;
		L_5 = Node_getPiece_mBC358D864F818F231309EA0E1768A7452C10D752_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (getValueAtPoint(two) > 0)
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6 = ___two1;
		int32_t L_7;
		L_7 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// Node nodeTwo = getNodeAtPoint(two);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8 = ___two1;
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_9;
		L_9 = Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F(__this, L_8, /*hidden argument*/NULL);
		// NodePiece pieceTwo = nodeTwo.getPiece();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_10 = L_9;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_11;
		L_11 = Node_getPiece_mBC358D864F818F231309EA0E1768A7452C10D752_inline(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// nodeOne.SetPiece(pieceTwo);
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_12 = V_0;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_13 = V_2;
		Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091(L_12, L_13, /*hidden argument*/NULL);
		// nodeTwo.SetPiece(pieceOne);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_14 = V_1;
		Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091(L_10, L_14, /*hidden argument*/NULL);
		// if(main)
		bool L_15 = ___main2;
		if (!L_15)
		{
			goto IL_0054;
		}
	}
	{
		// flipped.Add(new FlippedPieces(pieceOne, pieceTwo));
		List_1_t246254527E11FB7CA5E70BFDEB051ECC320DF14A * L_16 = __this->get_flipped_14();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_17 = V_1;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_18 = V_2;
		FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E * L_19 = (FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E *)il2cpp_codegen_object_new(FlippedPieces_tE54C80CB442537EBF51C9502ABE40E68B1E25B8E_il2cpp_TypeInfo_var);
		FlippedPieces__ctor_m60F9EB7BFA88E9A021FF61B47ED89709D99DCB1C(L_19, L_17, L_18, /*hidden argument*/NULL);
		List_1_Add_m3140430F5F472BDDD452B7758CCA0B1AC9C7F524(L_16, L_19, /*hidden argument*/List_1_Add_m3140430F5F472BDDD452B7758CCA0B1AC9C7F524_RuntimeMethod_var);
	}

IL_0054:
	{
		// update.Add(pieceOne);
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_20 = __this->get_update_13();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_21 = V_1;
		List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C(L_20, L_21, /*hidden argument*/List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		// update.Add(pieceTwo);
		List_1_tD850E464CCF71992A79AAEDE5DD99F7DEB7C286C * L_22 = __this->get_update_13();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_23 = V_2;
		List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C(L_22, L_23, /*hidden argument*/List_1_Add_m9F5A958B6118B21CFED2C06B077CE0000743876C_RuntimeMethod_var);
		// }
		return;
	}

IL_006d:
	{
		// ResetPiece(pieceOne);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_24 = V_1;
		Match3_ResetPiece_mF97D173780B4F33A80D3E7E6E2E347090B45922F(__this, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Point> Match3::isConnected(Point,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * Match3_isConnected_m85FD345D8B0B14F74964D95FD781A040539FC227 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, bool ___main1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_0 = NULL;
	int32_t V_1 = 0;
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* V_2 = NULL;
	PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* V_3 = NULL;
	int32_t V_4 = 0;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_5 = NULL;
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_9 = NULL;
	int32_t V_10 = 0;
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_11 = NULL;
	int32_t V_12 = 0;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_13 = NULL;
	int32_t V_14 = 0;
	List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_18 = NULL;
	int32_t V_19 = 0;
	{
		// List<Point> connected = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_0, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_0 = L_0;
		// int val = getValueAtPoint(p);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1 = ___p0;
		int32_t L_2;
		L_2 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// Point[] directions =
		// {
		//     Point.up,
		//     Point.right,
		//     Point.down,
		//     Point.left
		// };
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_3 = (PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389*)(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389*)SZArrayNew(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389_il2cpp_TypeInfo_var, (uint32_t)4);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_4 = L_3;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_5;
		L_5 = Point_get_up_mAD4FD2B6CD9CD5B487A7FE19EF51188FAD3E9496(/*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_5);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_6 = L_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7;
		L_7 = Point_get_right_mB42EF5AE23F568907E534A2D798E06B70E4195BF(/*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_7);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_8 = L_6;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_9;
		L_9 = Point_get_down_m760C2FF5EFA02D936C939F9537EC3DEDF88C3B17(/*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_9);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_10 = L_8;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_11;
		L_11 = Point_get_left_mF30134CA4F7005B9D3939FE0A467DE2B3C7B48FE(/*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_11);
		V_2 = L_10;
		// foreach(Point dir in directions) //Checking if there is 2 or more same shapes in the directions
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_12 = V_2;
		V_3 = L_12;
		V_4 = 0;
		goto IL_009c;
	}

IL_003c:
	{
		// foreach(Point dir in directions) //Checking if there is 2 or more same shapes in the directions
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_13 = V_3;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		// List<Point> line = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_17 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_17, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_6 = L_17;
		// int same = 0;
		V_7 = 0;
		// for(int i = 1; i < 3; i++)
		V_8 = 1;
		goto IL_0082;
	}

IL_0051:
	{
		// Point check = Point.add(p, Point.mult(dir, i));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_18 = ___p0;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_19 = V_5;
		int32_t L_20 = V_8;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_21;
		L_21 = Point_mult_mAD744E0D62A9A54F0A46FFFA64011C4ABDDE2D3B(L_19, L_20, /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_22;
		L_22 = Point_add_mD3586207981D50B2D8951E7948944ED5559AB155(L_18, L_21, /*hidden argument*/NULL);
		V_9 = L_22;
		// if(getValueAtPoint(check) == val)
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_23 = V_9;
		int32_t L_24;
		L_24 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_007c;
		}
	}
	{
		// line.Add(check);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_26 = V_6;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_27 = V_9;
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_26, L_27, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// same++;
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_007c:
	{
		// for(int i = 1; i < 3; i++)
		int32_t L_29 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0082:
	{
		// for(int i = 1; i < 3; i++)
		int32_t L_30 = V_8;
		if ((((int32_t)L_30) < ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		// if (same > 1) //If there are more than 1 of the same shape in the direction then we know it is a match
		int32_t L_31 = V_7;
		if ((((int32_t)L_31) <= ((int32_t)1)))
		{
			goto IL_0096;
		}
	}
	{
		// AddPoints(ref connected, line); //Add these points to the overarching connected list
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_32 = V_6;
		Match3_AddPoints_m727865BF9D21AA5EC8A5BEF3CB457B4D20058121(__this, (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)(&V_0), L_32, /*hidden argument*/NULL);
	}

IL_0096:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_009c:
	{
		// foreach(Point dir in directions) //Checking if there is 2 or more same shapes in the directions
		int32_t L_34 = V_4;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_003c;
		}
	}
	{
		// for(int i = 0; i < 2; i++) //Checking if we are in the middle of two of the same shapes
		V_10 = 0;
		goto IL_011c;
	}

IL_00a8:
	{
		// List<Point> line = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_36 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_36, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_11 = L_36;
		// int same = 0;
		V_12 = 0;
		// Point[] check = { Point.add(p, directions[i]), Point.add(p, directions[i + 2]) };
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_37 = (PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389*)(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389*)SZArrayNew(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389_il2cpp_TypeInfo_var, (uint32_t)2);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_38 = L_37;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_39 = ___p0;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_40 = V_2;
		int32_t L_41 = V_10;
		int32_t L_42 = L_41;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_44;
		L_44 = Point_add_mD3586207981D50B2D8951E7948944ED5559AB155(L_39, L_43, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_38, L_44);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_44);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_45 = L_38;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_46 = ___p0;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_47 = V_2;
		int32_t L_48 = V_10;
		int32_t L_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)2));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_51;
		L_51 = Point_add_mD3586207981D50B2D8951E7948944ED5559AB155(L_46, L_50, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_45, L_51);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_51);
		// foreach (Point next in check) //Check both sides of the piece, if they are the same value, add them to the list
		V_3 = L_45;
		V_4 = 0;
		goto IL_0100;
	}

IL_00da:
	{
		// foreach (Point next in check) //Check both sides of the piece, if they are the same value, add them to the list
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_52 = V_3;
		int32_t L_53 = V_4;
		int32_t L_54 = L_53;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		V_13 = L_55;
		// if (getValueAtPoint(next) == val)
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_56 = V_13;
		int32_t L_57;
		L_57 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_56, /*hidden argument*/NULL);
		int32_t L_58 = V_1;
		if ((!(((uint32_t)L_57) == ((uint32_t)L_58))))
		{
			goto IL_00fa;
		}
	}
	{
		// line.Add(next);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_59 = V_11;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_60 = V_13;
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_59, L_60, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// same++;
		int32_t L_61 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_00fa:
	{
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_0100:
	{
		// foreach (Point next in check) //Check both sides of the piece, if they are the same value, add them to the list
		int32_t L_63 = V_4;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_64 = V_3;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))))))
		{
			goto IL_00da;
		}
	}
	{
		// if (same > 1)
		int32_t L_65 = V_12;
		if ((((int32_t)L_65) <= ((int32_t)1)))
		{
			goto IL_0116;
		}
	}
	{
		// AddPoints(ref connected, line);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_66 = V_11;
		Match3_AddPoints_m727865BF9D21AA5EC8A5BEF3CB457B4D20058121(__this, (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)(&V_0), L_66, /*hidden argument*/NULL);
	}

IL_0116:
	{
		// for(int i = 0; i < 2; i++) //Checking if we are in the middle of two of the same shapes
		int32_t L_67 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_011c:
	{
		// for(int i = 0; i < 2; i++) //Checking if we are in the middle of two of the same shapes
		int32_t L_68 = V_10;
		if ((((int32_t)L_68) < ((int32_t)2)))
		{
			goto IL_00a8;
		}
	}
	{
		// for(int i = 0; i < 4; i++) //Check for a 2x2
		V_14 = 0;
		goto IL_01c2;
	}

IL_0129:
	{
		// List<Point> square = new List<Point>();
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_69 = (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 *)il2cpp_codegen_object_new(List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002_il2cpp_TypeInfo_var);
		List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC(L_69, /*hidden argument*/List_1__ctor_m1AB7A0EE8BAECB00C1E3996C90D4FD61E6AA87CC_RuntimeMethod_var);
		V_15 = L_69;
		// int same = 0;
		V_16 = 0;
		// int next = i + 1;
		int32_t L_70 = V_14;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		// if (next >= 4)
		int32_t L_71 = V_17;
		if ((((int32_t)L_71) < ((int32_t)4)))
		{
			goto IL_0144;
		}
	}
	{
		// next -= 4;
		int32_t L_72 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)4));
	}

IL_0144:
	{
		// Point[] check = { Point.add(p, directions[i]), Point.add(p, directions[next]), Point.add(p, Point.add(directions[i], directions[next])) };
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_73 = (PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389*)(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389*)SZArrayNew(PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389_il2cpp_TypeInfo_var, (uint32_t)3);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_74 = L_73;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_75 = ___p0;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_76 = V_2;
		int32_t L_77 = V_14;
		int32_t L_78 = L_77;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_79 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_80;
		L_80 = Point_add_mD3586207981D50B2D8951E7948944ED5559AB155(L_75, L_79, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_74, L_80);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_80);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_81 = L_74;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_82 = ___p0;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_83 = V_2;
		int32_t L_84 = V_17;
		int32_t L_85 = L_84;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_87;
		L_87 = Point_add_mD3586207981D50B2D8951E7948944ED5559AB155(L_82, L_86, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_81, L_87);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_87);
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_88 = L_81;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_89 = ___p0;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_90 = V_2;
		int32_t L_91 = V_14;
		int32_t L_92 = L_91;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_93 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_94 = V_2;
		int32_t L_95 = V_17;
		int32_t L_96 = L_95;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_97 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_98;
		L_98 = Point_add_mD3586207981D50B2D8951E7948944ED5559AB155(L_93, L_97, /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_99;
		L_99 = Point_add_mD3586207981D50B2D8951E7948944ED5559AB155(L_89, L_98, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_88, L_99);
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_99);
		// foreach (Point pnt in check) //Check all sides of the piece, if they are the same value, add them to the list
		V_3 = L_88;
		V_4 = 0;
		goto IL_01a6;
	}

IL_0180:
	{
		// foreach (Point pnt in check) //Check all sides of the piece, if they are the same value, add them to the list
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_100 = V_3;
		int32_t L_101 = V_4;
		int32_t L_102 = L_101;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_103 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		V_18 = L_103;
		// if (getValueAtPoint(pnt) == val)
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_104 = V_18;
		int32_t L_105;
		L_105 = Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3(__this, L_104, /*hidden argument*/NULL);
		int32_t L_106 = V_1;
		if ((!(((uint32_t)L_105) == ((uint32_t)L_106))))
		{
			goto IL_01a0;
		}
	}
	{
		// square.Add(pnt);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_107 = V_15;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_108 = V_18;
		List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_107, L_108, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		// same++;
		int32_t L_109 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
	}

IL_01a0:
	{
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_01a6:
	{
		// foreach (Point pnt in check) //Check all sides of the piece, if they are the same value, add them to the list
		int32_t L_111 = V_4;
		PointU5BU5D_t56A152B18C8F12D3DAC1F8B301128107942B5389* L_112 = V_3;
		if ((((int32_t)L_111) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_112)->max_length))))))
		{
			goto IL_0180;
		}
	}
	{
		// if (same > 2)
		int32_t L_113 = V_16;
		if ((((int32_t)L_113) <= ((int32_t)2)))
		{
			goto IL_01bc;
		}
	}
	{
		// AddPoints(ref connected, square);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_114 = V_15;
		Match3_AddPoints_m727865BF9D21AA5EC8A5BEF3CB457B4D20058121(__this, (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)(&V_0), L_114, /*hidden argument*/NULL);
	}

IL_01bc:
	{
		// for(int i = 0; i < 4; i++) //Check for a 2x2
		int32_t L_115 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
	}

IL_01c2:
	{
		// for(int i = 0; i < 4; i++) //Check for a 2x2
		int32_t L_116 = V_14;
		if ((((int32_t)L_116) < ((int32_t)4)))
		{
			goto IL_0129;
		}
	}
	{
		// if(main) //Checks for other matches along the current match
		bool L_117 = ___main1;
		if (!L_117)
		{
			goto IL_01f9;
		}
	}
	{
		// for (int i = 0; i < connected.Count; i++)
		V_19 = 0;
		goto IL_01ef;
	}

IL_01d2:
	{
		// AddPoints(ref connected, isConnected(connected[i], false));
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_118 = V_0;
		int32_t L_119 = V_19;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_120;
		L_120 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_118, L_119, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_121;
		L_121 = Match3_isConnected_m85FD345D8B0B14F74964D95FD781A040539FC227(__this, L_120, (bool)0, /*hidden argument*/NULL);
		Match3_AddPoints_m727865BF9D21AA5EC8A5BEF3CB457B4D20058121(__this, (List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)(&V_0), L_121, /*hidden argument*/NULL);
		// for (int i = 0; i < connected.Count; i++)
		int32_t L_122 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
	}

IL_01ef:
	{
		// for (int i = 0; i < connected.Count; i++)
		int32_t L_123 = V_19;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_124 = V_0;
		int32_t L_125;
		L_125 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_124, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01d2;
		}
	}

IL_01f9:
	{
		// return connected;
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_126 = V_0;
		return L_126;
	}
}
// System.Void Match3::AddPoints(System.Collections.Generic.List`1<Point>&,System.Collections.Generic.List`1<Point>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_AddPoints_m727865BF9D21AA5EC8A5BEF3CB457B4D20058121 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** ___points0, List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * ___add1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Point p in add)
		List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_0 = ___add1;
		Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F  L_1;
		L_1 = List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6(L_0, /*hidden argument*/List_1_GetEnumerator_m57EF3781DF9D478F729D65A8A73987694A62EDC6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0009:
		{
			// foreach(Point p in add)
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2;
			L_2 = Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_inline((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB2AA0E92C369F32AFEB757189F9BF43F72C80E57_RuntimeMethod_var);
			V_1 = L_2;
			// bool doAdd = true;
			V_2 = (bool)1;
			// for(int i = 0; i < points.Count; i++)
			V_3 = 0;
			goto IL_002f;
		}

IL_0017:
		{
			// if(points[i].Equals(p))
			List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** L_3 = ___points0;
			List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_4 = *((List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)L_3);
			int32_t L_5 = V_3;
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6;
			L_6 = List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mC1A6E8ECD60408F506A2F355F27813A4A29572FD_RuntimeMethod_var);
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7 = V_1;
			bool L_8;
			L_8 = Point_Equals_mA46526C0991295BBA45EA8C20419CAE9D49A3E1A(L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_002b;
			}
		}

IL_0027:
		{
			// doAdd = false;
			V_2 = (bool)0;
			// break;
			goto IL_0039;
		}

IL_002b:
		{
			// for(int i = 0; i < points.Count; i++)
			int32_t L_9 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		}

IL_002f:
		{
			// for(int i = 0; i < points.Count; i++)
			int32_t L_10 = V_3;
			List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** L_11 = ___points0;
			List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_12 = *((List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)L_11);
			int32_t L_13;
			L_13 = List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_inline(L_12, /*hidden argument*/List_1_get_Count_m6F31A53E3EC316F7D515F0DA03AFBD994F72130B_RuntimeMethod_var);
			if ((((int32_t)L_10) < ((int32_t)L_13)))
			{
				goto IL_0017;
			}
		}

IL_0039:
		{
			// if (doAdd) points.Add(p);
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_0044;
			}
		}

IL_003c:
		{
			// if (doAdd) points.Add(p);
			List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 ** L_15 = ___points0;
			List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 * L_16 = *((List_1_t6DBDE2814AF5CDEACE75D97EDB16C6BE36165002 **)L_15);
			Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_17 = V_1;
			List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7(L_16, L_17, /*hidden argument*/List_1_Add_mD88BE69D576D1F7D77956EC199990DCC740BCEF7_RuntimeMethod_var);
		}

IL_0044:
		{
			// foreach(Point p in add)
			bool L_18;
			L_18 = Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m2F5AA28F1201214399D82C2346BD75DDC0EC2591_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0009;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137((Enumerator_tD7283F6F33F85C1AB9A8FF6818516D488D5EE20F *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF3C2844C8310C8B27D7F9DB14887D68365123137_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Int32 Match3::fillPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match3_fillPiece_m2099491433F04072016417DE99C5BED7F49962E6 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	{
		// val = (random.Next(0, 100) / (100 / pieces.Length)) + 1;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = __this->get_random_16();
		int32_t L_1;
		L_1 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, 0, ((int32_t)100));
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_2 = __this->get_pieces_6();
		// return val;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_1/(int32_t)((int32_t)((int32_t)((int32_t)100)/(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))), (int32_t)1));
	}
}
// System.Int32 Match3::getValueAtPoint(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match3_getValueAtPoint_m98571FB48BF20FDABB37C68622265555494BCBA3 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method)
{
	{
		// if (p.x < 0 || p.x >= width || p.y < 0 || p.y >= height)
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___p0;
		int32_t L_1 = L_0->get_x_0();
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = ___p0;
		int32_t L_3 = L_2->get_x_0();
		int32_t L_4 = __this->get_width_9();
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_5 = ___p0;
		int32_t L_6 = L_5->get_y_1();
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7 = ___p0;
		int32_t L_8 = L_7->get_y_1();
		int32_t L_9 = __this->get_height_10();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0030;
		}
	}

IL_002e:
	{
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// return board[p.x, p.y].value;
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_10 = __this->get_board_12();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_11 = ___p0;
		int32_t L_12 = L_11->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_13 = ___p0;
		int32_t L_14 = L_13->get_y_1();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_15;
		L_15 = (L_10)->GetAtUnchecked(L_12, L_14);
		int32_t L_16 = L_15->get_value_0();
		return L_16;
	}
}
// System.Void Match3::setValueAtPoint(Point,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3_setValueAtPoint_m9FFDAD0F81DB45C9E05C1E4AE0571727EED7CB4A (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, int32_t ___v1, const RuntimeMethod* method)
{
	{
		// board[p.x, p.y].value = v;
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_0 = __this->get_board_12();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1 = ___p0;
		int32_t L_2 = L_1->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = ___p0;
		int32_t L_4 = L_3->get_y_1();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5;
		L_5 = (L_0)->GetAtUnchecked(L_2, L_4);
		int32_t L_6 = ___v1;
		L_5->set_value_0(L_6);
		// }
		return;
	}
}
// Node Match3::getNodeAtPoint(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * Match3_getNodeAtPoint_m5C788A682A36ABDDB2A2E2BA8500898286627B5F (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method)
{
	{
		// return board[p.x, p.y];
		NodeU5BU2CU5D_t129A6CD9AE9FB69C54651AA0BF6D1623BD400BC5* L_0 = __this->get_board_12();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1 = ___p0;
		int32_t L_2 = L_1->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = ___p0;
		int32_t L_4 = L_3->get_y_1();
		Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * L_5;
		L_5 = (L_0)->GetAtUnchecked(L_2, L_4);
		return L_5;
	}
}
// System.Int32 Match3::newValue(System.Collections.Generic.List`1<System.Int32>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match3_newValue_m16F9E6FA7D6EB8808F5AF5A1A6FB21252A5EC577 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___remove0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<int> available = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < pieces.Length; i++)
		V_1 = 0;
		goto IL_0017;
	}

IL_000a:
	{
		// available.Add(i + 1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = V_0;
		int32_t L_2 = V_1;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0017:
	{
		// for (int i = 0; i < pieces.Length; i++)
		int32_t L_4 = V_1;
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_5 = __this->get_pieces_6();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// foreach (int i in remove)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** L_6 = ___remove0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = *((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)L_6);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_8;
		L_8 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_7, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_002c:
		{
			// foreach (int i in remove)
			int32_t L_9;
			L_9 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_3 = L_9;
			// available.Remove(i);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = V_0;
			int32_t L_11 = V_3;
			bool L_12;
			L_12 = List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_10, L_11, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		}

IL_003c:
		{
			// foreach (int i in remove)
			bool L_13;
			L_13 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_2), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// if (available.Count <= 0) return 0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_14 = V_0;
		int32_t L_15;
		L_15 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_14, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		// if (available.Count <= 0) return 0;
		return 0;
	}

IL_0060:
	{
		// return available[random.Next(0, available.Count)];
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_16 = V_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_17 = __this->get_random_16();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_18 = V_0;
		int32_t L_19;
		L_19 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_18, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_20;
		L_20 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_17, 0, L_19);
		int32_t L_21;
		L_21 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_16, L_20, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		return L_21;
	}
}
// System.String Match3::getRandomSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Match3_getRandomSeed_m5431D2E885FE4A0B5719355D4DE7E1893671DD9F (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C078ABC04CC661FAB2652993934BDCF2296DEC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// string seed = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string acceptableChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdeghijklmnopqrstuvwxyz1234567890!@#$%^&*()";
		V_1 = _stringLiteral9C078ABC04CC661FAB2652993934BDCF2296DEC6;
		// for (int i = 0; i < 20; i++)
		V_2 = 0;
		goto IL_0035;
	}

IL_0010:
	{
		// seed += acceptableChars[Random.Range(0, acceptableChars.Length)];
		String_t* L_0 = V_0;
		String_t* L_1 = V_1;
		String_t* L_2 = V_1;
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_3, /*hidden argument*/NULL);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		String_t* L_6;
		L_6 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_3), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// for (int i = 0; i < 20; i++)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0035:
	{
		// for (int i = 0; i < 20; i++)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)20))))
		{
			goto IL_0010;
		}
	}
	{
		// return seed;
		String_t* L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector2 Match3::getPositionFromPoint(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Match3_getPositionFromPoint_mCEDF0D6F128E62A827F6DFBCC3CC8D075A264BD9 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method)
{
	{
		// return new Vector2(32 + (64 * p.x), -32 - (64 * p.y));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___p0;
		int32_t L_1 = L_0->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = ___p0;
		int32_t L_3 = L_2->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)32), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)64), (int32_t)L_1)))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)-32), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)64), (int32_t)L_3)))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Match3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match3__ctor_m1B63BB4C9328840DFF75F2B20EE85C8428EAA5F2 (Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * __this, const RuntimeMethod* method)
{
	{
		// int width = 9;
		__this->set_width_9(((int32_t)9));
		// int height = 14;
		__this->set_height_10(((int32_t)14));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MouseTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseTracker_Start_m8E1513D3D02F19DAFD4C1B31B3C2DD349002C462 (MouseTracker_t824CC78321645E56FF8C03DD2E2802AB68C57053 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MouseTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseTracker_Update_mFA02623116D9CA0D3A0166B993CA4FA07F559B29 (MouseTracker_t824CC78321645E56FF8C03DD2E2802AB68C57053 * __this, const RuntimeMethod* method)
{
	{
		// mousePosition = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_mousePosition_4(L_0);
		// mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_mousePosition_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		__this->set_mousePosition_4(L_3);
		// transform.position = Vector2.Lerp(transform.position, mousePosition, moveSpeed) + new Vector2(1.5f,-1f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_mousePosition_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_moveSpeed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_7, L_9, L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), (1.5f), (-1.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseTracker__ctor_mEBBB5CE792C87224294EE981C3AD932E61A7C5E8 (MouseTracker_t824CC78321645E56FF8C03DD2E2802AB68C57053 * __this, const RuntimeMethod* method)
{
	{
		// public float moveSpeed = 0.1f;
		__this->set_moveSpeed_5((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MovePieces::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces_Awake_m9CE2A6069E7DBDD4A6E246FB16B78657180426B2 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_StaticFields*)il2cpp_codegen_static_fields_for(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void MovePieces::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces_Start_mFAFFBEFB671AABD494989D2A3D9C0E5BD3CF6AA7 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMatch3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D_m621EEDBAF0CAB6A837E2CCEA335A1E648C7287CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// game = GetComponent<Match3>();
		Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * L_0;
		L_0 = Component_GetComponent_TisMatch3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D_m621EEDBAF0CAB6A837E2CCEA335A1E648C7287CE(__this, /*hidden argument*/Component_GetComponent_TisMatch3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D_m621EEDBAF0CAB6A837E2CCEA335A1E648C7287CE_RuntimeMethod_var);
		__this->set_game_5(L_0);
		// }
		return;
	}
}
// System.Void MovePieces::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces_Update_mC35E29D79D15DBBCA91B4014898F50A548C4C8F0 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * V_3 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		// if (moving != null)
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = __this->get_moving_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0134;
		}
	}
	{
		// Vector2 dir = ((Vector2)Input.mousePosition - mouseStart);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = __this->get_mouseStart_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector2 nDir = dir.normalized;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_6;
		// Vector2 aDir = new Vector2(Mathf.Abs(dir.x), Mathf.Abs(dir.y));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_x_0();
		float L_9;
		L_9 = fabsf(L_8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		float L_11 = L_10.get_y_1();
		float L_12;
		L_12 = fabsf(L_11);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), L_9, L_12, /*hidden argument*/NULL);
		// newIndex = Point.clone(moving.index);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_13 = __this->get_moving_6();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_14 = L_13->get_index_5();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_15;
		L_15 = Point_clone_m7DEDD6B446980B93151FBF5A46100FC13C8C1F4B(L_14, /*hidden argument*/NULL);
		__this->set_newIndex_7(L_15);
		// Point add = Point.zero;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_16;
		L_16 = Point_get_zero_m0F0A4F0E0772FF857408D21424B38E5C084DB9FE(/*hidden argument*/NULL);
		V_3 = L_16;
		// if(dir.magnitude > 32) // if mouse is 32 pixels away from starting point of mouse
		float L_17;
		L_17 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_17) > ((float)(32.0f)))))
		{
			goto IL_00c4;
		}
	}
	{
		// if (aDir.x > aDir.y)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_2;
		float L_19 = L_18.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_2;
		float L_21 = L_20.get_y_1();
		if ((!(((float)L_19) > ((float)L_21))))
		{
			goto IL_009e;
		}
	}
	{
		// add = (new Point((nDir.x > 0) ? 1 : -1, 0));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_1;
		float L_23 = L_22.get_x_0();
		if ((((float)L_23) > ((float)(0.0f))))
		{
			goto IL_0094;
		}
	}
	{
		G_B6_0 = (-1);
		goto IL_0095;
	}

IL_0094:
	{
		G_B6_0 = 1;
	}

IL_0095:
	{
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_24 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_24, G_B6_0, 0, /*hidden argument*/NULL);
		V_3 = L_24;
		goto IL_00c4;
	}

IL_009e:
	{
		// else if (aDir.y > aDir.x)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_2;
		float L_26 = L_25.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_2;
		float L_28 = L_27.get_x_0();
		if ((!(((float)L_26) > ((float)L_28))))
		{
			goto IL_00c4;
		}
	}
	{
		// add = (new Point(0, (nDir.y > 0) ? -1 : 1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_1;
		float L_30 = L_29.get_y_1();
		G_B9_0 = 0;
		if ((((float)L_30) > ((float)(0.0f))))
		{
			G_B10_0 = 0;
			goto IL_00bd;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		goto IL_00be;
	}

IL_00bd:
	{
		G_B11_0 = (-1);
		G_B11_1 = G_B10_0;
	}

IL_00be:
	{
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_31 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_31, G_B11_1, G_B11_0, /*hidden argument*/NULL);
		V_3 = L_31;
	}

IL_00c4:
	{
		// newIndex.add(add);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_32 = __this->get_newIndex_7();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_33 = V_3;
		Point_add_mD76F8258FE0364E5EE2087B5E783F53BF06425BC(L_32, L_33, /*hidden argument*/NULL);
		// Vector2 pos = game.getPositionFromPoint(moving.index);
		Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * L_34 = __this->get_game_5();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_35 = __this->get_moving_6();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_36 = L_35->get_index_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Match3_getPositionFromPoint_mCEDF0D6F128E62A827F6DFBCC3CC8D075A264BD9(L_34, L_36, /*hidden argument*/NULL);
		V_4 = L_37;
		// if (!newIndex.Equals(moving.index))
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_38 = __this->get_newIndex_7();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_39 = __this->get_moving_6();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_40 = L_39->get_index_5();
		bool L_41;
		L_41 = Point_Equals_mA46526C0991295BBA45EA8C20419CAE9D49A3E1A(L_38, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0127;
		}
	}
	{
		// pos += Point.mult(new Point(add.x, -add.y), 16).ToVector();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_4;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_43 = V_3;
		int32_t L_44 = L_43->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_45 = V_3;
		int32_t L_46 = L_45->get_y_1();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_47 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_47, L_44, ((-L_46)), /*hidden argument*/NULL);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_48;
		L_48 = Point_mult_mAD744E0D62A9A54F0A46FFFA64011C4ABDDE2D3B(L_47, ((int32_t)16), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Point_ToVector_m20E3EB5C6E141984E667913100C86F9721BAAABB(L_48, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_42, L_49, /*hidden argument*/NULL);
		V_4 = L_50;
	}

IL_0127:
	{
		// moving.MovePositionTo(pos);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_51 = __this->get_moving_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_4;
		NodePiece_MovePositionTo_m567275E1BB4DB44DA3686EC32F9EB417CE0DC686(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0134:
	{
		// }
		return;
	}
}
// System.Void MovePieces::MovePiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces_MovePiece_mE10D746BE09964368DF0F679DA910A128353A7B0 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___piece0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (moving != null) return;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = __this->get_moving_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (moving != null) return;
		return;
	}

IL_000f:
	{
		// moving = piece;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_2 = ___piece0;
		__this->set_moving_6(L_2);
		// mouseStart = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		__this->set_mouseStart_8(L_4);
		// }
		return;
	}
}
// System.Void MovePieces::DropPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces_DropPiece_mE13EA441ECF8511102EFE852E267D8F54CD13FD5 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (moving == null) return;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = __this->get_moving_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (moving == null) return;
		return;
	}

IL_000f:
	{
		// if (newIndex != moving.index)
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = __this->get_newIndex_7();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_3 = __this->get_moving_6();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = L_3->get_index_5();
		if ((((RuntimeObject*)(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_2) == ((RuntimeObject*)(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		// game.FlipPieces(moving.index, newIndex, true);
		Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * L_5 = __this->get_game_5();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_6 = __this->get_moving_6();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_7 = L_6->get_index_5();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8 = __this->get_newIndex_7();
		Match3_FlipPieces_mFA04F415415B132F7875EEFF58B448063E4D7088(L_5, L_7, L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_0041:
	{
		// game.ResetPiece(moving);
		Match3_t1CB9B0AA1C79B06D8E239E1F683E0A53A308EC7D * L_9 = __this->get_game_5();
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_10 = __this->get_moving_6();
		Match3_ResetPiece_mF97D173780B4F33A80D3E7E6E2E347090B45922F(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// moving = null;
		__this->set_moving_6((NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 *)NULL);
		// }
		return;
	}
}
// System.Void MovePieces::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovePieces__ctor_m729E7E9D1649C2443549FA3185729E28B938DBB3 (MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Node::.ctor(System.Int32,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mEA612FD366862326437830360A3B49B6788ECC07 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, int32_t ___v0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___i1, const RuntimeMethod* method)
{
	{
		// public Node(int v, Point i)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// value = v;
		int32_t L_0 = ___v0;
		__this->set_value_0(L_0);
		// index = i;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1 = ___i1;
		__this->set_index_1(L_1);
		// }
		return;
	}
}
// System.Void Node::SetPiece(NodePiece)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_SetPiece_m3AF8E057E1B24B8CD8A05E9ED300BB515DFC0091 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B2_0 = NULL;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * G_B3_1 = NULL;
	{
		// piece = p;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = ___p0;
		__this->set_piece_2(L_0);
		// value = (piece == null) ? 0 : piece.value;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_1 = __this->get_piece_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0023;
		}
	}
	{
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_3 = __this->get_piece_2();
		int32_t L_4 = L_3->get_value_4();
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		G_B3_1->set_value_0(G_B3_0);
		// if (piece == null) return;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_5 = __this->get_piece_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (piece == null) return;
		return;
	}

IL_0038:
	{
		// piece.SetIndex(index);
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_7 = __this->get_piece_2();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8 = __this->get_index_1();
		NodePiece_SetIndex_mBF8CA3397CDC229D3FB3334A542EAAF6359231F6(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// NodePiece Node::getPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * Node_getPiece_mBC358D864F818F231309EA0E1768A7452C10D752 (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// return piece;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = __this->get_piece_2();
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
// System.Void NodePiece::Initialize(System.Int32,Point,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_Initialize_m77C6E362D5C53475C17254BFB53F9EEC28E48870 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, int32_t ___v0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___piece2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// img = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_img_9(L_0);
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_7(L_1);
		// value = v;
		int32_t L_2 = ___v0;
		__this->set_value_4(L_2);
		// SetIndex(p);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = ___p1;
		NodePiece_SetIndex_mBF8CA3397CDC229D3FB3334A542EAAF6359231F6(__this, L_3, /*hidden argument*/NULL);
		// img.sprite = piece;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_img_9();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = ___piece2;
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NodePiece::SetIndex(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_SetIndex_mBF8CA3397CDC229D3FB3334A542EAAF6359231F6 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method)
{
	{
		// index = p;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___p0;
		__this->set_index_5(L_0);
		// ResetPosition();
		NodePiece_ResetPosition_mF13D369ED064809DFCE47B3D470066212354720A(__this, /*hidden argument*/NULL);
		// UpdateName();
		NodePiece_UpdateName_m60A0143E9F2B20D51B26C5D4440ED46D677B126F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NodePiece::ResetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_ResetPosition_mF13D369ED064809DFCE47B3D470066212354720A (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, const RuntimeMethod* method)
{
	{
		// pos = new Vector2(32 + (64 * index.x), -32 - (64 * index.y));
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = __this->get_index_5();
		int32_t L_1 = L_0->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = __this->get_index_5();
		int32_t L_3 = L_2->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)32), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)64), (int32_t)L_1)))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)-32), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)64), (int32_t)L_3)))))), /*hidden argument*/NULL);
		__this->set_pos_6(L_4);
		// }
		return;
	}
}
// System.Void NodePiece::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_MovePosition_mF4FA21DCB8EC72D0F948E851FAA4A0BD2695FF74 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___move0, const RuntimeMethod* method)
{
	{
		// rect.anchoredPosition += move * Time.deltaTime * 16f;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_rect_7();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = L_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___move0;
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_5, (16.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_6, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NodePiece::MovePositionTo(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_MovePositionTo_m567275E1BB4DB44DA3686EC32F9EB417CE0DC686 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___move0, const RuntimeMethod* method)
{
	{
		// rect.anchoredPosition = Vector2.Lerp(rect.anchoredPosition, move, Time.deltaTime * 16f);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_rect_7();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_rect_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___move0;
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_2, L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)(16.0f))), /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean NodePiece::UpdatePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodePiece_UpdatePiece_m6F5E3DAE90A009FD24B72319472D606DA5C8F2BC (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, const RuntimeMethod* method)
{
	{
		// if(Vector3.Distance(rect.anchoredPosition, pos) > 1)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_rect_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_pos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_4, /*hidden argument*/NULL);
		if ((!(((float)L_5) > ((float)(1.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// MovePositionTo(pos);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_pos_6();
		NodePiece_MovePositionTo_m567275E1BB4DB44DA3686EC32F9EB417CE0DC686(__this, L_6, /*hidden argument*/NULL);
		// updating = true;
		__this->set_updating_8((bool)1);
		// return true;
		return (bool)1;
	}

IL_003c:
	{
		// rect.anchoredPosition = pos;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_rect_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_pos_6();
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_7, L_8, /*hidden argument*/NULL);
		// updating = false;
		__this->set_updating_8((bool)0);
		// return false;
		return (bool)0;
	}
}
// System.Void NodePiece::UpdateName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_UpdateName_m60A0143E9F2B20D51B26C5D4440ED46D677B126F (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F2E1BB4D5697F46C81A5A87547F6F503A88AF0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.name = "Node [" + index.x + ", " + index.y + "]";
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteral5F2E1BB4D5697F46C81A5A87547F6F503A88AF0B);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5F2E1BB4D5697F46C81A5A87547F6F503A88AF0B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = __this->get_index_5();
		int32_t* L_5 = L_4->get_address_of_x_0();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_3;
		ArrayElementTypeCheck (L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_9 = __this->get_index_5();
		int32_t* L_10 = L_9->get_address_of_y_1();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_8;
		ArrayElementTypeCheck (L_12, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_13;
		L_13 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_12, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_0, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NodePiece::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_OnPointerDown_m663B2BB2BCF70C0085C27FBF4E2D89C6A3CA46C1 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (updating) return;
		bool L_0 = __this->get_updating_8();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (updating) return;
		return;
	}

IL_0009:
	{
		// MovePieces.instance.MovePiece(this);
		MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * L_1 = ((MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_StaticFields*)il2cpp_codegen_static_fields_for(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_il2cpp_TypeInfo_var))->get_instance_4();
		MovePieces_MovePiece_mE10D746BE09964368DF0F679DA910A128353A7B0(L_1, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NodePiece::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece_OnPointerUp_mD66F4CC0715A58B7B6353DE91A02F3F8C813A471 (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MovePieces.instance.DropPiece();
		MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001 * L_0 = ((MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_StaticFields*)il2cpp_codegen_static_fields_for(MovePieces_t4CBF87DC544ADE1B938AD679B8FA02E6B3981001_il2cpp_TypeInfo_var))->get_instance_4();
		MovePieces_DropPiece_mE13EA441ECF8511102EFE852E267D8F54CD13FD5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NodePiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePiece__ctor_m82EF91A65B9CD052B71AAB547457539126FEEB5A (NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Pausing::pauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pausing_pauseGame_mDF2BBB70273AF914602B6FE597AFA07F680B29EA (Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD * __this, const RuntimeMethod* method)
{
	{
		// pauseMenuUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuUI_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pausing::quitToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pausing_quitToMenu_m3AB95AC37800EBAFB40D43B0C2C52492D1ACD922 (Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pausing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pausing_Start_mAE9B1CC15604F199EDFB529A5E3076C46A0A8A2E (Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Pausing::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pausing_Update_mF9F2505A9F9E498C8C65F020767B123FC75F5F46 (Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Pausing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pausing__ctor_m2E58CE075F99266CC1955C7AA6D490E4C1D1902E (Pausing_tCDBDD1962438AFB770D2667462AB554FCA41DFFD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___nx0, int32_t ___ny1, const RuntimeMethod* method)
{
	{
		// public Point(int nx, int ny)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// x = nx;
		int32_t L_0 = ___nx0;
		__this->set_x_0(L_0);
		// y = ny;
		int32_t L_1 = ___ny1;
		__this->set_y_1(L_1);
		// }
		return;
	}
}
// System.Void Point::mult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_mult_m253C25500BAEF833005C09B1D2CD2190B2DFDA6A (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, int32_t ___m0, const RuntimeMethod* method)
{
	{
		// x *= m;
		int32_t L_0 = __this->get_x_0();
		int32_t L_1 = ___m0;
		__this->set_x_0(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// y *= m;
		int32_t L_2 = __this->get_y_1();
		int32_t L_3 = ___m0;
		__this->set_y_1(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)));
		// }
		return;
	}
}
// System.Void Point::add(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_add_mD76F8258FE0364E5EE2087B5E783F53BF06425BC (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method)
{
	{
		// x += p.x;
		int32_t L_0 = __this->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1 = ___p0;
		int32_t L_2 = L_1->get_x_0();
		__this->set_x_0(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_2)));
		// y += p.y;
		int32_t L_3 = __this->get_y_1();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = ___p0;
		int32_t L_5 = L_4->get_y_1();
		__this->set_y_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5)));
		// }
		return;
	}
}
// UnityEngine.Vector2 Point::ToVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Point_ToVector_m20E3EB5C6E141984E667913100C86F9721BAAABB (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, const RuntimeMethod* method)
{
	{
		// return new Vector2(x, y);
		int32_t L_0 = __this->get_x_0();
		int32_t L_1 = __this->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), ((float)((float)L_0)), ((float)((float)L_1)), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Point::Equals(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mA46526C0991295BBA45EA8C20419CAE9D49A3E1A (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * __this, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method)
{
	{
		// return (x == p.x && y == p.y);
		int32_t L_0 = __this->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_1 = ___p0;
		int32_t L_2 = L_1->get_x_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = __this->get_y_1();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = ___p0;
		int32_t L_5 = L_4->get_y_1();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Point Point::fromVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_fromVector_m9112B1FA25BE0318BF028989630CF592A0F1054A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Point((int)v.x, (int)v.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_4, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
// Point Point::fromVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_fromVector_m8D90668D4A5A5C7D458AE98321AB7E9FDF483D45 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Point((int)v.x, (int)v.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_4, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
// Point Point::mult(Point,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_mult_mAD744E0D62A9A54F0A46FFFA64011C4ABDDE2D3B (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, int32_t ___m1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Point(p.x * m, p.y * m);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___p0;
		int32_t L_1 = L_0->get_x_0();
		int32_t L_2 = ___m1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_3 = ___p0;
		int32_t L_4 = L_3->get_y_1();
		int32_t L_5 = ___m1;
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_6, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// Point Point::add(Point,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_add_mD3586207981D50B2D8951E7948944ED5559AB155 (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___o1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Point(p.x + o.x, p.y + o.y);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___p0;
		int32_t L_1 = L_0->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = ___o1;
		int32_t L_3 = L_2->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = ___p0;
		int32_t L_5 = L_4->get_y_1();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_6 = ___o1;
		int32_t L_7 = L_6->get_y_1();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_8 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3)), ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// Point Point::clone(Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_clone_m7DEDD6B446980B93151FBF5A46100FC13C8C1F4B (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Point(p.x, p.y);
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = ___p0;
		int32_t L_1 = L_0->get_x_0();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_2 = ___p0;
		int32_t L_3 = L_2->get_y_1();
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_4 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Point Point::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_zero_m0F0A4F0E0772FF857408D21424B38E5C084DB9FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new Point(0, 0); }
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_0, 0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Point Point::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_one_mC35635DBE96EAABB3D42F6C8523F5918D7465FF0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new Point(1, 1); }
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_0, 1, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// Point Point::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_up_mAD4FD2B6CD9CD5B487A7FE19EF51188FAD3E9496 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new Point(0, 1); }
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_0, 0, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// Point Point::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_down_m760C2FF5EFA02D936C939F9537EC3DEDF88C3B17 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new Point(0, -1); }
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_0, 0, (-1), /*hidden argument*/NULL);
		return L_0;
	}
}
// Point Point::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_right_mB42EF5AE23F568907E534A2D798E06B70E4195BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new Point(1, 0); }
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_0, 1, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Point Point::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * Point_get_left_mF30134CA4F7005B9D3939FE0A467DE2B3C7B48FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new Point(-1, 0); }
		Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 * L_0 = (Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28 *)il2cpp_codegen_object_new(Point_t963E017424C8A6921AB4214F4FE0EEA0D4E40F28_il2cpp_TypeInfo_var);
		Point__ctor_mFE9CC1CEB65E7D8D1252BD4DF35899F1F2336FC7(L_0, (-1), 0, /*hidden argument*/NULL);
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
// System.Void QuestionAndAnswer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestionAndAnswer__ctor_m7797DCB13F78D08539C62B866911909888D9DBCF (QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void QuizManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_Start_mC65255D0EDEC29EEDB0815F7CEF3E16BD72448D4 (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method)
{
	{
		// activationButton.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_activationButton_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GenerateQuestion();
		QuizManager_GenerateQuestion_m682455D0862EC0ED4FBFC161DCA58583CA328D6D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizManager::QuizOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_QuizOver_mBA93171FFC59BDC9F1F58B08240E3199B8447077 (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E6ECC895170B1AA59EAEB33A49B242A05B89869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4B71C4DA2EB613C4251565A7392B71D455D4FD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// quizScorePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_quizScorePanel_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// if (score == 3)
		int32_t L_1 = __this->get_score_13();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0037;
		}
	}
	{
		// activationButton.transform.GetChild(0).GetComponent<Text>().text = "3/3 Correct Congratulations! Tap to activate Emma's special power";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_activationButton_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 0, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral6E6ECC895170B1AA59EAEB33A49B242A05B89869);
		// }
		goto IL_0067;
	}

IL_0037:
	{
		// activationButton.transform.GetChild(0).GetComponent<Text>().text = score + " out of 3 answered correctly. Tap to continue!";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_activationButton_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 0, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_8, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t* L_10 = __this->get_address_of_score_13();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_11, _stringLiteralC4B71C4DA2EB613C4251565A7392B71D455D4FD8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
	}

IL_0067:
	{
		// activationButton.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_activationButton_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizManager::Correct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_Correct_m82D6E405D30CBDBA195C391D307BFF0DC37642AF (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D9ED53BBAA2266D8B0DC3F6D707E036D2D29B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D0716BC6E71CF8171A831003482E728DFDD739);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score++;
		int32_t L_0 = __this->get_score_13();
		__this->set_score_13(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// scoreText.text = "Correct Answers: " + score + "/3";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_scoreText_11();
		int32_t* L_2 = __this->get_address_of_score_13();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral35D9ED53BBAA2266D8B0DC3F6D707E036D2D29B2, L_3, _stringLiteral63D0716BC6E71CF8171A831003482E728DFDD739, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// qna.RemoveAt(currentQuestion);
		List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * L_5 = __this->get_qna_4();
		int32_t L_6 = __this->get_currentQuestion_6();
		List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823(L_5, L_6, /*hidden argument*/List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823_RuntimeMethod_var);
		// answeredQuestion++;
		int32_t L_7 = __this->get_answeredQuestion_12();
		__this->set_answeredQuestion_12(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// if (answeredQuestion < 3)
		int32_t L_8 = __this->get_answeredQuestion_12();
		if ((((int32_t)L_8) >= ((int32_t)3)))
		{
			goto IL_0062;
		}
	}
	{
		// GenerateQuestion();
		QuizManager_GenerateQuestion_m682455D0862EC0ED4FBFC161DCA58583CA328D6D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// QuizOver();
		QuizManager_QuizOver_mBA93171FFC59BDC9F1F58B08240E3199B8447077(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizManager::Incorrect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_Incorrect_m09C67436C9C2CFFEBE5778E4D7B3835FCDF8B837 (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// qna.RemoveAt(currentQuestion);
		List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * L_0 = __this->get_qna_4();
		int32_t L_1 = __this->get_currentQuestion_6();
		List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823(L_0, L_1, /*hidden argument*/List_1_RemoveAt_mA432C69845C586D8BD32D9A0D724D1B725926823_RuntimeMethod_var);
		// answeredQuestion++;
		int32_t L_2 = __this->get_answeredQuestion_12();
		__this->set_answeredQuestion_12(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// if (answeredQuestion < 3)
		int32_t L_3 = __this->get_answeredQuestion_12();
		if ((((int32_t)L_3) >= ((int32_t)3)))
		{
			goto IL_002f;
		}
	}
	{
		// GenerateQuestion();
		QuizManager_GenerateQuestion_m682455D0862EC0ED4FBFC161DCA58583CA328D6D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// QuizOver();
		QuizManager_QuizOver_mBA93171FFC59BDC9F1F58B08240E3199B8447077(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizManager::SetAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_SetAnswer_m9004F97004BBFCAE265DEDC5BCA629AEFAD63B10 (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnswers_t0B72380C5532E123D155372BF2EDB151D5C67C18_m8C200EA4D125CEE3B675F40A102A49306E9E15E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < option.Length; i++)
		V_0 = 0;
		goto IL_007e;
	}

IL_0004:
	{
		// option[i].GetComponent<Answers>().isCorrect = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_option_5();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18 * L_4;
		L_4 = GameObject_GetComponent_TisAnswers_t0B72380C5532E123D155372BF2EDB151D5C67C18_m8C200EA4D125CEE3B675F40A102A49306E9E15E4(L_3, /*hidden argument*/GameObject_GetComponent_TisAnswers_t0B72380C5532E123D155372BF2EDB151D5C67C18_m8C200EA4D125CEE3B675F40A102A49306E9E15E4_RuntimeMethod_var);
		L_4->set_isCorrect_4((bool)0);
		// option[i].transform.GetChild(0).GetComponent<Text>().text = qna[currentQuestion].answer[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_option_5();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, 0, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11;
		L_11 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_10, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * L_12 = __this->get_qna_4();
		int32_t L_13 = __this->get_currentQuestion_6();
		QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8 * L_14;
		L_14 = List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14->get_answer_1();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_18);
		// if (qna[currentQuestion].correctAnswer == i + 1)
		List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * L_19 = __this->get_qna_4();
		int32_t L_20 = __this->get_currentQuestion_6();
		QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8 * L_21;
		L_21 = List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_RuntimeMethod_var);
		int32_t L_22 = L_21->get_correctAnswer_2();
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))))))
		{
			goto IL_007a;
		}
	}
	{
		// option[i].GetComponent<Answers>().isCorrect = true;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = __this->get_option_5();
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Answers_t0B72380C5532E123D155372BF2EDB151D5C67C18 * L_28;
		L_28 = GameObject_GetComponent_TisAnswers_t0B72380C5532E123D155372BF2EDB151D5C67C18_m8C200EA4D125CEE3B675F40A102A49306E9E15E4(L_27, /*hidden argument*/GameObject_GetComponent_TisAnswers_t0B72380C5532E123D155372BF2EDB151D5C67C18_m8C200EA4D125CEE3B675F40A102A49306E9E15E4_RuntimeMethod_var);
		L_28->set_isCorrect_4((bool)1);
	}

IL_007a:
	{
		// for (int i = 0; i < option.Length; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_007e:
	{
		// for (int i = 0; i < option.Length; i++)
		int32_t L_30 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_31 = __this->get_option_5();
		if ((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QuizManager::GenerateQuestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager_GenerateQuestion_m682455D0862EC0ED4FBFC161DCA58583CA328D6D (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m45389A0A55B4B8753E8FED7C0C8F63D413DA2F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87A12D6A3F0265650E06C7286F63B07343256F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (qna.Count > 0)
		List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * L_0 = __this->get_qna_4();
		int32_t L_1;
		L_1 = List_1_get_Count_m45389A0A55B4B8753E8FED7C0C8F63D413DA2F7B_inline(L_0, /*hidden argument*/List_1_get_Count_m45389A0A55B4B8753E8FED7C0C8F63D413DA2F7B_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		// currentQuestion = Random.Range(0, qna.Count);
		List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * L_2 = __this->get_qna_4();
		int32_t L_3;
		L_3 = List_1_get_Count_m45389A0A55B4B8753E8FED7C0C8F63D413DA2F7B_inline(L_2, /*hidden argument*/List_1_get_Count_m45389A0A55B4B8753E8FED7C0C8F63D413DA2F7B_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_3, /*hidden argument*/NULL);
		__this->set_currentQuestion_6(L_4);
		// questionText.text = qna[currentQuestion].question;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_questionText_10();
		List_1_t9653600E45892D8B49B8EC3E1B73CE04E07942FF * L_6 = __this->get_qna_4();
		int32_t L_7 = __this->get_currentQuestion_6();
		QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8 * L_8;
		L_8 = List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mFD02C9F5790CF29565A66A4E025A3C9D054042C2_RuntimeMethod_var);
		String_t* L_9 = L_8->get_question_0();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// SetAnswer();
		QuizManager_SetAnswer_m9004F97004BBFCAE265DEDC5BCA629AEFAD63B10(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004d:
	{
		// Debug.Log("Out of Questions");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB87A12D6A3F0265650E06C7286F63B07343256F9, /*hidden argument*/NULL);
		// QuizOver();
		QuizManager_QuizOver_mBA93171FFC59BDC9F1F58B08240E3199B8447077(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuizManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuizManager__ctor_m6F2137A4B5FDC42B809F3E546A987CB591DD101A (QuizManager_t0E5DFE5A933198DE5F249D288317625F7EA11F5B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 ScoreManager::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// get { return _scr; }
		int32_t L_0 = __this->get__scr_5();
		return L_0;
	}
}
// System.Void ScoreManager::set_Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_set_Score_mBA2C094FE2271625BD7FC0E35379758317471BC3 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _scr = value;
		int32_t L_0 = ___value0;
		__this->set__scr_5(L_0);
		// TextScoreUI.text = Score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_TextScoreUI_4();
		int32_t L_2;
		L_2 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// PlayerPrefs.SetInt("Score", Score);
		int32_t L_4;
		L_4 = ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_m638A240D34643E8AB9D17553622C1C9354348354 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SetVolume::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume_Start_mBD9C18EB2482C1E486FFB7010C9A8EC29C64CC45 (SetVolume_tCB0816C5DE61AD960843BAD6B1F17F26CC96644A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider.value = PlayerPrefs.GetFloat("MusicVolume", 0.75f);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_5();
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mCF1F69BE283197090AB08158CD05995136A1EBCF(_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700, (0.75f), /*hidden argument*/NULL);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void SetVolume::SetLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume_SetLevel_m869F38D5E4FF97C960EA9226994E07D66FF957D4 (SetVolume_tCB0816C5DE61AD960843BAD6B1F17F26CC96644A * __this, float ___sliderValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F96C71814E73292F536FF7D183927FD2296E4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer.SetFloat("MusicVol", Mathf.Log10(sliderValue) * 20);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_0 = __this->get_mixer_4();
		float L_1 = ___sliderValue0;
		float L_2;
		L_2 = log10f(L_1);
		bool L_3;
		L_3 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_0, _stringLiteral5F96C71814E73292F536FF7D183927FD2296E4EC, ((float)il2cpp_codegen_multiply((float)L_2, (float)(20.0f))), /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("MusicVolume", sliderValue);
		float L_4 = ___sliderValue0;
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralB5793A0486CA0270FF49AD51E2176B4E15A6F700, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SetVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetVolume__ctor_mB4CC4AF2BFDC3174E82BE6AB70997789F3C9E8B8 (SetVolume_tCB0816C5DE61AD960843BAD6B1F17F26CC96644A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// timerRunning = true;
		__this->set_timerRunning_6((bool)1);
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timerRunning)
		bool L_0 = __this->get_timerRunning_6();
		if (!L_0)
		{
			goto IL_0098;
		}
	}
	{
		// if (timeRemaining.ToString("F0") == "30")
		float* L_1 = __this->get_address_of_timeRemaining_5();
		String_t* L_2;
		L_2 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_1, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// quizPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_quizPanel_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// if (timeRemaining > 0)
		float L_5 = __this->get_timeRemaining_5();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		// timeRemaining -= 1.0f * Time.deltaTime;
		float L_6 = __this->get_timeRemaining_5();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeRemaining_5(((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_7)))));
		// }
		goto IL_0098;
	}

IL_005a:
	{
		// timeRemaining = 0;
		__this->set_timeRemaining_5((0.0f));
		// timerRunning = false;
		__this->set_timerRunning_6((bool)0);
		// gameOverMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_gameOverMenu_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// FinalScore.text = "Final Score: " + TextScore.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_FinalScore_11();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_TextScore_10();
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB, L_11, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
	}

IL_0098:
	{
		// TimeLabelUI.text = timeRemaining.ToString("F0");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_TimeLabelUI_4();
		float* L_14 = __this->get_address_of_timeRemaining_5();
		String_t* L_15;
		L_15 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_14, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// }
		return;
	}
}
// System.Void Timer::ResetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_ResetTime_m17A481D9DA1A565E5535C19199ECFC52D7640C54 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// public float timeRemaining = 60;
		__this->set_timeRemaining_5((60.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: ArrayLayout/rowData
IL2CPP_EXTERN_C void rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshal_pinvoke(const rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26& unmarshaled, rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_row_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_row_Length = (unmarshaled.get_row_0())->max_length;
		marshaled.___row_0 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaled_row_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_row_Length); i++)
		{
			(marshaled.___row_0)[i] = static_cast<int32_t>((unmarshaled.get_row_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.___row_0 = NULL;
	}
}
IL2CPP_EXTERN_C void rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshal_pinvoke_back(const rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_pinvoke& marshaled, rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___row_0 != NULL)
	{
		if (unmarshaled.get_row_0() == NULL)
		{
			unmarshaled.set_row_0(reinterpret_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_row_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_row_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<bool>((marshaled.___row_0)[i]));
		}
	}
}
// Conversion method for clean up from marshalling of: ArrayLayout/rowData
IL2CPP_EXTERN_C void rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshal_pinvoke_cleanup(rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_pinvoke& marshaled)
{
	if (marshaled.___row_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___row_0);
		marshaled.___row_0 = NULL;
	}
}
// Conversion methods for marshalling of: ArrayLayout/rowData
IL2CPP_EXTERN_C void rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshal_com(const rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26& unmarshaled, rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_com& marshaled)
{
	if (unmarshaled.get_row_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_row_Length = (unmarshaled.get_row_0())->max_length;
		marshaled.___row_0 = il2cpp_codegen_marshal_allocate_array<int32_t>(_unmarshaled_row_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_row_Length); i++)
		{
			(marshaled.___row_0)[i] = static_cast<int32_t>((unmarshaled.get_row_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.___row_0 = NULL;
	}
}
IL2CPP_EXTERN_C void rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshal_com_back(const rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_com& marshaled, rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___row_0 != NULL)
	{
		if (unmarshaled.get_row_0() == NULL)
		{
			unmarshaled.set_row_0(reinterpret_cast<BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*>((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_row_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_row_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<bool>((marshaled.___row_0)[i]));
		}
	}
}
// Conversion method for clean up from marshalling of: ArrayLayout/rowData
IL2CPP_EXTERN_C void rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshal_com_cleanup(rowData_t5F8443CD76CE0FE8D5B6B6B3D8F71CF4675FAF26_marshaled_com& marshaled)
{
	if (marshaled.___row_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___row_0);
		marshaled.___row_0 = NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManager_get_Score_m7358FE83F8A175EC387B7647264C9645526769D3_inline (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		// get { return _scr; }
		int32_t L_0 = __this->get__scr_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * Node_getPiece_mBC358D864F818F231309EA0E1768A7452C10D752_inline (Node_tDC658FC3FCD352DD64D788D5EA324B2DD75A1FB0 * __this, const RuntimeMethod* method)
{
	{
		// return piece;
		NodePiece_t1A027D0E1A7DDD0FEF656876DD97901AE81225E6 * L_0 = __this->get_piece_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
