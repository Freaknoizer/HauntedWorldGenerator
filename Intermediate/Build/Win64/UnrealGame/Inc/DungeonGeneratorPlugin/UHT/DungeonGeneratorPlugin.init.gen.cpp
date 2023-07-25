// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGeneratorPlugin_init() {}
	DUNGEONGENERATORPLUGIN_API UFunction* Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DungeonGeneratorPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DungeonGeneratorPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_DungeonGeneratorPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonGeneratorPlugin_OnDungeonSpawned__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DungeonGeneratorPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x41A07C0F,
				0x376E9DFE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DungeonGeneratorPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DungeonGeneratorPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DungeonGeneratorPlugin(Z_Construct_UPackage__Script_DungeonGeneratorPlugin, TEXT("/Script/DungeonGeneratorPlugin"), Z_Registration_Info_UPackage__Script_DungeonGeneratorPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x41A07C0F, 0x376E9DFE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
