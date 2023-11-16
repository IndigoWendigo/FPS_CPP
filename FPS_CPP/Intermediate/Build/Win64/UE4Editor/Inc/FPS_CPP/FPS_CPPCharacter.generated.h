// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_CPP_FPS_CPPCharacter_generated_h
#error "FPS_CPPCharacter.generated.h already included, missing '#pragma once' in FPS_CPPCharacter.h"
#endif
#define FPS_CPP_FPS_CPPCharacter_generated_h

#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_SPARSE_DATA
#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_RPC_WRAPPERS
#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_CPPCharacter(); \
	friend struct Z_Construct_UClass_AFPS_CPPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPS_CPPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_CPP"), NO_API) \
	DECLARE_SERIALIZER(AFPS_CPPCharacter)


#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_CPPCharacter(); \
	friend struct Z_Construct_UClass_AFPS_CPPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPS_CPPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_CPP"), NO_API) \
	DECLARE_SERIALIZER(AFPS_CPPCharacter)


#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_CPPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_CPPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_CPPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_CPPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_CPPCharacter(AFPS_CPPCharacter&&); \
	NO_API AFPS_CPPCharacter(const AFPS_CPPCharacter&); \
public:


#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_CPPCharacter(AFPS_CPPCharacter&&); \
	NO_API AFPS_CPPCharacter(const AFPS_CPPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_CPPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_CPPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_CPPCharacter)


#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPS_CPPCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPS_CPPCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPS_CPPCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPS_CPPCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPS_CPPCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPS_CPPCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPS_CPPCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPS_CPPCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__sensor() { return STRUCT_OFFSET(AFPS_CPPCharacter, sensor); }


#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_18_PROLOG
#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_SPARSE_DATA \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_RPC_WRAPPERS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_INCLASS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_SPARSE_DATA \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_CPP_API UClass* StaticClass<class AFPS_CPPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_CPP_Source_FPS_CPP_FPS_CPPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
