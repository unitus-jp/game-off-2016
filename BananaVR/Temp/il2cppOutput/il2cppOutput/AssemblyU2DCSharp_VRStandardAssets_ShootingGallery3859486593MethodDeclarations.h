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

// VRStandardAssets.ShootingGallery.ShootingGalleryController
struct ShootingGalleryController_t3859486593;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// VRStandardAssets.ShootingGallery.ShootingTarget
struct ShootingTarget_t3900866640;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_VRStandardAssets_ShootingGallery3900866640.h"

// System.Void VRStandardAssets.ShootingGallery.ShootingGalleryController::.ctor()
extern "C"  void ShootingGalleryController__ctor_m3994263699 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VRStandardAssets.ShootingGallery.ShootingGalleryController::get_IsPlaying()
extern "C"  bool ShootingGalleryController_get_IsPlaying_m2889406096 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingGalleryController::set_IsPlaying(System.Boolean)
extern "C"  void ShootingGalleryController_set_IsPlaying_m812537451 (ShootingGalleryController_t3859486593 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.ShootingGallery.ShootingGalleryController::Start()
extern "C"  Il2CppObject * ShootingGalleryController_Start_m805411873 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.ShootingGallery.ShootingGalleryController::StartPhase()
extern "C"  Il2CppObject * ShootingGalleryController_StartPhase_m3808088188 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.ShootingGallery.ShootingGalleryController::PlayPhase()
extern "C"  Il2CppObject * ShootingGalleryController_PlayPhase_m980184138 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.ShootingGallery.ShootingGalleryController::EndPhase()
extern "C"  Il2CppObject * ShootingGalleryController_EndPhase_m3654918629 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.ShootingGallery.ShootingGalleryController::PlayUpdate()
extern "C"  Il2CppObject * ShootingGalleryController_PlayUpdate_m3564785628 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingGalleryController::Spawn(System.Single)
extern "C"  void ShootingGalleryController_Spawn_m3023273537 (ShootingGalleryController_t3859486593 * __this, float ___timeRemaining0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 VRStandardAssets.ShootingGallery.ShootingGalleryController::SpawnPosition()
extern "C"  Vector3_t2243707580  ShootingGalleryController_SpawnPosition_m876638731 (ShootingGalleryController_t3859486593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.ShootingGallery.ShootingGalleryController::HandleTargetRemoved(VRStandardAssets.ShootingGallery.ShootingTarget)
extern "C"  void ShootingGalleryController_HandleTargetRemoved_m3908375691 (ShootingGalleryController_t3859486593 * __this, ShootingTarget_t3900866640 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
