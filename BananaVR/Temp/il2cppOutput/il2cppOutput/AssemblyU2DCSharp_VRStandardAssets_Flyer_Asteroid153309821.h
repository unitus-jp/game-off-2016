#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<VRStandardAssets.Flyer.Asteroid>
struct Action_1_t4250076499;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// VRStandardAssets.Flyer.FlyerHealthController
struct FlyerHealthController_t395795242;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.Asteroid
struct  Asteroid_t153309821  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<VRStandardAssets.Flyer.Asteroid> VRStandardAssets.Flyer.Asteroid::OnAsteroidRemovalDistance
	Action_1_t4250076499 * ___OnAsteroidRemovalDistance_2;
	// System.Action`1<VRStandardAssets.Flyer.Asteroid> VRStandardAssets.Flyer.Asteroid::OnAsteroidHit
	Action_1_t4250076499 * ___OnAsteroidHit_3;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_AsteroidMinSize
	float ___m_AsteroidMinSize_4;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_AsteroidMaxSize
	float ___m_AsteroidMaxSize_5;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_MinSpeed
	float ___m_MinSpeed_6;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_MaxSpeed
	float ___m_MaxSpeed_7;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_MinRotationSpeed
	float ___m_MinRotationSpeed_8;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_MaxRotationSpeed
	float ___m_MaxRotationSpeed_9;
	// System.Int32 VRStandardAssets.Flyer.Asteroid::m_PlayerDamage
	int32_t ___m_PlayerDamage_10;
	// System.Int32 VRStandardAssets.Flyer.Asteroid::m_Score
	int32_t ___m_Score_11;
	// UnityEngine.Rigidbody VRStandardAssets.Flyer.Asteroid::m_RigidBody
	Rigidbody_t4233889191 * ___m_RigidBody_12;
	// VRStandardAssets.Flyer.FlyerHealthController VRStandardAssets.Flyer.Asteroid::m_FlyerHealthController
	FlyerHealthController_t395795242 * ___m_FlyerHealthController_13;
	// UnityEngine.GameObject VRStandardAssets.Flyer.Asteroid::m_Flyer
	GameObject_t1756533147 * ___m_Flyer_14;
	// UnityEngine.Transform VRStandardAssets.Flyer.Asteroid::m_Cam
	Transform_t3275118058 * ___m_Cam_15;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_Speed
	float ___m_Speed_16;
	// UnityEngine.Vector3 VRStandardAssets.Flyer.Asteroid::m_RotationAxis
	Vector3_t2243707580  ___m_RotationAxis_17;
	// System.Single VRStandardAssets.Flyer.Asteroid::m_RotationSpeed
	float ___m_RotationSpeed_18;

