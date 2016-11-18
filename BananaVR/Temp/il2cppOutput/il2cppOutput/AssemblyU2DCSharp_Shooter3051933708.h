#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooter
struct  Shooter_t3051933708  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LineRenderer Shooter::beam
	LineRenderer_t849157671 * ___beam_2;
	// UnityEngine.GameObject Shooter::gunEnd
	GameObject_t1756533147 * ___gunEnd_3;
	// UnityEngine.Vector3 Shooter::target
	Vector3_t2243707580  ___target_4;
	// System.Single Shooter::beamTime
	float ___beamTime_5;
	// System.Single Shooter::beamLength
	float ___beamLength_6;
	// UnityEngine.GameObject[] Shooter::gunFlares
	GameObjectU5BU5D_t3057952154* ___gunFlares_7;
	// UnityEngine.LayerMask Shooter::mask
	LayerMask_t3188175821  ___mask_8;
	// UnityEngine.AudioSource Shooter::gunAudio
	AudioSource_t1135106623 * ___gunAudio_9;
	// UnityEngine.GameObject Shooter::explosionAudio
	GameObject_t1756533147 * ___explosionAudio_10;

public:
	inline static int32_t get_offset_of_beam_2() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___beam_2)); }
	inline LineRenderer_t849157671 * get_beam_2() const { return ___beam_2; }
	inline LineRenderer_t849157671 ** get_address_of_beam_2() { return &___beam_2; }
	inline void set_beam_2(LineRenderer_t849157671 * value)
	{
		___beam_2 = value;
		Il2CppCodeGenWriteBarrier(&___beam_2, value);
	}

	inline static int32_t get_offset_of_gunEnd_3() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___gunEnd_3)); }
	inline GameObject_t1756533147 * get_gunEnd_3() const { return ___gunEnd_3; }
	inline GameObject_t1756533147 ** get_address_of_gunEnd_3() { return &___gunEnd_3; }
	inline void set_gunEnd_3(GameObject_t1756533147 * value)
	{
		___gunEnd_3 = value;
		Il2CppCodeGenWriteBarrier(&___gunEnd_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___target_4)); }
	inline Vector3_t2243707580  get_target_4() const { return ___target_4; }
	inline Vector3_t2243707580 * get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Vector3_t2243707580  value)
	{
		___target_4 = value;
	}

	inline static int32_t get_offset_of_beamTime_5() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___beamTime_5)); }
	inline float get_beamTime_5() const { return ___beamTime_5; }
	inline float* get_address_of_beamTime_5() { return &___beamTime_5; }
	inline void set_beamTime_5(float value)
	{
		___beamTime_5 = value;
	}

	inline static int32_t get_offset_of_beamLength_6() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___beamLength_6)); }
	inline float get_beamLength_6() const { return ___beamLength_6; }
	inline float* get_address_of_beamLength_6() { return &___beamLength_6; }
	inline void set_beamLength_6(float value)
	{
		___beamLength_6 = value;
	}

	inline static int32_t get_offset_of_gunFlares_7() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___gunFlares_7)); }
	inline GameObjectU5BU5D_t3057952154* get_gunFlares_7() const { return ___gunFlares_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_gunFlares_7() { return &___gunFlares_7; }
	inline void set_gunFlares_7(GameObjectU5BU5D_t3057952154* value)
	{
		___gunFlares_7 = value;
		Il2CppCodeGenWriteBarrier(&___gunFlares_7, value);
	}

	inline static int32_t get_offset_of_mask_8() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___mask_8)); }
	inline LayerMask_t3188175821  get_mask_8() const { return ___mask_8; }
	inline LayerMask_t3188175821 * get_address_of_mask_8() { return &___mask_8; }
	inline void set_mask_8(LayerMask_t3188175821  value)
	{
		___mask_8 = value;
	}

	inline static int32_t get_offset_of_gunAudio_9() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___gunAudio_9)); }
	inline AudioSource_t1135106623 * get_gunAudio_9() const { return ___gunAudio_9; }
	inline AudioSource_t1135106623 ** get_address_of_gunAudio_9() { return &___gunAudio_9; }
	inline void set_gunAudio_9(AudioSource_t1135106623 * value)
	{
		___gunAudio_9 = value;
		Il2CppCodeGenWriteBarrier(&___gunAudio_9, value);
	}

	inline static int32_t get_offset_of_explosionAudio_10() { return static_cast<int32_t>(offsetof(Shooter_t3051933708, ___explosionAudio_10)); }
	inline GameObject_t1756533147 * get_explosionAudio_10() const { return ___explosionAudio_10; }
	inline GameObject_t1756533147 ** get_address_of_explosionAudio_10() { return &___explosionAudio_10; }
	inline void set_explosionAudio_10(GameObject_t1756533147 * value)
	{
		___explosionAudio_10 = value;
		Il2CppCodeGenWriteBarrier(&___explosionAudio_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
