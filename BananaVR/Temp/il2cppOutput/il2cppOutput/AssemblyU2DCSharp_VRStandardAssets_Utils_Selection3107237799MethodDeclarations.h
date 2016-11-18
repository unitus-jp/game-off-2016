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

// VRStandardAssets.Utils.SelectionSlider
struct SelectionSlider_t3107237799;
// System.Action
struct Action_t3226471752;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void VRStandardAssets.Utils.SelectionSlider::.ctor()
extern "C"  void SelectionSlider__ctor_m635276217 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::add_OnBarFilled(System.Action)
extern "C"  void SelectionSlider_add_OnBarFilled_m301380322 (SelectionSlider_t3107237799 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::remove_OnBarFilled(System.Action)
extern "C"  void SelectionSlider_remove_OnBarFilled_m1382887427 (SelectionSlider_t3107237799 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::OnEnable()
extern "C"  void SelectionSlider_OnEnable_m1669579505 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::OnDisable()
extern "C"  void SelectionSlider_OnDisable_m1733533430 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::Update()
extern "C"  void SelectionSlider_Update_m3445888264 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.SelectionSlider::WaitForBarToFill()
extern "C"  Il2CppObject * SelectionSlider_WaitForBarToFill_m2446728856 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VRStandardAssets.Utils.SelectionSlider::FillBar()
extern "C"  Il2CppObject * SelectionSlider_FillBar_m24011853 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::SetSliderValue(System.Single)
extern "C"  void SelectionSlider_SetSliderValue_m3463627404 (SelectionSlider_t3107237799 * __this, float ___sliderValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::HandleDown()
extern "C"  void SelectionSlider_HandleDown_m1266830325 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::HandleUp()
extern "C"  void SelectionSlider_HandleUp_m1334443554 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::HandleOver()
extern "C"  void SelectionSlider_HandleOver_m305412213 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRStandardAssets.Utils.SelectionSlider::HandleOut()
extern "C"  void SelectionSlider_HandleOut_m2798778261 (SelectionSlider_t3107237799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
