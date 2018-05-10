template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>();
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; 
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; 
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; 
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; template <> void RegisterClass<AssetBundle>();
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 76 non stripped classes
	//0. AssetBundle
	RegisterClass<AssetBundle>();
	//1. NamedObject
	RegisterClass<NamedObject>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Behaviour
	RegisterClass<Behaviour>();
	//4. Unity::Component
	RegisterClass<Unity::Component>();
	//5. Camera
	RegisterClass<Camera>();
	//6. GameObject
	RegisterClass<GameObject>();
	//7. QualitySettings
	RegisterClass<QualitySettings>();
	//8. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//9. GameManager
	RegisterClass<GameManager>();
	//10. Renderer
	RegisterClass<Renderer>();
	//11. GUIElement
	RegisterClass<GUIElement>();
	//12. GUILayer
	RegisterClass<GUILayer>();
	//13. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//14. Shader
	RegisterClass<Shader>();
	//15. Material
	RegisterClass<Material>();
	//16. Sprite
	RegisterClass<Sprite>();
	//17. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//18. TextAsset
	RegisterClass<TextAsset>();
	//19. Texture
	RegisterClass<Texture>();
	//20. Texture2D
	RegisterClass<Texture2D>();
	//21. RenderTexture
	RegisterClass<RenderTexture>();
	//22. Transform
	RegisterClass<Transform>();
	//23. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//24. MeshFilter
	RegisterClass<MeshFilter>();
	//25. Mesh
	RegisterClass<Mesh>();
	//26. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//27. Collider2D
	RegisterClass<Collider2D>();
	//28. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();
	//29. Collider
	RegisterClass<Collider>();
	//30. MeshCollider
	RegisterClass<MeshCollider>();
	//31. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//32. Animator
	RegisterClass<Animator>();
	//33. UI::Canvas
	RegisterClass<UI::Canvas>();
	//34. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//35. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//36. AudioClip
	RegisterClass<AudioClip>();
	//37. SampleClip
	RegisterClass<SampleClip>();
	//38. AudioListener
	RegisterClass<AudioListener>();
	//39. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//40. AudioSource
	RegisterClass<AudioSource>();
	//41. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//42. MeshRenderer
	RegisterClass<MeshRenderer>();
	//43. PreloadData
	RegisterClass<PreloadData>();
	//44. Cubemap
	RegisterClass<Cubemap>();
	//45. Texture3D
	RegisterClass<Texture3D>();
	//46. Texture2DArray
	RegisterClass<Texture2DArray>();
	//47. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//48. BuildSettings
	RegisterClass<BuildSettings>();
	//49. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//50. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//51. InputManager
	RegisterClass<InputManager>();
	//52. PlayerSettings
	RegisterClass<PlayerSettings>();
	//53. ResourceManager
	RegisterClass<ResourceManager>();
	//54. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//55. ScriptMapper
	RegisterClass<ScriptMapper>();
	//56. TagManager
	RegisterClass<TagManager>();
	//57. TimeManager
	RegisterClass<TimeManager>();
	//58. MonoManager
	RegisterClass<MonoManager>();
	//59. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//60. NetworkManager
	RegisterClass<NetworkManager>();
	//61. MonoScript
	RegisterClass<MonoScript>();
	//62. PhysicsManager
	RegisterClass<PhysicsManager>();
	//63. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//64. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//65. AudioManager
	RegisterClass<AudioManager>();
	//66. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//67. RenderSettings
	RegisterClass<RenderSettings>();
	//68. LevelGameManager
	RegisterClass<LevelGameManager>();
	//69. LightmapSettings
	RegisterClass<LightmapSettings>();
	//70. CircleCollider2D
	RegisterClass<CircleCollider2D>();
	//71. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//72. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//73. AnimatorController
	RegisterClass<AnimatorController>();
	//74. AnimationClip
	RegisterClass<AnimationClip>();
	//75. Motion
	RegisterClass<Motion>();

}
