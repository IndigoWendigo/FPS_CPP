// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_CPP_Sensor_generated_h
#error "Sensor.generated.h already included, missing '#pragma once' in Sensor.h"
#endif
#define FPS_CPP_Sensor_generated_h

#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_SPARSE_DATA
#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_RPC_WRAPPERS
#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASensor(); \
	friend struct Z_Construct_UClass_ASensor_Statics; \
public: \
	DECLARE_CLASS(ASensor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_CPP"), NO_API) \
	DECLARE_SERIALIZER(ASensor)


#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASensor(); \
	friend struct Z_Construct_UClass_ASensor_Statics; \
public: \
	DECLARE_CLASS(ASensor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_CPP"), NO_API) \
	DECLARE_SERIALIZER(ASensor)


#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASensor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASensor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASensor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASensor(ASensor&&); \
	NO_API ASensor(const ASensor&); \
public:


#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASensor(ASensor&&); \
	NO_API ASensor(const ASensor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASensor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASensor)


#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_PRIVATE_PROPERTY_OFFSET
#define FPS_CPP_Source_FPS_CPP_Sensor_h_9_PROLOG
#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_SPARSE_DATA \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_RPC_WRAPPERS \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_INCLASS \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_CPP_Source_FPS_CPP_Sensor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_SPARSE_DATA \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_INCLASS_NO_PURE_DECLS \
	FPS_CPP_Source_FPS_CPP_Sensor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_CPP_API UClass* StaticClass<class ASensor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_CPP_Source_FPS_CPP_Sensor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
