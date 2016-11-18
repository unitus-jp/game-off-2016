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
// VRStandardAssets.Maze.MazeTargetSetting
struct MazeTargetSetting_t1539560390;
// VRStandardAssets.Maze.AgentTrail
struct AgentTrail_t1578118259;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;
// VRStandardAssets.Maze.AICharacterControl
struct AICharacterControl_t3292179060;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.Player
struct  Player_t85696317  : public MonoBehaviour_t1158329972
{
public:
	// System.Action VRStandardAssets.Maze.Player::OnPlayerShot
	Action_t3226471752 * ___OnPlayerShot_2;
	// VRStandardAssets.Maze.MazeTargetSetting VRStandardAssets.Maze.Player::m_MazeTargetSetting
	MazeTargetSetting_t1539560390 * ___m_MazeTargetSetting_3;
	// VRStandardAssets.Maze.AgentTrail VRStandardAssets.Maze.Player::m_AgentTrail
	AgentTrail_t1578118259 * ___m_AgentTrail_4;
	// UnityEngine.AudioSource VRStandardAssets.Maze.Player::m_PlayerAudio
	AudioSource_t1135106623 * ___m_PlayerAudio_5;
	// UnityEngine.AudioClip VRStandardAssets.Maze.Player::m_PlayerHitClip
	AudioClip_t1932558630 * ___m_PlayerHitClip_6;
	// UnityEngine.AudioClip VRStandardAssets.Maze.Player::m_PlayerDieClip
	AudioClip_t1932558630 * ___m_PlayerDieClip_7;
	// UnityEngine.AI.NavMeshAgent VRStandardAssets.Maze.Player::m_Agent
	NavMeshAgent_t2761625415 * ___m_Agent_8;
	// VRStandardAssets.Maze.AICharacterControl VRStandardAssets.Maze.Player::m_AiCharacter
	AICharacterControl_t3292179060 * ___m_AiCharacter_9;
	// UnityEngine.Animator VRStandardAssets.Maze.Player::m_Animator
	Animator_t69676727 * ___m_Animator_10;
	// UnityEngine.Collider VRStandardAssets.Maze.Player::m_Collider
	Collider_t3497673348 * ___m_Collider_11;
	// UnityEngine.Rigidbody VRStandardAssets.Maze.Player::m_RigidBody
	Rigidbody_t4233889191 * ___m_RigidBody_12;
	// System.Boolean VRStandardAssets.Maze.Player::m_IsDying
	bool ___m_IsDying_13;
	// System.Boolean VRStandardAssets.Maze.Player::m_IsGameOver
	bool ___m_IsGameOver_14;
	// UnityEngine.Vector3 VRStandardAssets.Maze.Player::m_OriginPosition
	Vector3_t2243707580  ___m_OriginPosition_15;
	// System.Int32 VRStandardAssets.Maze.Player::m_HashResetPara
	int32_t ___m_HashResetPara_16;
	// System.Int32 VRStandardAssets.Maze.Player::m_HashDyingPara
	int32_t ___m_HashDyingPara_17;
	// System.Int32 VRStandardAssets.Maze.Player::m_HashWinningPara
	int32_t ___m_HashWinningPara_18;

public:
	inline static int32_t get_offset_of_OnPlayerShot_2() { return static_cast<int32_t>(offsetof(Player_t85696317, ___OnPlayerShot_2)); }
	inline Action_t3226471752 * get_OnPlayerShot_2() const { return ___OnPlayerShot_2; }
	inline Action_t3226471752 ** get_address_of_OnPlayerShot_2() { return &___OnPlayerShot_2; }
	inline void set_OnPlayerShot_2(Action_t3226471752 * value)
	{
		___OnPlayerShot_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerShot_2, value);
	}

	inline static int32_t get_offset_of_m_MazeTargetSetting_3() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_MazeTargetSetting_3)); }
	inline MazeTargetSetting_t1539560390 * get_m_MazeTargetSetting_3() const { return ___m_MazeTargetSetting_3; }
	inline MazeTargetSetting_t1539560390 ** get_address_of_m_MazeTargetSetting_3() { return &___m_MazeTargetSetting_3; }
	inline void set_m_MazeTargetSetting_3(MazeTargetSetting_t1539560390 * value)
	{
		___m_MazeTargetSetting_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_MazeTargetSetting_3, value);
	}

	inline static int32_t get_offset_of_m_AgentTrail_4() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_AgentTrail_4)); }
	inline AgentTrail_t1578118259 * get_m_AgentTrail_4() const { return ___m_AgentTrail_4; }
	inline AgentTrail_t1578118259 ** get_address_of_m_AgentTrail_4() { return &___m_AgentTrail_4; }
	inline void set_m_AgentTrail_4(AgentTrail_t1578118259 * value)
	{
		___m_AgentTrail_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_AgentTrail_4, value);
	}

	inline static int32_t get_offset_of_m_PlayerAudio_5() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_PlayerAudio_5)); }
	inline AudioSource_t1135106623 * get_m_PlayerAudio_5() const { return ___m_PlayerAudio_5; }
	inline AudioSource_t1135106623 ** get_address_of_m_PlayerAudio_5() { return &___m_PlayerAudio_5; }
	inline void set_m_PlayerAudio_5(AudioSource_t1135106623 * value)
	{
		___m_PlayerAudio_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerAudio_5, value);
	}

	inline static int32_t get_offset_of_m_PlayerHitClip_6() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_PlayerHitClip_6)); }
	inline AudioClip_t1932558630 * get_m_PlayerHitClip_6() const { return ___m_PlayerHitClip_6; }
	inline AudioClip_t1932558630 ** get_address_of_m_PlayerHitClip_6() { return &___m_PlayerHitClip_6; }
	inline void set_m_PlayerHitClip_6(AudioClip_t1932558630 * value)
	{
		___m_PlayerHitClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerHitClip_6, value);
	}

	inline static int32_t get_offset_of_m_PlayerDieClip_7() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_PlayerDieClip_7)); }
	inline AudioClip_t1932558630 * get_m_PlayerDieClip_7() const { return ___m_PlayerDieClip_7; }
	inline AudioClip_t1932558630 ** get_address_of_m_PlayerDieClip_7() { return &___m_PlayerDieClip_7; }
	inline void set_m_PlayerDieClip_7(AudioClip_t1932558630 * value)
	{
		___m_PlayerDieClip_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerDieClip_7, value);
	}

	inline static int32_t get_offset_of_m_Agent_8() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_Agent_8)); }
	inline NavMeshAgent_t2761625415 * get_m_Agent_8() const { return ___m_Agent_8; }
	inline NavMeshAgent_t2761625415 ** get_address_of_m_Agent_8() { return &___m_Agent_8; }
	inline void set_m_Agent_8(NavMeshAgent_t2761625415 * value)
	{
		___m_Agent_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Agent_8, value);
	}

	inline static int32_t get_offset_of_m_AiCharacter_9() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_AiCharacter_9)); }
	inline AICharacterControl_t3292179060 * get_m_AiCharacter_9() const { return ___m_AiCharacter_9; }
	inline AICharacterControl_t3292179060 ** get_address_of_m_AiCharacter_9() { return &___m_AiCharacter_9; }
	inline void set_m_AiCharacter_9(AICharacterControl_t3292179060 * value)
	{
		___m_AiCharacter_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_AiCharacter_9, value);
	}

	inline static int32_t get_offset_of_m_Animator_10() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_Animator_10)); }
	inline Animator_t69676727 * get_m_Animator_10() const { return ___m_Animator_10; }
	inline Animator_t69676727 ** get_address_of_m_Animator_10() { return &___m_Animator_10; }
	inline void set_m_Animator_10(Animator_t69676727 * value)
	{
		___m_Animator_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_10, value);
	}

	inline static int32_t get_offset_of_m_Collider_11() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_Collider_11)); }
	inline Collider_t3497673348 * get_m_Collider_11() const { return ___m_Collider_11; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_11() { return &___m_Collider_11; }
	inline void set_m_Collider_11(Collider_t3497673348 * value)
	{
		___m_Collider_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_11, value);
	}

	inline static int32_t get_offset_of_m_RigidBody_12() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_RigidBody_12)); }
	inline Rigidbody_t4233889191 * get_m_RigidBody_12() const { return ___m_RigidBody_12; }
	inline Rigidbody_t4233889191 ** get_address_of_m_RigidBody_12() { return &___m_RigidBody_12; }
	inline void set_m_RigidBody_12(Rigidbody_t4233889191 * value)
	{
		___m_RigidBody_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_RigidBody_12, value);
	}

	inline static int32_t get_offset_of_m_IsDying_13() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_IsDying_13)); }
	inline bool get_m_IsDying_13() const { return ___m_IsDying_13; }
	inline bool* get_address_of_m_IsDying_13() { return &___m_IsDying_13; }
	inline void set_m_IsDying_13(bool value)
	{
		___m_IsDying_13 = value;
	}

	inline static int32_t get_offset_of_m_IsGameOver_14() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_IsGameOver_14)); }
	inline bool get_m_IsGameOver_14() const { return ___m_IsGameOver_14; }
	inline bool* get_address_of_m_IsGameOver_14() { return &___m_IsGameOver_14; }
	inline void set_m_IsGameOver_14(bool value)
	{
		___m_IsGameOver_14 = value;
	}

	inline static int32_t get_offset_of_m_OriginPosition_15() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_OriginPosition_15)); }
	inline Vector3_t2243707580  get_m_OriginPosition_15() const { return ___m_OriginPosition_15; }
	inline Vector3_t2243707580 * get_address_of_m_OriginPosition_15() { return &___m_OriginPosition_15; }
	inline void set_m_OriginPosition_15(Vector3_t2243707580  value)
	{
		___m_OriginPosition_15 = value;
	}

	inline static int32_t get_offset_of_m_HashResetPara_16() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_HashResetPara_16)); }
	inline int32_t get_m_HashResetPara_16() const { return ___m_HashResetPara_16; }
	inline int32_t* get_address_of_m_HashResetPara_16() { return &___m_HashResetPara_16; }
	inline void set_m_HashResetPara_16(int32_t value)
	{
		___m_HashResetPara_16 = value;
	}

	inline static int32_t get_offset_of_m_HashDyingPara_17() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_HashDyingPara_17)); }
	inline int32_t get_m_HashDyingPara_17() const { return ___m_HashDyingPara_17; }
	inline int32_t* get_address_of_m_HashDyingPara_17() { return &___m_HashDyingPara_17; }
	inline void set_m_HashDyingPara_17(int32_t value)
	{
		___m_HashDyingPara_17 = value;
	}

	inline static int32_t get_offset_of_m_HashWinningPara_18() { return static_cast<int32_t>(offsetof(Player_t85696317, ___m_HashWinningPara_18)); }
	inline int32_t get_m_HashWinningPara_18() const { return ___m_HashWinningPara_18; }
	inline int32_t* get_address_of_m_HashWinningPara_18() { return &___m_HashWinningPara_18; }
	inline void set_m_HashWinningPara_18(int32_t value)
	{
		___m_HashWinningPara_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
