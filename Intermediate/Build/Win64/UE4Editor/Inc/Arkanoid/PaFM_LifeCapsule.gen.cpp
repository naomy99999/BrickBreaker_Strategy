// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaFM_LifeCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_LifeCapsule() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_LifeCapsule_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_LifeCapsule();
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_Capsule();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void APaFM_LifeCapsule::StaticRegisterNativesAPaFM_LifeCapsule()
	{
	}
	UClass* Z_Construct_UClass_APaFM_LifeCapsule_NoRegister()
	{
		return APaFM_LifeCapsule::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_LifeCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_LifeCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Capsule,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_LifeCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_LifeCapsule.h" },
		{ "ModuleRelativePath", "PaFM_LifeCapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_LifeCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_LifeCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_LifeCapsule_Statics::ClassParams = {
		&APaFM_LifeCapsule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_LifeCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_LifeCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_LifeCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_LifeCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_LifeCapsule, 3862224102);
	template<> ARKANOID_API UClass* StaticClass<APaFM_LifeCapsule>()
	{
		return APaFM_LifeCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_LifeCapsule(Z_Construct_UClass_APaFM_LifeCapsule, &APaFM_LifeCapsule::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaFM_LifeCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_LifeCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
