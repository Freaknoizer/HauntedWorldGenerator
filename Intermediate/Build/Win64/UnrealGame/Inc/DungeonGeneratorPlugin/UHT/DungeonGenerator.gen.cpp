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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_ADungeonGenerator();
	DUNGEONGENERATORPLUGIN_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
	DUNGEONGENERATORPLUGIN_API UFunction* Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature();
	DUNGEONGENERATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRoomTemplate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DungeonGeneratorPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DungeonGeneratorPlugin, nullptr, "OnDungeonSpawned__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDungeonSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnDungeonSpawned)
{
	OnDungeonSpawned.ProcessMulticastDelegate<UObject>(NULL);
}

static_assert(std::is_polymorphic<FRoomTemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRoomTemplate cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoomTemplate;
class UScriptStruct* FRoomTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoomTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoomTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomTemplate, (UObject*)Z_Construct_UPackage__Script_DungeonGeneratorPlugin(), TEXT("RoomTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_RoomTemplate.OuterSingleton;
}
template<> DUNGEONGENERATORPLUGIN_API UScriptStruct* StaticStruct<FRoomTemplate>()
{
	return FRoomTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoomTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomTileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTileMeshMaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomTileMeshMaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTilePivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomTilePivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallMeshMaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WallMeshMaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallMeshPivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallMeshPivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWallFacingX_MetaData[];
#endif
		static void NewProp_bIsWallFacingX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWallFacingX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMesh_MetaData[] = {
		{ "Category", "RoomTemplate" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMesh = { "RoomTileMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomTemplate, RoomTileMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMeshMaterialOverride_MetaData[] = {
		{ "Category", "RoomTemplate" },
		{ "Comment", "/**\n\x09 * If assigned, we're going to replace the default material of the RoomTileMesh with the given mat\n\x09 * Leave empty in case you want the default material\n\x09 * Useful in cases where you want the same static mesh but with different material variations as room templates\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "If assigned, we're going to replace the default material of the RoomTileMesh with the given mat\nLeave empty in case you want the default material\nUseful in cases where you want the same static mesh but with different material variations as room templates" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMeshMaterialOverride = { "RoomTileMeshMaterialOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomTemplate, RoomTileMeshMaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMeshMaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMeshMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTilePivotOffset_MetaData[] = {
		{ "Category", "RoomTemplate" },
		{ "Comment", "/**\n\x09 * Same functionality as FloorPivotOffset - check comments in Source Code or In-Editor Details Panel!\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Same functionality as FloorPivotOffset - check comments in Source Code or In-Editor Details Panel!" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTilePivotOffset = { "RoomTilePivotOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomTemplate, RoomTilePivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTilePivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTilePivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMesh_MetaData[] = {
		{ "Category", "RoomTemplate" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMesh = { "WallMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomTemplate, WallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshMaterialOverride_MetaData[] = {
		{ "Category", "RoomTemplate" },
		{ "Comment", "/**\n\x09 * Used to replace default material of WallMesh\n\x09 * Check RoomTileMeshMaterialOverride docs for more info\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Used to replace default material of WallMesh\nCheck RoomTileMeshMaterialOverride docs for more info" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshMaterialOverride = { "WallMeshMaterialOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomTemplate, WallMeshMaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshMaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshPivotOffset_MetaData[] = {
		{ "Category", "RoomTemplate" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshPivotOffset = { "WallMeshPivotOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomTemplate, WallMeshPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshPivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshPivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_bIsWallFacingX_MetaData[] = {
		{ "Category", "RoomTemplate" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_bIsWallFacingX_SetBit(void* Obj)
	{
		((FRoomTemplate*)Obj)->bIsWallFacingX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_bIsWallFacingX = { "bIsWallFacingX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRoomTemplate), &Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_bIsWallFacingX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_bIsWallFacingX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_bIsWallFacingX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTileMeshMaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_RoomTilePivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshMaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_WallMeshPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewProp_bIsWallFacingX,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGeneratorPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RoomTemplate",
		sizeof(FRoomTemplate),
		alignof(FRoomTemplate),
		Z_Construct_UScriptStruct_FRoomTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoomTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_RoomTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoomTemplate.InnerSingleton, Z_Construct_UScriptStruct_FRoomTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoomTemplate.InnerSingleton;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execSetNewWallMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewWallMesh);
		P_GET_STRUCT(FVector,Z_Param_NewWallSMPivotOffset);
		P_GET_UBOOL(Z_Param_bIsWallFacingX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewWallMesh(Z_Param_NewWallMesh,Z_Param_NewWallSMPivotOffset,Z_Param_bIsWallFacingX);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execSetNewFloorMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewFloorMesh);
		P_GET_STRUCT(FVector,Z_Param_NewFloorPivotOffset);
		P_GET_UBOOL(Z_Param_bAutoFloorSizeGeneration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFloorTileSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewFloorMesh(Z_Param_NewFloorMesh,Z_Param_NewFloorPivotOffset,Z_Param_bAutoFloorSizeGeneration,Z_Param_OverrideFloorTileSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADungeonGenerator::execSetNewRoomSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewMinRoomSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxRoomSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewRoomSize(Z_Param_NewMinRoomSize,Z_Param_NewMaxRoomSize);
		P_NATIVE_END;
	}
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
			{ "SetNewFloorMesh", &ADungeonGenerator::execSetNewFloorMesh },
			{ "SetNewRoomSize", &ADungeonGenerator::execSetNewRoomSize },
			{ "SetNewWallMesh", &ADungeonGenerator::execSetNewWallMesh },
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
		{ "CallInEditor", "true" },
		{ "Category", "Dungeon Generation" },
		{ "Comment", "/**\n\x09 * Generates a dungeon\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Generates a dungeon" },
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
	struct Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics
	{
		struct DungeonGenerator_eventSetNewFloorMesh_Parms
		{
			UStaticMesh* NewFloorMesh;
			FVector NewFloorPivotOffset;
			bool bAutoFloorSizeGeneration;
			float OverrideFloorTileSize;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFloorMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFloorPivotOffset;
		static void NewProp_bAutoFloorSizeGeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFloorSizeGeneration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFloorTileSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_NewFloorMesh = { "NewFloorMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DungeonGenerator_eventSetNewFloorMesh_Parms, NewFloorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_NewFloorPivotOffset = { "NewFloorPivotOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DungeonGenerator_eventSetNewFloorMesh_Parms, NewFloorPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_bAutoFloorSizeGeneration_SetBit(void* Obj)
	{
		((DungeonGenerator_eventSetNewFloorMesh_Parms*)Obj)->bAutoFloorSizeGeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_bAutoFloorSizeGeneration = { "bAutoFloorSizeGeneration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DungeonGenerator_eventSetNewFloorMesh_Parms), &Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_bAutoFloorSizeGeneration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_OverrideFloorTileSize = { "OverrideFloorTileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DungeonGenerator_eventSetNewFloorMesh_Parms, OverrideFloorTileSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_NewFloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_NewFloorPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_bAutoFloorSizeGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::NewProp_OverrideFloorTileSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generation" },
		{ "Comment", "/**\n\x09 * Assigns a new floor mesh for the dungeon generator\n\x09 * @param NewFloorMesh - the mesh to use for each floor tile\n\x09 * @param NewFloorPivotOffset - any offset to apply if the floor tile mesh hasn't a centered pivot point\n\x09 * @param bAutoFloorSizeGeneration - true if you want the generator to generate the tile size for you\n\x09 * @param OverrideFloorTileSize - the tile size. Only takes effect when bAutoFloorSizeGeneration is set to false\n\x09 */" },
		{ "CPP_Default_bAutoFloorSizeGeneration", "true" },
		{ "CPP_Default_OverrideFloorTileSize", "0.000000" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Assigns a new floor mesh for the dungeon generator\n@param NewFloorMesh - the mesh to use for each floor tile\n@param NewFloorPivotOffset - any offset to apply if the floor tile mesh hasn't a centered pivot point\n@param bAutoFloorSizeGeneration - true if you want the generator to generate the tile size for you\n@param OverrideFloorTileSize - the tile size. Only takes effect when bAutoFloorSizeGeneration is set to false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "SetNewFloorMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::DungeonGenerator_eventSetNewFloorMesh_Parms), Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics
	{
		struct DungeonGenerator_eventSetNewRoomSize_Parms
		{
			int32 NewMinRoomSize;
			int32 NewMaxRoomSize;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewMinRoomSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewMaxRoomSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::NewProp_NewMinRoomSize = { "NewMinRoomSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DungeonGenerator_eventSetNewRoomSize_Parms, NewMinRoomSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::NewProp_NewMaxRoomSize = { "NewMaxRoomSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DungeonGenerator_eventSetNewRoomSize_Parms, NewMaxRoomSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::NewProp_NewMinRoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::NewProp_NewMaxRoomSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generation" },
		{ "Comment", "/**\n\x09 * Sets new properties regarding the room size\n\x09 * @param NewMinRoomSize - the minimum room size (uniform)\n\x09 * @param NewMaxRoomSize - the maximum room size (uniform)\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Sets new properties regarding the room size\n@param NewMinRoomSize - the minimum room size (uniform)\n@param NewMaxRoomSize - the maximum room size (uniform)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "SetNewRoomSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::DungeonGenerator_eventSetNewRoomSize_Parms), Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics
	{
		struct DungeonGenerator_eventSetNewWallMesh_Parms
		{
			UStaticMesh* NewWallMesh;
			FVector NewWallSMPivotOffset;
			bool bIsWallFacingX;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWallMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewWallSMPivotOffset;
		static void NewProp_bIsWallFacingX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWallFacingX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_NewWallMesh = { "NewWallMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DungeonGenerator_eventSetNewWallMesh_Parms, NewWallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_NewWallSMPivotOffset = { "NewWallSMPivotOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DungeonGenerator_eventSetNewWallMesh_Parms, NewWallSMPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_bIsWallFacingX_SetBit(void* Obj)
	{
		((DungeonGenerator_eventSetNewWallMesh_Parms*)Obj)->bIsWallFacingX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_bIsWallFacingX = { "bIsWallFacingX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DungeonGenerator_eventSetNewWallMesh_Parms), &Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_bIsWallFacingX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_NewWallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_NewWallSMPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::NewProp_bIsWallFacingX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generation" },
		{ "Comment", "/**\n\x09 * Assigns a new wall mesh for the dungeon generator\n\x09 * @param NewWallMesh - the mesh to use for each wall\n\x09 * @param NewWallSMPivotOffset - any offset to apply if the wall isn't centered\n\x09 * @param bIsWallFacingX - true if the wall is facing the X axis (ie it extends along the Y axis), false otherwise\n\x09 */" },
		{ "CPP_Default_bIsWallFacingX", "true" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Assigns a new wall mesh for the dungeon generator\n@param NewWallMesh - the mesh to use for each wall\n@param NewWallSMPivotOffset - any offset to apply if the wall isn't centered\n@param bIsWallFacingX - true if the wall is facing the X axis (ie it extends along the Y axis), false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "SetNewWallMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::DungeonGenerator_eventSetNewWallMesh_Parms), Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFloorTileSizeGeneration_MetaData[];
#endif
		static void NewProp_bAutoFloorTileSizeGeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFloorTileSizeGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMapRows_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileMapRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMapColumns_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileMapColumns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinRoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomsToGenerate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoomsToGenerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRandomAttemptsPerRoom_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRandomAttemptsPerRoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorSM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorTileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorPivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorPivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WallSM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallSMPivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallSMPivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWallFacingX_MetaData[];
#endif
		static void NewProp_bWallFacingX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallFacingX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTemplatesDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomTemplatesDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDungeonSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDungeonSpawned;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugActive_MetaData[];
#endif
		static void NewProp_bDebugActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugVertexBoxExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugVertexBoxExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFloorSpawnLocationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFloorSpawnLocationColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetedFloorSpawnLocationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetedFloorSpawnLocationColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWallSpawnLocationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWallSpawnLocationColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetedWallSpawnLocationColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetedWallSpawnLocationColor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonGeneratorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADungeonGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonGenerator_GenerateDungeon, "GenerateDungeon" }, // 3587875204
		{ &Z_Construct_UFunction_ADungeonGenerator_SetNewFloorMesh, "SetNewFloorMesh" }, // 707366050
		{ &Z_Construct_UFunction_ADungeonGenerator_SetNewRoomSize, "SetNewRoomSize" }, // 3185092025
		{ &Z_Construct_UFunction_ADungeonGenerator_SetNewWallMesh, "SetNewWallMesh" }, // 364892344
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonGenerator.h" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoFloorTileSizeGeneration_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "Comment", "/* True if you want the editor to auto-retrieve the extends of the mesh */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "True if you want the editor to auto-retrieve the extends of the mesh" },
	};
#endif
	void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoFloorTileSizeGeneration_SetBit(void* Obj)
	{
		((ADungeonGenerator*)Obj)->bAutoFloorTileSizeGeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoFloorTileSizeGeneration = { "bAutoFloorTileSizeGeneration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoFloorTileSizeGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoFloorTileSizeGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoFloorTileSizeGeneration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapRows_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "Comment", "/**\n\x09 * Number of rows in tile map\n\x09 * Total size of tile map will be Rows * Columns\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Number of rows in tile map\nTotal size of tile map will be Rows * Columns" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapRows = { "TileMapRows", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, TileMapRows), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapColumns_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "Comment", "/**\n\x09 * Number of columns in tile map\n\x09 * Total size of tile map will be Rows * Columns\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Number of columns in tile map\nTotal size of tile map will be Rows * Columns" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapColumns = { "TileMapColumns", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, TileMapColumns), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapColumns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MinRoomSize_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "Comment", "/**\n\x09 * MinRoomSize is the min number of tiles we're going to use for each room in each direction.\n\x09 * For instance, a number of 2 means that the min room size can be 2x2\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "MinRoomSize is the min number of tiles we're going to use for each room in each direction.\nFor instance, a number of 2 means that the min room size can be 2x2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MinRoomSize = { "MinRoomSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, MinRoomSize), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MinRoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MinRoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRoomSize_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "Comment", "/**\n\x09 * MaxRoomSize is the max number of tiles we're going to use for each room in each direction.\n\x09 * For instance, a number of 3 means that the max room size can be 3x3.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "MaxRoomSize is the max number of tiles we're going to use for each room in each direction.\nFor instance, a number of 3 means that the max room size can be 3x3." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRoomSize = { "MaxRoomSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, MaxRoomSize), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomsToGenerate_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomsToGenerate = { "RoomsToGenerate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, RoomsToGenerate), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomsToGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomsToGenerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRandomAttemptsPerRoom_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "Comment", "/**\n\x09 * Max Random Attempts for each room. To avoid an infinite loop try to find a fitting room for a location only a certain amount of times.\n\x09 * If the process fails just proceed to the next room\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Max Random Attempts for each room. To avoid an infinite loop try to find a fitting room for a location only a certain amount of times.\nIf the process fails just proceed to the next room" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRandomAttemptsPerRoom = { "MaxRandomAttemptsPerRoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, MaxRandomAttemptsPerRoom), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRandomAttemptsPerRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRandomAttemptsPerRoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorSM_MetaData[] = {
		{ "Category", "Generator Properties - Floor Settings" },
		{ "Comment", "/**\n\x09 * The static mesh for each floor\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "The static mesh for each floor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorSM = { "FloorSM", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, FloorSM), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorSM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorSM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorTileSize_MetaData[] = {
		{ "Category", "Generator Properties - Floor Settings" },
		{ "Comment", "/**\n\x09 * Tile size of floor SM. If you manually want to override this setting use the //TODO: Create function\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Tile size of floor SM. If you manually want to override this setting use the //TODO: Create function" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorTileSize = { "FloorTileSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, FloorTileSize), METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorTileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorPivotOffset_MetaData[] = {
		{ "Category", "Generator Properties - Floor Settings" },
		{ "Comment", "/**\n\x09 * By default, each tile location is pointing at the center of the tile. If your FloorSM isn't\n\x09 * centered, adjust this value to match your settings\n\x09 * For instance, if the floor's pivot point is located on the bottom left corner the FloorPivotOffset\n\x09 * needs to be (-TileSize_X,-TileSize_Y,0)\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "By default, each tile location is pointing at the center of the tile. If your FloorSM isn't\ncentered, adjust this value to match your settings\nFor instance, if the floor's pivot point is located on the bottom left corner the FloorPivotOffset\nneeds to be (-TileSize_X,-TileSize_Y,0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorPivotOffset = { "FloorPivotOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, FloorPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorPivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorPivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSM_MetaData[] = {
		{ "Category", "Generator Properties - Wall Settings" },
		{ "Comment", "/**\n\x09 * Static mesh of walls\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Static mesh of walls" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSM = { "WallSM", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, WallSM), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSMPivotOffset_MetaData[] = {
		{ "Category", "Generator Properties - Wall Settings" },
		{ "Comment", "/**\n\x09 * By default, each wall location is centered at the top,right,left or bottom middle of each tile. If your\n\x09 * WallSM isn't centered, adjust this value to match your settings\n\x09 * See FloorPivotOffset for more info regarding this setting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "By default, each wall location is centered at the top,right,left or bottom middle of each tile. If your\nWallSM isn't centered, adjust this value to match your settings\nSee FloorPivotOffset for more info regarding this setting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSMPivotOffset = { "WallSMPivotOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, WallSMPivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSMPivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSMPivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bWallFacingX_MetaData[] = {
		{ "Category", "Generator Properties - Wall Settings" },
		{ "Comment", "/**\n\x09 * If the wall is facing the X axis (ie the wall is extending by default along the Y axis) mark this setting as true and false otherwise\n\x09 * During wall spawning the generator will make sure to rotate the walls accordingly\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "If the wall is facing the X axis (ie the wall is extending by default along the Y axis) mark this setting as true and false otherwise\nDuring wall spawning the generator will make sure to rotate the walls accordingly" },
	};
#endif
	void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bWallFacingX_SetBit(void* Obj)
	{
		((ADungeonGenerator*)Obj)->bWallFacingX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bWallFacingX = { "bWallFacingX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bWallFacingX_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bWallFacingX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bWallFacingX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomTemplatesDataTable_MetaData[] = {
		{ "Category", "Generator Properties" },
		{ "Comment", "/**\n\x09 * A data table describing some room templates in order to spawn various floor tiles & wall meshes\n\x09 * Assumes that the assigned floor and wall meshes have the same dimensions as the generic floor and wall meshes\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "A data table describing some room templates in order to spawn various floor tiles & wall meshes\nAssumes that the assigned floor and wall meshes have the same dimensions as the generic floor and wall meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomTemplatesDataTable = { "RoomTemplatesDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, RoomTemplatesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomTemplatesDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomTemplatesDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnDungeonSpawned_MetaData[] = {
		{ "Category", "Dungeon Generation" },
		{ "Comment", "/**\n\x09 * Called when dungeon generator has finished spawning all the meshes\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Called when dungeon generator has finished spawning all the meshes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnDungeonSpawned = { "OnDungeonSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, OnDungeonSpawned), Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnDungeonSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnDungeonSpawned_MetaData)) }; // 1214252630
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bDebugActive_MetaData[] = {
		{ "Category", "Dungeon Generation - Debug" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bDebugActive_SetBit(void* Obj)
	{
		((ADungeonGenerator*)Obj)->bDebugActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bDebugActive = { "bDebugActive", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bDebugActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bDebugActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bDebugActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DebugVertexBoxExtents_MetaData[] = {
		{ "Category", "Dungeon Generation - Debug" },
		{ "Comment", "/**\n\x09 * If debug is active the generator will spawn boxes in each spawn location.\n\x09 * Adjust the size of the box here and the individual colors below\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "If debug is active the generator will spawn boxes in each spawn location.\nAdjust the size of the box here and the individual colors below" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DebugVertexBoxExtents = { "DebugVertexBoxExtents", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, DebugVertexBoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DebugVertexBoxExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DebugVertexBoxExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultFloorSpawnLocationColor_MetaData[] = {
		{ "Category", "Dungeon Generation - Debug" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultFloorSpawnLocationColor = { "DefaultFloorSpawnLocationColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, DefaultFloorSpawnLocationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultFloorSpawnLocationColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultFloorSpawnLocationColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedFloorSpawnLocationColor_MetaData[] = {
		{ "Category", "Dungeon Generation - Debug" },
		{ "Comment", "/**\n\x09 * If no offset is used this will overlap with DefaultFloorSpawnLocationColor box\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "If no offset is used this will overlap with DefaultFloorSpawnLocationColor box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedFloorSpawnLocationColor = { "OffsetedFloorSpawnLocationColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, OffsetedFloorSpawnLocationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedFloorSpawnLocationColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedFloorSpawnLocationColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultWallSpawnLocationColor_MetaData[] = {
		{ "Category", "Dungeon Generation - Debug" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultWallSpawnLocationColor = { "DefaultWallSpawnLocationColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, DefaultWallSpawnLocationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultWallSpawnLocationColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultWallSpawnLocationColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedWallSpawnLocationColor_MetaData[] = {
		{ "Category", "Dungeon Generation - Debug" },
		{ "Comment", "/**\n\x09 * If no offset is used this will overlap with DefaultWallSpawnLocationColor box\n\x09 */" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "If no offset is used this will overlap with DefaultWallSpawnLocationColor box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedWallSpawnLocationColor = { "OffsetedWallSpawnLocationColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADungeonGenerator, OffsetedWallSpawnLocationColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedWallSpawnLocationColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedWallSpawnLocationColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoFloorTileSizeGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_TileMapColumns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MinRoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomsToGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_MaxRandomAttemptsPerRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorSM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_FloorPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_WallSMPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bWallFacingX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_RoomTemplatesDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnDungeonSpawned,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bDebugActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DebugVertexBoxExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultFloorSpawnLocationColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedFloorSpawnLocationColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DefaultWallSpawnLocationColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OffsetedWallSpawnLocationColor,
#endif // WITH_EDITORONLY_DATA
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
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ScriptStructInfo[] = {
		{ FRoomTemplate::StaticStruct, Z_Construct_UScriptStruct_FRoomTemplate_Statics::NewStructOps, TEXT("RoomTemplate"), &Z_Registration_Info_UScriptStruct_RoomTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomTemplate), 60394026U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGenerator, ADungeonGenerator::StaticClass, TEXT("ADungeonGenerator"), &Z_Registration_Info_UClass_ADungeonGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGenerator), 3318930606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_3837122357(TEXT("/Script/DungeonGeneratorPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
