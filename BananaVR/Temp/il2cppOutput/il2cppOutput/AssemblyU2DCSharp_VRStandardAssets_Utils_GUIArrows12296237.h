#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t2810717544;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.GUIArrows
struct  GUIArrows_t12296237  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Utils.GUIArrows::m_FadeDuration
	float ___m_FadeDuration_2;
	// System.Single VRStandardAssets.Utils.GUIArrows::m_ShowAngle
	float ___m_ShowAngle_3;
	// UnityEngine.Transform VRStandardAssets.Utils.GUIArrows::m_DesiredDirection
	Transform_t3275118058 * ___m_DesiredDirection_4;
	// UnityEngine.Transform VRStandardAssets.Utils.GUIArrows::m_Camera
	Transform_t3275118058 * ___m_Camera_5;
	// UnityEngine.Renderer[] VRStandardAssets.Utils.GUIArrows::m_ArrowRenderers
	RendererU5BU5D_t2810717544* ___m_ArrowRenderers_6;
	// System.Single VRStandardAssets.Utils.GUIArrows::m_CurrentAlpha
	float ___m_CurrentAlpha_7;
	// System.Single VRStandardAssets.Utils.GUIArrows::m_TargetAlpha
	float ___m_TargetAlpha_8;
	// System.Single VRStandardAssets.Utils.GUIArrows::m_FadeSpeed
	float ___m_FadeSpeed_9;

public:
	inline static int32_t get_offset_of_m_FadeDuration_2() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_FadeDuration_2)); }
	inline float get_m_FadeDuration_2() const { return ___m_FadeDuration_2; }
	inline float* get_address_of_m_FadeDuration_2() { return &___m_FadeDuration_2; }
	inline void set_m_FadeDuration_2(float value)
	{
		___m_FadeDuration_2 = value;
	}

	inline static int32_t get_offset_of_m_ShowAngle_3() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_ShowAngle_3)); }
	inline float get_m_ShowAngle_3() const { return ___m_ShowAngle_3; }
	inline float* get_address_of_m_ShowAngle_3() { return &___m_ShowAngle_3; }
	inline void set_m_ShowAngle_3(float value)
	{
		___m_ShowAngle_3 = value;
	}

	inline static int32_t get_offset_of_m_DesiredDirection_4() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_DesiredDirection_4)); }
	inline Transform_t3275118058 * get_m_DesiredDirection_4() const { return ___m_DesiredDirection_4; }
	inline Transform_t3275118058 ** get_address_of_m_DesiredDirection_4() { return &___m_DesiredDirection_4; }
	inline void set_m_DesiredDirection_4(Transform_t3275118058 * value)
	{
		___m_DesiredDirection_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_DesiredDirection_4, value);
	}

	inline static int32_t get_offset_of_m_Camera_5() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_Camera_5)); }
	inline Transform_t3275118058 * get_m_Camera_5() const { return ___m_Camera_5; }
	inline Transform_t3275118058 ** get_address_of_m_Camera_5() { return &___m_Camera_5; }
	inline void set_m_Camera_5(Transform_t3275118058 * value)
	{
		___m_Camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_5, value);
	}

	inline static int32_t get_offset_of_m_ArrowRenderers_6() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_ArrowRenderers_6)); }
	inline RendererU5BU5D_t2810717544* get_m_ArrowRenderers_6() const { return ___m_ArrowRenderers_6; }
	inline RendererU5BU5D_t2810717544** get_address_of_m_ArrowRenderers_6() { return &___m_ArrowRenderers_6; }
	inline void set_m_ArrowRenderers_6(RendererU5BU5D_t2810717544* value)
	{
		___m_ArrowRenderers_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_ArrowRenderers_6, value);
	}

	inline static int32_t get_offset_of_m_CurrentAlpha_7() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_CurrentAlpha_7)); }
	inline float get_m_CurrentAlpha_7() const { return ___m_CurrentAlpha_7; }
	inline float* get_address_of_m_CurrentAlpha_7() { return &___m_CurrentAlpha_7; }
	inline void set_m_CurrentAlpha_7(float value)
	{
		___m_CurrentAlpha_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetAlpha_8() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_TargetAlpha_8)); }
	inline float get_m_TargetAlpha_8() const { return ___m_TargetAlpha_8; }
	inline float* get_address_of_m_TargetAlpha_8() { return &___m_TargetAlpha_8; }
	inline void set_m_TargetAlpha_8(float value)
	{
		___m_TargetAlpha_8 = value;
	}

	inline static int32_t get_offset_of_m_FadeSpeed_9() { return static_cast<int32_t>(offsetof(GUIArrows_t12296237, ___m_FadeSpeed_9)); }
	inline float get_m_FadeSpeed_9() const { return ___m_FadeSpeed_9; }
	inline float* get_address_of_m_FadeSpeed_9() { return &___m_FadeSpeed_9; }
	inline void set_m_FadeSpeed_9(float value)
	{
		___m_FadeSpeed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
