// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaFM_AntiHelpCapsuleCreator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_AntiHelpCapsuleCreator() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator();
	ARKANOID_API UClass* Z_Construct_UClass_APaFM_CapsuleCreator();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void APaFM_AntiHelpCapsuleCreator::StaticRegisterNativesAPaFM_AntiHelpCapsuleCreator()
	{
	}
	UClass* Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_NoRegister()
	{
		return APaFM_AntiHelpCapsuleCreator::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_CapsuleCreator,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_AntiHelpCapsuleCreator.h" },
		{ "ModuleRelativePath", "PaFM_AntiHelpCapsuleCreator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_AntiHelpCapsuleCreator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics::ClassParams = {
		&APaFM_AntiHelpCapsuleCreator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_AntiHelpCapsuleCreator, 233113083);
	template<> ARKANOID_API UClass* StaticClass<APaFM_AntiHelpCapsuleCreator>()
	{
		return APaFM_AntiHelpCapsuleCreator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_AntiHelpCapsuleCreator(Z_Construct_UClass_APaFM_AntiHelpCapsuleCreator, &APaFM_AntiHelpCapsuleCreator::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaFM_AntiHelpCapsuleCreator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_AntiHelpCapsuleCreator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
