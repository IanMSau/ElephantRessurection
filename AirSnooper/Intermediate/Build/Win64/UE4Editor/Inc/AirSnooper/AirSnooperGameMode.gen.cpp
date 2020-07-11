// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AirSnooper/AirSnooperGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirSnooperGameMode() {}
// Cross Module References
	AIRSNOOPER_API UClass* Z_Construct_UClass_AAirSnooperGameMode_NoRegister();
	AIRSNOOPER_API UClass* Z_Construct_UClass_AAirSnooperGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AirSnooper();
// End Cross Module References
	void AAirSnooperGameMode::StaticRegisterNativesAAirSnooperGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAirSnooperGameMode_NoRegister()
	{
		return AAirSnooperGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAirSnooperGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStarted_MetaData[];
#endif
		static void NewProp_TimeStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TimeStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirSnooperGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AirSnooper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSnooperGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AirSnooperGameMode.h" },
		{ "ModuleRelativePath", "AirSnooperGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_CurrentScore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Game Mode Stats" },
		{ "ModuleRelativePath", "AirSnooperGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirSnooperGameMode, CurrentScore), METADATA_PARAMS(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_CurrentScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_CurrentScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TargetScore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Game Mode Stats" },
		{ "ModuleRelativePath", "AirSnooperGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TargetScore = { "TargetScore", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirSnooperGameMode, TargetScore), METADATA_PARAMS(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TargetScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TargetScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TimeStarted_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Game Mode Stats" },
		{ "ModuleRelativePath", "AirSnooperGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TimeStarted_SetBit(void* Obj)
	{
		((AAirSnooperGameMode*)Obj)->TimeStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAirSnooperGameMode), &Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TimeStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TimeStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TimeStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_LevelTimer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Game Mode Stats" },
		{ "ModuleRelativePath", "AirSnooperGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_LevelTimer = { "LevelTimer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirSnooperGameMode, LevelTimer), METADATA_PARAMS(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_LevelTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_LevelTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirSnooperGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_CurrentScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TargetScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_TimeStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirSnooperGameMode_Statics::NewProp_LevelTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirSnooperGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirSnooperGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirSnooperGameMode_Statics::ClassParams = {
		&AAirSnooperGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAirSnooperGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAirSnooperGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAirSnooperGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirSnooperGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirSnooperGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirSnooperGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirSnooperGameMode, 1331875022);
	template<> AIRSNOOPER_API UClass* StaticClass<AAirSnooperGameMode>()
	{
		return AAirSnooperGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirSnooperGameMode(Z_Construct_UClass_AAirSnooperGameMode, &AAirSnooperGameMode::StaticClass, TEXT("/Script/AirSnooper"), TEXT("AAirSnooperGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirSnooperGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
