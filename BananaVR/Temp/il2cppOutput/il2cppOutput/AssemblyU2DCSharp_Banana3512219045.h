#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// ScoreManager
struct ScoreManager_t3573108141;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Banana
struct  Banana_t3512219045  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Banana::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Int32 Banana::getScore
	int32_t ___getScore_3;
	// ScoreManager Banana::scoreManager
	ScoreManager_t3573108141 * ___scoreManager_4;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(Banana_t3512219045, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_getScore_3() { return static_cast<int32_t>(offsetof(Banana_t3512219045, ___getScore_3)); }
	inline int32_t get_getScore_3() const { return ___getScore_3; }
	inline int32_t* get_address_of_getScore_3() { return &___getScore_3; }
	inline void set_getScore_3(int32_t value)
	{
		___getScore_3 = value;
	}

	inline static int32_t get_offset_of_scoreManager_4() { return static_cast<int32_t>(offsetof(Banana_t3512219045, ___scoreManager_4)); }
	inline ScoreManager_t3573108141 * get_scoreManager_4() const { return ___scoreManager_4; }
	inline ScoreManager_t3573108141 ** get_address_of_scoreManager_4() { return &___scoreManager_4; }
	inline void set_scoreManager_4(ScoreManager_t3573108141 * value)
	{
		___scoreManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreManager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
