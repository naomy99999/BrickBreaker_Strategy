// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/BrickBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrickBoss() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ABrickBoss_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ABrickBoss();
	ARKANOID_API UClass* Z_Construct_UClass_ABrick();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void ABrickBoss::StaticRegisterNativesABrickBoss()
	{
	}
	UClass* Z_Construct_UClass_ABrickBoss_NoRegister()
	{
		return ABrickBoss::StaticClass();
	}
	struct Z_Construct_UClass_ABrickBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrickBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrick,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrickBoss_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BrickBoss.h" },
		{ "ModuleRelativePath", "BrickBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrickBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrickBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrickBoss_Statics::ClassParams = {
		&ABrickBoss::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABrickBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrickBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrickBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrickBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrickBoss, 3741851937);
	template<> ARKANOID_API UClass* StaticClass<ABrickBoss>()
	{
		return ABrickBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrickBoss(Z_Construct_UClass_ABrickBoss, &ABrickBoss::StaticClass, TEXT("/Script/Arkanoid"), TEXT("ABrickBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrickBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
