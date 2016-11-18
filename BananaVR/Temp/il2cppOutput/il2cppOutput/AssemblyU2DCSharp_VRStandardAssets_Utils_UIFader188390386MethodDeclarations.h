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

// VRStandardAssets.Utils.UIFader
struct UIFader_t188390386;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void VRStandardAssets.Utils.UIFader::.ctor()
extern "C"  void UIFader__ctor_m4089943734 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.UIFader::add_OnFadeInComplete(System.Action)
extern "C"  void UIFader_add_OnFadeInComplete_m2448123482 (UIFader_t188390386 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.UIFader::remove_OnFadeInComplete(System.Action)
extern "C"  void UIFader_remove_OnFadeInComplete_m940932777 (UIFader_t188390386 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.UIFader::add_OnFadeOutComplete(System.Action)
extern "C"  void UIFader_add_OnFadeOutComplete_m1624997875 (UIFader_t188390386 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.UIFader::remove_OnFadeOutComplete(System.Action)
extern "C"  void UIFader_remove_OnFadeOutComplete_m2567279352 (UIFader_t188390386 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VRStandardAssets.Utils.UIFader::get_Visible()
extern "C"  bool UIFader_get_Visible_m1711392587 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.UIFader::set_Visible(System.Boolean)
extern "C"  void UIFader_set_Visible_m3696512366 (UIFader_t188390386 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::WaitForFadeIn()
extern "C"  Il2CppObject * UIFader_WaitForFadeIn_m3562548435 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::InteruptAndFadeIn()
extern "C"  Il2CppObject * UIFader_InteruptAndFadeIn_m4145995761 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::CheckAndFadeIn()
extern "C"  Il2CppObject * UIFader_CheckAndFadeIn_m2436934164 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::FadeIn()
extern "C"  Il2CppObject * UIFader_FadeIn_m1088759163 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::WaitForFadeOut()
extern "C"  Il2CppObject * UIFader_WaitForFadeOut_m1964204722 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::InteruptAndFadeOut()
extern "C"  Il2CppObject * UIFader_InteruptAndFadeOut_m4286541068 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::CheckAndFadeOut()
extern "C"  Il2CppObject * UIFader_CheckAndFadeOut_m716027711 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.UIFader::FadeOut()
extern "C"  Il2CppObject * UIFader_FadeOut_m2673641392 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.UIFader::SetVisible()
extern "C"  void UIFader_SetVisible_m2219549954 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.UIFader::SetInvisible()
extern "C"  void UIFader_SetInvisible_m2798343107 (UIFader_t188390386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
