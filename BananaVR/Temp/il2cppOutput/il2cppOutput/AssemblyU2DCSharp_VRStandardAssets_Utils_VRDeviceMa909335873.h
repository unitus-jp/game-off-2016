#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.VRDeviceManager
struct VRDeviceManager_t909335873;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.VRDeviceManager
struct  VRDeviceManager_t909335873  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Utils.VRDeviceManager::m_RenderScale
	float ___m_RenderScale_2;

public:
	inline static int32_t get_offset_of_m_RenderScale_2() { return static_cast<int32_t>(offsetof(VRDeviceManager_t909335873, ___m_RenderScale_2)); }
	inline float get_m_RenderScale_2() const { return ___m_RenderScale_2; }
	inline float* get_address_of_m_RenderScale_2() { return &___m_RenderScale_2; }
	inline void set_m_RenderScale_2(float value)
	{
		___m_RenderScale_2 = value;
	}
};

struct VRDeviceManager_t909335873_StaticFields
{
public:
	// VRStandardAssets.Utils.VRDeviceManager VRStandardAssets.Utils.VRDeviceManager::s_Instance
	VRDeviceManager_t909335873 * ___s_Instance_3;

public:
	inline static int32_t get_offset_of_s_Instance_3() { return static_cast<int32_t>(offsetof(VRDeviceManager_t909335873_StaticFields, ___s_Instance_3)); }
	inline VRDeviceManager_t909335873 * get_s_Instance_3() const { return ___s_Instance_3; }
	inline VRDeviceManager_t909335873 ** get_address_of_s_Instance_3() { return &___s_Instance_3; }
	inline void set_s_Instance_3(VRDeviceManager_t909335873 * value)
	{
		___s_Instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
