#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.ObjectPool
struct ObjectPool_t2980402603;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<VRStandardAssets.Flyer.Ring>
struct List_1_t1481333440;
// System.Collections.Generic.List`1<VRStandardAssets.Flyer.Asteroid>
struct List_1_t3817398249;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.EnvironmentController
struct  EnvironmentController_t2750041883  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Flyer.EnvironmentController::m_AsteroidSpawnFrequency
	float ___m_AsteroidSpawnFrequency_2;
	// System.Single VRStandardAssets.Flyer.EnvironmentController::m_RingSpawnFrequency
	float ___m_RingSpawnFrequency_3;
	// System.Int32 VRStandardAssets.Flyer.EnvironmentController::m_InitialAsteroidCount
	int32_t ___m_InitialAsteroidCount_4;
	// System.Single VRStandardAssets.Flyer.EnvironmentController::m_AsteroidSpawnZoneRadius
	float ___m_AsteroidSpawnZoneRadius_5;
	// System.Single VRStandardAssets.Flyer.EnvironmentController::m_RingSpawnZoneRadius
	float ___m_RingSpawnZoneRadius_6;
	// System.Single VRStandardAssets.Flyer.EnvironmentController::m_SpawnZoneDistance
	float ___m_SpawnZoneDistance_7;
	// VRStandardAssets.Utils.ObjectPool VRStandardAssets.Flyer.EnvironmentController::m_AsteroidObjectPool
	ObjectPool_t2980402603 * ___m_AsteroidObjectPool_8;
	// VRStandardAssets.Utils.ObjectPool VRStandardAssets.Flyer.EnvironmentController::m_AsteroidExplosionObjectPool
	ObjectPool_t2980402603 * ___m_AsteroidExplosionObjectPool_9;
	// VRStandardAssets.Utils.ObjectPool VRStandardAssets.Flyer.EnvironmentController::m_RingObjectPool
	ObjectPool_t2980402603 * ___m_RingObjectPool_10;
	// UnityEngine.Transform VRStandardAssets.Flyer.EnvironmentController::m_Cam
	Transform_t3275118058 * ___m_Cam_11;
	// System.Collections.Generic.List`1<VRStandardAssets.Flyer.Ring> VRStandardAssets.Flyer.EnvironmentController::m_Rings
	List_1_t1481333440 * ___m_Rings_12;
	// System.Collections.Generic.List`1<VRStandardAssets.Flyer.Asteroid> VRStandardAssets.Flyer.EnvironmentController::m_Asteroids
	List_1_t3817398249 * ___m_Asteroids_13;
	// System.Boolean VRStandardAssets.Flyer.EnvironmentController::m_Spawning
	bool ___m_Spawning_14;

