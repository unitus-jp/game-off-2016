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

// ScoreManager
struct  ScoreManager_t3573108141  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ScoreManager::scorePoint
	int32_t ___scorePoint_2;
	// UnityEngine.UI.Text ScoreManager::scoreText
	Text_t356221433 * ___scoreText_3;

public:
	inline static int32_t get_offset_of_scorePoint_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scorePoint_2)); }
	inline int32_t get_scorePoint_2() const { return ___scorePoint_2; }
	inline int32_t* get_address_of_scorePoint_2() { return &___scorePoint_2; }
	inline void set_scorePoint_2(int32_t value)
	{
		___scorePoint_2 = value;
	}

	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___scoreText_3)); }
	inline Text_t356221433 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t356221433 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t356221433 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
