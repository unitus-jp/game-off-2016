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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Common.SessionData
struct  SessionData_t3654246336  : public Il2CppObject
{
public:

public:
};

struct SessionData_t3654246336_StaticFields
{
public:
	// System.Int32 VRStandardAssets.Common.SessionData::s_HighScore
	int32_t ___s_HighScore_3;
	// System.Int32 VRStandardAssets.Common.SessionData::s_Score
	int32_t ___s_Score_4;
	// System.String VRStandardAssets.Common.SessionData::s_CurrentGame
	String_t* ___s_CurrentGame_5;

public:
	inline static int32_t get_offset_of_s_HighScore_3() { return static_cast<int32_t>(offsetof(SessionData_t3654246336_StaticFields, ___s_HighScore_3)); }
	inline int32_t get_s_HighScore_3() const { return ___s_HighScore_3; }
	inline int32_t* get_address_of_s_HighScore_3() { return &___s_HighScore_3; }
	inline void set_s_HighScore_3(int32_t value)
	{
		___s_HighScore_3 = value;
	}

	inline static int32_t get_offset_of_s_Score_4() { return static_cast<int32_t>(offsetof(SessionData_t3654246336_StaticFields, ___s_Score_4)); }
	inline int32_t get_s_Score_4() const { return ___s_Score_4; }
	inline int32_t* get_address_of_s_Score_4() { return &___s_Score_4; }
	inline void set_s_Score_4(int32_t value)
	{
		___s_Score_4 = value;
	}

	inline static int32_t get_offset_of_s_CurrentGame_5() { return static_cast<int32_t>(offsetof(SessionData_t3654246336_StaticFields, ___s_CurrentGame_5)); }
	inline String_t* get_s_CurrentGame_5() const { return ___s_CurrentGame_5; }
	inline String_t** get_address_of_s_CurrentGame_5() { return &___s_CurrentGame_5; }
	inline void set_s_CurrentGame_5(String_t* value)
	{
		___s_CurrentGame_5 = value;
		Il2CppCodeGenWriteBarrier(&___s_CurrentGame_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
