#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<VRStandardAssets.Flyer.AsteroidExplosion>
struct Action_1_t3342068884;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1490986844;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Flyer.AsteroidExplosion
struct  AsteroidExplosion_t3540269502  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<VRStandardAssets.Flyer.AsteroidExplosion> VRStandardAssets.Flyer.AsteroidExplosion::OnExplosionEnded
	Action_1_t3342068884 * ___OnExplosionEnded_2;
	// UnityEngine.ParticleSystem[] VRStandardAssets.Flyer.AsteroidExplosion::m_ParticleSystems
	ParticleSystemU5BU5D_t1490986844* ___m_ParticleSystems_3;
	// System.Single VRStandardAssets.Flyer.AsteroidExplosion::m_Duration
	float ___m_Duration_4;

public:
	inline static int32_t get_offset_of_OnExplosionEnded_2() { return static_cast<int32_t>(offsetof(AsteroidExplosion_t3540269502, ___OnExplosionEnded_2)); }
	inline Action_1_t3342068884 * get_OnExplosionEnded_2() const { return ___OnExplosionEnded_2; }
	inline Action_1_t3342068884 ** get_address_of_OnExplosionEnded_2() { return &___OnExplosionEnded_2; }
	inline void set_OnExplosionEnded_2(Action_1_t3342068884 * value)
	{
		___OnExplosionEnded_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnExplosionEnded_2, value);
	}

	inline static int32_t get_offset_of_m_ParticleSystems_3() { return static_cast<int32_t>(offsetof(AsteroidExplosion_t3540269502, ___m_ParticleSystems_3)); }
	inline ParticleSystemU5BU5D_t1490986844* get_m_ParticleSystems_3() const { return ___m_ParticleSystems_3; }
	inline ParticleSystemU5BU5D_t1490986844** get_address_of_m_ParticleSystems_3() { return &___m_ParticleSystems_3; }
	inline void set_m_ParticleSystems_3(ParticleSystemU5BU5D_t1490986844* value)
	{
		___m_ParticleSystems_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParticleSystems_3, value);
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AsteroidExplosion_t3540269502, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
