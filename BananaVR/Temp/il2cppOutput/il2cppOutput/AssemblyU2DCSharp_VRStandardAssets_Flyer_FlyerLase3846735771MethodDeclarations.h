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

// VRStandardAssets.Flyer.FlyerLaser
struct FlyerLaser_t3846735771;
// VRStandardAssets.Utils.ObjectPool
struct ObjectPool_t2980402603;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Utils_ObjectPoo2980402603.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"

// System.Void VRStandardAssets.Flyer.FlyerLaser::.ctor()
extern "C"  void FlyerLaser__ctor_m1228299082 (FlyerLaser_t3846735771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VRStandardAssets.Utils.ObjectPool VRStandardAssets.Flyer.FlyerLaser::get_ObjectPool()
extern "C"  ObjectPool_t2980402603 * FlyerLaser_get_ObjectPool_m1192010891 (FlyerLaser_t3846735771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.FlyerLaser::set_ObjectPool(VRStandardAssets.Utils.ObjectPool)
extern "C"  void FlyerLaser_set_ObjectPool_m897456568 (FlyerLaser_t3846735771 * __this, ObjectPool_t2980402603 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.FlyerLaser::Awake()
extern "C"  void FlyerLaser_Awake_m3891522067 (FlyerLaser_t3846735771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.FlyerLaser::Update()
extern "C"  void FlyerLaser_Update_m1794471671 (FlyerLaser_t3846735771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.FlyerLaser::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void FlyerLaser_OnTriggerEnter_m4148340446 (FlyerLaser_t3846735771 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Flyer.FlyerLaser::Timeout()
extern "C"  Il2CppObject * FlyerLaser_Timeout_m1683148191 (FlyerLaser_t3846735771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.FlyerLaser::Restart()
extern "C"  void FlyerLaser_Restart_m3865418257 (FlyerLaser_t3846735771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
