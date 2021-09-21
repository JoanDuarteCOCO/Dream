// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTDREAM_ProjectDreamCharacter_generated_h
#error "ProjectDreamCharacter.generated.h already included, missing '#pragma once' in ProjectDreamCharacter.h"
#endif
#define PROJECTDREAM_ProjectDreamCharacter_generated_h

#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_SPARSE_DATA
#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_RPC_WRAPPERS
#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDreamCharacter(); \
	friend struct Z_Construct_UClass_AProjectDreamCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectDreamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(AProjectDreamCharacter)


#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectDreamCharacter(); \
	friend struct Z_Construct_UClass_AProjectDreamCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectDreamCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(AProjectDreamCharacter)


#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectDreamCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectDreamCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDreamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDreamCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectDreamCharacter(AProjectDreamCharacter&&); \
	NO_API AProjectDreamCharacter(const AProjectDreamCharacter&); \
public:


#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectDreamCharacter(AProjectDreamCharacter&&); \
	NO_API AProjectDreamCharacter(const AProjectDreamCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDreamCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDreamCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectDreamCharacter)


#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AProjectDreamCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectDreamCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AProjectDreamCharacter, CursorToWorld); }


#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_9_PROLOG
#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_RPC_WRAPPERS \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_INCLASS \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDREAM_API UClass* StaticClass<class AProjectDreamCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDream_Source_ProjectDream_ProjectDreamCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
