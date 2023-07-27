using UnrealBuildTool;

public class DungeonGeneratorPlugin : ModuleRules
{
    public DungeonGeneratorPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "FastNoiseLite"});

        PrivateDependencyModuleNames.AddRange(new string[] { "ProceduralMeshComponent" });

        PublicIncludePaths.AddRange(new string[] { "Plugins/HauntedWorldGenerator/Source/DungeonGeneratorPlugin/Public" });

        PrivateIncludePaths.AddRange(new string[] {});
    }
}