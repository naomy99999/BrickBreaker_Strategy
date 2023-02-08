// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaFM_DoubleCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_DoubleCapsule() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_DoubleCapsule_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_DoubleCapsule();
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_Capsule();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void APaFM_DoubleCapsule::StaticRegisterNativesAPaFM_DoubleCapsule()
	{
	}
	UClass* Z_Construct_UClass_APaFM_DoubleCapsule_NoRegister()
	{
		return APaFM_DoubleCapsule::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_DoubleCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_DoubleCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_Capsule,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_DoubleCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_DoubleCapsule.h" },
		{ "ModuleRelativePath", "PaFM_DoubleCapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_DoubleCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_DoubleCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_DoubleCapsule_Statics::ClassParams = {
		&APaFM_DoubleCapsule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_DoubleCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_DoubleCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_DoubleCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_DoubleCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_DoubleCapsule, 983895962);
	template<> ARKANOID_API UClass* StaticClass<APaFM_DoubleCapsule>()
	{
		return APaFM_DoubleCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_DoubleCapsule(Z_Construct_UClass_APaFM_DoubleCapsule, &APaFM_DoubleCapsule::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaFM_DoubleCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_DoubleCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
