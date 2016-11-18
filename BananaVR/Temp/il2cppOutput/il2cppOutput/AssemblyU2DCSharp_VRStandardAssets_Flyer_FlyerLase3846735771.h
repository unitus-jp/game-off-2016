#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// VRStandardAssets.Utils.ObjectPool
struct ObjectPool_t2980402603;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.FlyerLaser
struct  FlyerLaser_t3846735771  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Flyer.FlyerLaser::m_Speed
	float ___m_Speed_2;
	// System.Single VRStandardAssets.Flyer.FlyerLaser::m_LaserLifeDuration
	float ___m_LaserLifeDuration_3;
	// UnityEngine.Rigidbody VRStandardAssets.Flyer.FlyerLaser::m_RigidBody
	Rigidbody_t4233889191 * ___m_RigidBody_4;
	// System.Boolean VRStandardAssets.Flyer.FlyerLaser::m_Hit
	bool ___m_Hit_5;
	// VRStandardAssets.Utils.ObjectPool VRStandardAssets.Flyer.FlyerLaser::<ObjectPool>k__BackingField
	ObjectPool_t2980402603 * ___U3CObjectPoolU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Speed_2() { return static_cast<int32_t>(offsetof(FlyerLaser_t3846735771, ___m_Speed_2)); }
	inline float get_m_Speed_2() const { return ___m_Speed_2; }
	inline float* get_address_of_m_Speed_2() { return &___m_Speed_2; }
	inline void set_m_Speed_2(float value)
	{
		___m_Speed_2 = value;
	}

	inline static int32_t get_offset_of_m_LaserLifeDuration_3() { return static_cast<int32_t>(offsetof(FlyerLaser_t3846735771, ___m_LaserLifeDuration_3)); }
	inline float get_m_LaserLifeDuration_3() const { return ___m_LaserLifeDuration_3; }
	inline float* get_address_of_m_LaserLifeDuration_3() { return &___m_LaserLifeDuration_3; }
	inline void set_m_LaserLifeDuration_3(float value)
	{
		___m_LaserLifeDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_RigidBody_4() { return static_cast<int32_t>(offsetof(FlyerLaser_t3846735771, ___m_RigidBody_4)); }
	inline Rigidbody_t4233889191 * get_m_RigidBody_4() const { return ___m_RigidBody_4; }
	inline Rigidbody_t4233889191 ** get_address_of_m_RigidBody_4() { return &___m_RigidBody_4; }
	inline void set_m_RigidBody_4(Rigidbody_t4233889191 * value)
	{
		___m_RigidBody_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_RigidBody_4, value);
	}

	inline static int32_t get_offset_of_m_Hit_5() { return static_cast<int32_t>(offsetof(FlyerLaser_t3846735771, ___m_Hit_5)); }
	inline bool get_m_Hit_5() const { return ___m_Hit_5; }
	inline bool* get_address_of_m_Hit_5() { return &___m_Hit_5; }
	inline void set_m_Hit_5(bool value)
	{
		___m_Hit_5 = value;
	}

	inline static int32_t get_offset_of_U3CObjectPoolU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FlyerLaser_t3846735771, ___U3CObjectPoolU3Ek__BackingField_6)); }
	inline ObjectPool_t2980402603 * get_U3CObjectPoolU3Ek__BackingField_6() const { return ___U3CObjectPoolU3Ek__BackingField_6; }
	inline ObjectPool_t2980402603 ** get_address_of_U3CObjectPoolU3Ek__BackingField_6() { return &___U3CObjectPoolU3Ek__BackingField_6; }
	inline void set_U3CObjectPoolU3Ek__BackingField_6(ObjectPool_t2980402603 * value)
	{
		___U3CObjectPoolU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CObjectPoolU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
