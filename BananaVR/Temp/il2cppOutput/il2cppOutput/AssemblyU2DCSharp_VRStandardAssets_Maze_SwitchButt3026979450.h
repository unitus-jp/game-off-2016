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
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// VRStandardAssets.Utils.SelectionSlider
struct SelectionSlider_t3107237799;
// VRStandardAssets.Utils.UIFader
struct UIFader_t188390386;
// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Maze.Turret
struct Turret_t182772746;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.SwitchButton
struct  SwitchButton_t3026979450  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource VRStandardAssets.Maze.SwitchButton::m_SwitchAudio
	AudioSource_t1135106623 * ___m_SwitchAudio_2;
	// UnityEngine.AudioClip VRStandardAssets.Maze.SwitchButton::m_SwitchPressClip
	AudioClip_t1932558630 * ___m_SwitchPressClip_3;
	// UnityEngine.AudioClip VRStandardAssets.Maze.SwitchButton::m_ActivateGUIClip
	AudioClip_t1932558630 * ___m_ActivateGUIClip_4;
	// VRStandardAssets.Utils.SelectionSlider VRStandardAssets.Maze.SwitchButton::m_SelectionSlider
	SelectionSlider_t3107237799 * ___m_SelectionSlider_5;
	// VRStandardAssets.Utils.UIFader VRStandardAssets.Maze.SwitchButton::m_SelectionSliderFader
	UIFader_t188390386 * ___m_SelectionSliderFader_6;
	// UnityEngine.Transform VRStandardAssets.Maze.SwitchButton::m_Character
	Transform_t3275118058 * ___m_Character_7;
	// VRStandardAssets.Maze.Turret VRStandardAssets.Maze.SwitchButton::m_Turret
	Turret_t182772746 * ___m_Turret_8;
	// System.Boolean VRStandardAssets.Maze.SwitchButton::m_PowerOn
	bool ___m_PowerOn_9;

public:
	inline static int32_t get_offset_of_m_SwitchAudio_2() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_SwitchAudio_2)); }
	inline AudioSource_t1135106623 * get_m_SwitchAudio_2() const { return ___m_SwitchAudio_2; }
	inline AudioSource_t1135106623 ** get_address_of_m_SwitchAudio_2() { return &___m_SwitchAudio_2; }
	inline void set_m_SwitchAudio_2(AudioSource_t1135106623 * value)
	{
		___m_SwitchAudio_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_SwitchAudio_2, value);
	}

	inline static int32_t get_offset_of_m_SwitchPressClip_3() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_SwitchPressClip_3)); }
	inline AudioClip_t1932558630 * get_m_SwitchPressClip_3() const { return ___m_SwitchPressClip_3; }
	inline AudioClip_t1932558630 ** get_address_of_m_SwitchPressClip_3() { return &___m_SwitchPressClip_3; }
	inline void set_m_SwitchPressClip_3(AudioClip_t1932558630 * value)
	{
		___m_SwitchPressClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_SwitchPressClip_3, value);
	}

	inline static int32_t get_offset_of_m_ActivateGUIClip_4() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_ActivateGUIClip_4)); }
	inline AudioClip_t1932558630 * get_m_ActivateGUIClip_4() const { return ___m_ActivateGUIClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_m_ActivateGUIClip_4() { return &___m_ActivateGUIClip_4; }
	inline void set_m_ActivateGUIClip_4(AudioClip_t1932558630 * value)
	{
		___m_ActivateGUIClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ActivateGUIClip_4, value);
	}

	inline static int32_t get_offset_of_m_SelectionSlider_5() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_SelectionSlider_5)); }
	inline SelectionSlider_t3107237799 * get_m_SelectionSlider_5() const { return ___m_SelectionSlider_5; }
	inline SelectionSlider_t3107237799 ** get_address_of_m_SelectionSlider_5() { return &___m_SelectionSlider_5; }
	inline void set_m_SelectionSlider_5(SelectionSlider_t3107237799 * value)
	{
		___m_SelectionSlider_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionSlider_5, value);
	}

	inline static int32_t get_offset_of_m_SelectionSliderFader_6() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_SelectionSliderFader_6)); }
	inline UIFader_t188390386 * get_m_SelectionSliderFader_6() const { return ___m_SelectionSliderFader_6; }
	inline UIFader_t188390386 ** get_address_of_m_SelectionSliderFader_6() { return &___m_SelectionSliderFader_6; }
	inline void set_m_SelectionSliderFader_6(UIFader_t188390386 * value)
	{
		___m_SelectionSliderFader_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionSliderFader_6, value);
	}

	inline static int32_t get_offset_of_m_Character_7() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_Character_7)); }
	inline Transform_t3275118058 * get_m_Character_7() const { return ___m_Character_7; }
	inline Transform_t3275118058 ** get_address_of_m_Character_7() { return &___m_Character_7; }
	inline void set_m_Character_7(Transform_t3275118058 * value)
	{
		___m_Character_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Character_7, value);
	}

	inline static int32_t get_offset_of_m_Turret_8() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_Turret_8)); }
	inline Turret_t182772746 * get_m_Turret_8() const { return ___m_Turret_8; }
	inline Turret_t182772746 ** get_address_of_m_Turret_8() { return &___m_Turret_8; }
	inline void set_m_Turret_8(Turret_t182772746 * value)
	{
		___m_Turret_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Turret_8, value);
	}

	inline static int32_t get_offset_of_m_PowerOn_9() { return static_cast<int32_t>(offsetof(SwitchButton_t3026979450, ___m_PowerOn_9)); }
	inline bool get_m_PowerOn_9() const { return ___m_PowerOn_9; }
	inline bool* get_address_of_m_PowerOn_9() { return &___m_PowerOn_9; }
	inline void set_m_PowerOn_9(bool value)
	{
		___m_PowerOn_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
