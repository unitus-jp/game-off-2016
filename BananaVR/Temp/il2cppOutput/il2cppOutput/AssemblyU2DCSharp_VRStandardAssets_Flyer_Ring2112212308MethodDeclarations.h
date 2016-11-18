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

// VRStandardAssets.Flyer.Ring
struct Ring_t2112212308;
// System.Action`1<VRStandardAssets.Flyer.Ring>
struct Action_1_t1914011690;
// UnityEngine.Collider
struct Collider_t3497673348;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void VRStandardAssets.Flyer.Ring::.ctor()
extern "C"  void Ring__ctor_m3430859345 (Ring_t2112212308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::add_OnRingRemove(System.Action`1<VRStandardAssets.Flyer.Ring>)
extern "C"  void Ring_add_OnRingRemove_m969935878 (Ring_t2112212308 * __this, Action_1_t1914011690 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::remove_OnRingRemove(System.Action`1<VRStandardAssets.Flyer.Ring>)
extern "C"  void Ring_remove_OnRingRemove_m3137787589 (Ring_t2112212308 * __this, Action_1_t1914011690 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::set_ShipAligned(System.Boolean)
extern "C"  void Ring_set_ShipAligned_m463552325 (Ring_t2112212308 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VRStandardAssets.Flyer.Ring::get_ShipAligned()
extern "C"  bool Ring_get_ShipAligned_m550382236 (Ring_t2112212308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::Awake()
extern "C"  void Ring_Awake_m3474899512 (Ring_t2112212308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::Update()
extern "C"  void Ring_Update_m46516118 (Ring_t2112212308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Ring_OnTriggerEnter_m2902194533 (Ring_t2112212308 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::OnDestroy()
extern "C"  void Ring_OnDestroy_m3244927794 (Ring_t2112212308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::Restart()
extern "C"  void Ring_Restart_m4179162804 (Ring_t2112212308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Flyer.Ring::SetRingColour(UnityEngine.Color)
extern "C"  void Ring_SetRingColour_m3838896823 (Ring_t2112212308 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
