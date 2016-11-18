#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t184887326;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.UIFader
struct  UIFader_t188390386  : public MonoBehaviour_t1158329972
{
public:
	// System.Action VRStandardAssets.Utils.UIFader::OnFadeInComplete
	Action_t3226471752 * ___OnFadeInComplete_2;
	// System.Action VRStandardAssets.Utils.UIFader::OnFadeOutComplete
	Action_t3226471752 * ___OnFadeOutComplete_3;
	// System.Single VRStandardAssets.Utils.UIFader::m_FadeSpeed
	float ___m_FadeSpeed_4;
	// UnityEngine.CanvasGroup[] VRStandardAssets.Utils.UIFader::m_GroupsToFade
	CanvasGroupU5BU5D_t184887326* ___m_GroupsToFade_5;
	// System.Boolean VRStandardAssets.Utils.UIFader::m_Fading
	bool ___m_Fading_6;
	// System.Boolean VRStandardAssets.Utils.UIFader::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_OnFadeInComplete_2() { return static_cast<int32_t>(offsetof(UIFader_t188390386, ___OnFadeInComplete_2)); }
	inline Action_t3226471752 * get_OnFadeInComplete_2() const { return ___OnFadeInComplete_2; }
	inline Action_t3226471752 ** get_address_of_OnFadeInComplete_2() { return &___OnFadeInComplete_2; }
	inline void set_OnFadeInComplete_2(Action_t3226471752 * value)
	{
		___OnFadeInComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnFadeInComplete_2, value);
	}

	inline static int32_t get_offset_of_OnFadeOutComplete_3() { return static_cast<int32_t>(offsetof(UIFader_t188390386, ___OnFadeOutComplete_3)); }
	inline Action_t3226471752 * get_OnFadeOutComplete_3() const { return ___OnFadeOutComplete_3; }
	inline Action_t3226471752 ** get_address_of_OnFadeOutComplete_3() { return &___OnFadeOutComplete_3; }
	inline void set_OnFadeOutComplete_3(Action_t3226471752 * value)
	{
		___OnFadeOutComplete_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnFadeOutComplete_3, value);
	}

	inline static int32_t get_offset_of_m_FadeSpeed_4() { return static_cast<int32_t>(offsetof(UIFader_t188390386, ___m_FadeSpeed_4)); }
	inline float get_m_FadeSpeed_4() const { return ___m_FadeSpeed_4; }
	inline float* get_address_of_m_FadeSpeed_4() { return &___m_FadeSpeed_4; }
	inline void set_m_FadeSpeed_4(float value)
	{
		___m_FadeSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_GroupsToFade_5() { return static_cast<int32_t>(offsetof(UIFader_t188390386, ___m_GroupsToFade_5)); }
	inline CanvasGroupU5BU5D_t184887326* get_m_GroupsToFade_5() const { return ___m_GroupsToFade_5; }
	inline CanvasGroupU5BU5D_t184887326** get_address_of_m_GroupsToFade_5() { return &___m_GroupsToFade_5; }
	inline void set_m_GroupsToFade_5(CanvasGroupU5BU5D_t184887326* value)
	{
		___m_GroupsToFade_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_GroupsToFade_5, value);
	}

	inline static int32_t get_offset_of_m_Fading_6() { return static_cast<int32_t>(offsetof(UIFader_t188390386, ___m_Fading_6)); }
	inline bool get_m_Fading_6() const { return ___m_Fading_6; }
	inline bool* get_address_of_m_Fading_6() { return &___m_Fading_6; }
	inline void set_m_Fading_6(bool value)
	{
		___m_Fading_6 = value;
	}

	inline static int32_t get_offset_of_U3CVisibleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UIFader_t188390386, ___U3CVisibleU3Ek__BackingField_7)); }
	inline bool get_U3CVisibleU3Ek__BackingField_7() const { return ___U3CVisibleU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CVisibleU3Ek__BackingField_7() { return &___U3CVisibleU3Ek__BackingField_7; }
	inline void set_U3CVisibleU3Ek__BackingField_7(bool value)
	{
		___U3CVisibleU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
