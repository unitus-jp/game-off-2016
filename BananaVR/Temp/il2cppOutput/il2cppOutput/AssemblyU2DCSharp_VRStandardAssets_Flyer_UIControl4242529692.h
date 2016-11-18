#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.UIFader
struct UIFader_t188390386;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.UIController
struct  UIController_t4242529692  : public MonoBehaviour_t1158329972
{
public:
	// VRStandardAssets.Utils.UIFader VRStandardAssets.Flyer.UIController::m_IntroUI
	UIFader_t188390386 * ___m_IntroUI_2;
	// VRStandardAssets.Utils.UIFader VRStandardAssets.Flyer.UIController::m_OutroUI
	UIFader_t188390386 * ___m_OutroUI_3;
	// UnityEngine.UI.Text VRStandardAssets.Flyer.UIController::m_TotalScore
	Text_t356221433 * ___m_TotalScore_4;
	// UnityEngine.UI.Text VRStandardAssets.Flyer.UIController::m_HighScore
	Text_t356221433 * ___m_HighScore_5;

public:
	inline static int32_t get_offset_of_m_IntroUI_2() { return static_cast<int32_t>(offsetof(UIController_t4242529692, ___m_IntroUI_2)); }
	inline UIFader_t188390386 * get_m_IntroUI_2() const { return ___m_IntroUI_2; }
	inline UIFader_t188390386 ** get_address_of_m_IntroUI_2() { return &___m_IntroUI_2; }
	inline void set_m_IntroUI_2(UIFader_t188390386 * value)
	{
		___m_IntroUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_IntroUI_2, value);
	}

	inline static int32_t get_offset_of_m_OutroUI_3() { return static_cast<int32_t>(offsetof(UIController_t4242529692, ___m_OutroUI_3)); }
	inline UIFader_t188390386 * get_m_OutroUI_3() const { return ___m_OutroUI_3; }
	inline UIFader_t188390386 ** get_address_of_m_OutroUI_3() { return &___m_OutroUI_3; }
	inline void set_m_OutroUI_3(UIFader_t188390386 * value)
	{
		___m_OutroUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_OutroUI_3, value);
	}

	inline static int32_t get_offset_of_m_TotalScore_4() { return static_cast<int32_t>(offsetof(UIController_t4242529692, ___m_TotalScore_4)); }
	inline Text_t356221433 * get_m_TotalScore_4() const { return ___m_TotalScore_4; }
	inline Text_t356221433 ** get_address_of_m_TotalScore_4() { return &___m_TotalScore_4; }
	inline void set_m_TotalScore_4(Text_t356221433 * value)
	{
		___m_TotalScore_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_TotalScore_4, value);
	}

	inline static int32_t get_offset_of_m_HighScore_5() { return static_cast<int32_t>(offsetof(UIController_t4242529692, ___m_HighScore_5)); }
	inline Text_t356221433 * get_m_HighScore_5() const { return ___m_HighScore_5; }
	inline Text_t356221433 ** get_address_of_m_HighScore_5() { return &___m_HighScore_5; }
	inline void set_m_HighScore_5(Text_t356221433 * value)
	{
		___m_HighScore_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_HighScore_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
