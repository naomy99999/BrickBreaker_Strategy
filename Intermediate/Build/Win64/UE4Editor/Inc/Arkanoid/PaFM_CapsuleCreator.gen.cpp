// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaFM_CapsuleCreator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_CapsuleCreator() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_CapsuleCreator_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_CapsuleCreator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void APaFM_CapsuleCreator::StaticRegisterNativesAPaFM_CapsuleCreator()
	{
	}
	UClass* Z_Construct_UClass_APaFM_CapsuleCreator_NoRegister()
	{
		return APaFM_CapsuleCreator::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_CapsuleCreator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_CapsuleCreator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_CapsuleCreator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaFM_CapsuleCreator.h" },
		{ "ModuleRelativePath", "PaFM_CapsuleCreator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_CapsuleCreator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_CapsuleCreator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_CapsuleCreator_Statics::ClassParams = {
		&APaFM_CapsuleCreator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_CapsuleCreator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_CapsuleCreator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_CapsuleCreator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_CapsuleCreator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_CapsuleCreator, 548428756);
	template<> ARKANOID_API UClass* StaticClass<APaFM_CapsuleCreator>()
	{
		return APaFM_CapsuleCreator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_CapsuleCreator(Z_Construct_UClass_APaFM_CapsuleCreator, &APaFM_CapsuleCreator::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaFM_CapsuleCreator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_CapsuleCreator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
