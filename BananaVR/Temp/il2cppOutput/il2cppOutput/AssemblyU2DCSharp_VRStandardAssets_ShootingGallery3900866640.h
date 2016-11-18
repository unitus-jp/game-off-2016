#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<VRStandardAssets.ShootingGallery.ShootingTarget>
struct Action_1_t3702666022;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.ShootingGallery.ShootingTarget
struct  ShootingTarget_t3900866640  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<VRStandardAssets.ShootingGallery.ShootingTarget> VRStandardAssets.ShootingGallery.ShootingTarget::OnRemove
	Action_1_t3702666022 * ___OnRemove_2;
	// System.Int32 VRStandardAssets.ShootingGallery.ShootingTarget::m_Score
	int32_t ___m_Score_3;
	// System.Single VRStandardAssets.ShootingGallery.ShootingTarget::m_TimeOutDuration
	float ___m_TimeOutDuration_4;
	// System.Single VRStandardAssets.ShootingGallery.ShootingTarget::m_DestroyTimeOutDuration
	float ___m_DestroyTimeOutDuration_5;
	// UnityEngine.GameObject VRStandardAssets.ShootingGallery.ShootingTarget::m_DestroyPrefab
	GameObject_t1756533147 * ___m_DestroyPrefab_6;
	// UnityEngine.AudioClip VRStandardAssets.ShootingGallery.ShootingTarget::m_DestroyClip
	AudioClip_t1932558630 * ___m_DestroyClip_7;
	// UnityEngine.AudioClip VRStandardAssets.ShootingGallery.ShootingTarget::m_SpawnClip
	AudioClip_t1932558630 * ___m_SpawnClip_8;
	// UnityEngine.AudioClip VRStandardAssets.ShootingGallery.ShootingTarget::m_MissedClip
	AudioClip_t1932558630 * ___m_MissedClip_9;
	// UnityEngine.Transform VRStandardAssets.ShootingGallery.ShootingTarget::m_CameraTransform
	Transform_t3275118058 * ___m_CameraTransform_10;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.ShootingGallery.ShootingTarget::m_InteractiveItem
	VRInteractiveItem_t2238922987 * ___m_InteractiveItem_11;
	// UnityEngine.AudioSource VRStandardAssets.ShootingGallery.ShootingTarget::m_Audio
	AudioSource_t1135106623 * ___m_Audio_12;
	// UnityEngine.Renderer VRStandardAssets.ShootingGallery.ShootingTarget::m_Renderer
	Renderer_t257310565 * ___m_Renderer_13;
	// UnityEngine.Collider VRStandardAssets.ShootingGallery.ShootingTarget::m_Collider
	Collider_t3497673348 * ___m_Collider_14;
	// System.Boolean VRStandardAssets.ShootingGallery.ShootingTarget::m_IsEnding
	bool ___m_IsEnding_15;

