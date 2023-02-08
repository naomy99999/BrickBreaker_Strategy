// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/InterfaceOverlord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceOverlord() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_UInterfaceOverlord_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_UInterfaceOverlord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
// End Cross Module References
	void UInterfaceOverlord::StaticRegisterNativesUInterfaceOverlord()
	{
	}
	UClass* Z_Construct_UClass_UInterfaceOverlord_NoRegister()
	{
		return UInterfaceOverlord::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceOverlord_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceOverlord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceOverlord_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceOverlord.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceOverlord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceOverlord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceOverlord_Statics::ClassParams = {
		&UInterfaceOverlord::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterfaceOverlord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceOverlord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfaceOverlord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfaceOverlord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfaceOverlord, 3554601998);
	template<> ARKANOID_API UClass* StaticClass<UInterfaceOverlord>()
	{
		return UInterfaceOverlord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfaceOverlord(Z_Construct_UClass_UInterfaceOverlord, &UInterfaceOverlord::StaticClass, TEXT("/Script/Arkanoid"), TEXT("UInterfaceOverlord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceOverlord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
