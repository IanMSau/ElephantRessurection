// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AirSnooper/AirSnooperPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirSnooperPlayerController() {}
// Cross Module References
	AIRSNOOPER_API UClass* Z_Construct_UClass_AAirSnooperPlayerController_NoRegister();
	AIRSNOOPER_API UClass* Z_Construct_UClass_AAirSnooperPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AirSnooper();
// End Cross Module References
	void AAirSnooperPlayerController::StaticRegisterNativesAAirSnooperPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AAirSnooperPlayerController_NoRegister()
	{
		return AAirSnooperPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAirSnooperPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirSnooperPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSnooper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSnooperPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AirSnooperPlayerController.h" },
		{ "ModuleRelativePath", "AirSnooperPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirSnooperPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirSnooperPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirSnooperPlayerController_Statics::ClassParams = {
		&AAirSnooperPlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAirSnooperPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSnooperPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirSnooperPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirSnooperPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirSnooperPlayerController, 1351675061);
	template<> AIRSNOOPER_API UClass* StaticClass<AAirSnooperPlayerController>()
	{
		return AAirSnooperPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirSnooperPlayerController(Z_Construct_UClass_AAirSnooperPlayerController, &AAirSnooperPlayerController::StaticClass, TEXT("/Script/AirSnooper"), TEXT("AAirSnooperPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirSnooperPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