public:
	inline static int32_t get_offset_of_OnAsteroidRemovalDistance_2() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___OnAsteroidRemovalDistance_2)); }
	inline Action_1_t4250076499 * get_OnAsteroidRemovalDistance_2() const { return ___OnAsteroidRemovalDistance_2; }
	inline Action_1_t4250076499 ** get_address_of_OnAsteroidRemovalDistance_2() { return &___OnAsteroidRemovalDistance_2; }
	inline void set_OnAsteroidRemovalDistance_2(Action_1_t4250076499 * value)
	{
		___OnAsteroidRemovalDistance_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAsteroidRemovalDistance_2, value);
	}

	inline static int32_t get_offset_of_OnAsteroidHit_3() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___OnAsteroidHit_3)); }
	inline Action_1_t4250076499 * get_OnAsteroidHit_3() const { return ___OnAsteroidHit_3; }
	inline Action_1_t4250076499 ** get_address_of_OnAsteroidHit_3() { return &___OnAsteroidHit_3; }
	inline void set_OnAsteroidHit_3(Action_1_t4250076499 * value)
	{
		___OnAsteroidHit_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAsteroidHit_3, value);
	}

	inline static int32_t get_offset_of_m_AsteroidMinSize_4() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_AsteroidMinSize_4)); }
	inline float get_m_AsteroidMinSize_4() const { return ___m_AsteroidMinSize_4; }
	inline float* get_address_of_m_AsteroidMinSize_4() { return &___m_AsteroidMinSize_4; }
	inline void set_m_AsteroidMinSize_4(float value)
	{
		___m_AsteroidMinSize_4 = value;
	}

	inline static int32_t get_offset_of_m_AsteroidMaxSize_5() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_AsteroidMaxSize_5)); }
	inline float get_m_AsteroidMaxSize_5() const { return ___m_AsteroidMaxSize_5; }
	inline float* get_address_of_m_AsteroidMaxSize_5() { return &___m_AsteroidMaxSize_5; }
	inline void set_m_AsteroidMaxSize_5(float value)
	{
		___m_AsteroidMaxSize_5 = value;
	}

	inline static int32_t get_offset_of_m_MinSpeed_6() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_MinSpeed_6)); }
	inline float get_m_MinSpeed_6() const { return ___m_MinSpeed_6; }
	inline float* get_address_of_m_MinSpeed_6() { return &___m_MinSpeed_6; }
	inline void set_m_MinSpeed_6(float value)
	{
		___m_MinSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxSpeed_7() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_MaxSpeed_7)); }
	inline float get_m_MaxSpeed_7() const { return ___m_MaxSpeed_7; }
	inline float* get_address_of_m_MaxSpeed_7() { return &___m_MaxSpeed_7; }
	inline void set_m_MaxSpeed_7(float value)
	{
		___m_MaxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_MinRotationSpeed_8() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_MinRotationSpeed_8)); }
	inline float get_m_MinRotationSpeed_8() const { return ___m_MinRotationSpeed_8; }
	inline float* get_address_of_m_MinRotationSpeed_8() { return &___m_MinRotationSpeed_8; }
	inline void set_m_MinRotationSpeed_8(float value)
	{
		___m_MinRotationSpeed_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxRotationSpeed_9() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_MaxRotationSpeed_9)); }
	inline float get_m_MaxRotationSpeed_9() const { return ___m_MaxRotationSpeed_9; }
	inline float* get_address_of_m_MaxRotationSpeed_9() { return &___m_MaxRotationSpeed_9; }
	inline void set_m_MaxRotationSpeed_9(float value)
	{
		___m_MaxRotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_PlayerDamage_10() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_PlayerDamage_10)); }
	inline int32_t get_m_PlayerDamage_10() const { return ___m_PlayerDamage_10; }
	inline int32_t* get_address_of_m_PlayerDamage_10() { return &___m_PlayerDamage_10; }
	inline void set_m_PlayerDamage_10(int32_t value)
	{
		___m_PlayerDamage_10 = value;
	}

	inline static int32_t get_offset_of_m_Score_11() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_Score_11)); }
	inline int32_t get_m_Score_11() const { return ___m_Score_11; }
	inline int32_t* get_address_of_m_Score_11() { return &___m_Score_11; }
	inline void set_m_Score_11(int32_t value)
	{
		___m_Score_11 = value;
	}

	inline static int32_t get_offset_of_m_RigidBody_12() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_RigidBody_12)); }
	inline Rigidbody_t4233889191 * get_m_RigidBody_12() const { return ___m_RigidBody_12; }
	inline Rigidbody_t4233889191 ** get_address_of_m_RigidBody_12() { return &___m_RigidBody_12; }
	inline void set_m_RigidBody_12(Rigidbody_t4233889191 * value)
	{
		___m_RigidBody_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_RigidBody_12, value);
	}

	inline static int32_t get_offset_of_m_FlyerHealthController_13() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_FlyerHealthController_13)); }
	inline FlyerHealthController_t395795242 * get_m_FlyerHealthController_13() const { return ___m_FlyerHealthController_13; }
	inline FlyerHealthController_t395795242 ** get_address_of_m_FlyerHealthController_13() { return &___m_FlyerHealthController_13; }
	inline void set_m_FlyerHealthController_13(FlyerHealthController_t395795242 * value)
	{
		___m_FlyerHealthController_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_FlyerHealthController_13, value);
	}

	inline static int32_t get_offset_of_m_Flyer_14() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_Flyer_14)); }
	inline GameObject_t1756533147 * get_m_Flyer_14() const { return ___m_Flyer_14; }
	inline GameObject_t1756533147 ** get_address_of_m_Flyer_14() { return &___m_Flyer_14; }
	inline void set_m_Flyer_14(GameObject_t1756533147 * value)
	{
		___m_Flyer_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_Flyer_14, value);
	}

	inline static int32_t get_offset_of_m_Cam_15() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_Cam_15)); }
	inline Transform_t3275118058 * get_m_Cam_15() const { return ___m_Cam_15; }
	inline Transform_t3275118058 ** get_address_of_m_Cam_15() { return &___m_Cam_15; }
	inline void set_m_Cam_15(Transform_t3275118058 * value)
	{
		___m_Cam_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_15, value);
	}

	inline static int32_t get_offset_of_m_Speed_16() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_Speed_16)); }
	inline float get_m_Speed_16() const { return ___m_Speed_16; }
	inline float* get_address_of_m_Speed_16() { return &___m_Speed_16; }
	inline void set_m_Speed_16(float value)
	{
		___m_Speed_16 = value;
	}

	inline static int32_t get_offset_of_m_RotationAxis_17() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_RotationAxis_17)); }
	inline Vector3_t2243707580  get_m_RotationAxis_17() const { return ___m_RotationAxis_17; }
	inline Vector3_t2243707580 * get_address_of_m_RotationAxis_17() { return &___m_RotationAxis_17; }
	inline void set_m_RotationAxis_17(Vector3_t2243707580  value)
	{
		___m_RotationAxis_17 = value;
	}

	inline static int32_t get_offset_of_m_RotationSpeed_18() { return static_cast<int32_t>(offsetof(Asteroid_t153309821, ___m_RotationSpeed_18)); }
	inline float get_m_RotationSpeed_18() const { return ___m_RotationSpeed_18; }
	inline float* get_address_of_m_RotationSpeed_18() { return &___m_RotationSpeed_18; }
	inline void set_m_RotationSpeed_18(float value)
	{
		___m_RotationSpeed_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
