#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.VRFPSCounter
struct  VRFPSCounter_t2405530911  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Utils.VRFPSCounter::m_DeltaTime
	float ___m_DeltaTime_2;
	// UnityEngine.UI.Text VRStandardAssets.Utils.VRFPSCounter::m_Text
	Text_t356221433 * ___m_Text_3;

public:
	inline static int32_t get_offset_of_m_DeltaTime_2() { return static_cast<int32_t>(offsetof(VRFPSCounter_t2405530911, ___m_DeltaTime_2)); }
	inline float get_m_DeltaTime_2() const { return ___m_DeltaTime_2; }
	inline float* get_address_of_m_DeltaTime_2() { return &___m_DeltaTime_2; }
	inline void set_m_DeltaTime_2(float value)
	{
		___m_DeltaTime_2 = value;
	}

	inline static int32_t get_offset_of_m_Text_3() { return static_cast<int32_t>(offsetof(VRFPSCounter_t2405530911, ___m_Text_3)); }
	inline Text_t356221433 * get_m_Text_3() const { return ___m_Text_3; }
	inline Text_t356221433 ** get_address_of_m_Text_3() { return &___m_Text_3; }
	inline void set_m_Text_3(Text_t356221433 * value)
	{
		___m_Text_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
