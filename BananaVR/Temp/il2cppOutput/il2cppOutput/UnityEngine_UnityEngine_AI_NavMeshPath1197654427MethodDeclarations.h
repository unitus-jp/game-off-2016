#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_t1197654427;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
struct NavMeshPath_t1197654427_marshaled_pinvoke;
struct NavMeshPath_t1197654427_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AI.NavMeshPath::.ctor()
extern "C"  void NavMeshPath__ctor_m221963020 (NavMeshPath_t1197654427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshPath::DestroyNavMeshPath()
extern "C"  void NavMeshPath_DestroyNavMeshPath_m1384592429 (NavMeshPath_t1197654427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshPath::Finalize()
extern "C"  void NavMeshPath_Finalize_m1141916140 (NavMeshPath_t1197654427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::CalculateCornersInternal()
extern "C"  Vector3U5BU5D_t1172311765* NavMeshPath_CalculateCornersInternal_m2244549135 (NavMeshPath_t1197654427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AI.NavMeshPath::CalculateCorners()
extern "C"  void NavMeshPath_CalculateCorners_m48490112 (NavMeshPath_t1197654427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
extern "C"  Vector3U5BU5D_t1172311765* NavMeshPath_get_corners_m2049643397 (NavMeshPath_t1197654427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NavMeshPath_t1197654427;
struct NavMeshPath_t1197654427_marshaled_pinvoke;

extern "C" void NavMeshPath_t1197654427_marshal_pinvoke(const NavMeshPath_t1197654427& unmarshaled, NavMeshPath_t1197654427_marshaled_pinvoke& marshaled);
extern "C" void NavMeshPath_t1197654427_marshal_pinvoke_back(const NavMeshPath_t1197654427_marshaled_pinvoke& marshaled, NavMeshPath_t1197654427& unmarshaled);
extern "C" void NavMeshPath_t1197654427_marshal_pinvoke_cleanup(NavMeshPath_t1197654427_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NavMeshPath_t1197654427;
struct NavMeshPath_t1197654427_marshaled_com;

extern "C" void NavMeshPath_t1197654427_marshal_com(const NavMeshPath_t1197654427& unmarshaled, NavMeshPath_t1197654427_marshaled_com& marshaled);
extern "C" void NavMeshPath_t1197654427_marshal_com_back(const NavMeshPath_t1197654427_marshaled_com& marshaled, NavMeshPath_t1197654427& unmarshaled);
extern "C" void NavMeshPath_t1197654427_marshal_com_cleanup(NavMeshPath_t1197654427_marshaled_com& marshaled);
