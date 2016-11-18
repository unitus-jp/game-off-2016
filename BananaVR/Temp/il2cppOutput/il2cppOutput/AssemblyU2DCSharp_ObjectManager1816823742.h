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
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectManager
struct  ObjectManager_t1816823742  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ObjectManager::banana
	GameObject_t1756533147 * ___banana_2;
	// UnityEngine.Vector3 ObjectManager::randomPos
	Vector3_t2243707580  ___randomPos_3;
	// System.Single ObjectManager::currentTime
	float ___currentTime_4;
	// System.Single ObjectManager::limitTime
	float ___limitTime_5;
	// System.Single ObjectManager::bananaSpawnTime
	float ___bananaSpawnTime_6;
	// System.Single ObjectManager::Timeboard
	float ___Timeboard_7;
	// UnityEngine.UI.Text ObjectManager::timeText
	Text_t356221433 * ___timeText_8;
	// UnityEngine.UI.Image ObjectManager::timeSlider
	Image_t2042527209 * ___timeSlider_9;

public:
	inline static int32_t get_offset_of_banana_2() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___banana_2)); }
	inline GameObject_t1756533147 * get_banana_2() const { return ___banana_2; }
	inline GameObject_t1756533147 ** get_address_of_banana_2() { return &___banana_2; }
	inline void set_banana_2(GameObject_t1756533147 * value)
	{
		___banana_2 = value;
		Il2CppCodeGenWriteBarrier(&___banana_2, value);
	}

	inline static int32_t get_offset_of_randomPos_3() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___randomPos_3)); }
	inline Vector3_t2243707580  get_randomPos_3() const { return ___randomPos_3; }
	inline Vector3_t2243707580 * get_address_of_randomPos_3() { return &___randomPos_3; }
	inline void set_randomPos_3(Vector3_t2243707580  value)
	{
		___randomPos_3 = value;
	}

	inline static int32_t get_offset_of_currentTime_4() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___currentTime_4)); }
	inline float get_currentTime_4() const { return ___currentTime_4; }
	inline float* get_address_of_currentTime_4() { return &___currentTime_4; }
	inline void set_currentTime_4(float value)
	{
		___currentTime_4 = value;
	}

	inline static int32_t get_offset_of_limitTime_5() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___limitTime_5)); }
	inline float get_limitTime_5() const { return ___limitTime_5; }
	inline float* get_address_of_limitTime_5() { return &___limitTime_5; }
	inline void set_limitTime_5(float value)
	{
		___limitTime_5 = value;
	}

	inline static int32_t get_offset_of_bananaSpawnTime_6() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___bananaSpawnTime_6)); }
	inline float get_bananaSpawnTime_6() const { return ___bananaSpawnTime_6; }
	inline float* get_address_of_bananaSpawnTime_6() { return &___bananaSpawnTime_6; }
	inline void set_bananaSpawnTime_6(float value)
	{
		___bananaSpawnTime_6 = value;
	}

	inline static int32_t get_offset_of_Timeboard_7() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___Timeboard_7)); }
	inline float get_Timeboard_7() const { return ___Timeboard_7; }
	inline float* get_address_of_Timeboard_7() { return &___Timeboard_7; }
	inline void set_Timeboard_7(float value)
	{
		___Timeboard_7 = value;
	}

	inline static int32_t get_offset_of_timeText_8() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___timeText_8)); }
	inline Text_t356221433 * get_timeText_8() const { return ___timeText_8; }
	inline Text_t356221433 ** get_address_of_timeText_8() { return &___timeText_8; }
	inline void set_timeText_8(Text_t356221433 * value)
	{
		___timeText_8 = value;
		Il2CppCodeGenWriteBarrier(&___timeText_8, value);
	}

	inline static int32_t get_offset_of_timeSlider_9() { return static_cast<int32_t>(offsetof(ObjectManager_t1816823742, ___timeSlider_9)); }
	inline Image_t2042527209 * get_timeSlider_9() const { return ___timeSlider_9; }
	inline Image_t2042527209 ** get_address_of_timeSlider_9() { return &___timeSlider_9; }
	inline void set_timeSlider_9(Image_t2042527209 * value)
	{
		___timeSlider_9 = value;
		Il2CppCodeGenWriteBarrier(&___timeSlider_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