public:
	inline static int32_t get_offset_of_OnRemove_2() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___OnRemove_2)); }
	inline Action_1_t3702666022 * get_OnRemove_2() const { return ___OnRemove_2; }
	inline Action_1_t3702666022 ** get_address_of_OnRemove_2() { return &___OnRemove_2; }
	inline void set_OnRemove_2(Action_1_t3702666022 * value)
	{
		___OnRemove_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemove_2, value);
	}

	inline static int32_t get_offset_of_m_Score_3() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_Score_3)); }
	inline int32_t get_m_Score_3() const { return ___m_Score_3; }
	inline int32_t* get_address_of_m_Score_3() { return &___m_Score_3; }
	inline void set_m_Score_3(int32_t value)
	{
		___m_Score_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeOutDuration_4() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_TimeOutDuration_4)); }
	inline float get_m_TimeOutDuration_4() const { return ___m_TimeOutDuration_4; }
	inline float* get_address_of_m_TimeOutDuration_4() { return &___m_TimeOutDuration_4; }
	inline void set_m_TimeOutDuration_4(float value)
	{
		___m_TimeOutDuration_4 = value;
	}

	inline static int32_t get_offset_of_m_DestroyTimeOutDuration_5() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_DestroyTimeOutDuration_5)); }
	inline float get_m_DestroyTimeOutDuration_5() const { return ___m_DestroyTimeOutDuration_5; }
	inline float* get_address_of_m_DestroyTimeOutDuration_5() { return &___m_DestroyTimeOutDuration_5; }
	inline void set_m_DestroyTimeOutDuration_5(float value)
	{
		___m_DestroyTimeOutDuration_5 = value;
	}

	inline static int32_t get_offset_of_m_DestroyPrefab_6() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_DestroyPrefab_6)); }
	inline GameObject_t1756533147 * get_m_DestroyPrefab_6() const { return ___m_DestroyPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_m_DestroyPrefab_6() { return &___m_DestroyPrefab_6; }
	inline void set_m_DestroyPrefab_6(GameObject_t1756533147 * value)
	{
		___m_DestroyPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_DestroyPrefab_6, value);
	}

	inline static int32_t get_offset_of_m_DestroyClip_7() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_DestroyClip_7)); }
	inline AudioClip_t1932558630 * get_m_DestroyClip_7() const { return ___m_DestroyClip_7; }
	inline AudioClip_t1932558630 ** get_address_of_m_DestroyClip_7() { return &___m_DestroyClip_7; }
	inline void set_m_DestroyClip_7(AudioClip_t1932558630 * value)
	{
		___m_DestroyClip_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_DestroyClip_7, value);
	}

	inline static int32_t get_offset_of_m_SpawnClip_8() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_SpawnClip_8)); }
	inline AudioClip_t1932558630 * get_m_SpawnClip_8() const { return ___m_SpawnClip_8; }
	inline AudioClip_t1932558630 ** get_address_of_m_SpawnClip_8() { return &___m_SpawnClip_8; }
	inline void set_m_SpawnClip_8(AudioClip_t1932558630 * value)
	{
		___m_SpawnClip_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpawnClip_8, value);
	}

	inline static int32_t get_offset_of_m_MissedClip_9() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_MissedClip_9)); }
	inline AudioClip_t1932558630 * get_m_MissedClip_9() const { return ___m_MissedClip_9; }
	inline AudioClip_t1932558630 ** get_address_of_m_MissedClip_9() { return &___m_MissedClip_9; }
	inline void set_m_MissedClip_9(AudioClip_t1932558630 * value)
	{
		___m_MissedClip_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_MissedClip_9, value);
	}

	inline static int32_t get_offset_of_m_CameraTransform_10() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_CameraTransform_10)); }
	inline Transform_t3275118058 * get_m_CameraTransform_10() const { return ___m_CameraTransform_10; }
	inline Transform_t3275118058 ** get_address_of_m_CameraTransform_10() { return &___m_CameraTransform_10; }
	inline void set_m_CameraTransform_10(Transform_t3275118058 * value)
	{
		___m_CameraTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraTransform_10, value);
	}

	inline static int32_t get_offset_of_m_InteractiveItem_11() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_InteractiveItem_11)); }
	inline VRInteractiveItem_t2238922987 * get_m_InteractiveItem_11() const { return ___m_InteractiveItem_11; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_InteractiveItem_11() { return &___m_InteractiveItem_11; }
	inline void set_m_InteractiveItem_11(VRInteractiveItem_t2238922987 * value)
	{
		___m_InteractiveItem_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractiveItem_11, value);
	}

	inline static int32_t get_offset_of_m_Audio_12() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_Audio_12)); }
	inline AudioSource_t1135106623 * get_m_Audio_12() const { return ___m_Audio_12; }
	inline AudioSource_t1135106623 ** get_address_of_m_Audio_12() { return &___m_Audio_12; }
	inline void set_m_Audio_12(AudioSource_t1135106623 * value)
	{
		___m_Audio_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Audio_12, value);
	}

	inline static int32_t get_offset_of_m_Renderer_13() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_Renderer_13)); }
	inline Renderer_t257310565 * get_m_Renderer_13() const { return ___m_Renderer_13; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_13() { return &___m_Renderer_13; }
	inline void set_m_Renderer_13(Renderer_t257310565 * value)
	{
		___m_Renderer_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_13, value);
	}

	inline static int32_t get_offset_of_m_Collider_14() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_Collider_14)); }
	inline Collider_t3497673348 * get_m_Collider_14() const { return ___m_Collider_14; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_14() { return &___m_Collider_14; }
	inline void set_m_Collider_14(Collider_t3497673348 * value)
	{
		___m_Collider_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_14, value);
	}

	inline static int32_t get_offset_of_m_IsEnding_15() { return static_cast<int32_t>(offsetof(ShootingTarget_t3900866640, ___m_IsEnding_15)); }
	inline bool get_m_IsEnding_15() const { return ___m_IsEnding_15; }
	inline bool* get_address_of_m_IsEnding_15() { return &___m_IsEnding_15; }
	inline void set_m_IsEnding_15(bool value)
	{
		___m_IsEnding_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
