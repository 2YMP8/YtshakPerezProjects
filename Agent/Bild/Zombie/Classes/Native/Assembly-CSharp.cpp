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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// BulletMovment
struct BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962;
// BulletOScene
struct BulletOScene_tA4A594E425DE50ABA2B6B4AAA4C7B0883E92D3AC;
// CameraMovment
struct CameraMovment_tF5279A1B33D53CEB73719F4010DB19DC18A3A34C;
// CreateZombies
struct CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67;
// DynamicJoystick
struct DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3;
// FixedJoystick
struct FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909;
// FloatingJoystick
struct FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE;
// Joystick
struct Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153;
// JoystickPlayerExample
struct JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B;
// JoystickSetterExample
struct JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435;
// OpenScene
struct OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463;
// OpenSceneSounds
struct OpenSceneSounds_t7C577C5A40D732293322851E1B2D52136572C1F2;
// PlayerEngin
struct PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7;
// SceneEngine
struct SceneEngine_tC93701E74DF4A1A92C2E13B40FDC55DB7D784379;
// SoundMenager
struct SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ParticleSystem
struct ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// VariableJoystick
struct VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1;
// ZombieEngine
struct ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3;
// ZombieOpenScene
struct ZombieOpenScene_t9B593E91FE724141BAF7F05084145ACFE74906F4;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral059387A3ACA8494111776B303D438EEADD04A621;
IL2CPP_EXTERN_C String_t* _stringLiteral0D69131CD45E6485287422AA4FC013FB0221CB17;
IL2CPP_EXTERN_C String_t* _stringLiteral0F7689B981C4615F4354EC1D49BED870624E4171;
IL2CPP_EXTERN_C String_t* _stringLiteral188E8EE673D53A8B4A1C7ED213545C4065C27879;
IL2CPP_EXTERN_C String_t* _stringLiteral22D200F8670DBDB3E253A90EEE5098477C95C23D;
IL2CPP_EXTERN_C String_t* _stringLiteral23A6C6DEBC5A87766313E2F1563C2CA4C4FB4E6C;
IL2CPP_EXTERN_C String_t* _stringLiteral29780E40001ACEBF94FC2DB1908881C916D80B3E;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0B67BCB7ECF77640A7DD122D98182E7BC9ADD4;
IL2CPP_EXTERN_C String_t* _stringLiteral490B32463C2E3D6E0F9BCBBAB9A331B11DE143B3;
IL2CPP_EXTERN_C String_t* _stringLiteral498D7017F203E9009B24CD9902DE0C6E0901EAE3;
IL2CPP_EXTERN_C String_t* _stringLiteral5817C8A2223B0001916184F6E949354092C2D732;
IL2CPP_EXTERN_C String_t* _stringLiteral67419517B1B86DC12904E0BEE5186F043DC7E9B0;
IL2CPP_EXTERN_C String_t* _stringLiteral72D1B03AD4B52092AC03644D853868C40428963B;
IL2CPP_EXTERN_C String_t* _stringLiteral774310ED601AE514163D241FE9A1A72EAA0DCCD8;
IL2CPP_EXTERN_C String_t* _stringLiteral9553A985D1CBA64FEB770AF45E4CCBD784D2008E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F798021B02227FE77DC73FBA3DDEC54E1E494BB;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F114D0FE2E38D5BF6E13517ADEB5E03E67CC0C;
IL2CPP_EXTERN_C String_t* _stringLiteralB301C10B3D0A20C4D34F04D383741C386814B593;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D1A8965C40106B91BC9DDFCB399859D3EA4AD1;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralB98DA0CCC81F4F734434572F19CCC66972AAE344;
IL2CPP_EXTERN_C String_t* _stringLiteralBDF152A7FD5960723957CB7C243C1BD87EE93C08;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1EBDD04E76A4B8BAFFB29A22FA00446D382B18;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE7155371FC26686B89C7452337D8419692F31E;
IL2CPP_EXTERN_C String_t* _stringLiteralD5AD255BF79BD5CB255C44E6140F9E9FC790C926;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A58E57AA1AAF3C59A4FA3E04013A5C732EBED5;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralF7FD3A2F989BC57754D3E1E4B01F60386B296605;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6EBF435A59643B674086A2F309F6A4DCB263452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67_m2124F71E652886F7252CDF2E47EB2882DFB8F3BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7_mCBD9077B9356D1E56383A2E23F07E6D2A669B92E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BulletMovment_Awake_m5FD3EB6E6E2899DE3E1F5A9082898F1DEBB4D137_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BulletMovment_OnCollisionEnter2D_m2989150835EE7B3ED1A25504D2B4CFC2F522B8CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BulletOScene_OnCollisionEnter2D_mE9E14153090748179CB3A7AAF1DFD874754A9D66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CreateZombies_Start_m601FE370E81D1951C9D00DD122DAADBDEEB00CC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicJoystick_HandleInput_mB6316E3D97C617061C01DC49DD829C0C4E91BB27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JoystickPlayerExample_FixedUpdate_m01D558819D864B0B36B12AECB92B7A9FE76D63B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JoystickSetterExample_Update_m27F40165A6AE141735CD9680F90F53599D2CFFC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OpenSceneSounds_Start_m676B36CC9593959FD6AB558A558759520A972589_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OpenScene_Start_mBF5027BDB1754BE2F4C1991495EB956DB214E348_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OpenScene_Update_m48F10306DAF58FCC06D524DD3F187BDEB4EF1A59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerEngin_AnimMenagment_mCEB24EA87A42B4AC9DBBFD22A1A446C7340EA26F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerEngin_OnCollisionEnter2D_m453D8E707C2AFF11EC63B9389CD22CC54355B91F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerEngin_Shoot_m6072845FA67718E9DC0B9B82896C74B1522B8E3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerEngin_Start_mD7771C744013B2996D2D48F7DB619C5B545C1A60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerEngin_Update_m73C1EB8ECB5BAA2E161AD22C62FA95DAF62C160B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SoundMenager_PlayerSounds_m6A8D3BE4FA2E08B8B9D70FE9751807B7C2EBA105_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SoundMenager_Start_m08149C832C4F0EBC0BBAAD0A0D30AAF3722C3CD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SoundMenager_ZombieSounds_mC448E5ED25187ED3605846340CA12BADEBA5CD0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_HandleInput_m83CA8AFC5C395DE4C684F2C478D1DE36CAD0BF19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VariableJoystick_set_MoveThreshold_m70CF65250847566A28B2A418C3EE55004987552F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZombieEngine_CheckIfClose_m5E6A2974639C4DC4740216D7A714D51A700DA20E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZombieEngine_OnCollisionEnter2D_mC01CBA07C656A65D37728AD5FBFC0F80A8AD7E67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZombieEngine_OnCollisionExit2D_m48FD32837BD9CB43B9776E7F1749BBD145DC7D19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZombieEngine_Start_m05B4DBD741E6237A86285C72CCD1D903DC45C966_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZombieEngine_Update_m52ED87BAE78277E3E25BB4673B2F539F4CB80B4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZombieOpenScene_OnCollisionEnter2D_m3BB0F909B2B35CB912068B6F47F4CA589CE4B10E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZombieOpenScene_Start_m9CC7BFB2446593D055E66E9088904DD8A57F68BC_MetadataUsageId;
struct ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 ;

struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.ParticleSystem_MainModule
struct  MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem_MainModule::m_ParticleSystem
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshaled_pinvoke
{
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7_marshaled_com
{
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___m_ParticleSystem_0;
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


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// AxisOptions
struct  AxisOptions_t5AC84B43FFEB20E770F1E4CF5EC2D3AADA9D18D0 
{
public:
	// System.Int32 AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_t5AC84B43FFEB20E770F1E4CF5EC2D3AADA9D18D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JoystickType
struct  JoystickType_t8F089F639C0CED5CA78941C78E1CC72EB61892B6 
{
public:
	// System.Int32 JoystickType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickType_t8F089F639C0CED5CA78941C78E1CC72EB61892B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision2D
struct  Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_RelativeVelocity_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
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
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.ForceMode
struct  ForceMode_t76188FF14D0038E184106555207A81218E97D0A5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t76188FF14D0038E184106555207A81218E97D0A5, ___value___2)); }
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

// UnityEngine.RenderMode
struct  RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
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


// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// BulletMovment
struct  BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject BulletMovment::soundMenager
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___soundMenager_4;
	// SoundMenager BulletMovment::bulletSound
	SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * ___bulletSound_5;

public:
	inline static int32_t get_offset_of_soundMenager_4() { return static_cast<int32_t>(offsetof(BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962, ___soundMenager_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_soundMenager_4() const { return ___soundMenager_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_soundMenager_4() { return &___soundMenager_4; }
	inline void set_soundMenager_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___soundMenager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundMenager_4), (void*)value);
	}

	inline static int32_t get_offset_of_bulletSound_5() { return static_cast<int32_t>(offsetof(BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962, ___bulletSound_5)); }
	inline SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * get_bulletSound_5() const { return ___bulletSound_5; }
	inline SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 ** get_address_of_bulletSound_5() { return &___bulletSound_5; }
	inline void set_bulletSound_5(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * value)
	{
		___bulletSound_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletSound_5), (void*)value);
	}
};


// BulletOScene
struct  BulletOScene_tA4A594E425DE50ABA2B6B4AAA4C7B0883E92D3AC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject BulletOScene::zombiePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___zombiePrefab_4;

public:
	inline static int32_t get_offset_of_zombiePrefab_4() { return static_cast<int32_t>(offsetof(BulletOScene_tA4A594E425DE50ABA2B6B4AAA4C7B0883E92D3AC, ___zombiePrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_zombiePrefab_4() const { return ___zombiePrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_zombiePrefab_4() { return &___zombiePrefab_4; }
	inline void set_zombiePrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___zombiePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zombiePrefab_4), (void*)value);
	}
};


// CameraMovment
struct  CameraMovment_tF5279A1B33D53CEB73719F4010DB19DC18A3A34C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform CameraMovment::player
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___player_4;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(CameraMovment_tF5279A1B33D53CEB73719F4010DB19DC18A3A34C, ___player_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_player_4() const { return ___player_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}
};


// CreateZombies
struct  CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject CreateZombies::zombiePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___zombiePrefab_4;
	// UnityEngine.GameObject CreateZombies::nextLevelPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___nextLevelPanel_5;
	// UnityEngine.GameObject CreateZombies::firstAidPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___firstAidPrefab_6;
	// System.Single CreateZombies::x
	float ___x_7;
	// System.Single CreateZombies::y
	float ___y_8;
	// System.Int32 CreateZombies::numZombies
	int32_t ___numZombies_9;
	// System.Int32 CreateZombies::numFirstAid
	int32_t ___numFirstAid_10;
	// UnityEngine.UI.Text CreateZombies::dedZombies
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___dedZombies_11;

public:
	inline static int32_t get_offset_of_zombiePrefab_4() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___zombiePrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_zombiePrefab_4() const { return ___zombiePrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_zombiePrefab_4() { return &___zombiePrefab_4; }
	inline void set_zombiePrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___zombiePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zombiePrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_nextLevelPanel_5() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___nextLevelPanel_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_nextLevelPanel_5() const { return ___nextLevelPanel_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_nextLevelPanel_5() { return &___nextLevelPanel_5; }
	inline void set_nextLevelPanel_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___nextLevelPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextLevelPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_firstAidPrefab_6() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___firstAidPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_firstAidPrefab_6() const { return ___firstAidPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_firstAidPrefab_6() { return &___firstAidPrefab_6; }
	inline void set_firstAidPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___firstAidPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstAidPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___x_7)); }
	inline float get_x_7() const { return ___x_7; }
	inline float* get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(float value)
	{
		___x_7 = value;
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___y_8)); }
	inline float get_y_8() const { return ___y_8; }
	inline float* get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(float value)
	{
		___y_8 = value;
	}

	inline static int32_t get_offset_of_numZombies_9() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___numZombies_9)); }
	inline int32_t get_numZombies_9() const { return ___numZombies_9; }
	inline int32_t* get_address_of_numZombies_9() { return &___numZombies_9; }
	inline void set_numZombies_9(int32_t value)
	{
		___numZombies_9 = value;
	}

	inline static int32_t get_offset_of_numFirstAid_10() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___numFirstAid_10)); }
	inline int32_t get_numFirstAid_10() const { return ___numFirstAid_10; }
	inline int32_t* get_address_of_numFirstAid_10() { return &___numFirstAid_10; }
	inline void set_numFirstAid_10(int32_t value)
	{
		___numFirstAid_10 = value;
	}

	inline static int32_t get_offset_of_dedZombies_11() { return static_cast<int32_t>(offsetof(CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67, ___dedZombies_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_dedZombies_11() const { return ___dedZombies_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_dedZombies_11() { return &___dedZombies_11; }
	inline void set_dedZombies_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___dedZombies_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dedZombies_11), (void*)value);
	}
};


// Joystick
struct  Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___input_14;

