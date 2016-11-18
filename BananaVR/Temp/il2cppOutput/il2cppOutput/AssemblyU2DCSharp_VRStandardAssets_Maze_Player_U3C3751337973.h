#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// VRStandardAssets.Maze.Player
struct Player_t85696317;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VRStandardAssets.Maze.Player/<PlayClipAndWait>c__Iterator1
struct  U3CPlayClipAndWaitU3Ec__Iterator1_t3751337973  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip VRStandardAssets.Maze.Player/<PlayClipAndWait>c__Iterator1::clip
	AudioClip_t1932558630 * ___clip_0;
	// VRStandardAssets.Maze.Player VRStandardAssets.Maze.Player/<PlayClipAndWait>c__Iterator1::$this
	Player_t85696317 * ___U24this_1;
	// System.Object VRStandardAssets.Maze.Player/<PlayClipAndWait>c__Iterator1::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean VRStandardAssets.Maze.Player/<PlayClipAndWait>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 VRStandardAssets.Maze.Player/<PlayClipAndWait>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(U3CPlayClipAndWaitU3Ec__Iterator1_t3751337973, ___clip_0)); }
	inline AudioClip_t1932558630 * get_clip_0() const { return ___clip_0; }
	inline AudioClip_t1932558630 ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(AudioClip_t1932558630 * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier(&___clip_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CPlayClipAndWaitU3Ec__Iterator1_t3751337973, ___U24this_1)); }
	inline Player_t85696317 * get_U24this_1() const { return ___U24this_1; }
	inline Player_t85696317 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Player_t85696317 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CPlayClipAndWaitU3Ec__Iterator1_t3751337973, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CPlayClipAndWaitU3Ec__Iterator1_t3751337973, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CPlayClipAndWaitU3Ec__Iterator1_t3751337973, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
