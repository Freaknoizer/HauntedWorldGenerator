using UnrealBuildTool;

public class DungeonGenerator : ModuleRules
{
    public DungeonGenerator(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "FastNoiseLite"});

        PrivateDependencyModuleNames.AddRange(new string[] { "FastNoiseLite", "ProceduralMeshComponent" });

        PublicIncludePaths.AddRange(new string[] { "Plugins/DungeonGeneratorPlugin/Source/DungeonGeneratorPlugin/Public" });

        PrivateIncludePaths.AddRange(new string[] { "Plugins/DungeonGeneratorPlugin/Source/DungeonGeneratorPlugin/Private" });
    }
}