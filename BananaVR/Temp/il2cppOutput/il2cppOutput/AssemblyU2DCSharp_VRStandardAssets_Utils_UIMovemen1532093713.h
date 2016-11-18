#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.UIMovement
struct  UIMovement_t1532093713  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean VRStandardAssets.Utils.UIMovement::m_LookatCamera
	bool ___m_LookatCamera_2;
	// UnityEngine.Transform VRStandardAssets.Utils.UIMovement::m_UIElement
	Transform_t3275118058 * ___m_UIElement_3;
	// UnityEngine.Transform VRStandardAssets.Utils.UIMovement::m_Camera
	Transform_t3275118058 * ___m_Camera_4;
	// System.Boolean VRStandardAssets.Utils.UIMovement::m_RotateWithCamera
	bool ___m_RotateWithCamera_5;
	// System.Single VRStandardAssets.Utils.UIMovement::m_FollowSpeed
	float ___m_FollowSpeed_6;
	// System.Single VRStandardAssets.Utils.UIMovement::m_DistanceFromCamera
	float ___m_DistanceFromCamera_7;

public:
	inline static int32_t get_offset_of_m_LookatCamera_2() { return static_cast<int32_t>(offsetof(UIMovement_t1532093713, ___m_LookatCamera_2)); }
	inline bool get_m_LookatCamera_2() const { return ___m_LookatCamera_2; }
	inline bool* get_address_of_m_LookatCamera_2() { return &___m_LookatCamera_2; }
	inline void set_m_LookatCamera_2(bool value)
	{
		___m_LookatCamera_2 = value;
	}

	inline static int32_t get_offset_of_m_UIElement_3() { return static_cast<int32_t>(offsetof(UIMovement_t1532093713, ___m_UIElement_3)); }
	inline Transform_t3275118058 * get_m_UIElement_3() const { return ___m_UIElement_3; }
	inline Transform_t3275118058 ** get_address_of_m_UIElement_3() { return &___m_UIElement_3; }
	inline void set_m_UIElement_3(Transform_t3275118058 * value)
	{
		___m_UIElement_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIElement_3, value);
	}

	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(UIMovement_t1532093713, ___m_Camera_4)); }
	inline Transform_t3275118058 * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Transform_t3275118058 ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Transform_t3275118058 * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_4, value);
	}

	inline static int32_t get_offset_of_m_RotateWithCamera_5() { return static_cast<int32_t>(offsetof(UIMovement_t1532093713, ___m_RotateWithCamera_5)); }
	inline bool get_m_RotateWithCamera_5() const { return ___m_RotateWithCamera_5; }
	inline bool* get_address_of_m_RotateWithCamera_5() { return &___m_RotateWithCamera_5; }
	inline void set_m_RotateWithCamera_5(bool value)
	{
		___m_RotateWithCamera_5 = value;
	}

	inline static int32_t get_offset_of_m_FollowSpeed_6() { return static_cast<int32_t>(offsetof(UIMovement_t1532093713, ___m_FollowSpeed_6)); }
	inline float get_m_FollowSpeed_6() const { return ___m_FollowSpeed_6; }
	inline float* get_address_of_m_FollowSpeed_6() { return &___m_FollowSpeed_6; }
	inline void set_m_FollowSpeed_6(float value)
	{
		___m_FollowSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_DistanceFromCamera_7() { return static_cast<int32_t>(offsetof(UIMovement_t1532093713, ___m_DistanceFromCamera_7)); }
	inline float get_m_DistanceFromCamera_7() const { return ___m_DistanceFromCamera_7; }
	inline float* get_address_of_m_DistanceFromCamera_7() { return &___m_DistanceFromCamera_7; }
	inline void set_m_DistanceFromCamera_7(float value)
	{
		___m_DistanceFromCamera_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
