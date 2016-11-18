#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.SelectionSlider
struct SelectionSlider_t3107237799;
// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Utils.SelectionRadial
struct SelectionRadial_t541787425;
// VRStandardAssets.Utils.Reticle
struct Reticle_t2910974846;
// UnityEngine.UI.Image
struct Image_t2042527209;
// VRStandardAssets.Utils.ObjectPool
struct ObjectPool_t2980402603;
// UnityEngine.BoxCollider
struct BoxCollider_t22920061;
// VRStandardAssets.ShootingGallery.UIController
struct UIController_t3787020182;
// VRStandardAssets.Utils.InputWarnings
struct InputWarnings_t4225836565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Common_SessionD1897295440.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.ShootingGallery.ShootingGalleryController
struct  ShootingGalleryController_t3859486593  : public MonoBehaviour_t1158329972
{
public:
	// VRStandardAssets.Common.SessionData/GameType VRStandardAssets.ShootingGallery.ShootingGalleryController::m_GameType
	int32_t ___m_GameType_2;
	// System.Int32 VRStandardAssets.ShootingGallery.ShootingGalleryController::m_IdealTargetNumber
	int32_t ___m_IdealTargetNumber_3;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_BaseSpawnProbability
	float ___m_BaseSpawnProbability_4;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_GameLength
	float ___m_GameLength_5;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SpawnInterval
	float ___m_SpawnInterval_6;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_EndDelay
	float ___m_EndDelay_7;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SphereSpawnInnerRadius
	float ___m_SphereSpawnInnerRadius_8;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SphereSpawnOuterRadius
	float ___m_SphereSpawnOuterRadius_9;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SphereSpawnMaxHeight
	float ___m_SphereSpawnMaxHeight_10;
	// VRStandardAssets.Utils.SelectionSlider VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SelectionSlider
	SelectionSlider_t3107237799 * ___m_SelectionSlider_11;
	// UnityEngine.Transform VRStandardAssets.ShootingGallery.ShootingGalleryController::m_Camera
	Transform_t3275118058 * ___m_Camera_12;
	// VRStandardAssets.Utils.SelectionRadial VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SelectionRadial
	SelectionRadial_t541787425 * ___m_SelectionRadial_13;
	// VRStandardAssets.Utils.Reticle VRStandardAssets.ShootingGallery.ShootingGalleryController::m_Reticle
	Reticle_t2910974846 * ___m_Reticle_14;
	// UnityEngine.UI.Image VRStandardAssets.ShootingGallery.ShootingGalleryController::m_TimerBar
	Image_t2042527209 * ___m_TimerBar_15;
	// VRStandardAssets.Utils.ObjectPool VRStandardAssets.ShootingGallery.ShootingGalleryController::m_TargetObjectPool
	ObjectPool_t2980402603 * ___m_TargetObjectPool_16;
	// UnityEngine.BoxCollider VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SpawnCollider
	BoxCollider_t22920061 * ___m_SpawnCollider_17;
	// VRStandardAssets.ShootingGallery.UIController VRStandardAssets.ShootingGallery.ShootingGalleryController::m_UIController
	UIController_t3787020182 * ___m_UIController_18;
	// VRStandardAssets.Utils.InputWarnings VRStandardAssets.ShootingGallery.ShootingGalleryController::m_InputWarnings
	InputWarnings_t4225836565 * ___m_InputWarnings_19;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_SpawnProbability
	float ___m_SpawnProbability_20;
	// System.Single VRStandardAssets.ShootingGallery.ShootingGalleryController::m_ProbabilityDelta
	float ___m_ProbabilityDelta_21;
	// System.Boolean VRStandardAssets.ShootingGallery.ShootingGalleryController::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_m_GameType_2() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_GameType_2)); }
	inline int32_t get_m_GameType_2() const { return ___m_GameType_2; }
	inline int32_t* get_address_of_m_GameType_2() { return &___m_GameType_2; }
	inline void set_m_GameType_2(int32_t value)
	{
		___m_GameType_2 = value;
	}

