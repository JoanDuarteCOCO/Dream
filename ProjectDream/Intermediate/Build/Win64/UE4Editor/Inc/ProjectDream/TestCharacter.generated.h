// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTDREAM_TestCharacter_generated_h
#error "TestCharacter.generated.h already included, missing '#pragma once' in TestCharacter.h"
#endif
#define PROJECTDREAM_TestCharacter_generated_h

#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_SPARSE_DATA
#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter)


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter)


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCharacter(ATestCharacter&&); \
	NO_API ATestCharacter(const ATestCharacter&); \
public:


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCharacter(ATestCharacter&&); \
	NO_API ATestCharacter(const ATestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestCharacter)


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoomCamera() { return STRUCT_OFFSET(ATestCharacter, BoomCamera); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATestCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__bIsFiring() { return STRUCT_OFFSET(ATestCharacter, bIsFiring); }


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_11_PROLOG
#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_RPC_WRAPPERS \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_INCLASS \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDREAM_API UClass* StaticClass<class ATestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDream_Source_ProjectDream_Player_Characters_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
