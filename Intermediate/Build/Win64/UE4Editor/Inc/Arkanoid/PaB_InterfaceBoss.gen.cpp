// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaB_InterfaceBoss.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaB_InterfaceBoss() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_UPaB_InterfaceBoss_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_UPaB_InterfaceBoss();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void UPaB_InterfaceBoss::StaticRegisterNativesUPaB_InterfaceBoss()
	{
	}
	UClass* Z_Construct_UClass_UPaB_InterfaceBoss_NoRegister()
	{
		return UPaB_InterfaceBoss::StaticClass();
	}
	struct Z_Construct_UClass_UPaB_InterfaceBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaB_InterfaceBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaB_InterfaceBoss_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PaB_InterfaceBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaB_InterfaceBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaB_InterfaceBoss>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaB_InterfaceBoss_Statics::ClassParams = {
		&UPaB_InterfaceBoss::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPaB_InterfaceBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaB_InterfaceBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaB_InterfaceBoss()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaB_InterfaceBoss_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaB_InterfaceBoss, 649480990);
	template<> ARKANOID_API UClass* StaticClass<UPaB_InterfaceBoss>()
	{
		return UPaB_InterfaceBoss::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaB_InterfaceBoss(Z_Construct_UClass_UPaB_InterfaceBoss, &UPaB_InterfaceBoss::StaticClass, TEXT("/Script/Arkanoid"), TEXT("UPaB_InterfaceBoss"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaB_InterfaceBoss);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
