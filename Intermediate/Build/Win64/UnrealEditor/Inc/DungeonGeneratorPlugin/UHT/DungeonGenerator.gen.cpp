// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonGeneratorPlugin/Public/DungeonGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGenerator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_ADungeonGenerator();
	DUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DungeonGeneratorPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ADungeonGenerator::execGenerateDungeon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateDungeon();
		P_NATIVE_END;
	}
	void ADungeonGenerator::StaticRegisterNativesADungeonGenerator()
	{
		UClass* Class = ADungeonGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateDungeon", &ADungeonGenerator::execGenerateDungeon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GenerateDungeon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGenerator);
	UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister()
	{
		return ADungeonGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexagonalRoomMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HexagonalRoomMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexagonalRoomMaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HexagonalRoomMaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexagonalRoomPivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HexagonalRoomPivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexagonalRoomTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HexagonalRoomTileSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGeneratorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeonGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon, "GenerateDungeon" }, // 2855325089
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonGenerator.h" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMesh_MetaData[] = {
		{ "Category", "Dungeon Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMesh = { "HexagonalRoomMesh", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, HexagonalRoomMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMaterialOverride_MetaData[] = {
		{ "Category", "Dungeon Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMaterialOverride = { "HexagonalRoomMaterialOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, HexagonalRoomMaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomPivotOffset_MetaData[] = {
		{ "Category", "Dungeon Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomPivotOffset = { "HexagonalRoomPivotOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, HexagonalRoomPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomPivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomPivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomTileSize_MetaData[] = {
		{ "Category", "Dungeon Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomTileSize = { "HexagonalRoomTileSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, HexagonalRoomTileSize), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomTileSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomMaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_HexagonalRoomTileSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams = {
		&ADungeonGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonGenerator()
	{
		if (!Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton, Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton;
	}
	template<> DUNGEONGENERATORPLUGIN_API UClass* StaticClass<ADungeonGenerator>()
	{
		return ADungeonGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerator);
	ADungeonGenerator::~ADungeonGenerator() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_Unreal_Projects_HauntedWorld_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_Unreal_Projects_HauntedWorld_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGenerator, ADungeonGenerator::StaticClass, TEXT("ADungeonGenerator"), &Z_Registration_Info_UClass_ADungeonGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGenerator), 1105643182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_Unreal_Projects_HauntedWorld_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_2298904132(TEXT("/Script/DungeonGeneratorPlugin"),
		Z_CompiledInDeferFile_FID_Users_Usuario_Documents_Unreal_Projects_HauntedWorld_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_Unreal_Projects_HauntedWorld_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
