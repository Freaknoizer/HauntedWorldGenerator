// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef DUNGEONGENERATORPLUGIN_DungeonGenerator_generated_h
#error "DungeonGenerator.generated.h already included, missing '#pragma once' in DungeonGenerator.h"
#endif
#define DUNGEONGENERATORPLUGIN_DungeonGenerator_generated_h

#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_17_DELEGATE \
DUNGEONGENERATORPLUGIN_API void FOnDungeonSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnDungeonSpawned);


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomTemplate_Statics; \
	DUNGEONGENERATORPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> DUNGEONGENERATORPLUGIN_API UScriptStruct* StaticStruct<struct FRoomTemplate>();

#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_SPARSE_DATA
#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNewWallMesh); \
	DECLARE_FUNCTION(execSetNewFloorMesh); \
	DECLARE_FUNCTION(execSetNewRoomSize); \
	DECLARE_FUNCTION(execGenerateDungeon);


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNewWallMesh); \
	DECLARE_FUNCTION(execSetNewFloorMesh); \
	DECLARE_FUNCTION(execSetNewRoomSize); \
	DECLARE_FUNCTION(execGenerateDungeon);


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_ACCESSORS
#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
public: \
	DECLARE_CLASS(ADungeonGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGenerator)


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_INCLASS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
public: \
	DECLARE_CLASS(ADungeonGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGenerator)


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonGenerator(ADungeonGenerator&&); \
	NO_API ADungeonGenerator(const ADungeonGenerator&); \
public: \
	NO_API virtual ~ADungeonGenerator();


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonGenerator(ADungeonGenerator&&); \
	NO_API ADungeonGenerator(const ADungeonGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonGenerator) \
	NO_API virtual ~ADungeonGenerator();


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_59_PROLOG
#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_RPC_WRAPPERS \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_ACCESSORS \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_INCLASS \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_SPARSE_DATA \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_ACCESSORS \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONGENERATORPLUGIN_API UClass* StaticClass<class ADungeonGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_DungeonGeneratorPlugin_Source_DungeonGeneratorPlugin_Public_DungeonGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
