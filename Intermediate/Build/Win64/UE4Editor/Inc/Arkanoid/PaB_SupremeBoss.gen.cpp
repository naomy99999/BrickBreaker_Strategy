// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaB_SupremeBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaB_SupremeBoss() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaB_SupremeBoss_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaB_SupremeBoss();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void APaB_SupremeBoss::StaticRegisterNativesAPaB_SupremeBoss()
	{
	}
	UClass* Z_Construct_UClass_APaB_SupremeBoss_NoRegister()
	{
		return APaB_SupremeBoss::StaticClass();
	}
	struct Z_Construct_UClass_APaB_SupremeBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaB_SupremeBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaB_SupremeBoss_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaB_SupremeBoss.h" },
		{ "ModuleRelativePath", "PaB_SupremeBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaB_SupremeBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaB_SupremeBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaB_SupremeBoss_Statics::ClassParams = {
		&APaB_SupremeBoss::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaB_SupremeBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaB_SupremeBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaB_SupremeBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaB_SupremeBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaB_SupremeBoss, 3608504421);
	template<> ARKANOID_API UClass* StaticClass<APaB_SupremeBoss>()
	{
		return APaB_SupremeBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaB_SupremeBoss(Z_Construct_UClass_APaB_SupremeBoss, &APaB_SupremeBoss::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaB_SupremeBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaB_SupremeBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
