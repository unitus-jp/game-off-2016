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
// VRStandardAssets.Utils.VRInteractiveItem[]
struct VRInteractiveItemU5BU5D_t841694986;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Menu.MenuSelectorMover
struct  MenuSelectorMover_t509010905  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Menu.MenuSelectorMover::m_PopSpeed
	float ___m_PopSpeed_2;
	// System.Single VRStandardAssets.Menu.MenuSelectorMover::m_PopDistance
	float ___m_PopDistance_3;
	// System.Single VRStandardAssets.Menu.MenuSelectorMover::m_MoveSpeed
	float ___m_MoveSpeed_4;
	// UnityEngine.Transform VRStandardAssets.Menu.MenuSelectorMover::m_ParentTransform
	Transform_t3275118058 * ___m_ParentTransform_5;
	// UnityEngine.Transform VRStandardAssets.Menu.MenuSelectorMover::m_ChildTransform
	Transform_t3275118058 * ___m_ChildTransform_6;
	// VRStandardAssets.Utils.VRInteractiveItem[] VRStandardAssets.Menu.MenuSelectorMover::m_Items
	VRInteractiveItemU5BU5D_t841694986* ___m_Items_7;
	// UnityEngine.Quaternion VRStandardAssets.Menu.MenuSelectorMover::m_TargetRotation
	Quaternion_t4030073918  ___m_TargetRotation_8;
	// UnityEngine.Vector3 VRStandardAssets.Menu.MenuSelectorMover::m_StartPosition
	Vector3_t2243707580  ___m_StartPosition_9;
	// UnityEngine.Vector3 VRStandardAssets.Menu.MenuSelectorMover::m_PoppedPosition
	Vector3_t2243707580  ___m_PoppedPosition_10;
	// UnityEngine.Vector3 VRStandardAssets.Menu.MenuSelectorMover::m_TargetPosition
	Vector3_t2243707580  ___m_TargetPosition_11;

public:
	inline static int32_t get_offset_of_m_PopSpeed_2() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_PopSpeed_2)); }
	inline float get_m_PopSpeed_2() const { return ___m_PopSpeed_2; }
	inline float* get_address_of_m_PopSpeed_2() { return &___m_PopSpeed_2; }
	inline void set_m_PopSpeed_2(float value)
	{
		___m_PopSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_PopDistance_3() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_PopDistance_3)); }
	inline float get_m_PopDistance_3() const { return ___m_PopDistance_3; }
	inline float* get_address_of_m_PopDistance_3() { return &___m_PopDistance_3; }
	inline void set_m_PopDistance_3(float value)
	{
		___m_PopDistance_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveSpeed_4() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_MoveSpeed_4)); }
	inline float get_m_MoveSpeed_4() const { return ___m_MoveSpeed_4; }
	inline float* get_address_of_m_MoveSpeed_4() { return &___m_MoveSpeed_4; }
	inline void set_m_MoveSpeed_4(float value)
	{
		___m_MoveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_ParentTransform_5() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_ParentTransform_5)); }
	inline Transform_t3275118058 * get_m_ParentTransform_5() const { return ___m_ParentTransform_5; }
	inline Transform_t3275118058 ** get_address_of_m_ParentTransform_5() { return &___m_ParentTransform_5; }
	inline void set_m_ParentTransform_5(Transform_t3275118058 * value)
	{
		___m_ParentTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParentTransform_5, value);
	}

	inline static int32_t get_offset_of_m_ChildTransform_6() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_ChildTransform_6)); }
	inline Transform_t3275118058 * get_m_ChildTransform_6() const { return ___m_ChildTransform_6; }
	inline Transform_t3275118058 ** get_address_of_m_ChildTransform_6() { return &___m_ChildTransform_6; }
	inline void set_m_ChildTransform_6(Transform_t3275118058 * value)
	{
		___m_ChildTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChildTransform_6, value);
	}

	inline static int32_t get_offset_of_m_Items_7() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_Items_7)); }
	inline VRInteractiveItemU5BU5D_t841694986* get_m_Items_7() const { return ___m_Items_7; }
	inline VRInteractiveItemU5BU5D_t841694986** get_address_of_m_Items_7() { return &___m_Items_7; }
	inline void set_m_Items_7(VRInteractiveItemU5BU5D_t841694986* value)
	{
		___m_Items_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Items_7, value);
	}

	inline static int32_t get_offset_of_m_TargetRotation_8() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_TargetRotation_8)); }
	inline Quaternion_t4030073918  get_m_TargetRotation_8() const { return ___m_TargetRotation_8; }
	inline Quaternion_t4030073918 * get_address_of_m_TargetRotation_8() { return &___m_TargetRotation_8; }
	inline void set_m_TargetRotation_8(Quaternion_t4030073918  value)
	{
		___m_TargetRotation_8 = value;
	}

	inline static int32_t get_offset_of_m_StartPosition_9() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_StartPosition_9)); }
	inline Vector3_t2243707580  get_m_StartPosition_9() const { return ___m_StartPosition_9; }
	inline Vector3_t2243707580 * get_address_of_m_StartPosition_9() { return &___m_StartPosition_9; }
	inline void set_m_StartPosition_9(Vector3_t2243707580  value)
	{
		___m_StartPosition_9 = value;
	}

	inline static int32_t get_offset_of_m_PoppedPosition_10() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_PoppedPosition_10)); }
	inline Vector3_t2243707580  get_m_PoppedPosition_10() const { return ___m_PoppedPosition_10; }
	inline Vector3_t2243707580 * get_address_of_m_PoppedPosition_10() { return &___m_PoppedPosition_10; }
	inline void set_m_PoppedPosition_10(Vector3_t2243707580  value)
	{
		___m_PoppedPosition_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetPosition_11() { return static_cast<int32_t>(offsetof(MenuSelectorMover_t509010905, ___m_TargetPosition_11)); }
	inline Vector3_t2243707580  get_m_TargetPosition_11() const { return ___m_TargetPosition_11; }
	inline Vector3_t2243707580 * get_address_of_m_TargetPosition_11() { return &___m_TargetPosition_11; }
	inline void set_m_TargetPosition_11(Vector3_t2243707580  value)
	{
		___m_TargetPosition_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
