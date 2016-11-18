#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1869584967.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Utils.PlatformDependentText/PlatformTextPair
struct  PlatformTextPair_t1763532269  : public Il2CppObject
{
public:
	// UnityEngine.RuntimePlatform VRStandardAssets.Utils.PlatformDependentText/PlatformTextPair::m_Platform
	int32_t ___m_Platform_0;
	// System.String VRStandardAssets.Utils.PlatformDependentText/PlatformTextPair::m_Text
	String_t* ___m_Text_1;

public:
	inline static int32_t get_offset_of_m_Platform_0() { return static_cast<int32_t>(offsetof(PlatformTextPair_t1763532269, ___m_Platform_0)); }
	inline int32_t get_m_Platform_0() const { return ___m_Platform_0; }
	inline int32_t* get_address_of_m_Platform_0() { return &___m_Platform_0; }
	inline void set_m_Platform_0(int32_t value)
	{
		___m_Platform_0 = value;
	}

	inline static int32_t get_offset_of_m_Text_1() { return static_cast<int32_t>(offsetof(PlatformTextPair_t1763532269, ___m_Text_1)); }
	inline String_t* get_m_Text_1() const { return ___m_Text_1; }
	inline String_t** get_address_of_m_Text_1() { return &___m_Text_1; }
	inline void set_m_Text_1(String_t* value)
	{
		___m_Text_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
