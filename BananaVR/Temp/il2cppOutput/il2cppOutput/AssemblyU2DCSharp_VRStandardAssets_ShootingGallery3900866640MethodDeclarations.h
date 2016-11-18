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

// VRStandardAssets.ShootingGallery.ShootingTarget
struct ShootingTarget_t3900866640;
// System.Action`1<VRStandardAssets.ShootingGallery.ShootingTarget>
struct Action_1_t3702666022;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::.ctor()
extern "C"  void ShootingTarget__ctor_m2706490810 (ShootingTarget_t3900866640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::add_OnRemove(System.Action`1<VRStandardAssets.ShootingGallery.ShootingTarget>)
extern "C"  void ShootingTarget_add_OnRemove_m224649672 (ShootingTarget_t3900866640 * __this, Action_1_t3702666022 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::remove_OnRemove(System.Action`1<VRStandardAssets.ShootingGallery.ShootingTarget>)
extern "C"  void ShootingTarget_remove_OnRemove_m3649715667 (ShootingTarget_t3900866640 * __this, Action_1_t3702666022 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::Awake()
extern "C"  void ShootingTarget_Awake_m2468264387 (ShootingTarget_t3900866640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::OnEnable()
extern "C"  void ShootingTarget_OnEnable_m3267268606 (ShootingTarget_t3900866640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::OnDisable()
extern "C"  void ShootingTarget_OnDisable_m3672498015 (ShootingTarget_t3900866640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::OnDestroy()
extern "C"  void ShootingTarget_OnDestroy_m1656281333 (ShootingTarget_t3900866640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::Restart(System.Single)
extern "C"  void ShootingTarget_Restart_m3637146214 (ShootingTarget_t3900866640 * __this, float ___gameTimeRemaining0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.ShootingGallery.ShootingTarget::MissTarget()
extern "C"  Il2CppObject * ShootingTarget_MissTarget_m3924261685 (ShootingTarget_t3900866640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.ShootingGallery.ShootingTarget::GameOver(System.Single)
extern "C"  Il2CppObject * ShootingTarget_GameOver_m1196380061 (ShootingTarget_t3900866640 * __this, float ___gameTimeRemaining0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingTarget::HandleDown()
extern "C"  void ShootingTarget_HandleDown_m1208121550 (ShootingTarget_t3900866640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
