// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/Player/HUD/DebugHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugHUD() {}
// Cross Module References
	PROJECTDREAM_API UClass* Z_Construct_UClass_ADebugHUD_NoRegister();
	PROJECTDREAM_API UClass* Z_Construct_UClass_ADebugHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ProjectDream();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ADebugHUD::StaticRegisterNativesADebugHUD()
	{
	}
	UClass* Z_Construct_UClass_ADebugHUD_NoRegister()
	{
		return ADebugHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADebugHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_horizontalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_horizontalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lineHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lineHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Player/HUD/DebugHUD.h" },
		{ "ModuleRelativePath", "Player/HUD/DebugHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::NewProp_X_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/HUD/DebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugHUD_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugHUD, X), METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::NewProp_Y_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/HUD/DebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugHUD_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugHUD, Y), METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::NewProp_horizontalOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/HUD/DebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugHUD_Statics::NewProp_horizontalOffset = { "horizontalOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugHUD, horizontalOffset), METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::NewProp_horizontalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::NewProp_horizontalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::NewProp_lineHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Player/HUD/DebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugHUD_Statics::NewProp_lineHeight = { "lineHeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugHUD, lineHeight), METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::NewProp_lineHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::NewProp_lineHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont_MetaData[] = {
		{ "ModuleRelativePath", "Player/HUD/DebugHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont = { "MainFont", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugHUD, MainFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebugHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugHUD_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugHUD_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugHUD_Statics::NewProp_horizontalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugHUD_Statics::NewProp_lineHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugHUD_Statics::NewProp_MainFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADebugHUD_Statics::ClassParams = {
		&ADebugHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADebugHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADebugHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugHUD, 3643738123);
	template<> PROJECTDREAM_API UClass* StaticClass<ADebugHUD>()
	{
		return ADebugHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugHUD(Z_Construct_UClass_ADebugHUD, &ADebugHUD::StaticClass, TEXT("/Script/ProjectDream"), TEXT("ADebugHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
