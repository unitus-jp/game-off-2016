#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// GvrEye
struct GvrEye_t3930157106;
// GvrAudioRoom
struct GvrAudioRoom_t1253442178;
// Gvr.Internal.EmulatorConfig
struct EmulatorConfig_t616150261;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t1211758263;
// VRStandardAssets.Flyer.Ring
struct Ring_t2112212308;
// VRStandardAssets.Flyer.Asteroid
struct Asteroid_t153309821;
// VRStandardAssets.Utils.VRInteractiveItem
struct VRInteractiveItem_t2238922987;
// VRStandardAssets.Utils.PlatformDependentText/PlatformTextPair
struct PlatformTextPair_t1763532269;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_GvrEye3930157106.h"
#include "AssemblyU2DCSharp_GvrAudioRoom1253442178.h"
#include "AssemblyU2DCSharp_GvrAudioRoom_SurfaceMaterial3590751945.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig616150261.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3000685002.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Flyer_Ring2112212308.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Flyer_Asteroid153309821.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Utils_VRInterac2238922987.h"
#include "AssemblyU2DCSharp_VRStandardAssets_Utils_PlatformD1763532269.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"

#pragma once
// GvrEye[]
struct GvrEyeU5BU5D_t3620642503  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GvrEye_t3930157106 * m_Items[1];

public:
	inline GvrEye_t3930157106 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GvrEye_t3930157106 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GvrEye_t3930157106 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GvrEye_t3930157106 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GvrEye_t3930157106 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GvrEye_t3930157106 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GvrAudioRoom[]
struct GvrAudioRoomU5BU5D_t3258870071  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GvrAudioRoom_t1253442178 * m_Items[1];

public:
	inline GvrAudioRoom_t1253442178 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GvrAudioRoom_t1253442178 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GvrAudioRoom_t1253442178 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GvrAudioRoom_t1253442178 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GvrAudioRoom_t1253442178 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GvrAudioRoom_t1253442178 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GvrAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t3576332276  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Gvr.Internal.EmulatorConfig[]
struct EmulatorConfigU5BU5D_t1923274648  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) EmulatorConfig_t616150261 * m_Items[1];

public:
	inline EmulatorConfig_t616150261 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EmulatorConfig_t616150261 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EmulatorConfig_t616150261 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline EmulatorConfig_t616150261 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EmulatorConfig_t616150261 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EmulatorConfig_t616150261 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Gvr.Internal.EmulatorTouchEvent/Pointer[]
struct PointerU5BU5D_t1899449295  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Pointer_t3000685002  m_Items[1];

public:
	inline Pointer_t3000685002  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pointer_t3000685002 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pointer_t3000685002  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pointer_t3000685002  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pointer_t3000685002 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pointer_t3000685002  value)
	{
		m_Items[index] = value;
	}
};
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer[]
struct PointerU5BU5D_t1785453710  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Pointer_t1211758263 * m_Items[1];

public:
	inline Pointer_t1211758263 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pointer_t1211758263 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pointer_t1211758263 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Pointer_t1211758263 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pointer_t1211758263 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pointer_t1211758263 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// VRStandardAssets.Flyer.Ring[]
struct RingU5BU5D_t3549286109  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Ring_t2112212308 * m_Items[1];

public:
	inline Ring_t2112212308 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Ring_t2112212308 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Ring_t2112212308 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Ring_t2112212308 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Ring_t2112212308 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Ring_t2112212308 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// VRStandardAssets.Flyer.Asteroid[]
struct AsteroidU5BU5D_t1702669040  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Asteroid_t153309821 * m_Items[1];

public:
	inline Asteroid_t153309821 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Asteroid_t153309821 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Asteroid_t153309821 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Asteroid_t153309821 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Asteroid_t153309821 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Asteroid_t153309821 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// VRStandardAssets.Utils.VRInteractiveItem[]
struct VRInteractiveItemU5BU5D_t841694986  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VRInteractiveItem_t2238922987 * m_Items[1];

public:
	inline VRInteractiveItem_t2238922987 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VRInteractiveItem_t2238922987 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VRInteractiveItem_t2238922987 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline VRInteractiveItem_t2238922987 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VRInteractiveItem_t2238922987 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VRInteractiveItem_t2238922987 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// VRStandardAssets.Utils.PlatformDependentText/PlatformTextPair[]
struct PlatformTextPairU5BU5D_t654398400  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PlatformTextPair_t1763532269 * m_Items[1];

public:
	inline PlatformTextPair_t1763532269 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlatformTextPair_t1763532269 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlatformTextPair_t1763532269 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PlatformTextPair_t1763532269 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlatformTextPair_t1763532269 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlatformTextPair_t1763532269 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// proto.PhoneEvent/Types/Type[]
struct TypeU5BU5D_t2649698064  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
