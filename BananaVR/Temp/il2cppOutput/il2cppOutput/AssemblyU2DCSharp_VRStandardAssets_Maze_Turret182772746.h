#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// VRStandardAssets.Maze.Player
struct Player_t85696317;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.Turret
struct  Turret_t182772746  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VRStandardAssets.Maze.Turret::m_BarrelSpinSpeed
	float ___m_BarrelSpinSpeed_2;
	// System.Single VRStandardAssets.Maze.Turret::m_AimTime
	float ___m_AimTime_3;
	// System.Single VRStandardAssets.Maze.Turret::m_Range
	float ___m_Range_4;
	// System.Single VRStandardAssets.Maze.Turret::m_CeaseFireTime
	float ___m_CeaseFireTime_5;
	// UnityEngine.Transform VRStandardAssets.Maze.Turret::m_PlayerTransform
	Transform_t3275118058 * ___m_PlayerTransform_6;
	// VRStandardAssets.Maze.Player VRStandardAssets.Maze.Turret::m_Player
	Player_t85696317 * ___m_Player_7;
	// UnityEngine.Transform VRStandardAssets.Maze.Turret::m_TurretRotator
	Transform_t3275118058 * ___m_TurretRotator_8;
	// UnityEngine.Transform VRStandardAssets.Maze.Turret::m_TurretBarrel
	Transform_t3275118058 * ___m_TurretBarrel_9;
	// UnityEngine.Animator VRStandardAssets.Maze.Turret::m_Animator
	Animator_t69676727 * ___m_Animator_10;
	// UnityEngine.ParticleSystem VRStandardAssets.Maze.Turret::m_GunParticles
	ParticleSystem_t3394631041 * ___m_GunParticles_11;
	// UnityEngine.AudioSource VRStandardAssets.Maze.Turret::m_BulletAudio
	AudioSource_t1135106623 * ___m_BulletAudio_12;
	// UnityEngine.AudioSource VRStandardAssets.Maze.Turret::m_GunAudio
	AudioSource_t1135106623 * ___m_GunAudio_13;
	// UnityEngine.AudioSource VRStandardAssets.Maze.Turret::m_PowerAudio
	AudioSource_t1135106623 * ___m_PowerAudio_14;
	// UnityEngine.AudioClip VRStandardAssets.Maze.Turret::m_GunSpinUpClip
	AudioClip_t1932558630 * ___m_GunSpinUpClip_15;
	// UnityEngine.AudioClip VRStandardAssets.Maze.Turret::m_GunSpinDownClip
	AudioClip_t1932558630 * ___m_GunSpinDownClip_16;
	// UnityEngine.AudioClip VRStandardAssets.Maze.Turret::m_PowerUpClip
	AudioClip_t1932558630 * ___m_PowerUpClip_17;
	// UnityEngine.AudioClip VRStandardAssets.Maze.Turret::m_PowerDownClip
	AudioClip_t1932558630 * ___m_PowerDownClip_18;
	// System.Boolean VRStandardAssets.Maze.Turret::m_PlayerInSight
	bool ___m_PlayerInSight_19;
	// System.Boolean VRStandardAssets.Maze.Turret::m_Firing
	bool ___m_Firing_20;
	// System.Single VRStandardAssets.Maze.Turret::m_AimTimer
	float ___m_AimTimer_21;
	// System.Boolean VRStandardAssets.Maze.Turret::m_IsTurretActive
	bool ___m_IsTurretActive_22;
	// System.Int32 VRStandardAssets.Maze.Turret::m_HashPowerUpPara
	int32_t ___m_HashPowerUpPara_23;
	// System.Int32 VRStandardAssets.Maze.Turret::m_HashPowerDownPara
	int32_t ___m_HashPowerDownPara_24;