public:
	inline static int32_t get_offset_of_handleRange_4() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handleRange_4)); }
	inline float get_handleRange_4() const { return ___handleRange_4; }
	inline float* get_address_of_handleRange_4() { return &___handleRange_4; }
	inline void set_handleRange_4(float value)
	{
		___handleRange_4 = value;
	}

	inline static int32_t get_offset_of_deadZone_5() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___deadZone_5)); }
	inline float get_deadZone_5() const { return ___deadZone_5; }
	inline float* get_address_of_deadZone_5() { return &___deadZone_5; }
	inline void set_deadZone_5(float value)
	{
		___deadZone_5 = value;
	}

	inline static int32_t get_offset_of_axisOptions_6() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___axisOptions_6)); }
	inline int32_t get_axisOptions_6() const { return ___axisOptions_6; }
	inline int32_t* get_address_of_axisOptions_6() { return &___axisOptions_6; }
	inline void set_axisOptions_6(int32_t value)
	{
		___axisOptions_6 = value;
	}

	inline static int32_t get_offset_of_snapX_7() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___snapX_7)); }
	inline bool get_snapX_7() const { return ___snapX_7; }
	inline bool* get_address_of_snapX_7() { return &___snapX_7; }
	inline void set_snapX_7(bool value)
	{
		___snapX_7 = value;
	}

	inline static int32_t get_offset_of_snapY_8() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___snapY_8)); }
	inline bool get_snapY_8() const { return ___snapY_8; }
	inline bool* get_address_of_snapY_8() { return &___snapY_8; }
	inline void set_snapY_8(bool value)
	{
		___snapY_8 = value;
	}

	inline static int32_t get_offset_of_background_9() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___background_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_background_9() const { return ___background_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_background_9() { return &___background_9; }
	inline void set_background_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___background_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_9), (void*)value);
	}

	inline static int32_t get_offset_of_handle_10() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___handle_10)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_handle_10() const { return ___handle_10; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_handle_10() { return &___handle_10; }
	inline void set_handle_10(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___handle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_10), (void*)value);
	}

	inline static int32_t get_offset_of_baseRect_11() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___baseRect_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_baseRect_11() const { return ___baseRect_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_baseRect_11() { return &___baseRect_11; }
	inline void set_baseRect_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___baseRect_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseRect_11), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_12() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___canvas_12)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_canvas_12() const { return ___canvas_12; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_canvas_12() { return &___canvas_12; }
	inline void set_canvas_12(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___canvas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_12), (void*)value);
	}

	inline static int32_t get_offset_of_cam_13() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___cam_13)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_cam_13() const { return ___cam_13; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_cam_13() { return &___cam_13; }
	inline void set_cam_13(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___cam_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_13), (void*)value);
	}

	inline static int32_t get_offset_of_input_14() { return static_cast<int32_t>(offsetof(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153, ___input_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_input_14() const { return ___input_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_input_14() { return &___input_14; }
	inline void set_input_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___input_14 = value;
	}
};


// JoystickPlayerExample
struct  JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_variableJoystick_5() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B, ___variableJoystick_5)); }
	inline VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * get_variableJoystick_5() const { return ___variableJoystick_5; }
	inline VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 ** get_address_of_variableJoystick_5() { return &___variableJoystick_5; }
	inline void set_variableJoystick_5(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * value)
	{
		___variableJoystick_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableJoystick_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B, ___rb_6)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}
};


// JoystickSetterExample
struct  JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* ___axisSprites_7;

public:
	inline static int32_t get_offset_of_variableJoystick_4() { return static_cast<int32_t>(offsetof(JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435, ___variableJoystick_4)); }
	inline VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * get_variableJoystick_4() const { return ___variableJoystick_4; }
	inline VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 ** get_address_of_variableJoystick_4() { return &___variableJoystick_4; }
	inline void set_variableJoystick_4(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * value)
	{
		___variableJoystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableJoystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_valueText_5() { return static_cast<int32_t>(offsetof(JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435, ___valueText_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_valueText_5() const { return ___valueText_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_valueText_5() { return &___valueText_5; }
	inline void set_valueText_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___valueText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueText_5), (void*)value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435, ___background_6)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_background_6() const { return ___background_6; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisSprites_7() { return static_cast<int32_t>(offsetof(JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435, ___axisSprites_7)); }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* get_axisSprites_7() const { return ___axisSprites_7; }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7** get_address_of_axisSprites_7() { return &___axisSprites_7; }
	inline void set_axisSprites_7(SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* value)
	{
		___axisSprites_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisSprites_7), (void*)value);
	}
};


// OpenScene
struct  OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject OpenScene::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_4;
	// UnityEngine.GameObject OpenScene::ZombiePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ZombiePrefab_5;
	// UnityEngine.GameObject OpenScene::lebelPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___lebelPanel_6;
	// UnityEngine.Transform OpenScene::fierPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___fierPoint_7;
	// System.Single OpenScene::time
	float ___time_8;
	// System.Int32 OpenScene::gameScene
	int32_t ___gameScene_9;

public:
	inline static int32_t get_offset_of_bulletPrefab_4() { return static_cast<int32_t>(offsetof(OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463, ___bulletPrefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_4() const { return ___bulletPrefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_4() { return &___bulletPrefab_4; }
	inline void set_bulletPrefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_ZombiePrefab_5() { return static_cast<int32_t>(offsetof(OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463, ___ZombiePrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ZombiePrefab_5() const { return ___ZombiePrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ZombiePrefab_5() { return &___ZombiePrefab_5; }
	inline void set_ZombiePrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ZombiePrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZombiePrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_lebelPanel_6() { return static_cast<int32_t>(offsetof(OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463, ___lebelPanel_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_lebelPanel_6() const { return ___lebelPanel_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_lebelPanel_6() { return &___lebelPanel_6; }
	inline void set_lebelPanel_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___lebelPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lebelPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_fierPoint_7() { return static_cast<int32_t>(offsetof(OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463, ___fierPoint_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_fierPoint_7() const { return ___fierPoint_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_fierPoint_7() { return &___fierPoint_7; }
	inline void set_fierPoint_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___fierPoint_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fierPoint_7), (void*)value);
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463, ___time_8)); }
	inline float get_time_8() const { return ___time_8; }
	inline float* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(float value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_gameScene_9() { return static_cast<int32_t>(offsetof(OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463, ___gameScene_9)); }
	inline int32_t get_gameScene_9() const { return ___gameScene_9; }
	inline int32_t* get_address_of_gameScene_9() { return &___gameScene_9; }
	inline void set_gameScene_9(int32_t value)
	{
		___gameScene_9 = value;
	}
};


// OpenSceneSounds
struct  OpenSceneSounds_t7C577C5A40D732293322851E1B2D52136572C1F2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioClip OpenSceneSounds::btnClick
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___btnClick_4;
	// UnityEngine.AudioSource OpenSceneSounds::audioSrc
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSrc_5;

public:
	inline static int32_t get_offset_of_btnClick_4() { return static_cast<int32_t>(offsetof(OpenSceneSounds_t7C577C5A40D732293322851E1B2D52136572C1F2, ___btnClick_4)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_btnClick_4() const { return ___btnClick_4; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_btnClick_4() { return &___btnClick_4; }
	inline void set_btnClick_4(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___btnClick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnClick_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSrc_5() { return static_cast<int32_t>(offsetof(OpenSceneSounds_t7C577C5A40D732293322851E1B2D52136572C1F2, ___audioSrc_5)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSrc_5() const { return ___audioSrc_5; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSrc_5() { return &___audioSrc_5; }
	inline void set_audioSrc_5(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSrc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSrc_5), (void*)value);
	}
};


// PlayerEngin
struct  PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Joystick PlayerEngin::MoveJoystick
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * ___MoveJoystick_4;
	// Joystick PlayerEngin::RotateJoystick
	Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * ___RotateJoystick_5;
	// System.Single PlayerEngin::speed
	float ___speed_6;
	// System.Single PlayerEngin::angle
	float ___angle_7;
	// System.Single PlayerEngin::time
	float ___time_8;
	// System.Single PlayerEngin::timeShoot
	float ___timeShoot_9;
	// System.Single PlayerEngin::rotateX
	float ___rotateX_10;
	// System.Single PlayerEngin::rotateY
	float ___rotateY_11;
	// UnityEngine.Rigidbody2D PlayerEngin::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_12;
	// UnityEngine.Animator PlayerEngin::run
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___run_13;
	// UnityEngine.Animator PlayerEngin::animPlayer
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animPlayer_14;
	// UnityEngine.Transform PlayerEngin::FierPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___FierPoint_15;
	// UnityEngine.GameObject PlayerEngin::bulletPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___bulletPrefab_16;
	// UnityEngine.GameObject PlayerEngin::muzzlePrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___muzzlePrefab_17;
	// UnityEngine.GameObject PlayerEngin::muzzle
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___muzzle_18;
	// UnityEngine.UI.Image PlayerEngin::life
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___life_19;
	// UnityEngine.UI.Image PlayerEngin::life2
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___life2_20;
	// UnityEngine.UI.Image PlayerEngin::life3
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___life3_21;
	// System.Int32 PlayerEngin::lifes
	int32_t ___lifes_22;
	// UnityEngine.UI.Text PlayerEngin::txtAmmo
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___txtAmmo_23;
	// UnityEngine.UI.Text PlayerEngin::akAmmo
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___akAmmo_24;
	// UnityEngine.GameObject PlayerEngin::goAkAmmo
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___goAkAmmo_25;
	// UnityEngine.UI.Image PlayerEngin::infinity
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___infinity_26;
	// System.Int32 PlayerEngin::ammo
	int32_t ___ammo_27;
	// System.Int32 PlayerEngin::playerAmmo
	int32_t ___playerAmmo_28;
	// UnityEngine.GameObject PlayerEngin::soundMenager
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___soundMenager_29;
	// SoundMenager PlayerEngin::reload
	SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * ___reload_30;
	// System.String PlayerEngin::wepon
	String_t* ___wepon_31;
	// UnityEngine.GameObject PlayerEngin::gameOverPanle
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameOverPanle_32;
	// System.Boolean PlayerEngin::gameOver
	bool ___gameOver_33;
	// UnityEngine.ParticleSystem PlayerEngin::psBlod
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___psBlod_34;

public:
	inline static int32_t get_offset_of_MoveJoystick_4() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___MoveJoystick_4)); }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * get_MoveJoystick_4() const { return ___MoveJoystick_4; }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 ** get_address_of_MoveJoystick_4() { return &___MoveJoystick_4; }
	inline void set_MoveJoystick_4(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * value)
	{
		___MoveJoystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveJoystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_RotateJoystick_5() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___RotateJoystick_5)); }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * get_RotateJoystick_5() const { return ___RotateJoystick_5; }
	inline Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 ** get_address_of_RotateJoystick_5() { return &___RotateJoystick_5; }
	inline void set_RotateJoystick_5(Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * value)
	{
		___RotateJoystick_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotateJoystick_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_angle_7() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___angle_7)); }
	inline float get_angle_7() const { return ___angle_7; }
	inline float* get_address_of_angle_7() { return &___angle_7; }
	inline void set_angle_7(float value)
	{
		___angle_7 = value;
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___time_8)); }
	inline float get_time_8() const { return ___time_8; }
	inline float* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(float value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_timeShoot_9() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___timeShoot_9)); }
	inline float get_timeShoot_9() const { return ___timeShoot_9; }
	inline float* get_address_of_timeShoot_9() { return &___timeShoot_9; }
	inline void set_timeShoot_9(float value)
	{
		___timeShoot_9 = value;
	}

	inline static int32_t get_offset_of_rotateX_10() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___rotateX_10)); }
	inline float get_rotateX_10() const { return ___rotateX_10; }
	inline float* get_address_of_rotateX_10() { return &___rotateX_10; }
	inline void set_rotateX_10(float value)
	{
		___rotateX_10 = value;
	}

	inline static int32_t get_offset_of_rotateY_11() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___rotateY_11)); }
	inline float get_rotateY_11() const { return ___rotateY_11; }
	inline float* get_address_of_rotateY_11() { return &___rotateY_11; }
	inline void set_rotateY_11(float value)
	{
		___rotateY_11 = value;
	}

	inline static int32_t get_offset_of_rb_12() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___rb_12)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_12() const { return ___rb_12; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_12() { return &___rb_12; }
	inline void set_rb_12(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_12), (void*)value);
	}

	inline static int32_t get_offset_of_run_13() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___run_13)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_run_13() const { return ___run_13; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_run_13() { return &___run_13; }
	inline void set_run_13(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___run_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___run_13), (void*)value);
	}

	inline static int32_t get_offset_of_animPlayer_14() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___animPlayer_14)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animPlayer_14() const { return ___animPlayer_14; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animPlayer_14() { return &___animPlayer_14; }
	inline void set_animPlayer_14(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animPlayer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animPlayer_14), (void*)value);
	}

	inline static int32_t get_offset_of_FierPoint_15() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___FierPoint_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_FierPoint_15() const { return ___FierPoint_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_FierPoint_15() { return &___FierPoint_15; }
	inline void set_FierPoint_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___FierPoint_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FierPoint_15), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPrefab_16() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___bulletPrefab_16)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_bulletPrefab_16() const { return ___bulletPrefab_16; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_bulletPrefab_16() { return &___bulletPrefab_16; }
	inline void set_bulletPrefab_16(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___bulletPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_muzzlePrefab_17() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___muzzlePrefab_17)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_muzzlePrefab_17() const { return ___muzzlePrefab_17; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_muzzlePrefab_17() { return &___muzzlePrefab_17; }
	inline void set_muzzlePrefab_17(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___muzzlePrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muzzlePrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_muzzle_18() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___muzzle_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_muzzle_18() const { return ___muzzle_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_muzzle_18() { return &___muzzle_18; }
	inline void set_muzzle_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___muzzle_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muzzle_18), (void*)value);
	}

	inline static int32_t get_offset_of_life_19() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___life_19)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_life_19() const { return ___life_19; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_life_19() { return &___life_19; }
	inline void set_life_19(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___life_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___life_19), (void*)value);
	}

	inline static int32_t get_offset_of_life2_20() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___life2_20)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_life2_20() const { return ___life2_20; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_life2_20() { return &___life2_20; }
	inline void set_life2_20(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___life2_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___life2_20), (void*)value);
	}

	inline static int32_t get_offset_of_life3_21() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___life3_21)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_life3_21() const { return ___life3_21; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_life3_21() { return &___life3_21; }
	inline void set_life3_21(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___life3_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___life3_21), (void*)value);
	}

	inline static int32_t get_offset_of_lifes_22() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___lifes_22)); }
	inline int32_t get_lifes_22() const { return ___lifes_22; }
	inline int32_t* get_address_of_lifes_22() { return &___lifes_22; }
	inline void set_lifes_22(int32_t value)
	{
		___lifes_22 = value;
	}

	inline static int32_t get_offset_of_txtAmmo_23() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___txtAmmo_23)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_txtAmmo_23() const { return ___txtAmmo_23; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_txtAmmo_23() { return &___txtAmmo_23; }
	inline void set_txtAmmo_23(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___txtAmmo_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txtAmmo_23), (void*)value);
	}

	inline static int32_t get_offset_of_akAmmo_24() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___akAmmo_24)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_akAmmo_24() const { return ___akAmmo_24; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_akAmmo_24() { return &___akAmmo_24; }
	inline void set_akAmmo_24(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___akAmmo_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___akAmmo_24), (void*)value);
	}

	inline static int32_t get_offset_of_goAkAmmo_25() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___goAkAmmo_25)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_goAkAmmo_25() const { return ___goAkAmmo_25; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_goAkAmmo_25() { return &___goAkAmmo_25; }
	inline void set_goAkAmmo_25(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___goAkAmmo_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goAkAmmo_25), (void*)value);
	}

	inline static int32_t get_offset_of_infinity_26() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___infinity_26)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_infinity_26() const { return ___infinity_26; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_infinity_26() { return &___infinity_26; }
	inline void set_infinity_26(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___infinity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infinity_26), (void*)value);
	}

	inline static int32_t get_offset_of_ammo_27() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___ammo_27)); }
	inline int32_t get_ammo_27() const { return ___ammo_27; }
	inline int32_t* get_address_of_ammo_27() { return &___ammo_27; }
	inline void set_ammo_27(int32_t value)
	{
		___ammo_27 = value;
	}

	inline static int32_t get_offset_of_playerAmmo_28() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___playerAmmo_28)); }
	inline int32_t get_playerAmmo_28() const { return ___playerAmmo_28; }
	inline int32_t* get_address_of_playerAmmo_28() { return &___playerAmmo_28; }
	inline void set_playerAmmo_28(int32_t value)
	{
		___playerAmmo_28 = value;
	}

	inline static int32_t get_offset_of_soundMenager_29() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___soundMenager_29)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_soundMenager_29() const { return ___soundMenager_29; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_soundMenager_29() { return &___soundMenager_29; }
	inline void set_soundMenager_29(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___soundMenager_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundMenager_29), (void*)value);
	}

	inline static int32_t get_offset_of_reload_30() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___reload_30)); }
	inline SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * get_reload_30() const { return ___reload_30; }
	inline SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 ** get_address_of_reload_30() { return &___reload_30; }
	inline void set_reload_30(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * value)
	{
		___reload_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reload_30), (void*)value);
	}

	inline static int32_t get_offset_of_wepon_31() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___wepon_31)); }
	inline String_t* get_wepon_31() const { return ___wepon_31; }
	inline String_t** get_address_of_wepon_31() { return &___wepon_31; }
	inline void set_wepon_31(String_t* value)
	{
		___wepon_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wepon_31), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverPanle_32() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___gameOverPanle_32)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameOverPanle_32() const { return ___gameOverPanle_32; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameOverPanle_32() { return &___gameOverPanle_32; }
	inline void set_gameOverPanle_32(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameOverPanle_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanle_32), (void*)value);
	}

	inline static int32_t get_offset_of_gameOver_33() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___gameOver_33)); }
	inline bool get_gameOver_33() const { return ___gameOver_33; }
	inline bool* get_address_of_gameOver_33() { return &___gameOver_33; }
	inline void set_gameOver_33(bool value)
	{
		___gameOver_33 = value;
	}

	inline static int32_t get_offset_of_psBlod_34() { return static_cast<int32_t>(offsetof(PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7, ___psBlod_34)); }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * get_psBlod_34() const { return ___psBlod_34; }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D ** get_address_of_psBlod_34() { return &___psBlod_34; }
	inline void set_psBlod_34(ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * value)
	{
		___psBlod_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___psBlod_34), (void*)value);
	}
};


