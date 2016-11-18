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
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.AgentTrail
struct  AgentTrail_t1578118259  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AI.NavMeshAgent VRStandardAssets.Maze.AgentTrail::m_Agent
	NavMeshAgent_t2761625415 * ___m_Agent_2;
	// UnityEngine.LineRenderer VRStandardAssets.Maze.AgentTrail::m_Line
	LineRenderer_t849157671 * ___m_Line_3;

public:
	inline static int32_t get_offset_of_m_Agent_2() { return static_cast<int32_t>(offsetof(AgentTrail_t1578118259, ___m_Agent_2)); }
	inline NavMeshAgent_t2761625415 * get_m_Agent_2() const { return ___m_Agent_2; }
	inline NavMeshAgent_t2761625415 ** get_address_of_m_Agent_2() { return &___m_Agent_2; }
	inline void set_m_Agent_2(NavMeshAgent_t2761625415 * value)
	{
		___m_Agent_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Agent_2, value);
	}

	inline static int32_t get_offset_of_m_Line_3() { return static_cast<int32_t>(offsetof(AgentTrail_t1578118259, ___m_Line_3)); }
	inline LineRenderer_t849157671 * get_m_Line_3() const { return ___m_Line_3; }
	inline LineRenderer_t849157671 ** get_address_of_m_Line_3() { return &___m_Line_3; }
	inline void set_m_Line_3(LineRenderer_t849157671 * value)
	{
		___m_Line_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Line_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
