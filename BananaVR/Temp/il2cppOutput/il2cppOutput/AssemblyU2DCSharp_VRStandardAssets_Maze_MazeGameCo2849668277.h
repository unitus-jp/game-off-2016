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
// VRStandardAssets.Utils.UIFader
struct UIFader_t188390386;
// VRStandardAssets.Maze.Player
struct Player_t85696317;
// VRStandardAssets.Maze.ExitArea
struct ExitArea_t1238090265;
// VRStandardAssets.Maze.MazeTargetSetting
struct MazeTargetSetting_t1539560390;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// VRStandardAssets.Utils.Reticle
struct Reticle_t2910974846;
// VRStandardAssets.Maze.SwitchButton
struct SwitchButton_t3026979450;
// VRStandardAssets.Maze.Turret
struct Turret_t182772746;
// VRStandardAssets.Maze.DestinationMarker
struct DestinationMarker_t3606017564;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// VRStandardAssets.Utils.VRCameraFade
struct VRCameraFade_t3046390775;
// VRStandardAssets.Utils.SelectionRadial
struct SelectionRadial_t541787425;
// VRStandardAssets.Maze.CameraOrbit
struct CameraOrbit_t4247825375;
// VRStandardAssets.Utils.InputWarnings
struct InputWarnings_t4225836565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.MazeGameController
struct  MazeGameController_t2849668277  : public MonoBehaviour_t1158329972
{
public:
	// VRStandardAssets.Utils.SelectionSlider VRStandardAssets.Maze.MazeGameController::m_SelectionSlider
	SelectionSlider_t3107237799 * ___m_SelectionSlider_2;
	// VRStandardAssets.Utils.UIFader VRStandardAssets.Maze.MazeGameController::m_InstructionsFader
	UIFader_t188390386 * ___m_InstructionsFader_3;
	// VRStandardAssets.Utils.UIFader VRStandardAssets.Maze.MazeGameController::m_WinFader
	UIFader_t188390386 * ___m_WinFader_4;
	// VRStandardAssets.Utils.UIFader VRStandardAssets.Maze.MazeGameController::m_LoseFader
	UIFader_t188390386 * ___m_LoseFader_5;
	// VRStandardAssets.Maze.Player VRStandardAssets.Maze.MazeGameController::m_Player
	Player_t85696317 * ___m_Player_6;
	// VRStandardAssets.Maze.ExitArea VRStandardAssets.Maze.MazeGameController::m_ExitArea
	ExitArea_t1238090265 * ___m_ExitArea_7;
	// VRStandardAssets.Maze.MazeTargetSetting VRStandardAssets.Maze.MazeGameController::m_MazeTargetSetting
	MazeTargetSetting_t1539560390 * ___m_MazeTargetSetting_8;
	// UnityEngine.ParticleSystem VRStandardAssets.Maze.MazeGameController::m_WinParticles
	ParticleSystem_t3394631041 * ___m_WinParticles_9;
	// VRStandardAssets.Utils.Reticle VRStandardAssets.Maze.MazeGameController::m_Reticle
	Reticle_t2910974846 * ___m_Reticle_10;
	// VRStandardAssets.Maze.SwitchButton VRStandardAssets.Maze.MazeGameController::m_MazeSwitch
	SwitchButton_t3026979450 * ___m_MazeSwitch_11;
	// VRStandardAssets.Maze.Turret VRStandardAssets.Maze.MazeGameController::m_Turret
	Turret_t182772746 * ___m_Turret_12;
	// VRStandardAssets.Maze.DestinationMarker VRStandardAssets.Maze.MazeGameController::m_DestinationMarker
	DestinationMarker_t3606017564 * ___m_DestinationMarker_13;
	// UnityEngine.AudioSource VRStandardAssets.Maze.MazeGameController::m_GameOverAudioSource
	AudioSource_t1135106623 * ___m_GameOverAudioSource_14;
	// VRStandardAssets.Utils.VRCameraFade VRStandardAssets.Maze.MazeGameController::m_CameraFade
	VRCameraFade_t3046390775 * ___m_CameraFade_15;
	// VRStandardAssets.Utils.SelectionRadial VRStandardAssets.Maze.MazeGameController::m_SelectionRadial
	SelectionRadial_t541787425 * ___m_SelectionRadial_16;
	// VRStandardAssets.Maze.CameraOrbit VRStandardAssets.Maze.MazeGameController::m_CameraOrbit
	CameraOrbit_t4247825375 * ___m_CameraOrbit_17;
	// VRStandardAssets.Utils.InputWarnings VRStandardAssets.Maze.MazeGameController::m_InputWarnings
	InputWarnings_t4225836565 * ___m_InputWarnings_18;
	// System.Boolean VRStandardAssets.Maze.MazeGameController::m_Playing
	bool ___m_Playing_19;
	// System.Boolean VRStandardAssets.Maze.MazeGameController::m_Win
	bool ___m_Win_20;

public:
	inline static int32_t get_offset_of_m_SelectionSlider_2() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_SelectionSlider_2)); }
	inline SelectionSlider_t3107237799 * get_m_SelectionSlider_2() const { return ___m_SelectionSlider_2; }
	inline SelectionSlider_t3107237799 ** get_address_of_m_SelectionSlider_2() { return &___m_SelectionSlider_2; }
	inline void set_m_SelectionSlider_2(SelectionSlider_t3107237799 * value)
	{
		___m_SelectionSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionSlider_2, value);
	}

	inline static int32_t get_offset_of_m_InstructionsFader_3() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_InstructionsFader_3)); }
	inline UIFader_t188390386 * get_m_InstructionsFader_3() const { return ___m_InstructionsFader_3; }
	inline UIFader_t188390386 ** get_address_of_m_InstructionsFader_3() { return &___m_InstructionsFader_3; }
	inline void set_m_InstructionsFader_3(UIFader_t188390386 * value)
	{
		___m_InstructionsFader_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_InstructionsFader_3, value);
	}

	inline static int32_t get_offset_of_m_WinFader_4() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_WinFader_4)); }
	inline UIFader_t188390386 * get_m_WinFader_4() const { return ___m_WinFader_4; }
	inline UIFader_t188390386 ** get_address_of_m_WinFader_4() { return &___m_WinFader_4; }
	inline void set_m_WinFader_4(UIFader_t188390386 * value)
	{
		___m_WinFader_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_WinFader_4, value);
	}

	inline static int32_t get_offset_of_m_LoseFader_5() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_LoseFader_5)); }
	inline UIFader_t188390386 * get_m_LoseFader_5() const { return ___m_LoseFader_5; }
	inline UIFader_t188390386 ** get_address_of_m_LoseFader_5() { return &___m_LoseFader_5; }
	inline void set_m_LoseFader_5(UIFader_t188390386 * value)
	{
		___m_LoseFader_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_LoseFader_5, value);
	}

	inline static int32_t get_offset_of_m_Player_6() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_Player_6)); }
	inline Player_t85696317 * get_m_Player_6() const { return ___m_Player_6; }
	inline Player_t85696317 ** get_address_of_m_Player_6() { return &___m_Player_6; }
	inline void set_m_Player_6(Player_t85696317 * value)
	{
		___m_Player_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Player_6, value);
	}

	inline static int32_t get_offset_of_m_ExitArea_7() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_ExitArea_7)); }
	inline ExitArea_t1238090265 * get_m_ExitArea_7() const { return ___m_ExitArea_7; }
	inline ExitArea_t1238090265 ** get_address_of_m_ExitArea_7() { return &___m_ExitArea_7; }
	inline void set_m_ExitArea_7(ExitArea_t1238090265 * value)
	{
		___m_ExitArea_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExitArea_7, value);
	}

	inline static int32_t get_offset_of_m_MazeTargetSetting_8() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_MazeTargetSetting_8)); }
	inline MazeTargetSetting_t1539560390 * get_m_MazeTargetSetting_8() const { return ___m_MazeTargetSetting_8; }
	inline MazeTargetSetting_t1539560390 ** get_address_of_m_MazeTargetSetting_8() { return &___m_MazeTargetSetting_8; }
	inline void set_m_MazeTargetSetting_8(MazeTargetSetting_t1539560390 * value)
	{
		___m_MazeTargetSetting_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_MazeTargetSetting_8, value);
	}

	inline static int32_t get_offset_of_m_WinParticles_9() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_WinParticles_9)); }
	inline ParticleSystem_t3394631041 * get_m_WinParticles_9() const { return ___m_WinParticles_9; }
	inline ParticleSystem_t3394631041 ** get_address_of_m_WinParticles_9() { return &___m_WinParticles_9; }
	inline void set_m_WinParticles_9(ParticleSystem_t3394631041 * value)
	{
		___m_WinParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_WinParticles_9, value);
	}

	inline static int32_t get_offset_of_m_Reticle_10() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_Reticle_10)); }
	inline Reticle_t2910974846 * get_m_Reticle_10() const { return ___m_Reticle_10; }
	inline Reticle_t2910974846 ** get_address_of_m_Reticle_10() { return &___m_Reticle_10; }
	inline void set_m_Reticle_10(Reticle_t2910974846 * value)
	{
		___m_Reticle_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Reticle_10, value);
	}

	inline static int32_t get_offset_of_m_MazeSwitch_11() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_MazeSwitch_11)); }
	inline SwitchButton_t3026979450 * get_m_MazeSwitch_11() const { return ___m_MazeSwitch_11; }
	inline SwitchButton_t3026979450 ** get_address_of_m_MazeSwitch_11() { return &___m_MazeSwitch_11; }
	inline void set_m_MazeSwitch_11(SwitchButton_t3026979450 * value)
	{
		___m_MazeSwitch_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_MazeSwitch_11, value);
	}

	inline static int32_t get_offset_of_m_Turret_12() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_Turret_12)); }
	inline Turret_t182772746 * get_m_Turret_12() const { return ___m_Turret_12; }
	inline Turret_t182772746 ** get_address_of_m_Turret_12() { return &___m_Turret_12; }
	inline void set_m_Turret_12(Turret_t182772746 * value)
	{
		___m_Turret_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Turret_12, value);
	}

	inline static int32_t get_offset_of_m_DestinationMarker_13() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_DestinationMarker_13)); }
	inline DestinationMarker_t3606017564 * get_m_DestinationMarker_13() const { return ___m_DestinationMarker_13; }
	inline DestinationMarker_t3606017564 ** get_address_of_m_DestinationMarker_13() { return &___m_DestinationMarker_13; }
	inline void set_m_DestinationMarker_13(DestinationMarker_t3606017564 * value)
	{
		___m_DestinationMarker_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_DestinationMarker_13, value);
	}

	inline static int32_t get_offset_of_m_GameOverAudioSource_14() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_GameOverAudioSource_14)); }
	inline AudioSource_t1135106623 * get_m_GameOverAudioSource_14() const { return ___m_GameOverAudioSource_14; }
	inline AudioSource_t1135106623 ** get_address_of_m_GameOverAudioSource_14() { return &___m_GameOverAudioSource_14; }
	inline void set_m_GameOverAudioSource_14(AudioSource_t1135106623 * value)
	{
		___m_GameOverAudioSource_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameOverAudioSource_14, value);
	}

	inline static int32_t get_offset_of_m_CameraFade_15() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_CameraFade_15)); }
	inline VRCameraFade_t3046390775 * get_m_CameraFade_15() const { return ___m_CameraFade_15; }
	inline VRCameraFade_t3046390775 ** get_address_of_m_CameraFade_15() { return &___m_CameraFade_15; }
	inline void set_m_CameraFade_15(VRCameraFade_t3046390775 * value)
	{
		___m_CameraFade_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraFade_15, value);
	}

	inline static int32_t get_offset_of_m_SelectionRadial_16() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_SelectionRadial_16)); }
	inline SelectionRadial_t541787425 * get_m_SelectionRadial_16() const { return ___m_SelectionRadial_16; }
	inline SelectionRadial_t541787425 ** get_address_of_m_SelectionRadial_16() { return &___m_SelectionRadial_16; }
	inline void set_m_SelectionRadial_16(SelectionRadial_t541787425 * value)
	{
		___m_SelectionRadial_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_SelectionRadial_16, value);
	}

	inline static int32_t get_offset_of_m_CameraOrbit_17() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_CameraOrbit_17)); }
	inline CameraOrbit_t4247825375 * get_m_CameraOrbit_17() const { return ___m_CameraOrbit_17; }
	inline CameraOrbit_t4247825375 ** get_address_of_m_CameraOrbit_17() { return &___m_CameraOrbit_17; }
	inline void set_m_CameraOrbit_17(CameraOrbit_t4247825375 * value)
	{
		___m_CameraOrbit_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraOrbit_17, value);
	}

	inline static int32_t get_offset_of_m_InputWarnings_18() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_InputWarnings_18)); }
	inline InputWarnings_t4225836565 * get_m_InputWarnings_18() const { return ___m_InputWarnings_18; }
	inline InputWarnings_t4225836565 ** get_address_of_m_InputWarnings_18() { return &___m_InputWarnings_18; }
	inline void set_m_InputWarnings_18(InputWarnings_t4225836565 * value)
	{
		___m_InputWarnings_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_InputWarnings_18, value);
	}

	inline static int32_t get_offset_of_m_Playing_19() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_Playing_19)); }
	inline bool get_m_Playing_19() const { return ___m_Playing_19; }
	inline bool* get_address_of_m_Playing_19() { return &___m_Playing_19; }
	inline void set_m_Playing_19(bool value)
	{
		___m_Playing_19 = value;
	}

	inline static int32_t get_offset_of_m_Win_20() { return static_cast<int32_t>(offsetof(MazeGameController_t2849668277, ___m_Win_20)); }
	inline bool get_m_Win_20() const { return ___m_Win_20; }
	inline bool* get_address_of_m_Win_20() { return &___m_Win_20; }
	inline void set_m_Win_20(bool value)
	{
		___m_Win_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