	inline static int32_t get_offset_of_m_IdealTargetNumber_3() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_IdealTargetNumber_3)); }
	inline int32_t get_m_IdealTargetNumber_3() const { return ___m_IdealTargetNumber_3; }
	inline int32_t* get_address_of_m_IdealTargetNumber_3() { return &___m_IdealTargetNumber_3; }
	inline void set_m_IdealTargetNumber_3(int32_t value)
	{
		___m_IdealTargetNumber_3 = value;
	}

	inline static int32_t get_offset_of_m_BaseSpawnProbability_4() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_BaseSpawnProbability_4)); }
	inline float get_m_BaseSpawnProbability_4() const { return ___m_BaseSpawnProbability_4; }
	inline float* get_address_of_m_BaseSpawnProbability_4() { return &___m_BaseSpawnProbability_4; }
	inline void set_m_BaseSpawnProbability_4(float value)
	{
		___m_BaseSpawnProbability_4 = value;
	}

	inline static int32_t get_offset_of_m_GameLength_5() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_GameLength_5)); }
	inline float get_m_GameLength_5() const { return ___m_GameLength_5; }
	inline float* get_address_of_m_GameLength_5() { return &___m_GameLength_5; }
	inline void set_m_GameLength_5(float value)
	{
		___m_GameLength_5 = value;
	}

	inline static int32_t get_offset_of_m_SpawnInterval_6() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SpawnInterval_6)); }
	inline float get_m_SpawnInterval_6() const { return ___m_SpawnInterval_6; }
	inline float* get_address_of_m_SpawnInterval_6() { return &___m_SpawnInterval_6; }
	inline void set_m_SpawnInterval_6(float value)
	{
		___m_SpawnInterval_6 = value;
	}

	inline static int32_t get_offset_of_m_EndDelay_7() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_EndDelay_7)); }
	inline float get_m_EndDelay_7() const { return ___m_EndDelay_7; }
	inline float* get_address_of_m_EndDelay_7() { return &___m_EndDelay_7; }
	inline void set_m_EndDelay_7(float value)
	{
		___m_EndDelay_7 = value;
	}

	inline static int32_t get_offset_of_m_SphereSpawnInnerRadius_8() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SphereSpawnInnerRadius_8)); }
	inline float get_m_SphereSpawnInnerRadius_8() const { return ___m_SphereSpawnInnerRadius_8; }
	inline float* get_address_of_m_SphereSpawnInnerRadius_8() { return &___m_SphereSpawnInnerRadius_8; }
	inline void set_m_SphereSpawnInnerRadius_8(float value)
	{
		___m_SphereSpawnInnerRadius_8 = value;
	}

	inline static int32_t get_offset_of_m_SphereSpawnOuterRadius_9() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SphereSpawnOuterRadius_9)); }
	inline float get_m_SphereSpawnOuterRadius_9() const { return ___m_SphereSpawnOuterRadius_9; }
	inline float* get_address_of_m_SphereSpawnOuterRadius_9() { return &___m_SphereSpawnOuterRadius_9; }
	inline void set_m_SphereSpawnOuterRadius_9(float value)
	{
		___m_SphereSpawnOuterRadius_9 = value;
	}

	inline static int32_t get_offset_of_m_SphereSpawnMaxHeight_10() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SphereSpawnMaxHeight_10)); }
	inline float get_m_SphereSpawnMaxHeight_10() const { return ___m_SphereSpawnMaxHeight_10; }
	inline float* get_address_of_m_SphereSpawnMaxHeight_10() { return &___m_SphereSpawnMaxHeight_10; }
	inline void set_m_SphereSpawnMaxHeight_10(float value)
	{
		___m_SphereSpawnMaxHeight_10 = value;
	}

	inline static int32_t get_offset_of_m_SelectionSlider_11() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SelectionSlider_11)); }
	inline SelectionSlider_t3107237799 * get_m_SelectionSlider_11() const { return ___m_SelectionSlider_11; }
	inline SelectionSlider_t3107237799 ** get_address_of_m_SelectionSlider_11() { return &___m_SelectionSlider_11; }
	inline void set_m_SelectionSlider_11(SelectionSlider_t3107237799 * value)
	{
		___m_SelectionSlider_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionSlider_11, value);
	}

	inline static int32_t get_offset_of_m_Camera_12() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_Camera_12)); }
	inline Transform_t3275118058 * get_m_Camera_12() const { return ___m_Camera_12; }
	inline Transform_t3275118058 ** get_address_of_m_Camera_12() { return &___m_Camera_12; }
	inline void set_m_Camera_12(Transform_t3275118058 * value)
	{
		___m_Camera_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_12, value);
	}

	inline static int32_t get_offset_of_m_SelectionRadial_13() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SelectionRadial_13)); }
	inline SelectionRadial_t541787425 * get_m_SelectionRadial_13() const { return ___m_SelectionRadial_13; }
	inline SelectionRadial_t541787425 ** get_address_of_m_SelectionRadial_13() { return &___m_SelectionRadial_13; }
	inline void set_m_SelectionRadial_13(SelectionRadial_t541787425 * value)
	{
		___m_SelectionRadial_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionRadial_13, value);
	}

	inline static int32_t get_offset_of_m_Reticle_14() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_Reticle_14)); }
	inline Reticle_t2910974846 * get_m_Reticle_14() const { return ___m_Reticle_14; }
	inline Reticle_t2910974846 ** get_address_of_m_Reticle_14() { return &___m_Reticle_14; }
	inline void set_m_Reticle_14(Reticle_t2910974846 * value)
	{
		___m_Reticle_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_Reticle_14, value);
	}

	inline static int32_t get_offset_of_m_TimerBar_15() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_TimerBar_15)); }
	inline Image_t2042527209 * get_m_TimerBar_15() const { return ___m_TimerBar_15; }
	inline Image_t2042527209 ** get_address_of_m_TimerBar_15() { return &___m_TimerBar_15; }
	inline void set_m_TimerBar_15(Image_t2042527209 * value)
	{
		___m_TimerBar_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_TimerBar_15, value);
	}

	inline static int32_t get_offset_of_m_TargetObjectPool_16() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_TargetObjectPool_16)); }
	inline ObjectPool_t2980402603 * get_m_TargetObjectPool_16() const { return ___m_TargetObjectPool_16; }
	inline ObjectPool_t2980402603 ** get_address_of_m_TargetObjectPool_16() { return &___m_TargetObjectPool_16; }
	inline void set_m_TargetObjectPool_16(ObjectPool_t2980402603 * value)
	{
		___m_TargetObjectPool_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetObjectPool_16, value);
	}

	inline static int32_t get_offset_of_m_SpawnCollider_17() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SpawnCollider_17)); }
	inline BoxCollider_t22920061 * get_m_SpawnCollider_17() const { return ___m_SpawnCollider_17; }
	inline BoxCollider_t22920061 ** get_address_of_m_SpawnCollider_17() { return &___m_SpawnCollider_17; }
	inline void set_m_SpawnCollider_17(BoxCollider_t22920061 * value)
	{
		___m_SpawnCollider_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpawnCollider_17, value);
	}

	inline static int32_t get_offset_of_m_UIController_18() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_UIController_18)); }
	inline UIController_t3787020182 * get_m_UIController_18() const { return ___m_UIController_18; }
	inline UIController_t3787020182 ** get_address_of_m_UIController_18() { return &___m_UIController_18; }
	inline void set_m_UIController_18(UIController_t3787020182 * value)
	{
		___m_UIController_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIController_18, value);
	}

	inline static int32_t get_offset_of_m_InputWarnings_19() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_InputWarnings_19)); }
	inline InputWarnings_t4225836565 * get_m_InputWarnings_19() const { return ___m_InputWarnings_19; }
	inline InputWarnings_t4225836565 ** get_address_of_m_InputWarnings_19() { return &___m_InputWarnings_19; }
	inline void set_m_InputWarnings_19(InputWarnings_t4225836565 * value)
	{
		___m_InputWarnings_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_InputWarnings_19, value);
	}

	inline static int32_t get_offset_of_m_SpawnProbability_20() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_SpawnProbability_20)); }
	inline float get_m_SpawnProbability_20() const { return ___m_SpawnProbability_20; }
	inline float* get_address_of_m_SpawnProbability_20() { return &___m_SpawnProbability_20; }
	inline void set_m_SpawnProbability_20(float value)
	{
		___m_SpawnProbability_20 = value;
	}

	inline static int32_t get_offset_of_m_ProbabilityDelta_21() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___m_ProbabilityDelta_21)); }
	inline float get_m_ProbabilityDelta_21() const { return ___m_ProbabilityDelta_21; }
	inline float* get_address_of_m_ProbabilityDelta_21() { return &___m_ProbabilityDelta_21; }
	inline void set_m_ProbabilityDelta_21(float value)
	{
		___m_ProbabilityDelta_21 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ShootingGalleryController_t3859486593, ___U3CIsPlayingU3Ek__BackingField_22)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_22() const { return ___U3CIsPlayingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_22() { return &___U3CIsPlayingU3Ek__BackingField_22; }
	inline void set_U3CIsPlayingU3Ek__BackingField_22(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
