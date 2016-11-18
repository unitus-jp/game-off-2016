#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;
// VRStandardAssets.Maze.ThirdPersonCharacter
struct ThirdPersonCharacter_t1003882739;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// VRStandardAssets.Maze.Player
struct Player_t85696317;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.AICharacterControl
struct  AICharacterControl_t3292179060  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AI.NavMeshAgent VRStandardAssets.Maze.AICharacterControl::<agent>k__BackingField
	NavMeshAgent_t2761625415 * ___U3CagentU3Ek__BackingField_2;
	// VRStandardAssets.Maze.ThirdPersonCharacter VRStandardAssets.Maze.AICharacterControl::<character>k__BackingField
	ThirdPersonCharacter_t1003882739 * ___U3CcharacterU3Ek__BackingField_3;
	// UnityEngine.Rigidbody VRStandardAssets.Maze.AICharacterControl::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_4;
	// VRStandardAssets.Maze.Player VRStandardAssets.Maze.AICharacterControl::m_Player
	Player_t85696317 * ___m_Player_5;
	// UnityEngine.Vector3 VRStandardAssets.Maze.AICharacterControl::m_TargetPosition
	Vector3_t2243707580  ___m_TargetPosition_6;

public:
	inline static int32_t get_offset_of_U3CagentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AICharacterControl_t3292179060, ___U3CagentU3Ek__BackingField_2)); }
	inline NavMeshAgent_t2761625415 * get_U3CagentU3Ek__BackingField_2() const { return ___U3CagentU3Ek__BackingField_2; }
	inline NavMeshAgent_t2761625415 ** get_address_of_U3CagentU3Ek__BackingField_2() { return &___U3CagentU3Ek__BackingField_2; }
	inline void set_U3CagentU3Ek__BackingField_2(NavMeshAgent_t2761625415 * value)
	{
		___U3CagentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CagentU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AICharacterControl_t3292179060, ___U3CcharacterU3Ek__BackingField_3)); }
	inline ThirdPersonCharacter_t1003882739 * get_U3CcharacterU3Ek__BackingField_3() const { return ___U3CcharacterU3Ek__BackingField_3; }
	inline ThirdPersonCharacter_t1003882739 ** get_address_of_U3CcharacterU3Ek__BackingField_3() { return &___U3CcharacterU3Ek__BackingField_3; }
	inline void set_U3CcharacterU3Ek__BackingField_3(ThirdPersonCharacter_t1003882739 * value)
	{
		___U3CcharacterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcharacterU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_4() { return static_cast<int32_t>(offsetof(AICharacterControl_t3292179060, ___m_Rigidbody_4)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_4() const { return ___m_Rigidbody_4; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_4() { return &___m_Rigidbody_4; }
	inline void set_m_Rigidbody_4(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_4, value);
	}

	inline static int32_t get_offset_of_m_Player_5() { return static_cast<int32_t>(offsetof(AICharacterControl_t3292179060, ___m_Player_5)); }
	inline Player_t85696317 * get_m_Player_5() const { return ___m_Player_5; }
	inline Player_t85696317 ** get_address_of_m_Player_5() { return &___m_Player_5; }
	inline void set_m_Player_5(Player_t85696317 * value)
	{
		___m_Player_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Player_5, value);
	}

	inline static int32_t get_offset_of_m_TargetPosition_6() { return static_cast<int32_t>(offsetof(AICharacterControl_t3292179060, ___m_TargetPosition_6)); }
	inline Vector3_t2243707580  get_m_TargetPosition_6() const { return ___m_TargetPosition_6; }
	inline Vector3_t2243707580 * get_address_of_m_TargetPosition_6() { return &___m_TargetPosition_6; }
	inline void set_m_TargetPosition_6(Vector3_t2243707580  value)
	{
		___m_TargetPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
