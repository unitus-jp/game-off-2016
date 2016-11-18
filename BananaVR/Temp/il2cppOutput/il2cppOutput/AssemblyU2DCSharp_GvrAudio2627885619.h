﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GvrAudioRoom>
struct List_1_t622563310;
// UnityEngine.Transform
struct Transform_t3275118058;
// MutablePose3D
struct MutablePose3D_t1015643808;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudio
struct  GvrAudio_t2627885619  : public Il2CppObject
{
public:

public:
};

struct GvrAudio_t2627885619_StaticFields
{
public:
	// System.Int32 GvrAudio::sampleRate
	int32_t ___sampleRate_0;
	// System.Int32 GvrAudio::numChannels
	int32_t ___numChannels_1;
	// System.Int32 GvrAudio::framesPerBuffer
	int32_t ___framesPerBuffer_2;
	// UnityEngine.Bounds GvrAudio::bounds
	Bounds_t3033363703  ___bounds_17;
	// System.Collections.Generic.List`1<GvrAudioRoom> GvrAudio::enabledRooms
	List_1_t622563310 * ___enabledRooms_18;
	// System.Boolean GvrAudio::initialized
	bool ___initialized_19;
	// UnityEngine.Transform GvrAudio::listenerTransform
	Transform_t3275118058 * ___listenerTransform_20;
	// System.Int32 GvrAudio::occlusionMaskValue
	int32_t ___occlusionMaskValue_21;
	// MutablePose3D GvrAudio::pose
	MutablePose3D_t1015643808 * ___pose_22;
	// System.Single GvrAudio::worldScaleInverse
	float ___worldScaleInverse_23;

public:
	inline static int32_t get_offset_of_sampleRate_0() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___sampleRate_0)); }
	inline int32_t get_sampleRate_0() const { return ___sampleRate_0; }
	inline int32_t* get_address_of_sampleRate_0() { return &___sampleRate_0; }
	inline void set_sampleRate_0(int32_t value)
	{
		___sampleRate_0 = value;
	}

	inline static int32_t get_offset_of_numChannels_1() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___numChannels_1)); }
	inline int32_t get_numChannels_1() const { return ___numChannels_1; }
	inline int32_t* get_address_of_numChannels_1() { return &___numChannels_1; }
	inline void set_numChannels_1(int32_t value)
	{
		___numChannels_1 = value;
	}

	inline static int32_t get_offset_of_framesPerBuffer_2() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___framesPerBuffer_2)); }
	inline int32_t get_framesPerBuffer_2() const { return ___framesPerBuffer_2; }
	inline int32_t* get_address_of_framesPerBuffer_2() { return &___framesPerBuffer_2; }
	inline void set_framesPerBuffer_2(int32_t value)
	{
		___framesPerBuffer_2 = value;
	}

	inline static int32_t get_offset_of_bounds_17() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___bounds_17)); }
	inline Bounds_t3033363703  get_bounds_17() const { return ___bounds_17; }
	inline Bounds_t3033363703 * get_address_of_bounds_17() { return &___bounds_17; }
	inline void set_bounds_17(Bounds_t3033363703  value)
	{
		___bounds_17 = value;
	}

	inline static int32_t get_offset_of_enabledRooms_18() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___enabledRooms_18)); }
	inline List_1_t622563310 * get_enabledRooms_18() const { return ___enabledRooms_18; }
	inline List_1_t622563310 ** get_address_of_enabledRooms_18() { return &___enabledRooms_18; }
	inline void set_enabledRooms_18(List_1_t622563310 * value)
	{
		___enabledRooms_18 = value;
		Il2CppCodeGenWriteBarrier(&___enabledRooms_18, value);
	}

	inline static int32_t get_offset_of_initialized_19() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___initialized_19)); }
	inline bool get_initialized_19() const { return ___initialized_19; }
	inline bool* get_address_of_initialized_19() { return &___initialized_19; }
	inline void set_initialized_19(bool value)
	{
		___initialized_19 = value;
	}

	inline static int32_t get_offset_of_listenerTransform_20() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___listenerTransform_20)); }
	inline Transform_t3275118058 * get_listenerTransform_20() const { return ___listenerTransform_20; }
	inline Transform_t3275118058 ** get_address_of_listenerTransform_20() { return &___listenerTransform_20; }
	inline void set_listenerTransform_20(Transform_t3275118058 * value)
	{
		___listenerTransform_20 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTransform_20, value);
	}

	inline static int32_t get_offset_of_occlusionMaskValue_21() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___occlusionMaskValue_21)); }
	inline int32_t get_occlusionMaskValue_21() const { return ___occlusionMaskValue_21; }
	inline int32_t* get_address_of_occlusionMaskValue_21() { return &___occlusionMaskValue_21; }
	inline void set_occlusionMaskValue_21(int32_t value)
	{
		___occlusionMaskValue_21 = value;
	}

	inline static int32_t get_offset_of_pose_22() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___pose_22)); }
	inline MutablePose3D_t1015643808 * get_pose_22() const { return ___pose_22; }
	inline MutablePose3D_t1015643808 ** get_address_of_pose_22() { return &___pose_22; }
	inline void set_pose_22(MutablePose3D_t1015643808 * value)
	{
		___pose_22 = value;
		Il2CppCodeGenWriteBarrier(&___pose_22, value);
	}

	inline static int32_t get_offset_of_worldScaleInverse_23() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___worldScaleInverse_23)); }
	inline float get_worldScaleInverse_23() const { return ___worldScaleInverse_23; }
	inline float* get_address_of_worldScaleInverse_23() { return &___worldScaleInverse_23; }
	inline void set_worldScaleInverse_23(float value)
	{
		___worldScaleInverse_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
