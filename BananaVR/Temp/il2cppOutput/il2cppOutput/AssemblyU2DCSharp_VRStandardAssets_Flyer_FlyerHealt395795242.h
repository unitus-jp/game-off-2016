#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t2810717544;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t462843629;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.FlyerHealthController
struct  FlyerHealthController_t395795242  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Flyer.FlyerHealthController::m_StartingHealth
	float ___m_StartingHealth_2;
	// UnityEngine.GameObject VRStandardAssets.Flyer.FlyerHealthController::m_FlyerExplosionPrefab
	GameObject_t1756533147 * ___m_FlyerExplosionPrefab_3;
	// UnityEngine.UI.Image VRStandardAssets.Flyer.FlyerHealthController::m_HealthBar
	Image_t2042527209 * ___m_HealthBar_4;
	// UnityEngine.AudioSource VRStandardAssets.Flyer.FlyerHealthController::m_ExplosionAudio
	AudioSource_t1135106623 * ___m_ExplosionAudio_5;
	// UnityEngine.AudioSource VRStandardAssets.Flyer.FlyerHealthController::m_ThrusterAudio
	AudioSource_t1135106623 * ___m_ThrusterAudio_6;
	// UnityEngine.GameObject[] VRStandardAssets.Flyer.FlyerHealthController::m_FlyerUIGameObjects
	GameObjectU5BU5D_t3057952154* ___m_FlyerUIGameObjects_7;
	// UnityEngine.Renderer[] VRStandardAssets.Flyer.FlyerHealthController::m_FlyerRenderers
	RendererU5BU5D_t2810717544* ___m_FlyerRenderers_8;
	// UnityEngine.Collider[] VRStandardAssets.Flyer.FlyerHealthController::m_FlyerColliders
	ColliderU5BU5D_t462843629* ___m_FlyerColliders_9;
	// System.Single VRStandardAssets.Flyer.FlyerHealthController::m_CurrentHealth
	float ___m_CurrentHealth_10;
	// System.Boolean VRStandardAssets.Flyer.FlyerHealthController::m_IsDead
	bool ___m_IsDead_11;

public:
	inline static int32_t get_offset_of_m_StartingHealth_2() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_StartingHealth_2)); }
	inline float get_m_StartingHealth_2() const { return ___m_StartingHealth_2; }
	inline float* get_address_of_m_StartingHealth_2() { return &___m_StartingHealth_2; }
	inline void set_m_StartingHealth_2(float value)
	{
		___m_StartingHealth_2 = value;
	}

	inline static int32_t get_offset_of_m_FlyerExplosionPrefab_3() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_FlyerExplosionPrefab_3)); }
	inline GameObject_t1756533147 * get_m_FlyerExplosionPrefab_3() const { return ___m_FlyerExplosionPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_m_FlyerExplosionPrefab_3() { return &___m_FlyerExplosionPrefab_3; }
	inline void set_m_FlyerExplosionPrefab_3(GameObject_t1756533147 * value)
	{
		___m_FlyerExplosionPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FlyerExplosionPrefab_3, value);
	}

	inline static int32_t get_offset_of_m_HealthBar_4() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_HealthBar_4)); }
	inline Image_t2042527209 * get_m_HealthBar_4() const { return ___m_HealthBar_4; }
	inline Image_t2042527209 ** get_address_of_m_HealthBar_4() { return &___m_HealthBar_4; }
	inline void set_m_HealthBar_4(Image_t2042527209 * value)
	{
		___m_HealthBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_HealthBar_4, value);
	}

	inline static int32_t get_offset_of_m_ExplosionAudio_5() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_ExplosionAudio_5)); }
	inline AudioSource_t1135106623 * get_m_ExplosionAudio_5() const { return ___m_ExplosionAudio_5; }
	inline AudioSource_t1135106623 ** get_address_of_m_ExplosionAudio_5() { return &___m_ExplosionAudio_5; }
	inline void set_m_ExplosionAudio_5(AudioSource_t1135106623 * value)
	{
		___m_ExplosionAudio_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExplosionAudio_5, value);
	}

	inline static int32_t get_offset_of_m_ThrusterAudio_6() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_ThrusterAudio_6)); }
	inline AudioSource_t1135106623 * get_m_ThrusterAudio_6() const { return ___m_ThrusterAudio_6; }
	inline AudioSource_t1135106623 ** get_address_of_m_ThrusterAudio_6() { return &___m_ThrusterAudio_6; }
	inline void set_m_ThrusterAudio_6(AudioSource_t1135106623 * value)
	{
		___m_ThrusterAudio_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_ThrusterAudio_6, value);
	}

	inline static int32_t get_offset_of_m_FlyerUIGameObjects_7() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_FlyerUIGameObjects_7)); }
	inline GameObjectU5BU5D_t3057952154* get_m_FlyerUIGameObjects_7() const { return ___m_FlyerUIGameObjects_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_FlyerUIGameObjects_7() { return &___m_FlyerUIGameObjects_7; }
	inline void set_m_FlyerUIGameObjects_7(GameObjectU5BU5D_t3057952154* value)
	{
		___m_FlyerUIGameObjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_FlyerUIGameObjects_7, value);
	}

	inline static int32_t get_offset_of_m_FlyerRenderers_8() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_FlyerRenderers_8)); }
	inline RendererU5BU5D_t2810717544* get_m_FlyerRenderers_8() const { return ___m_FlyerRenderers_8; }
	inline RendererU5BU5D_t2810717544** get_address_of_m_FlyerRenderers_8() { return &___m_FlyerRenderers_8; }
	inline void set_m_FlyerRenderers_8(RendererU5BU5D_t2810717544* value)
	{
		___m_FlyerRenderers_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_FlyerRenderers_8, value);
	}

	inline static int32_t get_offset_of_m_FlyerColliders_9() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_FlyerColliders_9)); }
	inline ColliderU5BU5D_t462843629* get_m_FlyerColliders_9() const { return ___m_FlyerColliders_9; }
	inline ColliderU5BU5D_t462843629** get_address_of_m_FlyerColliders_9() { return &___m_FlyerColliders_9; }
	inline void set_m_FlyerColliders_9(ColliderU5BU5D_t462843629* value)
	{
		___m_FlyerColliders_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_FlyerColliders_9, value);
	}

	inline static int32_t get_offset_of_m_CurrentHealth_10() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_CurrentHealth_10)); }
	inline float get_m_CurrentHealth_10() const { return ___m_CurrentHealth_10; }
	inline float* get_address_of_m_CurrentHealth_10() { return &___m_CurrentHealth_10; }
	inline void set_m_CurrentHealth_10(float value)
	{
		___m_CurrentHealth_10 = value;
	}

	inline static int32_t get_offset_of_m_IsDead_11() { return static_cast<int32_t>(offsetof(FlyerHealthController_t395795242, ___m_IsDead_11)); }
	inline bool get_m_IsDead_11() const { return ___m_IsDead_11; }
	inline bool* get_address_of_m_IsDead_11() { return &___m_IsDead_11; }
	inline void set_m_IsDead_11(bool value)
	{
		___m_IsDead_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
