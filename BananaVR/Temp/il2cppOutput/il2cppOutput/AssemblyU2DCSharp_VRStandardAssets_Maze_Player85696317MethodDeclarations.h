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

// VRStandardAssets.Maze.Player
struct Player_t85696317;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void VRStandardAssets.Maze.Player::.ctor()
extern "C"  void Player__ctor_m719932455 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::add_OnPlayerShot(System.Action)
extern "C"  void Player_add_OnPlayerShot_m3725464942 (Player_t85696317 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::remove_OnPlayerShot(System.Action)
extern "C"  void Player_remove_OnPlayerShot_m172230185 (Player_t85696317 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VRStandardAssets.Maze.Player::get_Dead()
extern "C"  bool Player_get_Dead_m2447713914 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::Awake()
extern "C"  void Player_Awake_m2609516228 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::OnEnable()
extern "C"  void Player_OnEnable_m2805778019 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::OnDisable()
extern "C"  void Player_OnDisable_m2890679656 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::Restart()
extern "C"  void Player_Restart_m2161613312 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::GameComplete()
extern "C"  void Player_GameComplete_m37404054 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::TurretHit()
extern "C"  void Player_TurretHit_m3562914840 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Maze.Player::DyingSequence()
extern "C"  Il2CppObject * Player_DyingSequence_m40408087 (Player_t85696317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Maze.Player::PlayClipAndWait(UnityEngine.AudioClip)
extern "C"  Il2CppObject * Player_PlayClipAndWait_m3995932020 (Player_t85696317 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Maze.Player::HandleSetTarget(UnityEngine.Transform)
extern "C"  void Player_HandleSetTarget_m3822159653 (Player_t85696317 * __this, Transform_t3275118058 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