public:
	inline static int32_t get_offset_of_m_AsteroidSpawnFrequency_2() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_AsteroidSpawnFrequency_2)); }
	inline float get_m_AsteroidSpawnFrequency_2() const { return ___m_AsteroidSpawnFrequency_2; }
	inline float* get_address_of_m_AsteroidSpawnFrequency_2() { return &___m_AsteroidSpawnFrequency_2; }
	inline void set_m_AsteroidSpawnFrequency_2(float value)
	{
		___m_AsteroidSpawnFrequency_2 = value;
	}

	inline static int32_t get_offset_of_m_RingSpawnFrequency_3() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_RingSpawnFrequency_3)); }
	inline float get_m_RingSpawnFrequency_3() const { return ___m_RingSpawnFrequency_3; }
	inline float* get_address_of_m_RingSpawnFrequency_3() { return &___m_RingSpawnFrequency_3; }
	inline void set_m_RingSpawnFrequency_3(float value)
	{
		___m_RingSpawnFrequency_3 = value;
	}

	inline static int32_t get_offset_of_m_InitialAsteroidCount_4() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_InitialAsteroidCount_4)); }
	inline int32_t get_m_InitialAsteroidCount_4() const { return ___m_InitialAsteroidCount_4; }
	inline int32_t* get_address_of_m_InitialAsteroidCount_4() { return &___m_InitialAsteroidCount_4; }
	inline void set_m_InitialAsteroidCount_4(int32_t value)
	{
		___m_InitialAsteroidCount_4 = value;
	}

	inline static int32_t get_offset_of_m_AsteroidSpawnZoneRadius_5() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_AsteroidSpawnZoneRadius_5)); }
	inline float get_m_AsteroidSpawnZoneRadius_5() const { return ___m_AsteroidSpawnZoneRadius_5; }
	inline float* get_address_of_m_AsteroidSpawnZoneRadius_5() { return &___m_AsteroidSpawnZoneRadius_5; }
	inline void set_m_AsteroidSpawnZoneRadius_5(float value)
	{
		___m_AsteroidSpawnZoneRadius_5 = value;
	}

	inline static int32_t get_offset_of_m_RingSpawnZoneRadius_6() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_RingSpawnZoneRadius_6)); }
	inline float get_m_RingSpawnZoneRadius_6() const { return ___m_RingSpawnZoneRadius_6; }
	inline float* get_address_of_m_RingSpawnZoneRadius_6() { return &___m_RingSpawnZoneRadius_6; }
	inline void set_m_RingSpawnZoneRadius_6(float value)
	{
		___m_RingSpawnZoneRadius_6 = value;
	}

	inline static int32_t get_offset_of_m_SpawnZoneDistance_7() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_SpawnZoneDistance_7)); }
	inline float get_m_SpawnZoneDistance_7() const { return ___m_SpawnZoneDistance_7; }
	inline float* get_address_of_m_SpawnZoneDistance_7() { return &___m_SpawnZoneDistance_7; }
	inline void set_m_SpawnZoneDistance_7(float value)
	{
		___m_SpawnZoneDistance_7 = value;
	}

	inline static int32_t get_offset_of_m_AsteroidObjectPool_8() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_AsteroidObjectPool_8)); }
	inline ObjectPool_t2980402603 * get_m_AsteroidObjectPool_8() const { return ___m_AsteroidObjectPool_8; }
	inline ObjectPool_t2980402603 ** get_address_of_m_AsteroidObjectPool_8() { return &___m_AsteroidObjectPool_8; }
	inline void set_m_AsteroidObjectPool_8(ObjectPool_t2980402603 * value)
	{
		___m_AsteroidObjectPool_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsteroidObjectPool_8, value);
	}

	inline static int32_t get_offset_of_m_AsteroidExplosionObjectPool_9() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_AsteroidExplosionObjectPool_9)); }
	inline ObjectPool_t2980402603 * get_m_AsteroidExplosionObjectPool_9() const { return ___m_AsteroidExplosionObjectPool_9; }
	inline ObjectPool_t2980402603 ** get_address_of_m_AsteroidExplosionObjectPool_9() { return &___m_AsteroidExplosionObjectPool_9; }
	inline void set_m_AsteroidExplosionObjectPool_9(ObjectPool_t2980402603 * value)
	{
		___m_AsteroidExplosionObjectPool_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_AsteroidExplosionObjectPool_9, value);
	}

	inline static int32_t get_offset_of_m_RingObjectPool_10() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_RingObjectPool_10)); }
	inline ObjectPool_t2980402603 * get_m_RingObjectPool_10() const { return ___m_RingObjectPool_10; }
	inline ObjectPool_t2980402603 ** get_address_of_m_RingObjectPool_10() { return &___m_RingObjectPool_10; }
	inline void set_m_RingObjectPool_10(ObjectPool_t2980402603 * value)
	{
		___m_RingObjectPool_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_RingObjectPool_10, value);
	}

	inline static int32_t get_offset_of_m_Cam_11() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_Cam_11)); }
	inline Transform_t3275118058 * get_m_Cam_11() const { return ___m_Cam_11; }
	inline Transform_t3275118058 ** get_address_of_m_Cam_11() { return &___m_Cam_11; }
	inline void set_m_Cam_11(Transform_t3275118058 * value)
	{
		___m_Cam_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_11, value);
	}

	inline static int32_t get_offset_of_m_Rings_12() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_Rings_12)); }
	inline List_1_t1481333440 * get_m_Rings_12() const { return ___m_Rings_12; }
	inline List_1_t1481333440 ** get_address_of_m_Rings_12() { return &___m_Rings_12; }
	inline void set_m_Rings_12(List_1_t1481333440 * value)
	{
		___m_Rings_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rings_12, value);
	}

	inline static int32_t get_offset_of_m_Asteroids_13() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_Asteroids_13)); }
	inline List_1_t3817398249 * get_m_Asteroids_13() const { return ___m_Asteroids_13; }
	inline List_1_t3817398249 ** get_address_of_m_Asteroids_13() { return &___m_Asteroids_13; }
	inline void set_m_Asteroids_13(List_1_t3817398249 * value)
	{
		___m_Asteroids_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_Asteroids_13, value);
	}

	inline static int32_t get_offset_of_m_Spawning_14() { return static_cast<int32_t>(offsetof(EnvironmentController_t2750041883, ___m_Spawning_14)); }
	inline bool get_m_Spawning_14() const { return ___m_Spawning_14; }
	inline bool* get_address_of_m_Spawning_14() { return &___m_Spawning_14; }
	inline void set_m_Spawning_14(bool value)
	{
		___m_Spawning_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
