#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<VRStandardAssets.Utils.VRInput/SwipeDirection>
struct Action_1_t3781694127;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.VRInput
struct  VRInput_t3508365320  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<VRStandardAssets.Utils.VRInput/SwipeDirection> VRStandardAssets.Utils.VRInput::OnSwipe
	Action_1_t3781694127 * ___OnSwipe_2;
	// System.Action VRStandardAssets.Utils.VRInput::OnClick
	Action_t3226471752 * ___OnClick_3;
	// System.Action VRStandardAssets.Utils.VRInput::OnDown
	Action_t3226471752 * ___OnDown_4;
	// System.Action VRStandardAssets.Utils.VRInput::OnUp
	Action_t3226471752 * ___OnUp_5;
	// System.Action VRStandardAssets.Utils.VRInput::OnDoubleClick
	Action_t3226471752 * ___OnDoubleClick_6;
	// System.Action VRStandardAssets.Utils.VRInput::OnCancel
	Action_t3226471752 * ___OnCancel_7;
	// System.Single VRStandardAssets.Utils.VRInput::m_DoubleClickTime
	float ___m_DoubleClickTime_8;
	// System.Single VRStandardAssets.Utils.VRInput::m_SwipeWidth
	float ___m_SwipeWidth_9;
	// UnityEngine.Vector2 VRStandardAssets.Utils.VRInput::m_MouseDownPosition
	Vector2_t2243707579  ___m_MouseDownPosition_10;
	// UnityEngine.Vector2 VRStandardAssets.Utils.VRInput::m_MouseUpPosition
	Vector2_t2243707579  ___m_MouseUpPosition_11;
	// System.Single VRStandardAssets.Utils.VRInput::m_LastMouseUpTime
	float ___m_LastMouseUpTime_12;
	// System.Single VRStandardAssets.Utils.VRInput::m_LastHorizontalValue
	float ___m_LastHorizontalValue_13;
	// System.Single VRStandardAssets.Utils.VRInput::m_LastVerticalValue
	float ___m_LastVerticalValue_14;

