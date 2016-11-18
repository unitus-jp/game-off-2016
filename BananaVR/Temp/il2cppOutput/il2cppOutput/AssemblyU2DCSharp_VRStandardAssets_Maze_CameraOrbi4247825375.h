#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Utils.VRCameraFade
struct VRCameraFade_t3046390775;
// VRStandardAssets.Utils.VRInput
struct VRInput_t3508365320;
// VRStandardAssets.Maze.MazeGameController
struct MazeGameController_t2849668277;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Maze_CameraOrbi3050030494.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.CameraOrbit
struct  CameraOrbit_t4247825375  : public MonoBehaviour_t1158329972
{
public:
	// VRStandardAssets.Maze.CameraOrbit/OrbitStyle VRStandardAssets.Maze.CameraOrbit::m_OrbitStyle
	int32_t ___m_OrbitStyle_2;
	// System.Single VRStandardAssets.Maze.CameraOrbit::m_RotationIncrement
	float ___m_RotationIncrement_3;
	// System.Single VRStandardAssets.Maze.CameraOrbit::m_RotationFadeDuration
	float ___m_RotationFadeDuration_4;
	// VRStandardAssets.Utils.VRCameraFade VRStandardAssets.Maze.CameraOrbit::m_CameraFade
	VRCameraFade_t3046390775 * ___m_CameraFade_5;
	// VRStandardAssets.Utils.VRInput VRStandardAssets.Maze.CameraOrbit::m_VrInput
	VRInput_t3508365320 * ___m_VrInput_6;
	// VRStandardAssets.Maze.MazeGameController VRStandardAssets.Maze.CameraOrbit::m_MazeGameController
	MazeGameController_t2849668277 * ___m_MazeGameController_7;
	// UnityEngine.Rigidbody VRStandardAssets.Maze.CameraOrbit::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_8;
	// UnityEngine.Quaternion VRStandardAssets.Maze.CameraOrbit::m_StartRotation
	Quaternion_t4030073918  ___m_StartRotation_9;

public:
	inline static int32_t get_offset_of_m_OrbitStyle_2() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_OrbitStyle_2)); }
	inline int32_t get_m_OrbitStyle_2() const { return ___m_OrbitStyle_2; }
	inline int32_t* get_address_of_m_OrbitStyle_2() { return &___m_OrbitStyle_2; }
	inline void set_m_OrbitStyle_2(int32_t value)
	{
		___m_OrbitStyle_2 = value;
	}

	inline static int32_t get_offset_of_m_RotationIncrement_3() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_RotationIncrement_3)); }
	inline float get_m_RotationIncrement_3() const { return ___m_RotationIncrement_3; }
	inline float* get_address_of_m_RotationIncrement_3() { return &___m_RotationIncrement_3; }
	inline void set_m_RotationIncrement_3(float value)
	{
		___m_RotationIncrement_3 = value;
	}

	inline static int32_t get_offset_of_m_RotationFadeDuration_4() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_RotationFadeDuration_4)); }
	inline float get_m_RotationFadeDuration_4() const { return ___m_RotationFadeDuration_4; }
	inline float* get_address_of_m_RotationFadeDuration_4() { return &___m_RotationFadeDuration_4; }
	inline void set_m_RotationFadeDuration_4(float value)
	{
		___m_RotationFadeDuration_4 = value;
	}

	inline static int32_t get_offset_of_m_CameraFade_5() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_CameraFade_5)); }
	inline VRCameraFade_t3046390775 * get_m_CameraFade_5() const { return ___m_CameraFade_5; }
	inline VRCameraFade_t3046390775 ** get_address_of_m_CameraFade_5() { return &___m_CameraFade_5; }
	inline void set_m_CameraFade_5(VRCameraFade_t3046390775 * value)
	{
		___m_CameraFade_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_CameraFade_5, value);
	}

	inline static int32_t get_offset_of_m_VrInput_6() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_VrInput_6)); }
	inline VRInput_t3508365320 * get_m_VrInput_6() const { return ___m_VrInput_6; }
	inline VRInput_t3508365320 ** get_address_of_m_VrInput_6() { return &___m_VrInput_6; }
	inline void set_m_VrInput_6(VRInput_t3508365320 * value)
	{
		___m_VrInput_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_VrInput_6, value);
	}

	inline static int32_t get_offset_of_m_MazeGameController_7() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_MazeGameController_7)); }
	inline MazeGameController_t2849668277 * get_m_MazeGameController_7() const { return ___m_MazeGameController_7; }
	inline MazeGameController_t2849668277 ** get_address_of_m_MazeGameController_7() { return &___m_MazeGameController_7; }
	inline void set_m_MazeGameController_7(MazeGameController_t2849668277 * value)
	{
		___m_MazeGameController_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_MazeGameController_7, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_8() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_Rigidbody_8)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_8() const { return ___m_Rigidbody_8; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_8() { return &___m_Rigidbody_8; }
	inline void set_m_Rigidbody_8(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_8, value);
	}

	inline static int32_t get_offset_of_m_StartRotation_9() { return static_cast<int32_t>(offsetof(CameraOrbit_t4247825375, ___m_StartRotation_9)); }
	inline Quaternion_t4030073918  get_m_StartRotation_9() const { return ___m_StartRotation_9; }
	inline Quaternion_t4030073918 * get_address_of_m_StartRotation_9() { return &___m_StartRotation_9; }
	inline void set_m_StartRotation_9(Quaternion_t4030073918  value)
	{
		___m_StartRotation_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
