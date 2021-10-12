// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTDREAM_DebugHUD_generated_h
#error "DebugHUD.generated.h already included, missing '#pragma once' in DebugHUD.h"
#endif
#define PROJECTDREAM_DebugHUD_generated_h

#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_SPARSE_DATA
#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_RPC_WRAPPERS
#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADebugHUD(); \
	friend struct Z_Construct_UClass_ADebugHUD_Statics; \
public: \
	DECLARE_CLASS(ADebugHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(ADebugHUD)


#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADebugHUD(); \
	friend struct Z_Construct_UClass_ADebugHUD_Statics; \
public: \
	DECLARE_CLASS(ADebugHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDream"), NO_API) \
	DECLARE_SERIALIZER(ADebugHUD)


#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADebugHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugHUD(ADebugHUD&&); \
	NO_API ADebugHUD(const ADebugHUD&); \
public:


#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugHUD(ADebugHUD&&); \
	NO_API ADebugHUD(const ADebugHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADebugHUD)


#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__X() { return STRUCT_OFFSET(ADebugHUD, X); } \
	FORCEINLINE static uint32 __PPO__Y() { return STRUCT_OFFSET(ADebugHUD, Y); } \
	FORCEINLINE static uint32 __PPO__horizontalOffset() { return STRUCT_OFFSET(ADebugHUD, horizontalOffset); } \
	FORCEINLINE static uint32 __PPO__lineHeight() { return STRUCT_OFFSET(ADebugHUD, lineHeight); } \
	FORCEINLINE static uint32 __PPO__MainFont() { return STRUCT_OFFSET(ADebugHUD, MainFont); }


#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_14_PROLOG
#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_RPC_WRAPPERS \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_INCLASS \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_SPARSE_DATA \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_INCLASS_NO_PURE_DECLS \
	ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTDREAM_API UClass* StaticClass<class ADebugHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDream_Source_ProjectDream_Player_HUD_DebugHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
