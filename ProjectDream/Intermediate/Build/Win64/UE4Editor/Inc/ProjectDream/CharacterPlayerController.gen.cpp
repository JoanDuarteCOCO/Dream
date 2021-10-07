// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/Player/PlayerControllers/CharacterPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPlayerController() {}
// Cross Module References
	PROJECTDREAM_API UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister();
	PROJECTDREAM_API UClass* Z_Construct_UClass_ACharacterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProjectDream();
// End Cross Module References
	void ACharacterPlayerController::StaticRegisterNativesACharacterPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister()
	{
		return ACharacterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/PlayerControllers/CharacterPlayerController.h" },
		{ "ModuleRelativePath", "Player/PlayerControllers/CharacterPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterPlayerController_Statics::ClassParams = {
		&ACharacterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterPlayerController, 4254641831);
	template<> PROJECTDREAM_API UClass* StaticClass<ACharacterPlayerController>()
	{
		return ACharacterPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterPlayerController(Z_Construct_UClass_ACharacterPlayerController, &ACharacterPlayerController::StaticClass, TEXT("/Script/ProjectDream"), TEXT("ACharacterPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
