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
// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Maze.Player
struct Player_t85696317;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.ExitArea
struct  ExitArea_t1238090265  : public MonoBehaviour_t1158329972
{
public:
	// System.Action VRStandardAssets.Maze.ExitArea::OnGameComplete
	Action_t3226471752 * ___OnGameComplete_2;
	// UnityEngine.Transform VRStandardAssets.Maze.ExitArea::m_PlayerTransform
	Transform_t3275118058 * ___m_PlayerTransform_3;
	// VRStandardAssets.Maze.Player VRStandardAssets.Maze.ExitArea::m_Player
	Player_t85696317 * ___m_Player_4;
	// System.Boolean VRStandardAssets.Maze.ExitArea::m_IsShowingGameOver
	bool ___m_IsShowingGameOver_5;

public:
	inline static int32_t get_offset_of_OnGameComplete_2() { return static_cast<int32_t>(offsetof(ExitArea_t1238090265, ___OnGameComplete_2)); }
	inline Action_t3226471752 * get_OnGameComplete_2() const { return ___OnGameComplete_2; }
	inline Action_t3226471752 ** get_address_of_OnGameComplete_2() { return &___OnGameComplete_2; }
	inline void set_OnGameComplete_2(Action_t3226471752 * value)
	{
		___OnGameComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnGameComplete_2, value);
	}

	inline static int32_t get_offset_of_m_PlayerTransform_3() { return static_cast<int32_t>(offsetof(ExitArea_t1238090265, ___m_PlayerTransform_3)); }
	inline Transform_t3275118058 * get_m_PlayerTransform_3() const { return ___m_PlayerTransform_3; }
	inline Transform_t3275118058 ** get_address_of_m_PlayerTransform_3() { return &___m_PlayerTransform_3; }
	inline void set_m_PlayerTransform_3(Transform_t3275118058 * value)
	{
		___m_PlayerTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerTransform_3, value);
	}

	inline static int32_t get_offset_of_m_Player_4() { return static_cast<int32_t>(offsetof(ExitArea_t1238090265, ___m_Player_4)); }
	inline Player_t85696317 * get_m_Player_4() const { return ___m_Player_4; }
	inline Player_t85696317 ** get_address_of_m_Player_4() { return &___m_Player_4; }
	inline void set_m_Player_4(Player_t85696317 * value)
	{
		___m_Player_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Player_4, value);
	}

	inline static int32_t get_offset_of_m_IsShowingGameOver_5() { return static_cast<int32_t>(offsetof(ExitArea_t1238090265, ___m_IsShowingGameOver_5)); }
	inline bool get_m_IsShowingGameOver_5() const { return ___m_IsShowingGameOver_5; }
	inline bool* get_address_of_m_IsShowingGameOver_5() { return &___m_IsShowingGameOver_5; }
	inline void set_m_IsShowingGameOver_5(bool value)
	{
		___m_IsShowingGameOver_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
