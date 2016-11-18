#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// UnityEngine.UI.Image
struct Image_t2042527209;
// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.SelectionRadial
struct  SelectionRadial_t541787425  : public MonoBehaviour_t1158329972
{
public:
	// System.Action VRStandardAssets.Utils.SelectionRadial::OnSelectionComplete
	Action_t3226471752 * ___OnSelectionComplete_2;
	// System.Single VRStandardAssets.Utils.SelectionRadial::m_SelectionDuration
	float ___m_SelectionDuration_3;
	// System.Boolean VRStandardAssets.Utils.SelectionRadial::m_HideOnStart
	bool ___m_HideOnStart_4;
	// UnityEngine.UI.Image VRStandardAssets.Utils.SelectionRadial::m_Selection
	Image_t2042527209 * ___m_Selection_5;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Utils.SelectionRadial::m_VRInput
	VRInput_t3508365320 * ___m_VRInput_6;
	// UnityEngine.Coroutine VRStandardAssets.Utils.SelectionRadial::m_SelectionFillRoutine
	Coroutine_t2299508840 * ___m_SelectionFillRoutine_7;
	// System.Boolean VRStandardAssets.Utils.SelectionRadial::m_IsSelectionRadialActive
	bool ___m_IsSelectionRadialActive_8;
	// System.Boolean VRStandardAssets.Utils.SelectionRadial::m_RadialFilled
	bool ___m_RadialFilled_9;

public:
	inline static int32_t get_offset_of_OnSelectionComplete_2() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___OnSelectionComplete_2)); }
	inline Action_t3226471752 * get_OnSelectionComplete_2() const { return ___OnSelectionComplete_2; }
	inline Action_t3226471752 ** get_address_of_OnSelectionComplete_2() { return &___OnSelectionComplete_2; }
	inline void set_OnSelectionComplete_2(Action_t3226471752 * value)
	{
		___OnSelectionComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelectionComplete_2, value);
	}

	inline static int32_t get_offset_of_m_SelectionDuration_3() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___m_SelectionDuration_3)); }
	inline float get_m_SelectionDuration_3() const { return ___m_SelectionDuration_3; }
	inline float* get_address_of_m_SelectionDuration_3() { return &___m_SelectionDuration_3; }
	inline void set_m_SelectionDuration_3(float value)
	{
		___m_SelectionDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_HideOnStart_4() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___m_HideOnStart_4)); }
	inline bool get_m_HideOnStart_4() const { return ___m_HideOnStart_4; }
	inline bool* get_address_of_m_HideOnStart_4() { return &___m_HideOnStart_4; }
	inline void set_m_HideOnStart_4(bool value)
	{
		___m_HideOnStart_4 = value;
	}

	inline static int32_t get_offset_of_m_Selection_5() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___m_Selection_5)); }
	inline Image_t2042527209 * get_m_Selection_5() const { return ___m_Selection_5; }
	inline Image_t2042527209 ** get_address_of_m_Selection_5() { return &___m_Selection_5; }
	inline void set_m_Selection_5(Image_t2042527209 * value)
	{
		___m_Selection_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Selection_5, value);
	}

	inline static int32_t get_offset_of_m_VRInput_6() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___m_VRInput_6)); }
	inline VRInput_t3508365320 * get_m_VRInput_6() const { return ___m_VRInput_6; }
	inline VRInput_t3508365320 ** get_address_of_m_VRInput_6() { return &___m_VRInput_6; }
	inline void set_m_VRInput_6(VRInput_t3508365320 * value)
	{
		___m_VRInput_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInput_6, value);
	}

	inline static int32_t get_offset_of_m_SelectionFillRoutine_7() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___m_SelectionFillRoutine_7)); }
	inline Coroutine_t2299508840 * get_m_SelectionFillRoutine_7() const { return ___m_SelectionFillRoutine_7; }
	inline Coroutine_t2299508840 ** get_address_of_m_SelectionFillRoutine_7() { return &___m_SelectionFillRoutine_7; }
	inline void set_m_SelectionFillRoutine_7(Coroutine_t2299508840 * value)
	{
		___m_SelectionFillRoutine_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionFillRoutine_7, value);
	}

	inline static int32_t get_offset_of_m_IsSelectionRadialActive_8() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___m_IsSelectionRadialActive_8)); }
	inline bool get_m_IsSelectionRadialActive_8() const { return ___m_IsSelectionRadialActive_8; }
	inline bool* get_address_of_m_IsSelectionRadialActive_8() { return &___m_IsSelectionRadialActive_8; }
	inline void set_m_IsSelectionRadialActive_8(bool value)
	{
		___m_IsSelectionRadialActive_8 = value;
	}

	inline static int32_t get_offset_of_m_RadialFilled_9() { return static_cast<int32_t>(offsetof(SelectionRadial_t541787425, ___m_RadialFilled_9)); }
	inline bool get_m_RadialFilled_9() const { return ___m_RadialFilled_9; }
	inline bool* get_address_of_m_RadialFilled_9() { return &___m_RadialFilled_9; }
	inline void set_m_RadialFilled_9(bool value)
	{
		___m_RadialFilled_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
