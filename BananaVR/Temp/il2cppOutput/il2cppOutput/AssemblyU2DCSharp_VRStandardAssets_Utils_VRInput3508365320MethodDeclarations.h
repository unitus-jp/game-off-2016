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

// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// System.Action`1<VRStandardAssets.Utils.VRInput/SwipeDirection>
struct Action_1_t3781694127;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Utils_VRInput_S3979894745.h"

// System.Void VRStandardAssets.Utils.VRInput::.ctor()
extern "C"  void VRInput__ctor_m4132800836 (VRInput_t3508365320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::add_OnSwipe(System.Action`1<VRStandardAssets.Utils.VRInput/SwipeDirection>)
extern "C"  void VRInput_add_OnSwipe_m1557246242 (VRInput_t3508365320 * __this, Action_1_t3781694127 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::remove_OnSwipe(System.Action`1<VRStandardAssets.Utils.VRInput/SwipeDirection>)
extern "C"  void VRInput_remove_OnSwipe_m2079856063 (VRInput_t3508365320 * __this, Action_1_t3781694127 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::add_OnClick(System.Action)
extern "C"  void VRInput_add_OnClick_m1202339950 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::remove_OnClick(System.Action)
extern "C"  void VRInput_remove_OnClick_m1425846345 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::add_OnDown(System.Action)
extern "C"  void VRInput_add_OnDown_m2313358002 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::remove_OnDown(System.Action)
extern "C"  void VRInput_remove_OnDown_m1748271113 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::add_OnUp(System.Action)
extern "C"  void VRInput_add_OnUp_m3302711461 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::remove_OnUp(System.Action)
extern "C"  void VRInput_remove_OnUp_m102001040 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::add_OnDoubleClick(System.Action)
extern "C"  void VRInput_add_OnDoubleClick_m4252492771 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::remove_OnDoubleClick(System.Action)
extern "C"  void VRInput_remove_OnDoubleClick_m3756712488 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::add_OnCancel(System.Action)
extern "C"  void VRInput_add_OnCancel_m3363446012 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::remove_OnCancel(System.Action)
extern "C"  void VRInput_remove_OnCancel_m4182943349 (VRInput_t3508365320 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single VRStandardAssets.Utils.VRInput::get_DoubleClickTime()
extern "C"  float VRInput_get_DoubleClickTime_m4084066807 (VRInput_t3508365320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::Update()
extern "C"  void VRInput_Update_m4188240299 (VRInput_t3508365320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::CheckInput()
extern "C"  void VRInput_CheckInput_m136472690 (VRInput_t3508365320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VRStandardAssets.Utils.VRInput/SwipeDirection VRStandardAssets.Utils.VRInput::DetectSwipe()
extern "C"  int32_t VRInput_DetectSwipe_m4103019629 (VRInput_t3508365320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// VRStandardAssets.Utils.VRInput/SwipeDirection VRStandardAssets.Utils.VRInput::DetectKeyboardEmulatedSwipe()
extern "C"  int32_t VRInput_DetectKeyboardEmulatedSwipe_m3095615069 (VRInput_t3508365320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRInput::OnDestroy()
extern "C"  void VRInput_OnDestroy_m383875637 (VRInput_t3508365320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
