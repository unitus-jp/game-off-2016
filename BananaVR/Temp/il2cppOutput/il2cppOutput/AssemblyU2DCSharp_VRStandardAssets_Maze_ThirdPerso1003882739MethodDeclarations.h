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

// VRStandardAssets.Maze.ThirdPersonCharacter
struct ThirdPersonCharacter_t1003882739;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::.ctor()
extern "C"  void ThirdPersonCharacter__ctor_m2068417999 (ThirdPersonCharacter_t1003882739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::Start()
extern "C"  void ThirdPersonCharacter_Start_m707499835 (ThirdPersonCharacter_t1003882739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_Move_m3386517259 (ThirdPersonCharacter_t1003882739 * __this, Vector3_t2243707580  ___move0, bool ___crouch1, bool ___jump2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C"  void ThirdPersonCharacter_ScaleCapsuleForCrouching_m1758591938 (ThirdPersonCharacter_t1003882739 * __this, bool ___crouch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C"  void ThirdPersonCharacter_PreventStandingInLowHeadroom_m1276269509 (ThirdPersonCharacter_t1003882739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C"  void ThirdPersonCharacter_UpdateAnimator_m779199642 (ThirdPersonCharacter_t1003882739 * __this, Vector3_t2243707580  ___move0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::HandleAirborneMovement()
extern "C"  void ThirdPersonCharacter_HandleAirborneMovement_m2977205812 (ThirdPersonCharacter_t1003882739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_HandleGroundedMovement_m275583648 (ThirdPersonCharacter_t1003882739 * __this, bool ___crouch0, bool ___jump1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C"  void ThirdPersonCharacter_ApplyExtraTurnRotation_m2751028426 (ThirdPersonCharacter_t1003882739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::OnAnimatorMove()
extern "C"  void ThirdPersonCharacter_OnAnimatorMove_m4208067740 (ThirdPersonCharacter_t1003882739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.ThirdPersonCharacter::CheckGroundStatus()
extern "C"  void ThirdPersonCharacter_CheckGroundStatus_m4028997060 (ThirdPersonCharacter_t1003882739 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
