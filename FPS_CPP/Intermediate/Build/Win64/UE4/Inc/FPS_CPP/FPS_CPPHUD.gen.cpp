// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_CPP/FPS_CPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_CPPHUD() {}
// Cross Module References
	FPS_CPP_API UClass* Z_Construct_UClass_AFPS_CPPHUD_NoRegister();
	FPS_CPP_API UClass* Z_Construct_UClass_AFPS_CPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPS_CPP();
// End Cross Module References
	void AFPS_CPPHUD::StaticRegisterNativesAFPS_CPPHUD()
	{
	}
	UClass* Z_Construct_UClass_AFPS_CPPHUD_NoRegister()
	{
		return AFPS_CPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_CPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_CPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_CPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPS_CPPHUD.h" },
		{ "ModuleRelativePath", "FPS_CPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_CPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_CPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS_CPPHUD_Statics::ClassParams = {
		&AFPS_CPPHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS_CPPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_CPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_CPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS_CPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS_CPPHUD, 1596692645);
	template<> FPS_CPP_API UClass* StaticClass<AFPS_CPPHUD>()
	{
		return AFPS_CPPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS_CPPHUD(Z_Construct_UClass_AFPS_CPPHUD, &AFPS_CPPHUD::StaticClass, TEXT("/Script/FPS_CPP"), TEXT("AFPS_CPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_CPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