// SceneEngine
struct  SceneEngine_tC93701E74DF4A1A92C2E13B40FDC55DB7D784379  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 SceneEngine::maineScene
	int32_t ___maineScene_4;

public:
	inline static int32_t get_offset_of_maineScene_4() { return static_cast<int32_t>(offsetof(SceneEngine_tC93701E74DF4A1A92C2E13B40FDC55DB7D784379, ___maineScene_4)); }
	inline int32_t get_maineScene_4() const { return ___maineScene_4; }
	inline int32_t* get_address_of_maineScene_4() { return &___maineScene_4; }
	inline void set_maineScene_4(int32_t value)
	{
		___maineScene_4 = value;
	}
};


// SoundMenager
struct  SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioClip SoundMenager::zombieAttak
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___zombieAttak_4;
	// UnityEngine.AudioClip SoundMenager::zombieGrrr
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___zombieGrrr_5;
	// UnityEngine.AudioClip SoundMenager::gunShoot
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___gunShoot_6;
	// UnityEngine.AudioClip SoundMenager::reload
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___reload_7;
	// UnityEngine.AudioClip SoundMenager::btnClick
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___btnClick_8;
	// UnityEngine.AudioSource SoundMenager::audioSrc
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSrc_9;

public:
	inline static int32_t get_offset_of_zombieAttak_4() { return static_cast<int32_t>(offsetof(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74, ___zombieAttak_4)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_zombieAttak_4() const { return ___zombieAttak_4; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_zombieAttak_4() { return &___zombieAttak_4; }
	inline void set_zombieAttak_4(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___zombieAttak_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zombieAttak_4), (void*)value);
	}

	inline static int32_t get_offset_of_zombieGrrr_5() { return static_cast<int32_t>(offsetof(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74, ___zombieGrrr_5)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_zombieGrrr_5() const { return ___zombieGrrr_5; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_zombieGrrr_5() { return &___zombieGrrr_5; }
	inline void set_zombieGrrr_5(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___zombieGrrr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zombieGrrr_5), (void*)value);
	}

	inline static int32_t get_offset_of_gunShoot_6() { return static_cast<int32_t>(offsetof(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74, ___gunShoot_6)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_gunShoot_6() const { return ___gunShoot_6; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_gunShoot_6() { return &___gunShoot_6; }
	inline void set_gunShoot_6(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___gunShoot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gunShoot_6), (void*)value);
	}

	inline static int32_t get_offset_of_reload_7() { return static_cast<int32_t>(offsetof(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74, ___reload_7)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_reload_7() const { return ___reload_7; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_reload_7() { return &___reload_7; }
	inline void set_reload_7(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___reload_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reload_7), (void*)value);
	}

	inline static int32_t get_offset_of_btnClick_8() { return static_cast<int32_t>(offsetof(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74, ___btnClick_8)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_btnClick_8() const { return ___btnClick_8; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_btnClick_8() { return &___btnClick_8; }
	inline void set_btnClick_8(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___btnClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnClick_8), (void*)value);
	}

	inline static int32_t get_offset_of_audioSrc_9() { return static_cast<int32_t>(offsetof(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74, ___audioSrc_9)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSrc_9() const { return ___audioSrc_9; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSrc_9() { return &___audioSrc_9; }
	inline void set_audioSrc_9(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSrc_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSrc_9), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
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


// ZombieEngine
struct  ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody2D ZombieEngine::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_4;
	// System.Int32 ZombieEngine::x
	int32_t ___x_5;
	// System.Int32 ZombieEngine::y
	int32_t ___y_6;
	// System.Int32 ZombieEngine::lives
	int32_t ___lives_7;
	// System.Single ZombieEngine::speed
	float ___speed_8;
	// System.Single ZombieEngine::time
	float ___time_9;
	// System.Single ZombieEngine::angle
	float ___angle_10;
	// System.Single ZombieEngine::toColse
	float ___toColse_11;
	// System.Single ZombieEngine::timeAttak
	float ___timeAttak_12;
	// System.Single ZombieEngine::timeGrr
	float ___timeGrr_13;
	// UnityEngine.Animator ZombieEngine::animMove
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animMove_14;
	// UnityEngine.Animator ZombieEngine::animAttack
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animAttack_15;
	// UnityEngine.SpriteRenderer ZombieEngine::sprMove
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___sprMove_16;
	// UnityEngine.SpriteRenderer ZombieEngine::sprAtteck
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___sprAtteck_17;
	// UnityEngine.Transform ZombieEngine::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_18;
	// System.Boolean ZombieEngine::attak
	bool ___attak_19;
	// SoundMenager ZombieEngine::zombieSound
	SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * ___zombieSound_20;
	// UnityEngine.GameObject ZombieEngine::soundMenager
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___soundMenager_21;
	// UnityEngine.ParticleSystem ZombieEngine::psBlod
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___psBlod_22;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___rb_4)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_x_5() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___x_5)); }
	inline int32_t get_x_5() const { return ___x_5; }
	inline int32_t* get_address_of_x_5() { return &___x_5; }
	inline void set_x_5(int32_t value)
	{
		___x_5 = value;
	}

	inline static int32_t get_offset_of_y_6() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___y_6)); }
	inline int32_t get_y_6() const { return ___y_6; }
	inline int32_t* get_address_of_y_6() { return &___y_6; }
	inline void set_y_6(int32_t value)
	{
		___y_6 = value;
	}

	inline static int32_t get_offset_of_lives_7() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___lives_7)); }
	inline int32_t get_lives_7() const { return ___lives_7; }
	inline int32_t* get_address_of_lives_7() { return &___lives_7; }
	inline void set_lives_7(int32_t value)
	{
		___lives_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_time_9() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___time_9)); }
	inline float get_time_9() const { return ___time_9; }
	inline float* get_address_of_time_9() { return &___time_9; }
	inline void set_time_9(float value)
	{
		___time_9 = value;
	}

	inline static int32_t get_offset_of_angle_10() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___angle_10)); }
	inline float get_angle_10() const { return ___angle_10; }
	inline float* get_address_of_angle_10() { return &___angle_10; }
	inline void set_angle_10(float value)
	{
		___angle_10 = value;
	}

	inline static int32_t get_offset_of_toColse_11() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___toColse_11)); }
	inline float get_toColse_11() const { return ___toColse_11; }
	inline float* get_address_of_toColse_11() { return &___toColse_11; }
	inline void set_toColse_11(float value)
	{
		___toColse_11 = value;
	}

	inline static int32_t get_offset_of_timeAttak_12() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___timeAttak_12)); }
	inline float get_timeAttak_12() const { return ___timeAttak_12; }
	inline float* get_address_of_timeAttak_12() { return &___timeAttak_12; }
	inline void set_timeAttak_12(float value)
	{
		___timeAttak_12 = value;
	}

	inline static int32_t get_offset_of_timeGrr_13() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___timeGrr_13)); }
	inline float get_timeGrr_13() const { return ___timeGrr_13; }
	inline float* get_address_of_timeGrr_13() { return &___timeGrr_13; }
	inline void set_timeGrr_13(float value)
	{
		___timeGrr_13 = value;
	}

	inline static int32_t get_offset_of_animMove_14() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___animMove_14)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animMove_14() const { return ___animMove_14; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animMove_14() { return &___animMove_14; }
	inline void set_animMove_14(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animMove_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animMove_14), (void*)value);
	}

	inline static int32_t get_offset_of_animAttack_15() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___animAttack_15)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animAttack_15() const { return ___animAttack_15; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animAttack_15() { return &___animAttack_15; }
	inline void set_animAttack_15(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animAttack_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animAttack_15), (void*)value);
	}

	inline static int32_t get_offset_of_sprMove_16() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___sprMove_16)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_sprMove_16() const { return ___sprMove_16; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_sprMove_16() { return &___sprMove_16; }
	inline void set_sprMove_16(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___sprMove_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprMove_16), (void*)value);
	}

	inline static int32_t get_offset_of_sprAtteck_17() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___sprAtteck_17)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_sprAtteck_17() const { return ___sprAtteck_17; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_sprAtteck_17() { return &___sprAtteck_17; }
	inline void set_sprAtteck_17(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___sprAtteck_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprAtteck_17), (void*)value);
	}

	inline static int32_t get_offset_of_playerTransform_18() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___playerTransform_18)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_18() const { return ___playerTransform_18; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_18() { return &___playerTransform_18; }
	inline void set_playerTransform_18(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_attak_19() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___attak_19)); }
	inline bool get_attak_19() const { return ___attak_19; }
	inline bool* get_address_of_attak_19() { return &___attak_19; }
	inline void set_attak_19(bool value)
	{
		___attak_19 = value;
	}

	inline static int32_t get_offset_of_zombieSound_20() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___zombieSound_20)); }
	inline SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * get_zombieSound_20() const { return ___zombieSound_20; }
	inline SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 ** get_address_of_zombieSound_20() { return &___zombieSound_20; }
	inline void set_zombieSound_20(SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * value)
	{
		___zombieSound_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zombieSound_20), (void*)value);
	}

	inline static int32_t get_offset_of_soundMenager_21() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___soundMenager_21)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_soundMenager_21() const { return ___soundMenager_21; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_soundMenager_21() { return &___soundMenager_21; }
	inline void set_soundMenager_21(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___soundMenager_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundMenager_21), (void*)value);
	}

	inline static int32_t get_offset_of_psBlod_22() { return static_cast<int32_t>(offsetof(ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3, ___psBlod_22)); }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * get_psBlod_22() const { return ___psBlod_22; }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D ** get_address_of_psBlod_22() { return &___psBlod_22; }
	inline void set_psBlod_22(ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * value)
	{
		___psBlod_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___psBlod_22), (void*)value);
	}
};


// ZombieOpenScene
struct  ZombieOpenScene_t9B593E91FE724141BAF7F05084145ACFE74906F4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody2D ZombieOpenScene::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_4;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(ZombieOpenScene_t9B593E91FE724141BAF7F05084145ACFE74906F4, ___rb_4)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}
};


// DynamicJoystick
struct  DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}
};


// FixedJoystick
struct  FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:

public:
};


