// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arkanoid/PaS_Ball.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaS_Ball() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_APaS_Ball_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_APaS_Ball();
	ARKANOID_API UClass* Z_Construct_UClass_ABall();
	UPackage* Z_Construct_UPackage__Script_Arkanoid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARKANOID_API UClass* Z_Construct_UClass_ABall_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_UInterfaceDesdoblarBall_NoRegister();
// End Cross Module References
	void APaS_Ball::StaticRegisterNativesAPaS_Ball()
	{
	}
	UClass* Z_Construct_UClass_APaS_Ball_NoRegister()
	{
		return APaS_Ball::StaticClass();
	}
	struct Z_Construct_UClass_APaS_Ball_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BallObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaS_Ball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABall,
		(UObject* (*)())Z_Construct_UPackage__Script_Arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Ball_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaS_Ball.h" },
		{ "ModuleRelativePath", "PaS_Ball.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaS_Ball_Statics::NewProp_BallObj_MetaData[] = {
		{ "Category", "PaS_Ball" },
		{ "ModuleRelativePath", "PaS_Ball.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APaS_Ball_Statics::NewProp_BallObj = { "BallObj", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaS_Ball, BallObj), Z_Construct_UClass_ABall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APaS_Ball_Statics::NewProp_BallObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Ball_Statics::NewProp_BallObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaS_Ball_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaS_Ball_Statics::NewProp_BallObj,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaS_Ball_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceDesdoblarBall_NoRegister, (int32)VTABLE_OFFSET(APaS_Ball, IInterfaceDesdoblarBall), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaS_Ball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaS_Ball>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaS_Ball_Statics::ClassParams = {
		&APaS_Ball::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaS_Ball_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Ball_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaS_Ball_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaS_Ball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaS_Ball()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaS_Ball_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaS_Ball, 2743425321);
	template<> ARKANOID_API UClass* StaticClass<APaS_Ball>()
	{
		return APaS_Ball::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaS_Ball(Z_Construct_UClass_APaS_Ball, &APaS_Ball::StaticClass, TEXT("/Script/Arkanoid"), TEXT("APaS_Ball"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaS_Ball);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
