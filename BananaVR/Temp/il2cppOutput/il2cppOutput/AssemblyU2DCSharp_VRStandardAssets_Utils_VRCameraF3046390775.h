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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_t1428544621;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.VRCameraFade
struct  VRCameraFade_t3046390775  : public MonoBehaviour_t1158329972
{
public:
	// System.Action VRStandardAssets.Utils.VRCameraFade::OnFadeComplete
	Action_t3226471752 * ___OnFadeComplete_2;
	// UnityEngine.UI.Image VRStandardAssets.Utils.VRCameraFade::m_FadeImage
	Image_t2042527209 * ___m_FadeImage_3;
	// UnityEngine.Audio.AudioMixerSnapshot VRStandardAssets.Utils.VRCameraFade::m_DefaultSnapshot
	AudioMixerSnapshot_t1428544621 * ___m_DefaultSnapshot_4;
	// UnityEngine.Audio.AudioMixerSnapshot VRStandardAssets.Utils.VRCameraFade::m_FadedSnapshot
	AudioMixerSnapshot_t1428544621 * ___m_FadedSnapshot_5;
	// UnityEngine.Color VRStandardAssets.Utils.VRCameraFade::m_FadeColor
	Color_t2020392075  ___m_FadeColor_6;
	// System.Single VRStandardAssets.Utils.VRCameraFade::m_FadeDuration
	float ___m_FadeDuration_7;
	// System.Boolean VRStandardAssets.Utils.VRCameraFade::m_FadeInOnSceneLoad
	bool ___m_FadeInOnSceneLoad_8;
	// System.Boolean VRStandardAssets.Utils.VRCameraFade::m_FadeInOnStart
	bool ___m_FadeInOnStart_9;
	// System.Boolean VRStandardAssets.Utils.VRCameraFade::m_IsFading
	bool ___m_IsFading_10;
	// System.Single VRStandardAssets.Utils.VRCameraFade::m_FadeStartTime
	float ___m_FadeStartTime_11;
	// UnityEngine.Color VRStandardAssets.Utils.VRCameraFade::m_FadeOutColor
	Color_t2020392075  ___m_FadeOutColor_12;

public:
	inline static int32_t get_offset_of_OnFadeComplete_2() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___OnFadeComplete_2)); }
	inline Action_t3226471752 * get_OnFadeComplete_2() const { return ___OnFadeComplete_2; }
	inline Action_t3226471752 ** get_address_of_OnFadeComplete_2() { return &___OnFadeComplete_2; }
	inline void set_OnFadeComplete_2(Action_t3226471752 * value)
	{
		___OnFadeComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnFadeComplete_2, value);
	}

	inline static int32_t get_offset_of_m_FadeImage_3() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadeImage_3)); }
	inline Image_t2042527209 * get_m_FadeImage_3() const { return ___m_FadeImage_3; }
	inline Image_t2042527209 ** get_address_of_m_FadeImage_3() { return &___m_FadeImage_3; }
	inline void set_m_FadeImage_3(Image_t2042527209 * value)
	{
		___m_FadeImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadeImage_3, value);
	}

	inline static int32_t get_offset_of_m_DefaultSnapshot_4() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_DefaultSnapshot_4)); }
	inline AudioMixerSnapshot_t1428544621 * get_m_DefaultSnapshot_4() const { return ___m_DefaultSnapshot_4; }
	inline AudioMixerSnapshot_t1428544621 ** get_address_of_m_DefaultSnapshot_4() { return &___m_DefaultSnapshot_4; }
	inline void set_m_DefaultSnapshot_4(AudioMixerSnapshot_t1428544621 * value)
	{
		___m_DefaultSnapshot_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_DefaultSnapshot_4, value);
	}

	inline static int32_t get_offset_of_m_FadedSnapshot_5() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadedSnapshot_5)); }
	inline AudioMixerSnapshot_t1428544621 * get_m_FadedSnapshot_5() const { return ___m_FadedSnapshot_5; }
	inline AudioMixerSnapshot_t1428544621 ** get_address_of_m_FadedSnapshot_5() { return &___m_FadedSnapshot_5; }
	inline void set_m_FadedSnapshot_5(AudioMixerSnapshot_t1428544621 * value)
	{
		___m_FadedSnapshot_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_FadedSnapshot_5, value);
	}

	inline static int32_t get_offset_of_m_FadeColor_6() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadeColor_6)); }
	inline Color_t2020392075  get_m_FadeColor_6() const { return ___m_FadeColor_6; }
	inline Color_t2020392075 * get_address_of_m_FadeColor_6() { return &___m_FadeColor_6; }
	inline void set_m_FadeColor_6(Color_t2020392075  value)
	{
		___m_FadeColor_6 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_7() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadeDuration_7)); }
	inline float get_m_FadeDuration_7() const { return ___m_FadeDuration_7; }
	inline float* get_address_of_m_FadeDuration_7() { return &___m_FadeDuration_7; }
	inline void set_m_FadeDuration_7(float value)
	{
		___m_FadeDuration_7 = value;
	}

	inline static int32_t get_offset_of_m_FadeInOnSceneLoad_8() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadeInOnSceneLoad_8)); }
	inline bool get_m_FadeInOnSceneLoad_8() const { return ___m_FadeInOnSceneLoad_8; }
	inline bool* get_address_of_m_FadeInOnSceneLoad_8() { return &___m_FadeInOnSceneLoad_8; }
	inline void set_m_FadeInOnSceneLoad_8(bool value)
	{
		___m_FadeInOnSceneLoad_8 = value;
	}

	inline static int32_t get_offset_of_m_FadeInOnStart_9() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadeInOnStart_9)); }
	inline bool get_m_FadeInOnStart_9() const { return ___m_FadeInOnStart_9; }
	inline bool* get_address_of_m_FadeInOnStart_9() { return &___m_FadeInOnStart_9; }
	inline void set_m_FadeInOnStart_9(bool value)
	{
		___m_FadeInOnStart_9 = value;
	}

	inline static int32_t get_offset_of_m_IsFading_10() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_IsFading_10)); }
	inline bool get_m_IsFading_10() const { return ___m_IsFading_10; }
	inline bool* get_address_of_m_IsFading_10() { return &___m_IsFading_10; }
	inline void set_m_IsFading_10(bool value)
	{
		___m_IsFading_10 = value;
	}

	inline static int32_t get_offset_of_m_FadeStartTime_11() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadeStartTime_11)); }
	inline float get_m_FadeStartTime_11() const { return ___m_FadeStartTime_11; }
	inline float* get_address_of_m_FadeStartTime_11() { return &___m_FadeStartTime_11; }
	inline void set_m_FadeStartTime_11(float value)
	{
		___m_FadeStartTime_11 = value;
	}

	inline static int32_t get_offset_of_m_FadeOutColor_12() { return static_cast<int32_t>(offsetof(VRCameraFade_t3046390775, ___m_FadeOutColor_12)); }
	inline Color_t2020392075  get_m_FadeOutColor_12() const { return ___m_FadeOutColor_12; }
	inline Color_t2020392075 * get_address_of_m_FadeOutColor_12() { return &___m_FadeOutColor_12; }
	inline void set_m_FadeOutColor_12(Color_t2020392075  value)
	{
		___m_FadeOutColor_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
