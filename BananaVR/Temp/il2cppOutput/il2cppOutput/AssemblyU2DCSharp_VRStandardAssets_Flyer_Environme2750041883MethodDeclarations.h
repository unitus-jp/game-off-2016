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

// VRStandardAssets.Flyer.EnvironmentController
struct EnvironmentController_t2750041883;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// VRStandardAssets.Flyer.Asteroid
struct Asteroid_t153309821;
// VRStandardAssets.Flyer.AsteroidExplosion
struct AsteroidExplosion_t3540269502;
// VRStandardAssets.Flyer.Ring
struct Ring_t2112212308;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Flyer_Asteroid153309821.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Flyer_AsteroidE3540269502.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Flyer_Ring2112212308.h"

// System.Void VRStandardAssets.Flyer.EnvironmentController::.ctor()
extern "C"  void EnvironmentController__ctor_m2850890038 (EnvironmentController_t2750041883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::StartEnvironment()
extern "C"  void EnvironmentController_StartEnvironment_m2248348699 (EnvironmentController_t2750041883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::StopEnvironment()
extern "C"  void EnvironmentController_StopEnvironment_m3418864475 (EnvironmentController_t2750041883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Flyer.EnvironmentController::SpawnAsteroidRoutine()
extern "C"  Il2CppObject * EnvironmentController_SpawnAsteroidRoutine_m1968655670 (EnvironmentController_t2750041883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::SpawnAsteroid()
extern "C"  void EnvironmentController_SpawnAsteroid_m2653450400 (EnvironmentController_t2750041883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Flyer.EnvironmentController::SpawnRingRoutine()
extern "C"  Il2CppObject * EnvironmentController_SpawnRingRoutine_m1976821587 (EnvironmentController_t2750041883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::SpawnRing()
extern "C"  void EnvironmentController_SpawnRing_m2604038855 (EnvironmentController_t2750041883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::HandleAsteroidRemoval(VRStandardAssets.Flyer.Asteroid)
extern "C"  void EnvironmentController_HandleAsteroidRemoval_m1274468286 (EnvironmentController_t2750041883 * __this, Asteroid_t153309821 * ___asteroid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::HandleAsteroidHit(VRStandardAssets.Flyer.Asteroid)
extern "C"  void EnvironmentController_HandleAsteroidHit_m3407959217 (EnvironmentController_t2750041883 * __this, Asteroid_t153309821 * ___asteroid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::HandleExplosionEnded(VRStandardAssets.Flyer.AsteroidExplosion)
extern "C"  void EnvironmentController_HandleExplosionEnded_m2196791021 (EnvironmentController_t2750041883 * __this, AsteroidExplosion_t3540269502 * ___explosion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.EnvironmentController::HandleRingRemove(VRStandardAssets.Flyer.Ring)
extern "C"  void EnvironmentController_HandleRingRemove_m1931908702 (EnvironmentController_t2750041883 * __this, Ring_t2112212308 * ___ring0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
