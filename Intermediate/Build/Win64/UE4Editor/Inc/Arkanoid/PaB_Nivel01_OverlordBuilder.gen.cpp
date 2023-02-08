// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaB_Nivel01_OverlordBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaB_Nivel01_OverlordBuilder() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaB_Nivel01_OverlordBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void APaB_Nivel01_OverlordBuilder::StaticRegisterNativesAPaB_Nivel01_OverlordBuilder()
	{
	}
	UClass* Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_NoRegister()
	{
		return APaB_Nivel01_OverlordBuilder::StaticClass();
	}
	struct Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaB_Nivel01_OverlordBuilder.h" },
		{ "ModuleRelativePath", "PaB_Nivel01_OverlordBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaB_Nivel01_OverlordBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics::ClassParams = {
		&APaB_Nivel01_OverlordBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaB_Nivel01_OverlordBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaB_Nivel01_OverlordBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaB_Nivel01_OverlordBuilder, 3664974559);
	template<> ARKANOID_API UClass* StaticClass<APaB_Nivel01_OverlordBuilder>()
	{
		return APaB_Nivel01_OverlordBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaB_Nivel01_OverlordBuilder(Z_Construct_UClass_APaB_Nivel01_OverlordBuilder, &APaB_Nivel01_OverlordBuilder::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaB_Nivel01_OverlordBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaB_Nivel01_OverlordBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
