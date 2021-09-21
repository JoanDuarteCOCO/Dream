// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDream/ProjectDreamPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDreamPlayerController() {}
// Cross Module References
	PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamPlayerController_NoRegister();
	PROJECTDREAM_API UClass* Z_Construct_UClass_AProjectDreamPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProjectDream();
// End Cross Module References
	void AProjectDreamPlayerController::StaticRegisterNativesAProjectDreamPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AProjectDreamPlayerController_NoRegister()
	{
		return AProjectDreamPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AProjectDreamPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectDreamPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectDream,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectDreamPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectDreamPlayerController.h" },
		{ "ModuleRelativePath", "ProjectDreamPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectDreamPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDreamPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectDreamPlayerController_Statics::ClassParams = {
		&AProjectDreamPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectDreamPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDreamPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectDreamPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectDreamPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectDreamPlayerController, 922194180);
	template<> PROJECTDREAM_API UClass* StaticClass<AProjectDreamPlayerController>()
	{
		return AProjectDreamPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectDreamPlayerController(Z_Construct_UClass_AProjectDreamPlayerController, &AProjectDreamPlayerController::StaticClass, TEXT("/Script/ProjectDream"), TEXT("AProjectDreamPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDreamPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
