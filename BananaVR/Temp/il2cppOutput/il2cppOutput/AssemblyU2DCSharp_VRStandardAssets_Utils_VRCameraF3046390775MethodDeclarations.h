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

// VRStandardAssets.Utils.VRCameraFade
struct VRCameraFade_t3046390775;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void VRStandardAssets.Utils.VRCameraFade::.ctor()
extern "C"  void VRCameraFade__ctor_m3682914259 (VRCameraFade_t3046390775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::add_OnFadeComplete(System.Action)
extern "C"  void VRCameraFade_add_OnFadeComplete_m1905454532 (VRCameraFade_t3046390775 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::remove_OnFadeComplete(System.Action)
extern "C"  void VRCameraFade_remove_OnFadeComplete_m3715142381 (VRCameraFade_t3046390775 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VRStandardAssets.Utils.VRCameraFade::get_IsFading()
extern "C"  bool VRCameraFade_get_IsFading_m4013217459 (VRCameraFade_t3046390775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::Awake()
extern "C"  void VRCameraFade_Awake_m2712346194 (VRCameraFade_t3046390775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::Start()
extern "C"  void VRCameraFade_Start_m249737159 (VRCameraFade_t3046390775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::OnLevelWasLoaded()
extern "C"  void VRCameraFade_OnLevelWasLoaded_m777863214 (VRCameraFade_t3046390775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::FadeOut(System.Boolean)
extern "C"  void VRCameraFade_FadeOut_m3543953990 (VRCameraFade_t3046390775 * __this, bool ___fadeAudio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::FadeOut(System.Single,System.Boolean)
extern "C"  void VRCameraFade_FadeOut_m1162939601 (VRCameraFade_t3046390775 * __this, float ___duration0, bool ___fadeAudio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::FadeIn(System.Boolean)
extern "C"  void VRCameraFade_FadeIn_m1247796877 (VRCameraFade_t3046390775 * __this, bool ___fadeAudio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.VRCameraFade::FadeIn(System.Single,System.Boolean)
extern "C"  void VRCameraFade_FadeIn_m1435398612 (VRCameraFade_t3046390775 * __this, float ___duration0, bool ___fadeAudio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.VRCameraFade::BeginFadeOut(System.Boolean)
extern "C"  Il2CppObject * VRCameraFade_BeginFadeOut_m2790387241 (VRCameraFade_t3046390775 * __this, bool ___fadeAudio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.VRCameraFade::BeginFadeOut(System.Single,System.Boolean)
extern "C"  Il2CppObject * VRCameraFade_BeginFadeOut_m2979994836 (VRCameraFade_t3046390775 * __this, float ___duration0, bool ___fadeAudio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.VRCameraFade::BeginFadeIn(System.Boolean)
extern "C"  Il2CppObject * VRCameraFade_BeginFadeIn_m1832104936 (VRCameraFade_t3046390775 * __this, bool ___fadeAudio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.VRCameraFade::BeginFadeIn(System.Single,System.Boolean)
extern "C"  Il2CppObject * VRCameraFade_BeginFadeIn_m2453267201 (VRCameraFade_t3046390775 * __this, float ___duration0, bool ___fadeAudio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.VRCameraFade::BeginFade(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Il2CppObject * VRCameraFade_BeginFade_m2914291209 (VRCameraFade_t3046390775 * __this, Color_t2020392075  ___startCol0, Color_t2020392075  ___endCol1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