public:
	inline static int32_t get_offset_of_m_BarrelSpinSpeed_2() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_BarrelSpinSpeed_2)); }
	inline float get_m_BarrelSpinSpeed_2() const { return ___m_BarrelSpinSpeed_2; }
	inline float* get_address_of_m_BarrelSpinSpeed_2() { return &___m_BarrelSpinSpeed_2; }
	inline void set_m_BarrelSpinSpeed_2(float value)
	{
		___m_BarrelSpinSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_AimTime_3() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_AimTime_3)); }
	inline float get_m_AimTime_3() const { return ___m_AimTime_3; }
	inline float* get_address_of_m_AimTime_3() { return &___m_AimTime_3; }
	inline void set_m_AimTime_3(float value)
	{
		___m_AimTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Range_4() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_Range_4)); }
	inline float get_m_Range_4() const { return ___m_Range_4; }
	inline float* get_address_of_m_Range_4() { return &___m_Range_4; }
	inline void set_m_Range_4(float value)
	{
		___m_Range_4 = value;
	}

	inline static int32_t get_offset_of_m_CeaseFireTime_5() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_CeaseFireTime_5)); }
	inline float get_m_CeaseFireTime_5() const { return ___m_CeaseFireTime_5; }
	inline float* get_address_of_m_CeaseFireTime_5() { return &___m_CeaseFireTime_5; }
	inline void set_m_CeaseFireTime_5(float value)
	{
		___m_CeaseFireTime_5 = value;
	}

	inline static int32_t get_offset_of_m_PlayerTransform_6() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_PlayerTransform_6)); }
	inline Transform_t3275118058 * get_m_PlayerTransform_6() const { return ___m_PlayerTransform_6; }
	inline Transform_t3275118058 ** get_address_of_m_PlayerTransform_6() { return &___m_PlayerTransform_6; }
	inline void set_m_PlayerTransform_6(Transform_t3275118058 * value)
	{
		___m_PlayerTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerTransform_6, value);
	}

	inline static int32_t get_offset_of_m_Player_7() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_Player_7)); }
	inline Player_t85696317 * get_m_Player_7() const { return ___m_Player_7; }
	inline Player_t85696317 ** get_address_of_m_Player_7() { return &___m_Player_7; }
	inline void set_m_Player_7(Player_t85696317 * value)
	{
		___m_Player_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Player_7, value);
	}

	inline static int32_t get_offset_of_m_TurretRotator_8() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_TurretRotator_8)); }
	inline Transform_t3275118058 * get_m_TurretRotator_8() const { return ___m_TurretRotator_8; }
	inline Transform_t3275118058 ** get_address_of_m_TurretRotator_8() { return &___m_TurretRotator_8; }
	inline void set_m_TurretRotator_8(Transform_t3275118058 * value)
	{
		___m_TurretRotator_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_TurretRotator_8, value);
	}

	inline static int32_t get_offset_of_m_TurretBarrel_9() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_TurretBarrel_9)); }
	inline Transform_t3275118058 * get_m_TurretBarrel_9() const { return ___m_TurretBarrel_9; }
	inline Transform_t3275118058 ** get_address_of_m_TurretBarrel_9() { return &___m_TurretBarrel_9; }
	inline void set_m_TurretBarrel_9(Transform_t3275118058 * value)
	{
		___m_TurretBarrel_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_TurretBarrel_9, value);
	}

	inline static int32_t get_offset_of_m_Animator_10() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_Animator_10)); }
	inline Animator_t69676727 * get_m_Animator_10() const { return ___m_Animator_10; }
	inline Animator_t69676727 ** get_address_of_m_Animator_10() { return &___m_Animator_10; }
	inline void set_m_Animator_10(Animator_t69676727 * value)
	{
		___m_Animator_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_10, value);
	}

	inline static int32_t get_offset_of_m_GunParticles_11() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_GunParticles_11)); }
	inline ParticleSystem_t3394631041 * get_m_GunParticles_11() const { return ___m_GunParticles_11; }
	inline ParticleSystem_t3394631041 ** get_address_of_m_GunParticles_11() { return &___m_GunParticles_11; }
	inline void set_m_GunParticles_11(ParticleSystem_t3394631041 * value)
	{
		___m_GunParticles_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunParticles_11, value);
	}

	inline static int32_t get_offset_of_m_BulletAudio_12() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_BulletAudio_12)); }
	inline AudioSource_t1135106623 * get_m_BulletAudio_12() const { return ___m_BulletAudio_12; }
	inline AudioSource_t1135106623 ** get_address_of_m_BulletAudio_12() { return &___m_BulletAudio_12; }
	inline void set_m_BulletAudio_12(AudioSource_t1135106623 * value)
	{
		___m_BulletAudio_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_BulletAudio_12, value);
	}

	inline static int32_t get_offset_of_m_GunAudio_13() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_GunAudio_13)); }
	inline AudioSource_t1135106623 * get_m_GunAudio_13() const { return ___m_GunAudio_13; }
	inline AudioSource_t1135106623 ** get_address_of_m_GunAudio_13() { return &___m_GunAudio_13; }
	inline void set_m_GunAudio_13(AudioSource_t1135106623 * value)
	{
		___m_GunAudio_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunAudio_13, value);
	}

	inline static int32_t get_offset_of_m_PowerAudio_14() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_PowerAudio_14)); }
	inline AudioSource_t1135106623 * get_m_PowerAudio_14() const { return ___m_PowerAudio_14; }
	inline AudioSource_t1135106623 ** get_address_of_m_PowerAudio_14() { return &___m_PowerAudio_14; }
	inline void set_m_PowerAudio_14(AudioSource_t1135106623 * value)
	{
		___m_PowerAudio_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_PowerAudio_14, value);
	}

	inline static int32_t get_offset_of_m_GunSpinUpClip_15() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_GunSpinUpClip_15)); }
	inline AudioClip_t1932558630 * get_m_GunSpinUpClip_15() const { return ___m_GunSpinUpClip_15; }
	inline AudioClip_t1932558630 ** get_address_of_m_GunSpinUpClip_15() { return &___m_GunSpinUpClip_15; }
	inline void set_m_GunSpinUpClip_15(AudioClip_t1932558630 * value)
	{
		___m_GunSpinUpClip_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunSpinUpClip_15, value);
	}

	inline static int32_t get_offset_of_m_GunSpinDownClip_16() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_GunSpinDownClip_16)); }
	inline AudioClip_t1932558630 * get_m_GunSpinDownClip_16() const { return ___m_GunSpinDownClip_16; }
	inline AudioClip_t1932558630 ** get_address_of_m_GunSpinDownClip_16() { return &___m_GunSpinDownClip_16; }
	inline void set_m_GunSpinDownClip_16(AudioClip_t1932558630 * value)
	{
		___m_GunSpinDownClip_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_GunSpinDownClip_16, value);
	}

	inline static int32_t get_offset_of_m_PowerUpClip_17() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_PowerUpClip_17)); }
	inline AudioClip_t1932558630 * get_m_PowerUpClip_17() const { return ___m_PowerUpClip_17; }
	inline AudioClip_t1932558630 ** get_address_of_m_PowerUpClip_17() { return &___m_PowerUpClip_17; }
	inline void set_m_PowerUpClip_17(AudioClip_t1932558630 * value)
	{
		___m_PowerUpClip_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_PowerUpClip_17, value);
	}

	inline static int32_t get_offset_of_m_PowerDownClip_18() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_PowerDownClip_18)); }
	inline AudioClip_t1932558630 * get_m_PowerDownClip_18() const { return ___m_PowerDownClip_18; }
	inline AudioClip_t1932558630 ** get_address_of_m_PowerDownClip_18() { return &___m_PowerDownClip_18; }
	inline void set_m_PowerDownClip_18(AudioClip_t1932558630 * value)
	{
		___m_PowerDownClip_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_PowerDownClip_18, value);
	}

	inline static int32_t get_offset_of_m_PlayerInSight_19() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_PlayerInSight_19)); }
	inline bool get_m_PlayerInSight_19() const { return ___m_PlayerInSight_19; }
	inline bool* get_address_of_m_PlayerInSight_19() { return &___m_PlayerInSight_19; }
	inline void set_m_PlayerInSight_19(bool value)
	{
		___m_PlayerInSight_19 = value;
	}

	inline static int32_t get_offset_of_m_Firing_20() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_Firing_20)); }
	inline bool get_m_Firing_20() const { return ___m_Firing_20; }
	inline bool* get_address_of_m_Firing_20() { return &___m_Firing_20; }
	inline void set_m_Firing_20(bool value)
	{
		___m_Firing_20 = value;
	}

	inline static int32_t get_offset_of_m_AimTimer_21() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_AimTimer_21)); }
	inline float get_m_AimTimer_21() const { return ___m_AimTimer_21; }
	inline float* get_address_of_m_AimTimer_21() { return &___m_AimTimer_21; }
	inline void set_m_AimTimer_21(float value)
	{
		___m_AimTimer_21 = value;
	}

	inline static int32_t get_offset_of_m_IsTurretActive_22() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_IsTurretActive_22)); }
	inline bool get_m_IsTurretActive_22() const { return ___m_IsTurretActive_22; }
	inline bool* get_address_of_m_IsTurretActive_22() { return &___m_IsTurretActive_22; }
	inline void set_m_IsTurretActive_22(bool value)
	{
		___m_IsTurretActive_22 = value;
	}

	inline static int32_t get_offset_of_m_HashPowerUpPara_23() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_HashPowerUpPara_23)); }
	inline int32_t get_m_HashPowerUpPara_23() const { return ___m_HashPowerUpPara_23; }
	inline int32_t* get_address_of_m_HashPowerUpPara_23() { return &___m_HashPowerUpPara_23; }
	inline void set_m_HashPowerUpPara_23(int32_t value)
	{
		___m_HashPowerUpPara_23 = value;
	}

	inline static int32_t get_offset_of_m_HashPowerDownPara_24() { return static_cast<int32_t>(offsetof(Turret_t182772746, ___m_HashPowerDownPara_24)); }
	inline int32_t get_m_HashPowerDownPara_24() const { return ___m_HashPowerDownPara_24; }
	inline int32_t* get_address_of_m_HashPowerDownPara_24() { return &___m_HashPowerDownPara_24; }
	inline void set_m_HashPowerDownPara_24(int32_t value)
	{
		___m_HashPowerDownPara_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