// FloatingJoystick
struct  FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// VariableJoystick
struct  VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1  : public Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153
{
public:
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___fixedPosition_17;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}

	inline static int32_t get_offset_of_joystickType_16() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___joystickType_16)); }
	inline int32_t get_joystickType_16() const { return ___joystickType_16; }
	inline int32_t* get_address_of_joystickType_16() { return &___joystickType_16; }
	inline void set_joystickType_16(int32_t value)
	{
		___joystickType_16 = value;
	}

	inline static int32_t get_offset_of_fixedPosition_17() { return static_cast<int32_t>(offsetof(VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1, ___fixedPosition_17)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_fixedPosition_17() const { return ___fixedPosition_17; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_fixedPosition_17() { return &___fixedPosition_17; }
	inline void set_fixedPosition_17(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___fixedPosition_17 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_36;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_37;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_38;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_39;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_40;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_41;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_42;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_43;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_44;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_45;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_46;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_47;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_48;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_49;

public:
	inline static int32_t get_offset_of_m_Sprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_36() const { return ___m_Sprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_36() { return &___m_Sprite_36; }
	inline void set_m_Sprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_37)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_37() const { return ___m_OverrideSprite_37; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_37() { return &___m_OverrideSprite_37; }
	inline void set_m_OverrideSprite_37(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_38)); }
	inline int32_t get_m_Type_38() const { return ___m_Type_38; }
	inline int32_t* get_address_of_m_Type_38() { return &___m_Type_38; }
	inline void set_m_Type_38(int32_t value)
	{
		___m_Type_38 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_39)); }
	inline bool get_m_PreserveAspect_39() const { return ___m_PreserveAspect_39; }
	inline bool* get_address_of_m_PreserveAspect_39() { return &___m_PreserveAspect_39; }
	inline void set_m_PreserveAspect_39(bool value)
	{
		___m_PreserveAspect_39 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_40)); }
	inline bool get_m_FillCenter_40() const { return ___m_FillCenter_40; }
	inline bool* get_address_of_m_FillCenter_40() { return &___m_FillCenter_40; }
	inline void set_m_FillCenter_40(bool value)
	{
		___m_FillCenter_40 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_41)); }
	inline int32_t get_m_FillMethod_41() const { return ___m_FillMethod_41; }
	inline int32_t* get_address_of_m_FillMethod_41() { return &___m_FillMethod_41; }
	inline void set_m_FillMethod_41(int32_t value)
	{
		___m_FillMethod_41 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_42)); }
	inline float get_m_FillAmount_42() const { return ___m_FillAmount_42; }
	inline float* get_address_of_m_FillAmount_42() { return &___m_FillAmount_42; }
	inline void set_m_FillAmount_42(float value)
	{
		___m_FillAmount_42 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_43)); }
	inline bool get_m_FillClockwise_43() const { return ___m_FillClockwise_43; }
	inline bool* get_address_of_m_FillClockwise_43() { return &___m_FillClockwise_43; }
	inline void set_m_FillClockwise_43(bool value)
	{
		___m_FillClockwise_43 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_44)); }
	inline int32_t get_m_FillOrigin_44() const { return ___m_FillOrigin_44; }
	inline int32_t* get_address_of_m_FillOrigin_44() { return &___m_FillOrigin_44; }
	inline void set_m_FillOrigin_44(int32_t value)
	{
		___m_FillOrigin_44 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_45)); }
	inline float get_m_AlphaHitTestMinimumThreshold_45() const { return ___m_AlphaHitTestMinimumThreshold_45; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_45() { return &___m_AlphaHitTestMinimumThreshold_45; }
	inline void set_m_AlphaHitTestMinimumThreshold_45(float value)
	{
		___m_AlphaHitTestMinimumThreshold_45 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_46)); }
	inline bool get_m_Tracked_46() const { return ___m_Tracked_46; }
	inline bool* get_address_of_m_Tracked_46() { return &___m_Tracked_46; }
	inline void set_m_Tracked_46(bool value)
	{
		___m_Tracked_46 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_47)); }
	inline bool get_m_UseSpriteMesh_47() const { return ___m_UseSpriteMesh_47; }
	inline bool* get_address_of_m_UseSpriteMesh_47() { return &___m_UseSpriteMesh_47; }
	inline void set_m_UseSpriteMesh_47(bool value)
	{
		___m_UseSpriteMesh_47 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_48)); }
	inline float get_m_PixelsPerUnitMultiplier_48() const { return ___m_PixelsPerUnitMultiplier_48; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_48() { return &___m_PixelsPerUnitMultiplier_48; }
	inline void set_m_PixelsPerUnitMultiplier_48(float value)
	{
		___m_PixelsPerUnitMultiplier_48 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_49)); }
	inline float get_m_CachedReferencePixelsPerUnit_49() const { return ___m_CachedReferencePixelsPerUnit_49; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_49() { return &___m_CachedReferencePixelsPerUnit_49; }
	inline void set_m_CachedReferencePixelsPerUnit_49(float value)
	{
		___m_CachedReferencePixelsPerUnit_49 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_35;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_50;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_53;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * ___m_TrackedTexturelessImages_54;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_55;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_35)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_35() const { return ___s_ETC1DefaultUI_35; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_35() { return &___s_ETC1DefaultUI_35; }
	inline void set_s_ETC1DefaultUI_35(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_50() const { return ___s_VertScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_50() { return &___s_VertScratch_50; }
	inline void set_s_VertScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_51)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_51() const { return ___s_UVScratch_51; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_51() { return &___s_UVScratch_51; }
	inline void set_s_UVScratch_51(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_52() const { return ___s_Xy_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_52() { return &___s_Xy_52; }
	inline void set_s_Xy_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_53)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_53() const { return ___s_Uv_53; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_53() { return &___s_Uv_53; }
	inline void set_s_Uv_53(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_54)); }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * get_m_TrackedTexturelessImages_54() const { return ___m_TrackedTexturelessImages_54; }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA ** get_address_of_m_TrackedTexturelessImages_54() { return &___m_TrackedTexturelessImages_54; }
	inline void set_m_TrackedTexturelessImages_54(List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * value)
	{
		___m_TrackedTexturelessImages_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_55() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_55)); }
	inline bool get_s_Initialized_55() const { return ___s_Initialized_55; }
	inline bool* get_address_of_s_Initialized_55() { return &___s_Initialized_55; }
	inline void set_s_Initialized_55(bool value)
	{
		___s_Initialized_55 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * m_Items[1];

public:
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m3D5E351D50C60522BD31D282D044F6527C382749_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m312D167000593C478994C1F4C93930C5DAED66D3_gshared (String_t* ___path0, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SoundMenager>()
inline SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void SoundMenager::PlayerSounds(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMenager_PlayerSounds_m6A8D3BE4FA2E08B8B9D70FE9751807B7C2EBA105 (SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method);
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method);
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m41669BF41810BA976B1A230E1FB3ADCDC1F4C758 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m3D5E351D50C60522BD31D282D044F6527C382749_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mE965F5B0902C2554635010A5752728414A57020A (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m55EEF00D9E42FE542B5346D7CEDAF9248736F7D3 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransformUtility_WorldToScreenPoint_m114DFD961456722DED0FFB2F8DCB46A04C2CCA20 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPoint1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m0F6D59E75F7605ABD2AFF6AF32A1097226CE060A (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_mEF4FA1379564288637A7CF5E73BA30CA2259E591 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDE5D2FB4C4FB309B92816E806756B01F61FF26D5 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Angle_mC4A140B49B9E737C9FC6B52763468C5662A8B4AC (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___from0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___to1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___rect0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_pivot_mA5BEEE2069ACA7C0C717530EED3E7D811D46C463 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_anchorMax_m1E51C211FBB32326C884375C9F1E8E8221E5C086 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, int32_t ___joystickType0, const RuntimeMethod* method);
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m3194AF6B83B35084063737EBA7D8C10C652241F8_inline (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646 (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mACA46808CD8386CABE024E9F55A407F0C8A138F0_inline (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mA985E49A53EBD417CF06948C805588612C0395C1_inline (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_get_Direction_mF64961ED5359C8E31E79CAA306019CB66DF50F3E (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m312D167000593C478994C1F4C93930C5DAED66D3_gshared)(___path0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * Component_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6EBF435A59643B674086A2F309F6A4DCB263452 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_rotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_rotation_m0945A4D66B39C6698EFBF73F2A95969C976A858B (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Void PlayerEngin::AnimMenagment(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin_AnimMenagment_mCEB24EA87A42B4AC9DBBFD22A1A446C7340EA26F (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, String_t* ___weponName0, String_t* ___animName1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F (Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F (ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  ParticleSystem_get_main_m360B0AA57C71DE0358B6B07133C68B5FD88C742F (ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_mC661EA0DB8B61948CF9059D023CF82FFBF9E26FD (MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m0E63ED0F050FCC35A4216220C584BE3D3F77B0E1 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9 (String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void ZombieEngine::CheckIfClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieEngine_CheckIfClose_m5E6A2974639C4DC4740216D7A714D51A700DA20E (ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3 * __this, const RuntimeMethod* method);
// System.Void SoundMenager::ZombieSounds(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMenager_ZombieSounds_mC448E5ED25187ED3605846340CA12BADEBA5CD0D (SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<CreateZombies>()
inline CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * GameObject_GetComponent_TisCreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67_m2124F71E652886F7252CDF2E47EB2882DFB8F3BC (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void CreateZombies::CountDedZombies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateZombies_CountDedZombies_mA08C05C709D3E3913AFC6A7042BA7A2B6ACD2CC7 (CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_MoveTowards_m5CE85293E9619514164A685D1D4673E2A6E43DFA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___current0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerEngin>()
inline PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * GameObject_GetComponent_TisPlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7_mCBD9077B9356D1E56383A2E23F07E6D2A669B92E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void PlayerEngin::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin_Shoot_m6072845FA67718E9DC0B9B82896C74B1522B8E3E (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, const RuntimeMethod* method);
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
// System.Void BulletMovment::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMovment_Awake_m5FD3EB6E6E2899DE3E1F5A9082898F1DEBB4D137 (BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletMovment_Awake_m5FD3EB6E6E2899DE3E1F5A9082898F1DEBB4D137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundMenager = GameObject.Find("SoundMenager");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral9553A985D1CBA64FEB770AF45E4CCBD784D2008E, /*hidden argument*/NULL);
		__this->set_soundMenager_4(L_0);
		// bulletSound = soundMenager.GetComponent<SoundMenager>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_soundMenager_4();
		NullCheck(L_1);
		SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * L_2 = GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894(L_1, /*hidden argument*/GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894_RuntimeMethod_var);
		__this->set_bulletSound_5(L_2);
		// bulletSound.PlayerSounds("gunShoot");
		SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * L_3 = __this->get_bulletSound_5();
		NullCheck(L_3);
		SoundMenager_PlayerSounds_m6A8D3BE4FA2E08B8B9D70FE9751807B7C2EBA105(L_3, _stringLiteral0F7689B981C4615F4354EC1D49BED870624E4171, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BulletMovment::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMovment_Update_mBF810FB12A43DEF37A3F2DAD1C311448AC28D5D2 (BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962 * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(0.3f, 0, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_0, (0.3f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BulletMovment::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMovment_OnCollisionEnter2D_m2989150835EE7B3ED1A25504D2B4CFC2F522B8CE (BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletMovment_OnCollisionEnter2D_m2989150835EE7B3ED1A25504D2B4CFC2F522B8CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BulletMovment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMovment__ctor_mA270F305B15990455FFD9D0F7B764EEEF0E4915D (BulletMovment_tF0F9AA8C5E546DD35D1241AE40EAA9F4CB748962 * __this, const RuntimeMethod* method)
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
// System.Void BulletOScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletOScene_Update_m1EC47B8EF73D41EB9DC4CBC6BA16DFF5C1237455 (BulletOScene_tA4A594E425DE50ABA2B6B4AAA4C7B0883E92D3AC * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(0.1f, 0, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_0, (0.1f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BulletOScene::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletOScene_OnCollisionEnter2D_mE9E14153090748179CB3A7AAF1DFD874754A9D66 (BulletOScene_tA4A594E425DE50ABA2B6B4AAA4C7B0883E92D3AC * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletOScene_OnCollisionEnter2D_mE9E14153090748179CB3A7AAF1DFD874754A9D66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// Instantiate(zombiePrefab, new Vector2(3.2f, -0.5f), zombiePrefab.transform.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_zombiePrefab_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), (3.2f), (-0.5f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_zombiePrefab_4();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_5, /*hidden argument*/NULL);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BulletOScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletOScene__ctor_m8B91D11C70288BBB17465D6A743C6BFCB2A271DF (BulletOScene_tA4A594E425DE50ABA2B6B4AAA4C7B0883E92D3AC * __this, const RuntimeMethod* method)
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
// System.Void CameraMovment::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovment_Update_m8753835EC797FA1B6D75F7712875DBE9E2F19907 (CameraMovment_tF5279A1B33D53CEB73719F4010DB19DC18A3A34C * __this, const RuntimeMethod* method)
{
	{
		// if (transform.position.x != 0 && transform.position.y != 0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}
	{
		// transform.position = new Vector3(player.position.x, player.position.y, -10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_player_4();
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_player_4();
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), L_9, L_12, (-10.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_13, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// if (transform.position.x <= 0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_00af;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, player.position.y, -10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = __this->get_player_4();
		NullCheck(L_21);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_24), L_20, L_23, (-10.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_17, L_24, /*hidden argument*/NULL);
	}

IL_00af:
	{
		// if (transform.position.y <= 0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		if ((!(((float)L_27) <= ((float)(0.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// transform.position = new Vector3(player.position.x, transform.position.y, -10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = __this->get_player_4();
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_35), L_31, L_34, (-10.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_28, L_35, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void CameraMovment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovment__ctor_m588AE92B5EE200A6F796B6A78745FEF657EF3A4F (CameraMovment_tF5279A1B33D53CEB73719F4010DB19DC18A3A34C * __this, const RuntimeMethod* method)
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
// System.Void CreateZombies::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateZombies_Start_m601FE370E81D1951C9D00DD122DAADBDEEB00CC4 (CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateZombies_Start_m601FE370E81D1951C9D00DD122DAADBDEEB00CC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// numZombies = 10;
		__this->set_numZombies_9(((int32_t)10));
		goto IL_0074;
	}

IL_000a:
	{
		// x = Random.Range(-5.5f, 42);
		float L_0 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((-5.5f), (42.0f), /*hidden argument*/NULL);
		__this->set_x_7(L_0);
		// y = Random.Range(6.5f, 40);
		float L_1 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((6.5f), (40.0f), /*hidden argument*/NULL);
		__this->set_y_8(L_1);
		// Instantiate(zombiePrefab, new Vector2(x,y), zombiePrefab.transform.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_zombiePrefab_4();
		float L_3 = __this->get_x_7();
		float L_4 = __this->get_y_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_5), L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_zombiePrefab_4();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_2, L_6, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// numZombies--;
		int32_t L_10 = __this->get_numZombies_9();
		__this->set_numZombies_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
	}

IL_0074:
	{
		// while (numZombies > 0)
		int32_t L_11 = __this->get_numZombies_9();
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// numFirstAid = 3;
		__this->set_numFirstAid_10(3);
		goto IL_00f0;
	}

IL_0086:
	{
		// x = Random.Range(-5.5f, 42);
		float L_12 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((-5.5f), (42.0f), /*hidden argument*/NULL);
		__this->set_x_7(L_12);
		// y = Random.Range(6.5f, 40);
		float L_13 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((6.5f), (40.0f), /*hidden argument*/NULL);
		__this->set_y_8(L_13);
		// Instantiate(firstAidPrefab, new Vector2(x, y), zombiePrefab.transform.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_firstAidPrefab_6();
		float L_15 = __this->get_x_7();
		float L_16 = __this->get_y_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_17), L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_17, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_zombiePrefab_4();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_14, L_18, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// numFirstAid--;
		int32_t L_22 = __this->get_numFirstAid_10();
		__this->set_numFirstAid_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)));
	}

IL_00f0:
	{
		// while (numFirstAid > 0)
		int32_t L_23 = __this->get_numFirstAid_10();
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CreateZombies::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateZombies_Update_m02C428DCC344C75247C13B5CF3711EA2EA21E03D (CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CreateZombies::CountDedZombies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateZombies_CountDedZombies_mA08C05C709D3E3913AFC6A7042BA7A2B6ACD2CC7 (CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * __this, const RuntimeMethod* method)
{
	{
		// numZombies = int.Parse(dedZombies.text);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_dedZombies_11();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		int32_t L_2 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_1, /*hidden argument*/NULL);
		__this->set_numZombies_9(L_2);
		// numZombies++;
		int32_t L_3 = __this->get_numZombies_9();
		__this->set_numZombies_9(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// dedZombies.text = numZombies.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_dedZombies_11();
		int32_t* L_5 = __this->get_address_of_numZombies_9();
		String_t* L_6 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// if (numZombies == 10)
		int32_t L_7 = __this->get_numZombies_9();
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0050;
		}
	}
	{
		// nextLevelPanel.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_nextLevelPanel_5();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void CreateZombies::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateZombies__ctor_m750E8DF045ACCBE81797CA980A31500EBAEFE8FB (CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * __this, const RuntimeMethod* method)
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m475CED919EFA09D7DBC1815BE0B92B55E5E3DD92 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_m28FAB53F804FC3AEAA7DB62E75DA0BE645C1B494 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, const RuntimeMethod* method)
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->get_moveThreshold_15();
		DynamicJoystick_set_MoveThreshold_m41DF6070CB77AD666C343C6FCD04F2D013FF7171(__this, L_0, /*hidden argument*/NULL);
		// base.Start();
		Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201(__this, /*hidden argument*/NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mF71D95263661D939DBE2E5C17C73A599E60778B9 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline(L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_0, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_6 = ___eventData0;
		Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_mC38FD6A7ADB9CDAB0BF04235DA5110A37B10E771 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_mB6316E3D97C617061C01DC49DD829C0C4E91BB27 (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DynamicJoystick_HandleInput_mB6316E3D97C617061C01DC49DD829C0C4E91BB27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->get_moveThreshold_15();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->get_moveThreshold_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_2, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___radius2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = L_8;
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_9, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___magnitude0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = ___normalised1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = ___radius2;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_16 = ___cam3;
		Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506(__this, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_mD87E098A06147EABDFDB7F80162B114A799F9D4A (DynamicJoystick_tCF78F682E54A0DC802556F259FCCD587476C2DC3 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->set_moveThreshold_15((1.0f));
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_mC91231670E4D4850A5BFB905300F155AA2DE60FD (FixedJoystick_tA793D5240D38B506203B52A20B5E94895CC41909 * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_m0F34B432F4B1DF7D2A84264E9C5E8553A4E7F0DE (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201(__this, /*hidden argument*/NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_m2DB74D40D3D0D670E92442E24851FF5995CCE764 (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline(L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_0, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_6 = ___eventData0;
		Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m31F698F0F60ECAAB34D55DF8B1FF2E533B818DEA (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_mFE6173BF4B5A37A9E365D8322334FF90AA0DE960 (FloatingJoystick_tBA7C79E5FC21EE9F117E0583A6A5FD38EFF5F8FE * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->get_snapX_7();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		return L_2;
	}

IL_0014:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_x_0();
		float L_5 = Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2(__this, L_4, 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->get_snapY_8();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_y_1();
		return L_2;
	}

IL_0014:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_y_1();
		float L_5 = Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2(__this, L_4, 2, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_get_Direction_mF64961ED5359C8E31E79CAA306019CB66DF50F3E (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(__this, /*hidden argument*/NULL);
		float L_1 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_m3D14494BB31EF5C716DE54CBF4ED30284AEE855F (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// get { return handleRange; }
		float L_0 = __this->get_handleRange_4();
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_handleRange_4(L_1);
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_m56376929F8539F977418D4ACB3A468758515DA85 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// get { return deadZone; }
		float L_0 = __this->get_deadZone_5();
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_deadZone_5(L_1);
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m41669BF41810BA976B1A230E1FB3ADCDC1F4C758 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = Joystick_get_AxisOptions_m41669BF41810BA976B1A230E1FB3ADCDC1F4C758(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m3194AF6B83B35084063737EBA7D8C10C652241F8 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->set_axisOptions_6(L_0);
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m8BFFB04A6377302BCD1E3106930231C756150211 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->get_snapX_7();
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mACA46808CD8386CABE024E9F55A407F0C8A138F0 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->set_snapX_7(L_0);
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m3B972003ED2D6D62DC433D6429AD58AEDCEE5957 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->get_snapY_8();
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mA985E49A53EBD417CF06948C805588612C0395C1 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->set_snapY_8(L_0);
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->get_handleRange_4();
		Joystick_set_HandleRange_m93B28B83AB3DC010C509C16A76BE34896C27B647(__this, L_0, /*hidden argument*/NULL);
		// DeadZone = deadZone;
		float L_1 = __this->get_deadZone_5();
		Joystick_set_DeadZone_mF8F4688B5A32363F2EF7DE0A0FF90B7D65F11C8B(__this, L_1, /*hidden argument*/NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var);
		__this->set_baseRect_11(L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_3 = Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var);
		__this->set_canvas_12(L_3);
		// if (canvas == null)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_4 = __this->get_canvas_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral3F0B67BCB7ECF77640A7DD122D98182E7BC9ADD4, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), (0.5f), (0.5f), /*hidden argument*/NULL);
		// background.pivot = center;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_6 = __this->get_background_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF(L_6, L_7, /*hidden argument*/NULL);
		// handle.anchorMin = center;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_mE965F5B0902C2554635010A5752728414A57020A(L_8, L_9, /*hidden argument*/NULL);
		// handle.anchorMax = center;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_10 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m55EEF00D9E42FE542B5346D7CEDAF9248736F7D3(L_10, L_11, /*hidden argument*/NULL);
		// handle.pivot = center;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_12 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_mB791A383B3C870B9CBD7BC51B2C95711C88E9DCF(L_12, L_13, /*hidden argument*/NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_14 = __this->get_handle_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OnDrag(eventData);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_0 = ___eventData0;
		Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnDrag_m5C8DBE5110822CAF8A7DEDDE6AC240D2C1BDD7C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->set_cam_13((Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 *)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_0 = __this->get_canvas_12();
		NullCheck(L_0);
		int32_t L_1 = Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_2 = __this->get_canvas_12();
		NullCheck(L_2);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_2, /*hidden argument*/NULL);
		__this->set_cam_13(L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = __this->get_cam_13();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = __this->get_background_9();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = RectTransformUtility_WorldToScreenPoint_m114DFD961456722DED0FFB2F8DCB46A04C2CCA20(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_background_9();
		NullCheck(L_8);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_9, (2.0f), /*hidden argument*/NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline(L_11, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_12, L_13, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_1;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_16 = __this->get_canvas_12();
		NullCheck(L_16);
		float L_17 = Canvas_get_scaleFactor_m0F6D59E75F7605ABD2AFF6AF32A1097226CE060A(L_16, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_15, L_17, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_op_Division_mEF4FA1379564288637A7CF5E73BA30CA2259E591(L_14, L_18, /*hidden argument*/NULL);
		__this->set_input_14(L_19);
		// FormatInput();
		Joystick_FormatInput_mDE5D2FB4C4FB309B92816E806756B01F61FF26D5(__this, /*hidden argument*/NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_20 = __this->get_address_of_input_14();
		float L_21 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_20, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_22 = __this->get_address_of_input_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_22, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = V_1;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_25 = __this->get_cam_13();
		VirtActionInvoker4< float, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_26 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = __this->get_input_14();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_27, L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_handleRange_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_26, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->get_deadZone_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___normalised1;
		__this->set_input_14(L_3);
		// }
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_input_14(L_4);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDE5D2FB4C4FB309B92816E806756B01F61FF26D5 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_input_14(L_3);
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = __this->get_address_of_input_14();
		float L_6 = L_5->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_input_14(L_7);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_SnapFloat_mCEF2520CAC111659A65B73C418F5E6FF1CFF05C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->get_axisOptions_6();
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = __this->get_input_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_5 = Vector2_Angle_mC4A140B49B9E737C9FC6B52763468C5662A8B4AC(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return (((float)((float)G_B10_0)));
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return (((float)((float)G_B18_0)));
	}

IL_0073:
	{
		// return value;
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = __this->get_handle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201 (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = __this->get_baseRect_11();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___screenPosition0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_cam_13();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		bool L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m2C389D4DCBB3CADB51A793702F13DF7CE837E153(L_1, L_2, L_3, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = __this->get_baseRect_11();
		NullCheck(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = RectTransform_get_pivot_mA5BEEE2069ACA7C0C717530EED3E7D811D46C463(L_5, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_7 = __this->get_baseRect_11();
		NullCheck(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_0;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_11 = __this->get_background_9();
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = RectTransform_get_anchorMax_m1E51C211FBB32326C884375C9F1E8E8221E5C086(L_11, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_13 = __this->get_baseRect_11();
		NullCheck(L_13);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_13, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_12, L_14, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_10, L_15, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float handleRange = 1;
		__this->set_handleRange_4((1.0f));
		// private Vector2 input = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m01D558819D864B0B36B12AECB92B7A9FE76D63B3 (JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoystickPlayerExample_FixedUpdate_m01D558819D864B0B36B12AECB92B7A9FE76D63B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_1 = __this->get_variableJoystick_5();
		NullCheck(L_1);
		float L_2 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_0, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_5 = __this->get_variableJoystick_5();
		NullCheck(L_5);
		float L_6 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_9 = __this->get_rb_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		float L_11 = __this->get_speed_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, L_11, /*hidden argument*/NULL);
		float L_13 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54(L_9, L_14, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m49F04D0D45C4CBE5F904177CF3AB4A60249AD854 (JoystickPlayerExample_tC21BF4F29E220888E49AD1C28ED50EA82E0C583B * __this, const RuntimeMethod* method)
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_mA0A6156A4DF33D8F0AD6FD106A7A38F33A0F2BBD (JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// switch(index)
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE(L_1, 0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_2 = __this->get_variableJoystick_4();
		NullCheck(L_2);
		VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE(L_2, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_3 = __this->get_variableJoystick_4();
		NullCheck(L_3);
		VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE(L_3, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_m67CF795BA1CEA14B6B2AE3E71191E5E980EB03F1 (JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// switch (index)
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		Joystick_set_AxisOptions_m3194AF6B83B35084063737EBA7D8C10C652241F8_inline(L_1, 0, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = __this->get_background_6();
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_3 = __this->get_axisSprites_7();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_2, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_7 = __this->get_variableJoystick_4();
		NullCheck(L_7);
		Joystick_set_AxisOptions_m3194AF6B83B35084063737EBA7D8C10C652241F8_inline(L_7, 1, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_8 = __this->get_background_6();
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_9 = __this->get_axisSprites_7();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_8, L_12, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_13 = __this->get_variableJoystick_4();
		NullCheck(L_13);
		Joystick_set_AxisOptions_m3194AF6B83B35084063737EBA7D8C10C652241F8_inline(L_13, 2, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_14 = __this->get_background_6();
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_15 = __this->get_axisSprites_7();
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_14, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_mC53461B29C19CDB0FF5E75A9D257B9CF0B1E0CCE (JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_0 = __this->get_variableJoystick_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapX_mACA46808CD8386CABE024E9F55A407F0C8A138F0_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m35C5092C9B62F6BB55D45FF5ECEA2C7F742F1EDB (JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_0 = __this->get_variableJoystick_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapY_mA985E49A53EBD417CF06948C805588612C0395C1_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m27F40165A6AE141735CD9680F90F53599D2CFFC2 (JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoystickSetterExample_Update_m27F40165A6AE141735CD9680F90F53599D2CFFC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_valueText_5();
		VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Joystick_get_Direction_mF64961ED5359C8E31E79CAA306019CB66DF50F3E(L_1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = L_2;
		RuntimeObject * L_4 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral23A6C6DEBC5A87766313E2F1563C2CA4C4FB4E6C, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_mE68D37B29683A04E3232D4A023093BD65336413C (JoystickSetterExample_t0C714E5922483B0E1D4C129300C7C8FD79E4F435 * __this, const RuntimeMethod* method)
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
// System.Void OpenScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScene_Start_mBF5027BDB1754BE2F4C1991495EB956DB214E348 (OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OpenScene_Start_mBF5027BDB1754BE2F4C1991495EB956DB214E348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// gameScene = SceneManager.GetActiveScene().buildIndex + 1;
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_0 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_0), /*hidden argument*/NULL);
		__this->set_gameScene_9(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// Instantiate(ZombiePrefab, new Vector2(3.2f,-0.5f),ZombiePrefab.transform.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_ZombiePrefab_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_3), (3.2f), (-0.5f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_3, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_ZombiePrefab_5();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_2, L_4, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// time = 2.5f;
		__this->set_time_8((2.5f));
		// }
		return;
	}
}
// System.Void OpenScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScene_Update_m48F10306DAF58FCC06D524DD3F187BDEB4EF1A59 (OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OpenScene_Update_m48F10306DAF58FCC06D524DD3F187BDEB4EF1A59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (time <= 0)
		float L_0 = __this->get_time_8();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// Instantiate(bulletPrefab, fierPoint.position, fierPoint.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_bulletPrefab_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_fierPoint_7();
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_fierPoint_7();
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// time = 2.5f;
		__this->set_time_8((2.5f));
		// }
		return;
	}

IL_003b:
	{
		// time -= Time.deltaTime;
		float L_6 = __this->get_time_8();
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_time_8(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// }
		return;
	}
}
// System.Void OpenScene::OpenPanelLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScene_OpenPanelLevel_m11817C3BFE9A178107AC36B8D2766635B10E27EB (OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463 * __this, const RuntimeMethod* method)
{
	{
		// lebelPanel.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_lebelPanel_6();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpenScene::LoadGameScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScene_LoadGameScene_m023F767D7E3F7FC31492481768CFBB5678525913 (OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463 * __this, const RuntimeMethod* method)
{
	{
		// SceneManager.LoadScene(gameScene);
		int32_t L_0 = __this->get_gameScene_9();
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpenScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenScene__ctor_m036681788C95BCAA6DCC9BE7ED015C17F86A56FD (OpenScene_t22D7D83C8653A4DF7297076DC20989A980398463 * __this, const RuntimeMethod* method)
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
// System.Void OpenSceneSounds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSceneSounds_Start_m676B36CC9593959FD6AB558A558759520A972589 (OpenSceneSounds_t7C577C5A40D732293322851E1B2D52136572C1F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OpenSceneSounds_Start_m676B36CC9593959FD6AB558A558759520A972589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btnClick = Resources.Load<AudioClip>("BtnClick");
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F(_stringLiteralD5AD255BF79BD5CB255C44E6140F9E9FC790C926, /*hidden argument*/Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F_RuntimeMethod_var);
		__this->set_btnClick_4(L_0);
		// audioSrc = GetComponent<AudioSource>();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set_audioSrc_5(L_1);
		// }
		return;
	}
}
// System.Void OpenSceneSounds::Clicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSceneSounds_Clicked_m4459A0FC06ADCEA47AD7FEDA0848B85F79E20236 (OpenSceneSounds_t7C577C5A40D732293322851E1B2D52136572C1F2 * __this, const RuntimeMethod* method)
{
	{
		// audioSrc.PlayOneShot(btnClick);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_audioSrc_5();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = __this->get_btnClick_4();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OpenSceneSounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSceneSounds__ctor_m246C405FD737012617BDCF69F1B236E70288708A (OpenSceneSounds_t7C577C5A40D732293322851E1B2D52136572C1F2 * __this, const RuntimeMethod* method)
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
// System.Void PlayerEngin::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin_Start_mD7771C744013B2996D2D48F7DB619C5B545C1A60 (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerEngin_Start_mD7771C744013B2996D2D48F7DB619C5B545C1A60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundMenager = GameObject.Find("SoundMenager");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral9553A985D1CBA64FEB770AF45E4CCBD784D2008E, /*hidden argument*/NULL);
		__this->set_soundMenager_29(L_0);
		// reload = soundMenager.GetComponent<SoundMenager>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_soundMenager_29();
		NullCheck(L_1);
		SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * L_2 = GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894(L_1, /*hidden argument*/GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894_RuntimeMethod_var);
		__this->set_reload_30(L_2);
		// psBlod = GetComponent<ParticleSystem>();
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_3 = Component_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6EBF435A59643B674086A2F309F6A4DCB263452(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6EBF435A59643B674086A2F309F6A4DCB263452_RuntimeMethod_var);
		__this->set_psBlod_34(L_3);
		// speed = 5f;
		__this->set_speed_6((5.0f));
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_4 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_12(L_4);
		// run.enabled = false;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_5 = __this->get_run_13();
		NullCheck(L_5);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_5, (bool)0, /*hidden argument*/NULL);
		// wepon = "Pistol";
		__this->set_wepon_31(_stringLiteral188E8EE673D53A8B4A1C7ED213545C4065C27879);
		// timeShoot = 0.5f; ;
		__this->set_timeShoot_9((0.5f));
		// playerAmmo = 7;
		__this->set_playerAmmo_28(7);
		// ammo = playerAmmo;
		int32_t L_6 = __this->get_playerAmmo_28();
		__this->set_ammo_27(L_6);
		// txtAmmo.text = playerAmmo.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_7 = __this->get_txtAmmo_23();
		int32_t* L_8 = __this->get_address_of_playerAmmo_28();
		String_t* L_9 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		// lifes = 3;
		__this->set_lifes_22(3);
		// gameOver = false;
		__this->set_gameOver_33((bool)0);
		// }
		return;
	}
}
// System.Void PlayerEngin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin_Update_m73C1EB8ECB5BAA2E161AD22C62FA95DAF62C160B (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerEngin_Update_m73C1EB8ECB5BAA2E161AD22C62FA95DAF62C160B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.velocity = new Vector2(MoveJoystick.Horizontal * speed, MoveJoystick.Vertical * speed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_12();
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_1 = __this->get_MoveJoystick_4();
		NullCheck(L_1);
		float L_2 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_6();
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_4 = __this->get_MoveJoystick_4();
		NullCheck(L_4);
		float L_5 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_0, L_7, /*hidden argument*/NULL);
		// if (RotateJoystick.Vertical != 0 && RotateJoystick.Horizontal != 0)
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_8 = __this->get_RotateJoystick_5();
		NullCheck(L_8);
		float L_9 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(L_8, /*hidden argument*/NULL);
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_007a;
		}
	}
	{
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_10 = __this->get_RotateJoystick_5();
		NullCheck(L_10);
		float L_11 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(L_10, /*hidden argument*/NULL);
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_007a;
		}
	}
	{
		// rotateY = RotateJoystick.Vertical;
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_12 = __this->get_RotateJoystick_5();
		NullCheck(L_12);
		float L_13 = Joystick_get_Vertical_m2326D40EF66E0A5E2B34F9CF02A53C05CCAFDED0(L_12, /*hidden argument*/NULL);
		__this->set_rotateY_11(L_13);
		// rotateX = RotateJoystick.Horizontal;
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_14 = __this->get_RotateJoystick_5();
		NullCheck(L_14);
		float L_15 = Joystick_get_Horizontal_mD2CEADF3C7AD02BA60F7990F1A39BC67C6D8819B(L_14, /*hidden argument*/NULL);
		__this->set_rotateX_10(L_15);
	}

IL_007a:
	{
		// angle = Mathf.Atan2(rotateY, rotateX) * Mathf.Rad2Deg;
		float L_16 = __this->get_rotateY_11();
		float L_17 = __this->get_rotateX_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_18 = atan2f(L_16, L_17);
		__this->set_angle_7(((float)il2cpp_codegen_multiply((float)L_18, (float)(57.29578f))));
		// rb.rotation = angle;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_19 = __this->get_rb_12();
		float L_20 = __this->get_angle_7();
		NullCheck(L_19);
		Rigidbody2D_set_rotation_m0945A4D66B39C6698EFBF73F2A95969C976A858B(L_19, L_20, /*hidden argument*/NULL);
		// if (rb.velocity != Vector2.zero)
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_21 = __this->get_rb_12();
		NullCheck(L_21);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		bool L_24 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00cc;
		}
	}
	{
		// run.enabled = true;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_25 = __this->get_run_13();
		NullCheck(L_25);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00cc:
	{
		// run.enabled = false;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_26 = __this->get_run_13();
		NullCheck(L_26);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_26, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerEngin::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin_Shoot_m6072845FA67718E9DC0B9B82896C74B1522B8E3E (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerEngin_Shoot_m6072845FA67718E9DC0B9B82896C74B1522B8E3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (time <= 0)
		float L_0 = __this->get_time_8();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_01dc;
		}
	}
	{
		// if (ammo > 0)
		int32_t L_1 = __this->get_ammo_27();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		// AnimMenagment(wepon, "Shoot");
		String_t* L_2 = __this->get_wepon_31();
		PlayerEngin_AnimMenagment_mCEB24EA87A42B4AC9DBBFD22A1A446C7340EA26F(__this, L_2, _stringLiteralB301C10B3D0A20C4D34F04D383741C386814B593, /*hidden argument*/NULL);
		// Instantiate(bulletPrefab, FierPoint.position, FierPoint.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_bulletPrefab_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_FierPoint_15();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_FierPoint_15();
		NullCheck(L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_3, L_5, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// muzzle = Instantiate(muzzlePrefab, FierPoint.position, FierPoint.rotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_muzzlePrefab_17();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = __this->get_FierPoint_15();
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = __this->get_FierPoint_15();
		NullCheck(L_11);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_11, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_8, L_10, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		__this->set_muzzle_18(L_13);
		// Destroy(muzzle.gameObject, 0.09f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_muzzle_18();
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_14, /*hidden argument*/NULL);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_15, (0.09f), /*hidden argument*/NULL);
		// time = timeShoot;
		float L_16 = __this->get_timeShoot_9();
		__this->set_time_8(L_16);
		// ammo--;
		int32_t L_17 = __this->get_ammo_27();
		__this->set_ammo_27(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
		// txtAmmo.text = ammo.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_18 = __this->get_txtAmmo_23();
		int32_t* L_19 = __this->get_address_of_ammo_27();
		String_t* L_20 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// }
		return;
	}

IL_00bc:
	{
		// reload.PlayerSounds("Reload");
		SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * L_21 = __this->get_reload_30();
		NullCheck(L_21);
		SoundMenager_PlayerSounds_m6A8D3BE4FA2E08B8B9D70FE9751807B7C2EBA105(L_21, _stringLiteralCCE7155371FC26686B89C7452337D8419692F31E, /*hidden argument*/NULL);
		// AnimMenagment(wepon, "Reload");
		String_t* L_22 = __this->get_wepon_31();
		PlayerEngin_AnimMenagment_mCEB24EA87A42B4AC9DBBFD22A1A446C7340EA26F(__this, L_22, _stringLiteralCCE7155371FC26686B89C7452337D8419692F31E, /*hidden argument*/NULL);
		// if (akAmmo.enabled == true && akAmmo.text != "0")
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_23 = __this->get_akAmmo_24();
		NullCheck(L_23);
		bool L_24 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0132;
		}
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_25 = __this->get_akAmmo_24();
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_25);
		bool L_27 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_26, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0132;
		}
	}
	{
		// int i = int.Parse(akAmmo.text);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_28 = __this->get_akAmmo_24();
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_28);
		int32_t L_30 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		// i -= playerAmmo;
		int32_t L_31 = V_0;
		int32_t L_32 = __this->get_playerAmmo_28();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32));
		// akAmmo.text = i.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_33 = __this->get_akAmmo_24();
		String_t* L_34 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		// }
		goto IL_01b9;
	}

IL_0132:
	{
		// wepon = "Pistol";
		__this->set_wepon_31(_stringLiteral188E8EE673D53A8B4A1C7ED213545C4065C27879);
		// animPlayer.SetBool("AK", false);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_35 = __this->get_animPlayer_14();
		NullCheck(L_35);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_35, _stringLiteral059387A3ACA8494111776B303D438EEADD04A621, (bool)0, /*hidden argument*/NULL);
		// playerAmmo = 7;
		__this->set_playerAmmo_28(7);
		// timeShoot = 0.5f;
		__this->set_timeShoot_9((0.5f));
		// infinity.enabled = true;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_36 = __this->get_infinity_26();
		NullCheck(L_36);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_36, (bool)1, /*hidden argument*/NULL);
		// goAkAmmo.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_goAkAmmo_25();
		NullCheck(L_37);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_37, (bool)0, /*hidden argument*/NULL);
		// FierPoint.position = new Vector2(FierPoint.position.x - 0.06f, FierPoint.position.y - 0.06f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = __this->get_FierPoint_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = __this->get_FierPoint_15();
		NullCheck(L_39);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = __this->get_FierPoint_15();
		NullCheck(L_42);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_45), ((float)il2cpp_codegen_subtract((float)L_41, (float)(0.06f))), ((float)il2cpp_codegen_subtract((float)L_44, (float)(0.06f))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_45, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_38, L_46, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		// ammo = playerAmmo;
		int32_t L_47 = __this->get_playerAmmo_28();
		__this->set_ammo_27(L_47);
		// txtAmmo.text = ammo.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_48 = __this->get_txtAmmo_23();
		int32_t* L_49 = __this->get_address_of_ammo_27();
		String_t* L_50 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, L_50);
		// }
		return;
	}

IL_01dc:
	{
		// time -= Time.deltaTime;
		float L_51 = __this->get_time_8();
		float L_52 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_time_8(((float)il2cpp_codegen_subtract((float)L_51, (float)L_52)));
		// }
		return;
	}
}
// System.Void PlayerEngin::AnimMenagment(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin_AnimMenagment_mCEB24EA87A42B4AC9DBBFD22A1A446C7340EA26F (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, String_t* ___weponName0, String_t* ___animName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerEngin_AnimMenagment_mCEB24EA87A42B4AC9DBBFD22A1A446C7340EA26F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (weponName == "Pistol")
		String_t* L_0 = ___weponName0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral188E8EE673D53A8B4A1C7ED213545C4065C27879, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// switch (animName)
		String_t* L_2 = ___animName1;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralB301C10B3D0A20C4D34F04D383741C386814B593, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = ___animName1;
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, _stringLiteralCCE7155371FC26686B89C7452337D8419692F31E, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0028:
	{
		// animPlayer.SetTrigger("ShootPistol");
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_6 = __this->get_animPlayer_14();
		NullCheck(L_6);
		Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245(L_6, _stringLiteral774310ED601AE514163D241FE9A1A72EAA0DCCD8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0039:
	{
		// animPlayer.SetTrigger("ReloadPistol");
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_7 = __this->get_animPlayer_14();
		NullCheck(L_7);
		Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245(L_7, _stringLiteral29780E40001ACEBF94FC2DB1908881C916D80B3E, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004a:
	{
		// switch (animName)
		String_t* L_8 = ___animName1;
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteralB301C10B3D0A20C4D34F04D383741C386814B593, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_10 = ___animName1;
		bool L_11 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_10, _stringLiteralCCE7155371FC26686B89C7452337D8419692F31E, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0076;
		}
	}
	{
		return;
	}

IL_0065:
	{
		// animPlayer.SetTrigger("ShootAk");
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_12 = __this->get_animPlayer_14();
		NullCheck(L_12);
		Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245(L_12, _stringLiteral67419517B1B86DC12904E0BEE5186F043DC7E9B0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0076:
	{
		// animPlayer.SetTrigger("ReloadAk");
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_13 = __this->get_animPlayer_14();
		NullCheck(L_13);
		Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245(L_13, _stringLiteral498D7017F203E9009B24CD9902DE0C6E0901EAE3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerEngin::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin_OnCollisionEnter2D_m453D8E707C2AFF11EC63B9389CD22CC54355B91F (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerEngin_OnCollisionEnter2D_m453D8E707C2AFF11EC63B9389CD22CC54355B91F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (collision.gameObject.tag == "Zombie")
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral490B32463C2E3D6E0F9BCBBAB9A331B11DE143B3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00c8;
		}
	}
	{
		// lifes--;
		int32_t L_4 = __this->get_lifes_22();
		__this->set_lifes_22(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// psBlod.Play();
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_5 = __this->get_psBlod_34();
		NullCheck(L_5);
		ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F(L_5, /*hidden argument*/NULL);
		// if(lifes > 0)
		int32_t L_6 = __this->get_lifes_22();
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		// switch (lifes)
		int32_t L_7 = __this->get_lifes_22();
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_00c8;
		}
	}
	{
		// life.enabled = false;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_10 = __this->get_life_19();
		NullCheck(L_10);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_10, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00c8;
	}

IL_0059:
	{
		// life2.enabled = false;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_11 = __this->get_life2_20();
		NullCheck(L_11);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_11, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00c8;
	}

IL_0067:
	{
		// life3.enabled = false;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_12 = __this->get_life3_21();
		NullCheck(L_12);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_12, (bool)0, /*hidden argument*/NULL);
		// gameOverPanle.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_gameOverPanle_32();
		NullCheck(L_13);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_13, (bool)1, /*hidden argument*/NULL);
		// MoveJoystick.gameObject.SetActive(false);
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_14 = __this->get_MoveJoystick_4();
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_15, (bool)0, /*hidden argument*/NULL);
		// RotateJoystick.gameObject.SetActive(false);
		Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * L_16 = __this->get_RotateJoystick_5();
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_17, (bool)0, /*hidden argument*/NULL);
		// gameOver = true;
		__this->set_gameOver_33((bool)1);
		// var main = psBlod.main;
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_18 = __this->get_psBlod_34();
		NullCheck(L_18);
		MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7  L_19 = ParticleSystem_get_main_m360B0AA57C71DE0358B6B07133C68B5FD88C742F(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// main.loop = true;
		MainModule_set_loop_mC661EA0DB8B61948CF9059D023CF82FFBF9E26FD((MainModule_t99C675667E0A363368324132DFA34B27FFEE6FC7 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		// run.enabled = false;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_20 = __this->get_run_13();
		NullCheck(L_20);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// if (collision.gameObject.tag == "FirstAid")
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_21 = ___collision0;
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_22, /*hidden argument*/NULL);
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteral5817C8A2223B0001916184F6E949354092C2D732, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_012a;
		}
	}
	{
		// if (lifes != 3)
		int32_t L_25 = __this->get_lifes_22();
		if ((((int32_t)L_25) == ((int32_t)3)))
		{
			goto IL_012a;
		}
	}
	{
		// switch (lifes)
		int32_t L_26 = __this->get_lifes_22();
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)1)))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0111;
		}
	}
	{
		// life.enabled = true;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_29 = __this->get_life_19();
		NullCheck(L_29);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_29, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_0111;
	}

IL_0105:
	{
		// life2.enabled = true;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_30 = __this->get_life2_20();
		NullCheck(L_30);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_30, (bool)1, /*hidden argument*/NULL);
	}

IL_0111:
	{
		// lifes++;
		int32_t L_31 = __this->get_lifes_22();
		__this->set_lifes_22(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		// Destroy(collision.gameObject);
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_32 = ___collision0;
		NullCheck(L_32);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_33, /*hidden argument*/NULL);
	}

IL_012a:
	{
		// if (collision.gameObject.tag == "Ak47")
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_34 = ___collision0;
		NullCheck(L_34);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_35, /*hidden argument*/NULL);
		bool L_37 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_36, _stringLiteralA2F114D0FE2E38D5BF6E13517ADEB5E03E67CC0C, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0209;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_38 = ___collision0;
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_39, /*hidden argument*/NULL);
		// wepon = "AK";
		__this->set_wepon_31(_stringLiteral059387A3ACA8494111776B303D438EEADD04A621);
		// timeShoot = 0.3f;
		__this->set_timeShoot_9((0.3f));
		// animPlayer.SetBool("AK", true);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_40 = __this->get_animPlayer_14();
		NullCheck(L_40);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_40, _stringLiteral059387A3ACA8494111776B303D438EEADD04A621, (bool)1, /*hidden argument*/NULL);
		// playerAmmo = 30;
		__this->set_playerAmmo_28(((int32_t)30));
		// ammo = playerAmmo;
		int32_t L_41 = __this->get_playerAmmo_28();
		__this->set_ammo_27(L_41);
		// txtAmmo.text = playerAmmo.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_42 = __this->get_txtAmmo_23();
		int32_t* L_43 = __this->get_address_of_playerAmmo_28();
		String_t* L_44 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_44);
		// infinity.enabled = false;
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_45 = __this->get_infinity_26();
		NullCheck(L_45);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_45, (bool)0, /*hidden argument*/NULL);
		// goAkAmmo.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_46 = __this->get_goAkAmmo_25();
		NullCheck(L_46);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_46, (bool)1, /*hidden argument*/NULL);
		// akAmmo.text = "30";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_47 = __this->get_akAmmo_24();
		NullCheck(L_47);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, _stringLiteral22D200F8670DBDB3E253A90EEE5098477C95C23D);
		// FierPoint.position = new Vector2(FierPoint.position.x+0.06f, FierPoint.position.y+0.06f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = __this->get_FierPoint_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = __this->get_FierPoint_15();
		NullCheck(L_49);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = __this->get_FierPoint_15();
		NullCheck(L_52);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_52, /*hidden argument*/NULL);
		float L_54 = L_53.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_55), ((float)il2cpp_codegen_add((float)L_51, (float)(0.06f))), ((float)il2cpp_codegen_add((float)L_54, (float)(0.06f))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_55, /*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_48, L_56, /*hidden argument*/NULL);
	}

IL_0209:
	{
		// }
		return;
	}
}
// System.Void PlayerEngin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerEngin__ctor_m9CA4C0BE078F19D046D9D42F8AF7728C0B763978 (PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * __this, const RuntimeMethod* method)
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
// System.Void SceneEngine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEngine_Start_m8AA444AE213B04F0D7ABE0B016E880938B4EF4DA (SceneEngine_tC93701E74DF4A1A92C2E13B40FDC55DB7D784379 * __this, const RuntimeMethod* method)
{
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// maineScene = SceneManager.GetActiveScene().buildIndex - 1;
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_0 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_0), /*hidden argument*/NULL);
		__this->set_maineScene_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// }
		return;
	}
}
// System.Void SceneEngine::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEngine_Retry_m067BB16E1AC28D5C21003A529836651F1A04855D (SceneEngine_tC93701E74DF4A1A92C2E13B40FDC55DB7D784379 * __this, const RuntimeMethod* method)
{
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_0 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m0E63ED0F050FCC35A4216220C584BE3D3F77B0E1((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_mFC850AC783E5EA05D6154976385DFECC251CDFB9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneEngine::MainScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEngine_MainScene_m6487F6F37BF465F555C1EEDE81631917D906FADE (SceneEngine_tC93701E74DF4A1A92C2E13B40FDC55DB7D784379 * __this, const RuntimeMethod* method)
{
	{
		// SceneManager.LoadScene(maineScene);
		int32_t L_0 = __this->get_maineScene_4();
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEngine__ctor_m4E4045DD4CE812894A87B5411A534F5B16E792EB (SceneEngine_tC93701E74DF4A1A92C2E13B40FDC55DB7D784379 * __this, const RuntimeMethod* method)
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
// System.Void SoundMenager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMenager_Start_m08149C832C4F0EBC0BBAAD0A0D30AAF3722C3CD4 (SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundMenager_Start_m08149C832C4F0EBC0BBAAD0A0D30AAF3722C3CD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// zombieAttak = Resources.Load<AudioClip>("ZombieAttack");
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F(_stringLiteral9F798021B02227FE77DC73FBA3DDEC54E1E494BB, /*hidden argument*/Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F_RuntimeMethod_var);
		__this->set_zombieAttak_4(L_0);
		// zombieGrrr = Resources.Load<AudioClip>("ZombieGrrr");
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F(_stringLiteral72D1B03AD4B52092AC03644D853868C40428963B, /*hidden argument*/Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F_RuntimeMethod_var);
		__this->set_zombieGrrr_5(L_1);
		// gunShoot = Resources.Load<AudioClip>("GunShoot");
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F(_stringLiteral0D69131CD45E6485287422AA4FC013FB0221CB17, /*hidden argument*/Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F_RuntimeMethod_var);
		__this->set_gunShoot_6(L_2);
		// reload = Resources.Load<AudioClip>("Reload");
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_3 = Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F(_stringLiteralCCE7155371FC26686B89C7452337D8419692F31E, /*hidden argument*/Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F_RuntimeMethod_var);
		__this->set_reload_7(L_3);
		// btnClick = Resources.Load<AudioClip>("BtnClick");
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_4 = Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F(_stringLiteralD5AD255BF79BD5CB255C44E6140F9E9FC790C926, /*hidden argument*/Resources_Load_TisAudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051_mEFBBF028B72CF71A92F7EB801D6DA765A205706F_RuntimeMethod_var);
		__this->set_btnClick_8(L_4);
		// audioSrc = GetComponent<AudioSource>();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set_audioSrc_9(L_5);
		// }
		return;
	}
}
// System.Void SoundMenager::ZombieSounds(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMenager_ZombieSounds_mC448E5ED25187ED3605846340CA12BADEBA5CD0D (SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundMenager_ZombieSounds_mC448E5ED25187ED3605846340CA12BADEBA5CD0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (name)
		String_t* L_0 = ___name0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralBDF152A7FD5960723957CB7C243C1BD87EE93C08, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___name0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralF7FD3A2F989BC57754D3E1E4B01F60386B296605, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_001b:
	{
		// audioSrc.PlayOneShot(zombieAttak);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = __this->get_audioSrc_9();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = __this->get_zombieAttak_4();
		NullCheck(L_4);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_4, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002d:
	{
		// audioSrc.PlayOneShot(zombieGrrr);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = __this->get_audioSrc_9();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_7 = __this->get_zombieGrrr_5();
		NullCheck(L_6);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundMenager::PlayerSounds(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMenager_PlayerSounds_m6A8D3BE4FA2E08B8B9D70FE9751807B7C2EBA105 (SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundMenager_PlayerSounds_m6A8D3BE4FA2E08B8B9D70FE9751807B7C2EBA105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (name)
		String_t* L_0 = ___name0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral0F7689B981C4615F4354EC1D49BED870624E4171, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___name0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralCCE7155371FC26686B89C7452337D8419692F31E, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_001b:
	{
		// audioSrc.PlayOneShot(gunShoot);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = __this->get_audioSrc_9();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = __this->get_gunShoot_6();
		NullCheck(L_4);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_4, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002d:
	{
		// audioSrc.PlayOneShot(reload);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = __this->get_audioSrc_9();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_7 = __this->get_reload_7();
		NullCheck(L_6);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundMenager::Clicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMenager_Clicked_m7304EE411316A479A2865722E89483171A73FC27 (SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * __this, const RuntimeMethod* method)
{
	{
		// audioSrc.PlayOneShot(btnClick);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_audioSrc_9();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = __this->get_btnClick_8();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundMenager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMenager__ctor_m45CFA78F037FA392B51511DA4151EFD1F6C5C706 (SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * __this, const RuntimeMethod* method)
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m7680F75A6FE65378FA1882A60F1D2D7C10E1585F (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m70CF65250847566A28B2A418C3EE55004987552F (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_set_MoveThreshold_m70CF65250847566A28B2A418C3EE55004987552F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, int32_t ___joystickType0, const RuntimeMethod* method)
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->set_joystickType_16(L_0);
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_2 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = __this->get_fixedPosition_17();
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_2, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_6 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m5BB1A8FE9E2EBC394C4AC8B4E495AB653F61E8E2 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Joystick_Start_mA4B921AF2FEC7B830AC4F0D5E49AF8934ECAD201(__this, /*hidden argument*/NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_0, /*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_1);
		// SetMode(joystickType);
		int32_t L_2 = __this->get_joystickType_16();
		VariableJoystick_SetMode_m222D977BBDA4E253D4EAF1E55925FAD333EA7CAE(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m066F12E7818D1CD22977EAEA9FE4AEC0DD179FAC (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline(L_2, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Joystick_ScreenPointToAnchoredPosition_mE4C429E76D0FA78FD1567EB1361AF68141706201(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_1, L_4, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_7 = ___eventData0;
		Joystick_OnPointerDown_m408D43BE6A49862DFD49B5198E0B61B85A162703(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m42B201EDAB1B3A2F2ED747FA7A4773E2654DA061 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_3 = ___eventData0;
		Joystick_OnPointerUp_m771F7519F51F02DAADA7DE0A562F82710FA721BC(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_m83CA8AFC5C395DE4C684F2C478D1DE36CAD0BF19 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, float ___magnitude0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___normalised1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___radius2, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick_HandleInput_m83CA8AFC5C395DE4C684F2C478D1DE36CAD0BF19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->get_joystickType_16();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->get_moveThreshold_15();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->get_moveThreshold_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_3, ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___radius2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Multiply_mEDF9FDDF3BFFAEC997FBCDE5FA34871F2955E7C4(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_9 = ((Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 *)__this)->get_background_9();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_10 = L_9;
		NullCheck(L_10);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = RectTransform_get_anchoredPosition_mCB2171DBADBC572F354CCFE3ACA19F9506F97907(L_10, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_m4DD45DB1A97734A1F3A81E5F259638ECAF35962F(L_10, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = ___normalised1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = ___radius2;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_17 = ___cam3;
		Joystick_HandleInput_mA2FF5AE57290471865DC02DC2ED3BDA3FDBA2506(__this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84 (VariableJoystick_t9C1A77B6CFC93759F7E8F5F84F9EDBFF28A80ED1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableJoystick__ctor_m8A6171BB962558D6833C6CF80E3E0092DF768D84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->set_moveThreshold_15((1.0f));
		// private Vector2 fixedPosition = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_0);
		Joystick__ctor_m0CEC3DFCF02C69B8020F600539EB02297E26D1CE(__this, /*hidden argument*/NULL);
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
// System.Void ZombieEngine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieEngine_Start_m05B4DBD741E6237A86285C72CCD1D903DC45C966 (ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieEngine_Start_m05B4DBD741E6237A86285C72CCD1D903DC45C966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundMenager = GameObject.Find("SoundMenager");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral9553A985D1CBA64FEB770AF45E4CCBD784D2008E, /*hidden argument*/NULL);
		__this->set_soundMenager_21(L_0);
		// zombieSound = soundMenager.GetComponent<SoundMenager>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_soundMenager_21();
		NullCheck(L_1);
		SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * L_2 = GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894(L_1, /*hidden argument*/GameObject_GetComponent_TisSoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74_m679FF4B0EC544ACCE374E955A8CD9651B3F82894_RuntimeMethod_var);
		__this->set_zombieSound_20(L_2);
		// psBlod = GetComponent<ParticleSystem>();
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_3 = Component_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6EBF435A59643B674086A2F309F6A4DCB263452(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_mA6EBF435A59643B674086A2F309F6A4DCB263452_RuntimeMethod_var);
		__this->set_psBlod_22(L_3);
		// playerTransform = GameObject.FindWithTag("Player").transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		__this->set_playerTransform_18(L_5);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_6 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_4(L_6);
		// speed = 1;
		__this->set_speed_8((1.0f));
		// time = 5;
		__this->set_time_9((5.0f));
		// y = 0;
		__this->set_y_6(0);
		// x = 1;
		__this->set_x_5(1);
		// toColse = 7.5f;
		__this->set_toColse_11((7.5f));
		// attak = false;
		__this->set_attak_19((bool)0);
		// lives = 2;
		__this->set_lives_7(2);
		// timeAttak = 0;
		__this->set_timeAttak_12((0.0f));
		// timeGrr = 0;
		__this->set_timeGrr_13((0.0f));
		// animMove.enabled = true;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_7 = __this->get_animMove_14();
		NullCheck(L_7);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_7, (bool)1, /*hidden argument*/NULL);
		// sprMove.enabled = true;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_8 = __this->get_sprMove_16();
		NullCheck(L_8);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_8, (bool)1, /*hidden argument*/NULL);
		// animAttack.enabled = false;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_9 = __this->get_animAttack_15();
		NullCheck(L_9);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_9, (bool)0, /*hidden argument*/NULL);
		// sprAtteck.enabled = false;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_10 = __this->get_sprAtteck_17();
		NullCheck(L_10);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_10, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ZombieEngine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieEngine_Update_m52ED87BAE78277E3E25BB4673B2F539F4CB80B4F (ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieEngine_Update_m52ED87BAE78277E3E25BB4673B2F539F4CB80B4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (time <= 0)
		float L_0 = __this->get_time_9();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// x = Random.Range(-1, 1);
		int32_t L_1 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780((-1), 1, /*hidden argument*/NULL);
		__this->set_x_5(L_1);
		// y = Random.Range(-1, 1);
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780((-1), 1, /*hidden argument*/NULL);
		__this->set_y_6(L_2);
		// time = 5;
		__this->set_time_9((5.0f));
	}

IL_0032:
	{
		// if (x == 0 && y == 0)
		int32_t L_3 = __this->get_x_5();
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = __this->get_y_6();
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		// animMove.SetBool("Idle", true);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_5 = __this->get_animMove_14();
		NullCheck(L_5);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_5, _stringLiteralCC1EBDD04E76A4B8BAFFB29A22FA00446D382B18, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0066;
	}

IL_0055:
	{
		// animMove.SetBool("Idle", false);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_6 = __this->get_animMove_14();
		NullCheck(L_6);
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_6, _stringLiteralCC1EBDD04E76A4B8BAFFB29A22FA00446D382B18, (bool)0, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// time -= Time.deltaTime;
		float L_7 = __this->get_time_9();
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_time_9(((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)));
		// rb.velocity = new Vector2(x * speed, y * speed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_9 = __this->get_rb_4();
		int32_t L_10 = __this->get_x_5();
		float L_11 = __this->get_speed_8();
		int32_t L_12 = __this->get_y_6();
		float L_13 = __this->get_speed_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_14), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_10))), (float)L_11)), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_12))), (float)L_13)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_9, L_14, /*hidden argument*/NULL);
		// angle = Mathf.Atan2(y, x) * Mathf.Rad2Deg;
		int32_t L_15 = __this->get_y_6();
		int32_t L_16 = __this->get_x_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_17 = atan2f((((float)((float)L_15))), (((float)((float)L_16))));
		__this->set_angle_10(((float)il2cpp_codegen_multiply((float)L_17, (float)(57.29578f))));
		// rb.rotation = angle;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_18 = __this->get_rb_4();
		float L_19 = __this->get_angle_10();
		NullCheck(L_18);
		Rigidbody2D_set_rotation_m0945A4D66B39C6698EFBF73F2A95969C976A858B(L_18, L_19, /*hidden argument*/NULL);
		// CheckIfClose();
		ZombieEngine_CheckIfClose_m5E6A2974639C4DC4740216D7A714D51A700DA20E(__this, /*hidden argument*/NULL);
		// if (attak)
		bool L_20 = __this->get_attak_19();
		if (!L_20)
		{
			goto IL_011d;
		}
	}
	{
		// if (timeAttak <= 0)
		float L_21 = __this->get_timeAttak_12();
		if ((!(((float)L_21) <= ((float)(0.0f)))))
		{
			goto IL_010b;
		}
	}
	{
		// zombieSound.ZombieSounds("zombieAttak");
		SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * L_22 = __this->get_zombieSound_20();
		NullCheck(L_22);
		SoundMenager_ZombieSounds_mC448E5ED25187ED3605846340CA12BADEBA5CD0D(L_22, _stringLiteralBDF152A7FD5960723957CB7C243C1BD87EE93C08, /*hidden argument*/NULL);
		// timeAttak = 0.8f;
		__this->set_timeAttak_12((0.8f));
		// }
		return;
	}

IL_010b:
	{
		// timeAttak -= Time.deltaTime;
		float L_23 = __this->get_timeAttak_12();
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeAttak_12(((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)));
	}

IL_011d:
	{
		// }
		return;
	}
}
// System.Void ZombieEngine::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieEngine_OnCollisionEnter2D_mC01CBA07C656A65D37728AD5FBFC0F80A8AD7E67 (ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieEngine_OnCollisionEnter2D_mC01CBA07C656A65D37728AD5FBFC0F80A8AD7E67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Walls")
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralD7A58E57AA1AAF3C59A4FA3E04013A5C732EBED5, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// x = Random.Range(-1, 1);
		int32_t L_4 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780((-1), 1, /*hidden argument*/NULL);
		__this->set_x_5(L_4);
		// y = Random.Range(-1, 1);
		int32_t L_5 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780((-1), 1, /*hidden argument*/NULL);
		__this->set_y_6(L_5);
	}

IL_0031:
	{
		// if (collision.gameObject.tag == "Player")
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_6 = ___collision0;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_7, /*hidden argument*/NULL);
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		// attak = true;
		__this->set_attak_19((bool)1);
		// animAttack.enabled = true;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_10 = __this->get_animAttack_15();
		NullCheck(L_10);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_10, (bool)1, /*hidden argument*/NULL);
		// sprAtteck.enabled = true;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_11 = __this->get_sprAtteck_17();
		NullCheck(L_11);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_11, (bool)1, /*hidden argument*/NULL);
		// animMove.enabled = false;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_12 = __this->get_animMove_14();
		NullCheck(L_12);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_12, (bool)0, /*hidden argument*/NULL);
		// sprMove.enabled = false;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_13 = __this->get_sprMove_16();
		NullCheck(L_13);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// if (collision.gameObject.tag == "Bullet")
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_14 = ___collision0;
		NullCheck(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_15, /*hidden argument*/NULL);
		bool L_17 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_16, _stringLiteralB98DA0CCC81F4F734434572F19CCC66972AAE344, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00d6;
		}
	}
	{
		// psBlod.Play();
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_18 = __this->get_psBlod_22();
		NullCheck(L_18);
		ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F(L_18, /*hidden argument*/NULL);
		// lives--;
		int32_t L_19 = __this->get_lives_7();
		__this->set_lives_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		// if (lives == 0)
		int32_t L_20 = __this->get_lives_7();
		if (L_20)
		{
			goto IL_00d6;
		}
	}
	{
		// GameObject createZombies = GameObject.FindWithTag("CreateZombies");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralB3D1A8965C40106B91BC9DDFCB399859D3EA4AD1, /*hidden argument*/NULL);
		// CreateZombies dedZombie = createZombies.GetComponent<CreateZombies>();
		NullCheck(L_21);
		CreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67 * L_22 = GameObject_GetComponent_TisCreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67_m2124F71E652886F7252CDF2E47EB2882DFB8F3BC(L_21, /*hidden argument*/GameObject_GetComponent_TisCreateZombies_t92BAB7AD1769B98305DC0D7B12830C4FF408FA67_m2124F71E652886F7252CDF2E47EB2882DFB8F3BC_RuntimeMethod_var);
		// dedZombie.CountDedZombies();
		NullCheck(L_22);
		CreateZombies_CountDedZombies_mA08C05C709D3E3913AFC6A7042BA7A2B6ACD2CC7(L_22, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_23, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void ZombieEngine::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieEngine_OnCollisionExit2D_m48FD32837BD9CB43B9776E7F1749BBD145DC7D19 (ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieEngine_OnCollisionExit2D_m48FD32837BD9CB43B9776E7F1749BBD145DC7D19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// attak = false;
		__this->set_attak_19((bool)0);
		// animAttack.enabled = false;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_4 = __this->get_animAttack_15();
		NullCheck(L_4);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_4, (bool)0, /*hidden argument*/NULL);
		// sprAtteck.enabled = false;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_5 = __this->get_sprAtteck_17();
		NullCheck(L_5);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_5, (bool)0, /*hidden argument*/NULL);
		// animMove.enabled = true;
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_6 = __this->get_animMove_14();
		NullCheck(L_6);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_6, (bool)1, /*hidden argument*/NULL);
		// sprMove.enabled = true;
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_7 = __this->get_sprMove_16();
		NullCheck(L_7);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_7, (bool)1, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void ZombieEngine::CheckIfClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieEngine_CheckIfClose_m5E6A2974639C4DC4740216D7A714D51A700DA20E (ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieEngine_CheckIfClose_m5E6A2974639C4DC4740216D7A714D51A700DA20E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * V_2 = NULL;
	{
		// if (Vector2.Distance(transform.position, playerTransform.position) < toColse)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_playerTransform_18();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_4, /*hidden argument*/NULL);
		float L_6 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_2, L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_toColse_11();
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_010a;
		}
	}
	{
		// if (timeGrr <= 0)
		float L_8 = __this->get_timeGrr_13();
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		// zombieSound.ZombieSounds("zombieGrrr");
		SoundMenager_t6549387911EE6261EC5E02A542B206CA617C2B74 * L_9 = __this->get_zombieSound_20();
		NullCheck(L_9);
		SoundMenager_ZombieSounds_mC448E5ED25187ED3605846340CA12BADEBA5CD0D(L_9, _stringLiteralF7FD3A2F989BC57754D3E1E4B01F60386B296605, /*hidden argument*/NULL);
		// timeGrr = 2.5f;
		__this->set_timeGrr_13((2.5f));
		// }
		goto IL_006c;
	}

IL_005a:
	{
		// timeGrr -= Time.deltaTime;
		float L_10 = __this->get_timeGrr_13();
		float L_11 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeGrr_13(((float)il2cpp_codegen_subtract((float)L_10, (float)L_11)));
	}

IL_006c:
	{
		// Vector3 direction = playerTransform.position - transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_playerTransform_18();
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		float L_18 = L_17.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		float L_20 = L_19.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_21 = atan2f(L_18, L_20);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_21, (float)(57.29578f)));
		// rb.rotation = angle;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_22 = __this->get_rb_4();
		float L_23 = V_1;
		NullCheck(L_22);
		Rigidbody2D_set_rotation_m0945A4D66B39C6698EFBF73F2A95969C976A858B(L_22, L_23, /*hidden argument*/NULL);
		// transform.position = Vector2.MoveTowards(transform.position, playerTransform.position, 2 * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_26, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = __this->get_playerTransform_18();
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_29, /*hidden argument*/NULL);
		float L_31 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = Vector2_MoveTowards_m5CE85293E9619514164A685D1D4673E2A6E43DFA(L_27, L_30, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_31)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_32, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_24, L_33, /*hidden argument*/NULL);
		// GameObject player = GameObject.FindWithTag("Player");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_34 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		// PlayerEngin playerEngin = player.GetComponent<PlayerEngin>();
		NullCheck(L_34);
		PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * L_35 = GameObject_GetComponent_TisPlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7_mCBD9077B9356D1E56383A2E23F07E6D2A669B92E(L_34, /*hidden argument*/GameObject_GetComponent_TisPlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7_mCBD9077B9356D1E56383A2E23F07E6D2A669B92E_RuntimeMethod_var);
		V_2 = L_35;
		// if(playerEngin.gameOver == false)
		PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * L_36 = V_2;
		NullCheck(L_36);
		bool L_37 = L_36->get_gameOver_33();
		if (L_37)
		{
			goto IL_010a;
		}
	}
	{
		// playerEngin.Shoot();
		PlayerEngin_t56C6E517E0BE7F68DC1E73AB3DFEE8F0BE6C07F7 * L_38 = V_2;
		NullCheck(L_38);
		PlayerEngin_Shoot_m6072845FA67718E9DC0B9B82896C74B1522B8E3E(L_38, /*hidden argument*/NULL);
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void ZombieEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieEngine__ctor_m8CA51C9BF04E813BBC69BB5139C1F36FDF84DF8B (ZombieEngine_t7E6882AFD4A5C3D2ED5534C89A1E40C8E30B3DB3 * __this, const RuntimeMethod* method)
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
// System.Void ZombieOpenScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieOpenScene_Start_m9CC7BFB2446593D055E66E9088904DD8A57F68BC (ZombieOpenScene_t9B593E91FE724141BAF7F05084145ACFE74906F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieOpenScene_Start_m9CC7BFB2446593D055E66E9088904DD8A57F68BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// }
		return;
	}
}
// System.Void ZombieOpenScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieOpenScene_Update_mE84F39C9BA4308BD98358B60D1B4F9DAAAD27CA3 (ZombieOpenScene_t9B593E91FE724141BAF7F05084145ACFE74906F4 * __this, const RuntimeMethod* method)
{
	{
		// rb.velocity = new Vector2(-1, 0);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_1), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ZombieOpenScene::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieOpenScene_OnCollisionEnter2D_m3BB0F909B2B35CB912068B6F47F4CA589CE4B10E (ZombieOpenScene_t9B593E91FE724141BAF7F05084145ACFE74906F4 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZombieOpenScene_OnCollisionEnter2D_m3BB0F909B2B35CB912068B6F47F4CA589CE4B10E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ZombieOpenScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieOpenScene__ctor_m65054E174EC6074CED6B2CA110D1F8B21B3C8645 (ZombieOpenScene_t9B593E91FE724141BAF7F05084145ACFE74906F4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventData_get_position_mF25FC495A9C968C65BF34B5984616CBFB6332D55_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CpositionU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m3194AF6B83B35084063737EBA7D8C10C652241F8_inline (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->set_axisOptions_6(L_0);
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mACA46808CD8386CABE024E9F55A407F0C8A138F0_inline (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->set_snapX_7(L_0);
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mA985E49A53EBD417CF06948C805588612C0395C1_inline (Joystick_t3DF5D60C31824A6BFD16338F9377102BE73A0153 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->set_snapY_8(L_0);
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
