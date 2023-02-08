// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaS_DesdoblarBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaS_DesdoblarBall() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaS_DesdoblarBall_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaS_DesdoblarBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void APaS_DesdoblarBall::StaticRegisterNativesAPaS_DesdoblarBall()
	{
	}
	UClass* Z_Construct_UClass_APaS_DesdoblarBall_NoRegister()
	{
		return APaS_DesdoblarBall::StaticClass();
	}
	struct Z_Construct_UClass_APaS_DesdoblarBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaS_DesdoblarBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_DesdoblarBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaS_DesdoblarBall.h" },
		{ "ModuleRelativePath", "PaS_DesdoblarBall.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaS_DesdoblarBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaS_DesdoblarBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaS_DesdoblarBall_Statics::ClassParams = {
		&APaS_DesdoblarBall::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaS_DesdoblarBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_DesdoblarBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaS_DesdoblarBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaS_DesdoblarBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaS_DesdoblarBall, 1824728473);
	template<> ARKANOID_API UClass* StaticClass<APaS_DesdoblarBall>()
	{
		return APaS_DesdoblarBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaS_DesdoblarBall(Z_Construct_UClass_APaS_DesdoblarBall, &APaS_DesdoblarBall::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaS_DesdoblarBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaS_DesdoblarBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
