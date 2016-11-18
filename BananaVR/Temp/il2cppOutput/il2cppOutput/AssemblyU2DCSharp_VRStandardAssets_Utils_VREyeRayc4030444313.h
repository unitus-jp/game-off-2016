#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.RaycastHit>
struct Action_1_t4183946998;
// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Utils.Reticle
struct Reticle_t2910974846;
// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.VREyeRaycaster
struct  VREyeRaycaster_t4030444313  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<UnityEngine.RaycastHit> VRStandardAssets.Utils.VREyeRaycaster::OnRaycasthit
	Action_1_t4183946998 * ___OnRaycasthit_2;
	// UnityEngine.Transform VRStandardAssets.Utils.VREyeRaycaster::m_Camera
	Transform_t3275118058 * ___m_Camera_3;
	// UnityEngine.LayerMask VRStandardAssets.Utils.VREyeRaycaster::m_ExclusionLayers
	LayerMask_t3188175821  ___m_ExclusionLayers_4;
	// VRStandardAssets.Utils.Reticle VRStandardAssets.Utils.VREyeRaycaster::m_Reticle
	Reticle_t2910974846 * ___m_Reticle_5;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Utils.VREyeRaycaster::m_VrInput
	VRInput_t3508365320 * ___m_VrInput_6;
	// System.Boolean VRStandardAssets.Utils.VREyeRaycaster::m_ShowDebugRay
	bool ___m_ShowDebugRay_7;
	// System.Single VRStandardAssets.Utils.VREyeRaycaster::m_DebugRayLength
	float ___m_DebugRayLength_8;
	// System.Single VRStandardAssets.Utils.VREyeRaycaster::m_DebugRayDuration
	float ___m_DebugRayDuration_9;
	// System.Single VRStandardAssets.Utils.VREyeRaycaster::m_RayLength
	float ___m_RayLength_10;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Utils.VREyeRaycaster::m_CurrentInteractible
	VRInteractiveItem_t2238922987 * ___m_CurrentInteractible_11;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Utils.VREyeRaycaster::m_LastInteractible
	VRInteractiveItem_t2238922987 * ___m_LastInteractible_12;

public:
	inline static int32_t get_offset_of_OnRaycasthit_2() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___OnRaycasthit_2)); }
	inline Action_1_t4183946998 * get_OnRaycasthit_2() const { return ___OnRaycasthit_2; }
	inline Action_1_t4183946998 ** get_address_of_OnRaycasthit_2() { return &___OnRaycasthit_2; }
	inline void set_OnRaycasthit_2(Action_1_t4183946998 * value)
	{
		___OnRaycasthit_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnRaycasthit_2, value);
	}

	inline static int32_t get_offset_of_m_Camera_3() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_Camera_3)); }
	inline Transform_t3275118058 * get_m_Camera_3() const { return ___m_Camera_3; }
	inline Transform_t3275118058 ** get_address_of_m_Camera_3() { return &___m_Camera_3; }
	inline void set_m_Camera_3(Transform_t3275118058 * value)
	{
		___m_Camera_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_3, value);
	}

	inline static int32_t get_offset_of_m_ExclusionLayers_4() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_ExclusionLayers_4)); }
	inline LayerMask_t3188175821  get_m_ExclusionLayers_4() const { return ___m_ExclusionLayers_4; }
	inline LayerMask_t3188175821 * get_address_of_m_ExclusionLayers_4() { return &___m_ExclusionLayers_4; }
	inline void set_m_ExclusionLayers_4(LayerMask_t3188175821  value)
	{
		___m_ExclusionLayers_4 = value;
	}

	inline static int32_t get_offset_of_m_Reticle_5() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_Reticle_5)); }
	inline Reticle_t2910974846 * get_m_Reticle_5() const { return ___m_Reticle_5; }
	inline Reticle_t2910974846 ** get_address_of_m_Reticle_5() { return &___m_Reticle_5; }
	inline void set_m_Reticle_5(Reticle_t2910974846 * value)
	{
		___m_Reticle_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Reticle_5, value);
	}

	inline static int32_t get_offset_of_m_VrInput_6() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_VrInput_6)); }
	inline VRInput_t3508365320 * get_m_VrInput_6() const { return ___m_VrInput_6; }
	inline VRInput_t3508365320 ** get_address_of_m_VrInput_6() { return &___m_VrInput_6; }
	inline void set_m_VrInput_6(VRInput_t3508365320 * value)
	{
		___m_VrInput_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_VrInput_6, value);
	}

	inline static int32_t get_offset_of_m_ShowDebugRay_7() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_ShowDebugRay_7)); }
	inline bool get_m_ShowDebugRay_7() const { return ___m_ShowDebugRay_7; }
	inline bool* get_address_of_m_ShowDebugRay_7() { return &___m_ShowDebugRay_7; }
	inline void set_m_ShowDebugRay_7(bool value)
	{
		___m_ShowDebugRay_7 = value;
	}

	inline static int32_t get_offset_of_m_DebugRayLength_8() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_DebugRayLength_8)); }
	inline float get_m_DebugRayLength_8() const { return ___m_DebugRayLength_8; }
	inline float* get_address_of_m_DebugRayLength_8() { return &___m_DebugRayLength_8; }
	inline void set_m_DebugRayLength_8(float value)
	{
		___m_DebugRayLength_8 = value;
	}

	inline static int32_t get_offset_of_m_DebugRayDuration_9() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_DebugRayDuration_9)); }
	inline float get_m_DebugRayDuration_9() const { return ___m_DebugRayDuration_9; }
	inline float* get_address_of_m_DebugRayDuration_9() { return &___m_DebugRayDuration_9; }
	inline void set_m_DebugRayDuration_9(float value)
	{
		___m_DebugRayDuration_9 = value;
	}

	inline static int32_t get_offset_of_m_RayLength_10() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_RayLength_10)); }
	inline float get_m_RayLength_10() const { return ___m_RayLength_10; }
	inline float* get_address_of_m_RayLength_10() { return &___m_RayLength_10; }
	inline void set_m_RayLength_10(float value)
	{
		___m_RayLength_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentInteractible_11() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_CurrentInteractible_11)); }
	inline VRInteractiveItem_t2238922987 * get_m_CurrentInteractible_11() const { return ___m_CurrentInteractible_11; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_CurrentInteractible_11() { return &___m_CurrentInteractible_11; }
	inline void set_m_CurrentInteractible_11(VRInteractiveItem_t2238922987 * value)
	{
		___m_CurrentInteractible_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentInteractible_11, value);
	}

	inline static int32_t get_offset_of_m_LastInteractible_12() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t4030444313, ___m_LastInteractible_12)); }
	inline VRInteractiveItem_t2238922987 * get_m_LastInteractible_12() const { return ___m_LastInteractible_12; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_LastInteractible_12() { return &___m_LastInteractible_12; }
	inline void set_m_LastInteractible_12(VRInteractiveItem_t2238922987 * value)
	{
		___m_LastInteractible_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_LastInteractible_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
