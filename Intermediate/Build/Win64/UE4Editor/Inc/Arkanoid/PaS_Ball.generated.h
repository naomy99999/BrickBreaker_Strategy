// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARKANOID_PaS_Ball_generated_h
#error "PaS_Ball.generated.h already included, missing '#pragma once' in PaS_Ball.h"
#endif
#define ARKANOID_PaS_Ball_generated_h

#define Strategy_Source_Arkanoid_PaS_Ball_h_16_SPARSE_DATA
#define Strategy_Source_Arkanoid_PaS_Ball_h_16_RPC_WRAPPERS
#define Strategy_Source_Arkanoid_PaS_Ball_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Strategy_Source_Arkanoid_PaS_Ball_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaS_Ball(); \
	friend struct Z_Construct_UClass_APaS_Ball_Statics; \
public: \
	DECLARE_CLASS(APaS_Ball, ABall, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(APaS_Ball) \
	virtual UObject* _getUObject() const override { return const_cast<APaS_Ball*>(this); }


#define Strategy_Source_Arkanoid_PaS_Ball_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPaS_Ball(); \
	friend struct Z_Construct_UClass_APaS_Ball_Statics; \
public: \
	DECLARE_CLASS(APaS_Ball, ABall, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arkanoid"), NO_API) \
	DECLARE_SERIALIZER(APaS_Ball) \
	virtual UObject* _getUObject() const override { return const_cast<APaS_Ball*>(this); }


#define Strategy_Source_Arkanoid_PaS_Ball_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaS_Ball(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaS_Ball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaS_Ball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaS_Ball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaS_Ball(APaS_Ball&&); \
	NO_API APaS_Ball(const APaS_Ball&); \
public:


#define Strategy_Source_Arkanoid_PaS_Ball_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaS_Ball(APaS_Ball&&); \
	NO_API APaS_Ball(const APaS_Ball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaS_Ball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaS_Ball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaS_Ball)


#define Strategy_Source_Arkanoid_PaS_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BallObj() { return STRUCT_OFFSET(APaS_Ball, BallObj); }


#define Strategy_Source_Arkanoid_PaS_Ball_h_13_PROLOG
#define Strategy_Source_Arkanoid_PaS_Ball_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_SPARSE_DATA \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_RPC_WRAPPERS \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_INCLASS \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Strategy_Source_Arkanoid_PaS_Ball_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_PRIVATE_PROPERTY_OFFSET \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_SPARSE_DATA \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_INCLASS_NO_PURE_DECLS \
	Strategy_Source_Arkanoid_PaS_Ball_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARKANOID_API UClass* StaticClass<class APaS_Ball>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Strategy_Source_Arkanoid_PaS_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
