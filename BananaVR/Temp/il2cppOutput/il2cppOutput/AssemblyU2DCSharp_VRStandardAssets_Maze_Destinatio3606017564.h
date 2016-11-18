#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VRStandardAssets.Maze.MazeTargetSetting
struct MazeTargetSetting_t1539560390;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.DestinationMarker
struct  DestinationMarker_t3606017564  : public MonoBehaviour_t1158329972
{
public:
	// VRStandardAssets.Maze.MazeTargetSetting VRStandardAssets.Maze.DestinationMarker::m_MazeTargetSetting
	MazeTargetSetting_t1539560390 * ___m_MazeTargetSetting_2;
	// UnityEngine.AudioSource VRStandardAssets.Maze.DestinationMarker::m_MarkerMoveAudio
	AudioSource_t1135106623 * ___m_MarkerMoveAudio_3;
	// UnityEngine.Renderer VRStandardAssets.Maze.DestinationMarker::m_Renderer
	Renderer_t257310565 * ___m_Renderer_4;
	// UnityEngine.Animator VRStandardAssets.Maze.DestinationMarker::m_Animator
	Animator_t69676727 * ___m_Animator_5;
	// System.Int32 VRStandardAssets.Maze.DestinationMarker::m_HashMazeNavMarkerAnimState
	int32_t ___m_HashMazeNavMarkerAnimState_6;

public:
	inline static int32_t get_offset_of_m_MazeTargetSetting_2() { return static_cast<int32_t>(offsetof(DestinationMarker_t3606017564, ___m_MazeTargetSetting_2)); }
	inline MazeTargetSetting_t1539560390 * get_m_MazeTargetSetting_2() const { return ___m_MazeTargetSetting_2; }
	inline MazeTargetSetting_t1539560390 ** get_address_of_m_MazeTargetSetting_2() { return &___m_MazeTargetSetting_2; }
	inline void set_m_MazeTargetSetting_2(MazeTargetSetting_t1539560390 * value)
	{
		___m_MazeTargetSetting_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_MazeTargetSetting_2, value);
	}

	inline static int32_t get_offset_of_m_MarkerMoveAudio_3() { return static_cast<int32_t>(offsetof(DestinationMarker_t3606017564, ___m_MarkerMoveAudio_3)); }
	inline AudioSource_t1135106623 * get_m_MarkerMoveAudio_3() const { return ___m_MarkerMoveAudio_3; }
	inline AudioSource_t1135106623 ** get_address_of_m_MarkerMoveAudio_3() { return &___m_MarkerMoveAudio_3; }
	inline void set_m_MarkerMoveAudio_3(AudioSource_t1135106623 * value)
	{
		___m_MarkerMoveAudio_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_MarkerMoveAudio_3, value);
	}

	inline static int32_t get_offset_of_m_Renderer_4() { return static_cast<int32_t>(offsetof(DestinationMarker_t3606017564, ___m_Renderer_4)); }
	inline Renderer_t257310565 * get_m_Renderer_4() const { return ___m_Renderer_4; }
	inline Renderer_t257310565 ** get_address_of_m_Renderer_4() { return &___m_Renderer_4; }
	inline void set_m_Renderer_4(Renderer_t257310565 * value)
	{
		___m_Renderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_4, value);
	}

	inline static int32_t get_offset_of_m_Animator_5() { return static_cast<int32_t>(offsetof(DestinationMarker_t3606017564, ___m_Animator_5)); }
	inline Animator_t69676727 * get_m_Animator_5() const { return ___m_Animator_5; }
	inline Animator_t69676727 ** get_address_of_m_Animator_5() { return &___m_Animator_5; }
	inline void set_m_Animator_5(Animator_t69676727 * value)
	{
		___m_Animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_5, value);
	}

	inline static int32_t get_offset_of_m_HashMazeNavMarkerAnimState_6() { return static_cast<int32_t>(offsetof(DestinationMarker_t3606017564, ___m_HashMazeNavMarkerAnimState_6)); }
	inline int32_t get_m_HashMazeNavMarkerAnimState_6() const { return ___m_HashMazeNavMarkerAnimState_6; }
	inline int32_t* get_address_of_m_HashMazeNavMarkerAnimState_6() { return &___m_HashMazeNavMarkerAnimState_6; }
	inline void set_m_HashMazeNavMarkerAnimState_6(int32_t value)
	{
		___m_HashMazeNavMarkerAnimState_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
