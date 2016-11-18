#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_t1197654427;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_AI_NavMeshAgent2761625415.h"
#include "UnityEngine_UnityEngine_AI_NavMeshPath1197654427.h"

// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_SetDestination_m1354616139 (NavMeshAgent_t2761625415 * __this, Vector3_t2243707580  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_SetDestination_m1977143988 (Il2CppObject * __this /* static, unused */, NavMeshAgent_t2761625415 * ___self0, Vector3_t2243707580 * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
extern "C"  float NavMeshAgent_get_stoppingDistance_m456040076 (NavMeshAgent_t2761625415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_desiredVelocity()
extern "C"  Vector3_t2243707580  NavMeshAgent_get_desiredVelocity_m331356702 (NavMeshAgent_t2761625415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::INTERNAL_get_desiredVelocity(UnityEngine.Vector3&)
extern "C"  void NavMeshAgent_INTERNAL_get_desiredVelocity_m1272342813 (NavMeshAgent_t2761625415 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
extern "C"  float NavMeshAgent_get_remainingDistance_m2699477664 (NavMeshAgent_t2761625415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshAgent::get_pathPending()
extern "C"  bool NavMeshAgent_get_pathPending_m1923698687 (NavMeshAgent_t2761625415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshAgent::Warp(UnityEngine.Vector3)
extern "C"  bool NavMeshAgent_Warp_m1589409309 (NavMeshAgent_t2761625415 * __this, Vector3_t2243707580  ___newPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AI.NavMeshAgent::INTERNAL_CALL_Warp(UnityEngine.AI.NavMeshAgent,UnityEngine.Vector3&)
extern "C"  bool NavMeshAgent_INTERNAL_CALL_Warp_m2868397578 (Il2CppObject * __this /* static, unused */, NavMeshAgent_t2761625415 * ___self0, Vector3_t2243707580 * ___newPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::Stop()
extern "C"  void NavMeshAgent_Stop_m2869490804 (NavMeshAgent_t2761625415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::StopInternal()
extern "C"  void NavMeshAgent_StopInternal_m142445695 (NavMeshAgent_t2761625415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AI.NavMeshPath UnityEngine.AI.NavMeshAgent::get_path()
extern "C"  NavMeshPath_t1197654427 * NavMeshAgent_get_path_m3863272517 (NavMeshAgent_t2761625415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::CopyPathTo(UnityEngine.AI.NavMeshPath)
extern "C"  void NavMeshAgent_CopyPathTo_m2988348381 (NavMeshAgent_t2761625415 * __this, NavMeshPath_t1197654427 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::set_updatePosition(System.Boolean)
extern "C"  void NavMeshAgent_set_updatePosition_m3466016722 (NavMeshAgent_t2761625415 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshAgent::set_updateRotation(System.Boolean)
extern "C"  void NavMeshAgent_set_updateRotation_m2981003907 (NavMeshAgent_t2761625415 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
