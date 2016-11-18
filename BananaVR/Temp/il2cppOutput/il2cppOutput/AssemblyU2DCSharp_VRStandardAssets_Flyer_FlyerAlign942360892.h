#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Flyer.Ring
struct Ring_t2112212308;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.FlyerAlignmentChecker
struct  FlyerAlignmentChecker_t942360892  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Flyer.FlyerAlignmentChecker::m_Radius
	float ___m_Radius_2;
	// VRStandardAssets.Flyer.Ring VRStandardAssets.Flyer.FlyerAlignmentChecker::m_CurrentRing
	Ring_t2112212308 * ___m_CurrentRing_3;
	// System.Boolean VRStandardAssets.Flyer.FlyerAlignmentChecker::m_IsGameRunning
	bool ___m_IsGameRunning_4;

public:
	inline static int32_t get_offset_of_m_Radius_2() { return static_cast<int32_t>(offsetof(FlyerAlignmentChecker_t942360892, ___m_Radius_2)); }
	inline float get_m_Radius_2() const { return ___m_Radius_2; }
	inline float* get_address_of_m_Radius_2() { return &___m_Radius_2; }
	inline void set_m_Radius_2(float value)
	{
		___m_Radius_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentRing_3() { return static_cast<int32_t>(offsetof(FlyerAlignmentChecker_t942360892, ___m_CurrentRing_3)); }
	inline Ring_t2112212308 * get_m_CurrentRing_3() const { return ___m_CurrentRing_3; }
	inline Ring_t2112212308 ** get_address_of_m_CurrentRing_3() { return &___m_CurrentRing_3; }
	inline void set_m_CurrentRing_3(Ring_t2112212308 * value)
	{
		___m_CurrentRing_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentRing_3, value);
	}

	inline static int32_t get_offset_of_m_IsGameRunning_4() { return static_cast<int32_t>(offsetof(FlyerAlignmentChecker_t942360892, ___m_IsGameRunning_4)); }
	inline bool get_m_IsGameRunning_4() const { return ___m_IsGameRunning_4; }
	inline bool* get_address_of_m_IsGameRunning_4() { return &___m_IsGameRunning_4; }
	inline void set_m_IsGameRunning_4(bool value)
	{
		___m_IsGameRunning_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
