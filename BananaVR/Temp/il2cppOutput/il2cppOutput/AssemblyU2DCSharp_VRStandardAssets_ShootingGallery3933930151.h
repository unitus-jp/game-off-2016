#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// VRStandardAssets.ShootingGallery.ShootingGalleryController
struct ShootingGalleryController_t3859486593;
// VRStandardAssets.Utils.VREyeRaycaster
struct VREyeRaycaster_t4030444313;
// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// VRStandardAssets.Utils.Reticle
struct Reticle_t2910974846;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.ShootingGallery.ShootingGalleryGun
struct  ShootingGalleryGun_t3933930151  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_DefaultLineLength
	float ___m_DefaultLineLength_2;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_Damping
	float ___m_Damping_3;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_GunFlareVisibleSeconds
	float ___m_GunFlareVisibleSeconds_4;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_GunContainerSmoothing
	float ___m_GunContainerSmoothing_5;
	// UnityEngine.AudioSource VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_GunAudio
	AudioSource_t1135106623 * ___m_GunAudio_6;
	// VRStandardAssets.ShootingGallery.ShootingGalleryController VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_ShootingGalleryController
	ShootingGalleryController_t3859486593 * ___m_ShootingGalleryController_7;
	// VRStandardAssets.Utils.VREyeRaycaster VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_EyeRaycaster
	VREyeRaycaster_t4030444313 * ___m_EyeRaycaster_8;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_VRInput
	VRInput_t3508365320 * ___m_VRInput_9;
	// UnityEngine.Transform VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_CameraTransform
	Transform_t3275118058 * ___m_CameraTransform_10;
	// UnityEngine.Transform VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_GunContainer
	Transform_t3275118058 * ___m_GunContainer_11;
	// UnityEngine.Transform VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_GunEnd
	Transform_t3275118058 * ___m_GunEnd_12;
	// UnityEngine.LineRenderer VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_GunFlare
	LineRenderer_t849157671 * ___m_GunFlare_13;
	// VRStandardAssets.Utils.Reticle VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_Reticle
	Reticle_t2910974846 * ___m_Reticle_14;
	// UnityEngine.ParticleSystem VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_FlareParticles
	ParticleSystem_t3394631041 * ___m_FlareParticles_15;
	// UnityEngine.GameObject[] VRStandardAssets.ShootingGallery.ShootingGalleryGun::m_FlareMeshes
	GameObjectU5BU5D_t3057952154* ___m_FlareMeshes_16;

