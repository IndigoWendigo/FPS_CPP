// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPS_CPP_FPS_CPPProjectile_generated_h
#error "FPS_CPPProjectile.generated.h already included, missing '#pragma once' in FPS_CPPProjectile.h"
#endif
#define FPS_CPP_FPS_CPPProjectile_generated_h

#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_SPARSE_DATA
#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_CPPProjectile(); \
	friend struct Z_Construct_UClass_AFPS_CPPProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_CPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_CPP"), NO_API) \
	DECLARE_SERIALIZER(AFPS_CPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_CPPProjectile(); \
	friend struct Z_Construct_UClass_AFPS_CPPProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS_CPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_CPP"), NO_API) \
	DECLARE_SERIALIZER(AFPS_CPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_CPPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_CPPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_CPPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_CPPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_CPPProjectile(AFPS_CPPProjectile&&); \
	NO_API AFPS_CPPProjectile(const AFPS_CPPProjectile&); \
public:


#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_CPPProjectile(AFPS_CPPProjectile&&); \
	NO_API AFPS_CPPProjectile(const AFPS_CPPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_CPPProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_CPPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_CPPProjectile)


#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPS_CPPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPS_CPPProjectile, ProjectileMovement); }


#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_12_PROLOG
#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_SPARSE_DATA \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_RPC_WRAPPERS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_INCLASS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_SPARSE_DATA \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_CPP_API UClass* StaticClass<class AFPS_CPPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_CPP_Source_FPS_CPP_FPS_CPPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
