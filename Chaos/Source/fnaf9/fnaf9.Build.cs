using UnrealBuildTool;

public class fnaf9 : ModuleRules {
    public fnaf9(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "MovieScene",
            "NavigationSystem",
            "PhysicsCore",
            "RandomItemSystem",
            "RoomSystem",
            "SlateCore",
            "UMG",
        });
    }
}