public:
	inline static int32_t get_offset_of_m_DefaultLineLength_2() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_DefaultLineLength_2)); }
	inline float get_m_DefaultLineLength_2() const { return ___m_DefaultLineLength_2; }
	inline float* get_address_of_m_DefaultLineLength_2() { return &___m_DefaultLineLength_2; }
	inline void set_m_DefaultLineLength_2(float value)
	{
		___m_DefaultLineLength_2 = value;
	}

	inline static int32_t get_offset_of_m_Damping_3() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_Damping_3)); }
	inline float get_m_Damping_3() const { return ___m_Damping_3; }
	inline float* get_address_of_m_Damping_3() { return &___m_Damping_3; }
	inline void set_m_Damping_3(float value)
	{
		___m_Damping_3 = value;
	}

	inline static int32_t get_offset_of_m_GunFlareVisibleSeconds_4() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_GunFlareVisibleSeconds_4)); }
	inline float get_m_GunFlareVisibleSeconds_4() const { return ___m_GunFlareVisibleSeconds_4; }
	inline float* get_address_of_m_GunFlareVisibleSeconds_4() { return &___m_GunFlareVisibleSeconds_4; }
	inline void set_m_GunFlareVisibleSeconds_4(float value)
	{
		___m_GunFlareVisibleSeconds_4 = value;
	}

	inline static int32_t get_offset_of_m_GunContainerSmoothing_5() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_GunContainerSmoothing_5)); }
	inline float get_m_GunContainerSmoothing_5() const { return ___m_GunContainerSmoothing_5; }
	inline float* get_address_of_m_GunContainerSmoothing_5() { return &___m_GunContainerSmoothing_5; }
	inline void set_m_GunContainerSmoothing_5(float value)
	{
		___m_GunContainerSmoothing_5 = value;
	}

	inline static int32_t get_offset_of_m_GunAudio_6() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_GunAudio_6)); }
	inline AudioSource_t1135106623 * get_m_GunAudio_6() const { return ___m_GunAudio_6; }
	inline AudioSource_t1135106623 ** get_address_of_m_GunAudio_6() { return &___m_GunAudio_6; }
	inline void set_m_GunAudio_6(AudioSource_t1135106623 * value)
	{
		___m_GunAudio_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunAudio_6, value);
	}

	inline static int32_t get_offset_of_m_ShootingGalleryController_7() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_ShootingGalleryController_7)); }
	inline ShootingGalleryController_t3859486593 * get_m_ShootingGalleryController_7() const { return ___m_ShootingGalleryController_7; }
	inline ShootingGalleryController_t3859486593 ** get_address_of_m_ShootingGalleryController_7() { return &___m_ShootingGalleryController_7; }
	inline void set_m_ShootingGalleryController_7(ShootingGalleryController_t3859486593 * value)
	{
		___m_ShootingGalleryController_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_ShootingGalleryController_7, value);
	}

	inline static int32_t get_offset_of_m_EyeRaycaster_8() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_EyeRaycaster_8)); }
	inline VREyeRaycaster_t4030444313 * get_m_EyeRaycaster_8() const { return ___m_EyeRaycaster_8; }
	inline VREyeRaycaster_t4030444313 ** get_address_of_m_EyeRaycaster_8() { return &___m_EyeRaycaster_8; }
	inline void set_m_EyeRaycaster_8(VREyeRaycaster_t4030444313 * value)
	{
		___m_EyeRaycaster_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_EyeRaycaster_8, value);
	}

	inline static int32_t get_offset_of_m_VRInput_9() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_VRInput_9)); }
	inline VRInput_t3508365320 * get_m_VRInput_9() const { return ___m_VRInput_9; }
	inline VRInput_t3508365320 ** get_address_of_m_VRInput_9() { return &___m_VRInput_9; }
	inline void set_m_VRInput_9(VRInput_t3508365320 * value)
	{
		___m_VRInput_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInput_9, value);
	}

	inline static int32_t get_offset_of_m_CameraTransform_10() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_CameraTransform_10)); }
	inline Transform_t3275118058 * get_m_CameraTransform_10() const { return ___m_CameraTransform_10; }
	inline Transform_t3275118058 ** get_address_of_m_CameraTransform_10() { return &___m_CameraTransform_10; }
	inline void set_m_CameraTransform_10(Transform_t3275118058 * value)
	{
		___m_CameraTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraTransform_10, value);
	}

	inline static int32_t get_offset_of_m_GunContainer_11() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_GunContainer_11)); }
	inline Transform_t3275118058 * get_m_GunContainer_11() const { return ___m_GunContainer_11; }
	inline Transform_t3275118058 ** get_address_of_m_GunContainer_11() { return &___m_GunContainer_11; }
	inline void set_m_GunContainer_11(Transform_t3275118058 * value)
	{
		___m_GunContainer_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunContainer_11, value);
	}

	inline static int32_t get_offset_of_m_GunEnd_12() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_GunEnd_12)); }
	inline Transform_t3275118058 * get_m_GunEnd_12() const { return ___m_GunEnd_12; }
	inline Transform_t3275118058 ** get_address_of_m_GunEnd_12() { return &___m_GunEnd_12; }
	inline void set_m_GunEnd_12(Transform_t3275118058 * value)
	{
		___m_GunEnd_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunEnd_12, value);
	}

	inline static int32_t get_offset_of_m_GunFlare_13() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_GunFlare_13)); }
	inline LineRenderer_t849157671 * get_m_GunFlare_13() const { return ___m_GunFlare_13; }
	inline LineRenderer_t849157671 ** get_address_of_m_GunFlare_13() { return &___m_GunFlare_13; }
	inline void set_m_GunFlare_13(LineRenderer_t849157671 * value)
	{
		___m_GunFlare_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunFlare_13, value);
	}

	inline static int32_t get_offset_of_m_Reticle_14() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_Reticle_14)); }
	inline Reticle_t2910974846 * get_m_Reticle_14() const { return ___m_Reticle_14; }
	inline Reticle_t2910974846 ** get_address_of_m_Reticle_14() { return &___m_Reticle_14; }
	inline void set_m_Reticle_14(Reticle_t2910974846 * value)
	{
		___m_Reticle_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_Reticle_14, value);
	}

	inline static int32_t get_offset_of_m_FlareParticles_15() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_FlareParticles_15)); }
	inline ParticleSystem_t3394631041 * get_m_FlareParticles_15() const { return ___m_FlareParticles_15; }
	inline ParticleSystem_t3394631041 ** get_address_of_m_FlareParticles_15() { return &___m_FlareParticles_15; }
	inline void set_m_FlareParticles_15(ParticleSystem_t3394631041 * value)
	{
		___m_FlareParticles_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_FlareParticles_15, value);
	}

	inline static int32_t get_offset_of_m_FlareMeshes_16() { return static_cast<int32_t>(offsetof(ShootingGalleryGun_t3933930151, ___m_FlareMeshes_16)); }
	inline GameObjectU5BU5D_t3057952154* get_m_FlareMeshes_16() const { return ___m_FlareMeshes_16; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_FlareMeshes_16() { return &___m_FlareMeshes_16; }
	inline void set_m_FlareMeshes_16(GameObjectU5BU5D_t3057952154* value)
	{
		___m_FlareMeshes_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_FlareMeshes_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
