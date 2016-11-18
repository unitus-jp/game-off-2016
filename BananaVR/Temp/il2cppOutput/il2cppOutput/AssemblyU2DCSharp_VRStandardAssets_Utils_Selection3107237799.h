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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;
// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Renderer
struct Renderer_t257310565;
// VRStandardAssets.Utils.SelectionRadial
struct SelectionRadial_t541787425;
// VRStandardAssets.Utils.UIFader
struct UIFader_t188390386;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.SelectionSlider
struct  SelectionSlider_t3107237799  : public MonoBehaviour_t1158329972
{
public:
	// System.Action VRStandardAssets.Utils.SelectionSlider::OnBarFilled
	Action_t3226471752 * ___OnBarFilled_2;
	// System.Single VRStandardAssets.Utils.SelectionSlider::m_Duration
	float ___m_Duration_3;
	// UnityEngine.AudioSource VRStandardAssets.Utils.SelectionSlider::m_Audio
	AudioSource_t1135106623 * ___m_Audio_4;
	// UnityEngine.AudioClip VRStandardAssets.Utils.SelectionSlider::m_OnOverClip
	AudioClip_t1932558630 * ___m_OnOverClip_5;
	// UnityEngine.AudioClip VRStandardAssets.Utils.SelectionSlider::m_OnFilledClip
	AudioClip_t1932558630 * ___m_OnFilledClip_6;
	// UnityEngine.UI.Slider VRStandardAssets.Utils.SelectionSlider::m_Slider
	Slider_t297367283 * ___m_Slider_7;
	// VRStandardAssets.Utils.VRInteractiveItem VRStandardAssets.Utils.SelectionSlider::m_InteractiveItem
	VRInteractiveItem_t2238922987 * ___m_InteractiveItem_8;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Utils.SelectionSlider::m_VRInput
	VRInput_t3508365320 * ___m_VRInput_9;
	// UnityEngine.GameObject VRStandardAssets.Utils.SelectionSlider::m_BarCanvas
	GameObject_t1756533147 * ___m_BarCanvas_10;
	// UnityEngine.Renderer VRStandardAssets.Utils.SelectionSlider::m_Renderer
	Renderer_t257310565 * ___m_Renderer_11;
	// VRStandardAssets.Utils.SelectionRadial VRStandardAssets.Utils.SelectionSlider::m_SelectionRadial
	SelectionRadial_t541787425 * ___m_SelectionRadial_12;
	// VRStandardAssets.Utils.UIFader VRStandardAssets.Utils.SelectionSlider::m_UIFader
	UIFader_t188390386 * ___m_UIFader_13;
	// UnityEngine.Collider VRStandardAssets.Utils.SelectionSlider::m_Collider
	Collider_t3497673348 * ___m_Collider_14;
	// System.Boolean VRStandardAssets.Utils.SelectionSlider::m_DisableOnBarFill
	bool ___m_DisableOnBarFill_15;
	// System.Boolean VRStandardAssets.Utils.SelectionSlider::m_DisappearOnBarFill
	bool ___m_DisappearOnBarFill_16;
	// System.Boolean VRStandardAssets.Utils.SelectionSlider::m_BarFilled
	bool ___m_BarFilled_17;
	// System.Boolean VRStandardAssets.Utils.SelectionSlider::m_GazeOver
	bool ___m_GazeOver_18;
	// System.Single VRStandardAssets.Utils.SelectionSlider::m_Timer
	float ___m_Timer_19;
	// UnityEngine.Coroutine VRStandardAssets.Utils.SelectionSlider::m_FillBarRoutine
	Coroutine_t2299508840 * ___m_FillBarRoutine_20;

public:
	inline static int32_t get_offset_of_OnBarFilled_2() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___OnBarFilled_2)); }
	inline Action_t3226471752 * get_OnBarFilled_2() const { return ___OnBarFilled_2; }
	inline Action_t3226471752 ** get_address_of_OnBarFilled_2() { return &___OnBarFilled_2; }
	inline void set_OnBarFilled_2(Action_t3226471752 * value)
	{
		___OnBarFilled_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnBarFilled_2, value);
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_Audio_4() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_Audio_4)); }
	inline AudioSource_t1135106623 * get_m_Audio_4() const { return ___m_Audio_4; }
	inline AudioSource_t1135106623 ** get_address_of_m_Audio_4() { return &___m_Audio_4; }
	inline void set_m_Audio_4(AudioSource_t1135106623 * value)
	{
		___m_Audio_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Audio_4, value);
	}

	inline static int32_t get_offset_of_m_OnOverClip_5() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_OnOverClip_5)); }
	inline AudioClip_t1932558630 * get_m_OnOverClip_5() const { return ___m_OnOverClip_5; }
	inline AudioClip_t1932558630 ** get_address_of_m_OnOverClip_5() { return &___m_OnOverClip_5; }
	inline void set_m_OnOverClip_5(AudioClip_t1932558630 * value)
	{
		___m_OnOverClip_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnOverClip_5, value);
	}

	inline static int32_t get_offset_of_m_OnFilledClip_6() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_OnFilledClip_6)); }
	inline AudioClip_t1932558630 * get_m_OnFilledClip_6() const { return ___m_OnFilledClip_6; }
	inline AudioClip_t1932558630 ** get_address_of_m_OnFilledClip_6() { return &___m_OnFilledClip_6; }
	inline void set_m_OnFilledClip_6(AudioClip_t1932558630 * value)
	{
		___m_OnFilledClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnFilledClip_6, value);
	}

	inline static int32_t get_offset_of_m_Slider_7() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_Slider_7)); }
	inline Slider_t297367283 * get_m_Slider_7() const { return ___m_Slider_7; }
	inline Slider_t297367283 ** get_address_of_m_Slider_7() { return &___m_Slider_7; }
	inline void set_m_Slider_7(Slider_t297367283 * value)
	{
		___m_Slider_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Slider_7, value);
	}

	inline static int32_t get_offset_of_m_InteractiveItem_8() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_InteractiveItem_8)); }
	inline VRInteractiveItem_t2238922987 * get_m_InteractiveItem_8() const { return ___m_InteractiveItem_8; }
	inline VRInteractiveItem_t2238922987 ** get_address_of_m_InteractiveItem_8() { return &___m_InteractiveItem_8; }
	inline void set_m_InteractiveItem_8(VRInteractiveItem_t2238922987 * value)
	{
		___m_InteractiveItem_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractiveItem_8, value);
	}

	inline static int32_t get_offset_of_m_VRInput_9() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_VRInput_9)); }
	inline VRInput_t3508365320 * get_m_VRInput_9() const { return ___m_VRInput_9; }
	inline VRInput_t3508365320 ** get_address_of_m_VRInput_9() { return &___m_VRInput_9; }
	inline void set_m_VRInput_9(VRInput_t3508365320 * value)
	{
		___m_VRInput_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_VRInput_9, value);
	}

	inline static int32_t get_offset_of_m_BarCanvas_10() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_BarCanvas_10)); }
	inline GameObject_t1756533147 * get_m_BarCanvas_10() const { return ___m_BarCanvas_10; }
	inline GameObject_t1756533147 ** get_address_of_m_BarCanvas_10() { return &___m_BarCanvas_10; }
	inline void set_m_BarCanvas_10(GameObject_t1756533147 * value)
	{
		___m_BarCanvas_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_BarCanvas_10, value);
	}

	inline static int32_t get_offset_of_m_Renderer_11() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_Renderer_11)); }
	inline Renderer_t257310565 * get_m_Renderer_11() const { return ___m_Renderer_11; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_11() { return &___m_Renderer_11; }
	inline void set_m_Renderer_11(Renderer_t257310565 * value)
	{
		___m_Renderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_11, value);
	}

	inline static int32_t get_offset_of_m_SelectionRadial_12() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_SelectionRadial_12)); }
	inline SelectionRadial_t541787425 * get_m_SelectionRadial_12() const { return ___m_SelectionRadial_12; }
	inline SelectionRadial_t541787425 ** get_address_of_m_SelectionRadial_12() { return &___m_SelectionRadial_12; }
	inline void set_m_SelectionRadial_12(SelectionRadial_t541787425 * value)
	{
		___m_SelectionRadial_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionRadial_12, value);
	}

	inline static int32_t get_offset_of_m_UIFader_13() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_UIFader_13)); }
	inline UIFader_t188390386 * get_m_UIFader_13() const { return ___m_UIFader_13; }
	inline UIFader_t188390386 ** get_address_of_m_UIFader_13() { return &___m_UIFader_13; }
	inline void set_m_UIFader_13(UIFader_t188390386 * value)
	{
		___m_UIFader_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIFader_13, value);
	}

	inline static int32_t get_offset_of_m_Collider_14() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_Collider_14)); }
	inline Collider_t3497673348 * get_m_Collider_14() const { return ___m_Collider_14; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_14() { return &___m_Collider_14; }
	inline void set_m_Collider_14(Collider_t3497673348 * value)
	{
		___m_Collider_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_14, value);
	}

	inline static int32_t get_offset_of_m_DisableOnBarFill_15() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_DisableOnBarFill_15)); }
	inline bool get_m_DisableOnBarFill_15() const { return ___m_DisableOnBarFill_15; }
	inline bool* get_address_of_m_DisableOnBarFill_15() { return &___m_DisableOnBarFill_15; }
	inline void set_m_DisableOnBarFill_15(bool value)
	{
		___m_DisableOnBarFill_15 = value;
	}

	inline static int32_t get_offset_of_m_DisappearOnBarFill_16() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_DisappearOnBarFill_16)); }
	inline bool get_m_DisappearOnBarFill_16() const { return ___m_DisappearOnBarFill_16; }
	inline bool* get_address_of_m_DisappearOnBarFill_16() { return &___m_DisappearOnBarFill_16; }
	inline void set_m_DisappearOnBarFill_16(bool value)
	{
		___m_DisappearOnBarFill_16 = value;
	}

	inline static int32_t get_offset_of_m_BarFilled_17() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_BarFilled_17)); }
	inline bool get_m_BarFilled_17() const { return ___m_BarFilled_17; }
	inline bool* get_address_of_m_BarFilled_17() { return &___m_BarFilled_17; }
	inline void set_m_BarFilled_17(bool value)
	{
		___m_BarFilled_17 = value;
	}

	inline static int32_t get_offset_of_m_GazeOver_18() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_GazeOver_18)); }
	inline bool get_m_GazeOver_18() const { return ___m_GazeOver_18; }
	inline bool* get_address_of_m_GazeOver_18() { return &___m_GazeOver_18; }
	inline void set_m_GazeOver_18(bool value)
	{
		___m_GazeOver_18 = value;
	}

	inline static int32_t get_offset_of_m_Timer_19() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_Timer_19)); }
	inline float get_m_Timer_19() const { return ___m_Timer_19; }
	inline float* get_address_of_m_Timer_19() { return &___m_Timer_19; }
	inline void set_m_Timer_19(float value)
	{
		___m_Timer_19 = value;
	}

	inline static int32_t get_offset_of_m_FillBarRoutine_20() { return static_cast<int32_t>(offsetof(SelectionSlider_t3107237799, ___m_FillBarRoutine_20)); }
	inline Coroutine_t2299508840 * get_m_FillBarRoutine_20() const { return ___m_FillBarRoutine_20; }
	inline Coroutine_t2299508840 ** get_address_of_m_FillBarRoutine_20() { return &___m_FillBarRoutine_20; }
	inline void set_m_FillBarRoutine_20(Coroutine_t2299508840 * value)
	{
		___m_FillBarRoutine_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_FillBarRoutine_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