public:
	inline static int32_t get_offset_of_OnSwipe_2() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___OnSwipe_2)); }
	inline Action_1_t3781694127 * get_OnSwipe_2() const { return ___OnSwipe_2; }
	inline Action_1_t3781694127 ** get_address_of_OnSwipe_2() { return &___OnSwipe_2; }
	inline void set_OnSwipe_2(Action_1_t3781694127 * value)
	{
		___OnSwipe_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnSwipe_2, value);
	}

	inline static int32_t get_offset_of_OnClick_3() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___OnClick_3)); }
	inline Action_t3226471752 * get_OnClick_3() const { return ___OnClick_3; }
	inline Action_t3226471752 ** get_address_of_OnClick_3() { return &___OnClick_3; }
	inline void set_OnClick_3(Action_t3226471752 * value)
	{
		___OnClick_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnClick_3, value);
	}

	inline static int32_t get_offset_of_OnDown_4() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___OnDown_4)); }
	inline Action_t3226471752 * get_OnDown_4() const { return ___OnDown_4; }
	inline Action_t3226471752 ** get_address_of_OnDown_4() { return &___OnDown_4; }
	inline void set_OnDown_4(Action_t3226471752 * value)
	{
		___OnDown_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnDown_4, value);
	}

	inline static int32_t get_offset_of_OnUp_5() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___OnUp_5)); }
	inline Action_t3226471752 * get_OnUp_5() const { return ___OnUp_5; }
	inline Action_t3226471752 ** get_address_of_OnUp_5() { return &___OnUp_5; }
	inline void set_OnUp_5(Action_t3226471752 * value)
	{
		___OnUp_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnUp_5, value);
	}

	inline static int32_t get_offset_of_OnDoubleClick_6() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___OnDoubleClick_6)); }
	inline Action_t3226471752 * get_OnDoubleClick_6() const { return ___OnDoubleClick_6; }
	inline Action_t3226471752 ** get_address_of_OnDoubleClick_6() { return &___OnDoubleClick_6; }
	inline void set_OnDoubleClick_6(Action_t3226471752 * value)
	{
		___OnDoubleClick_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnDoubleClick_6, value);
	}

	inline static int32_t get_offset_of_OnCancel_7() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___OnCancel_7)); }
	inline Action_t3226471752 * get_OnCancel_7() const { return ___OnCancel_7; }
	inline Action_t3226471752 ** get_address_of_OnCancel_7() { return &___OnCancel_7; }
	inline void set_OnCancel_7(Action_t3226471752 * value)
	{
		___OnCancel_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnCancel_7, value);
	}

	inline static int32_t get_offset_of_m_DoubleClickTime_8() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___m_DoubleClickTime_8)); }
	inline float get_m_DoubleClickTime_8() const { return ___m_DoubleClickTime_8; }
	inline float* get_address_of_m_DoubleClickTime_8() { return &___m_DoubleClickTime_8; }
	inline void set_m_DoubleClickTime_8(float value)
	{
		___m_DoubleClickTime_8 = value;
	}

	inline static int32_t get_offset_of_m_SwipeWidth_9() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___m_SwipeWidth_9)); }
	inline float get_m_SwipeWidth_9() const { return ___m_SwipeWidth_9; }
	inline float* get_address_of_m_SwipeWidth_9() { return &___m_SwipeWidth_9; }
	inline void set_m_SwipeWidth_9(float value)
	{
		___m_SwipeWidth_9 = value;
	}

	inline static int32_t get_offset_of_m_MouseDownPosition_10() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___m_MouseDownPosition_10)); }
	inline Vector2_t2243707579  get_m_MouseDownPosition_10() const { return ___m_MouseDownPosition_10; }
	inline Vector2_t2243707579 * get_address_of_m_MouseDownPosition_10() { return &___m_MouseDownPosition_10; }
	inline void set_m_MouseDownPosition_10(Vector2_t2243707579  value)
	{
		___m_MouseDownPosition_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseUpPosition_11() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___m_MouseUpPosition_11)); }
	inline Vector2_t2243707579  get_m_MouseUpPosition_11() const { return ___m_MouseUpPosition_11; }
	inline Vector2_t2243707579 * get_address_of_m_MouseUpPosition_11() { return &___m_MouseUpPosition_11; }
	inline void set_m_MouseUpPosition_11(Vector2_t2243707579  value)
	{
		___m_MouseUpPosition_11 = value;
	}

	inline static int32_t get_offset_of_m_LastMouseUpTime_12() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___m_LastMouseUpTime_12)); }
	inline float get_m_LastMouseUpTime_12() const { return ___m_LastMouseUpTime_12; }
	inline float* get_address_of_m_LastMouseUpTime_12() { return &___m_LastMouseUpTime_12; }
	inline void set_m_LastMouseUpTime_12(float value)
	{
		___m_LastMouseUpTime_12 = value;
	}

	inline static int32_t get_offset_of_m_LastHorizontalValue_13() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___m_LastHorizontalValue_13)); }
	inline float get_m_LastHorizontalValue_13() const { return ___m_LastHorizontalValue_13; }
	inline float* get_address_of_m_LastHorizontalValue_13() { return &___m_LastHorizontalValue_13; }
	inline void set_m_LastHorizontalValue_13(float value)
	{
		___m_LastHorizontalValue_13 = value;
	}

	inline static int32_t get_offset_of_m_LastVerticalValue_14() { return static_cast<int32_t>(offsetof(VRInput_t3508365320, ___m_LastVerticalValue_14)); }
	inline float get_m_LastVerticalValue_14() const { return ___m_LastVerticalValue_14; }
	inline float* get_address_of_m_LastVerticalValue_14() { return &___m_LastVerticalValue_14; }
	inline void set_m_LastVerticalValue_14(float value)
	{
		___m_LastVerticalValue_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
