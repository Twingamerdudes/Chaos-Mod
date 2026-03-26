using UnrealBuildTool;

public class fnaf9EditorTarget : TargetRules {
	public fnaf9EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"DLSS",
			"DLSSBlueprint",
			"fnaf9",
			"GameplayCameras",
			"ImgMediaEngine",
			"LiveLink",
			"LiveLinkComponents",
			"LiveLinkMovieScene",
			"OnlineSubsystemSteam",
			"OodleNetworkHandlerComponent",
			"RandomItemSystem",
			"RoomSystem",
			"RTXGI",
			"Spatialization",
			"SWGAIUtils",
			"SWGPlatformUtil",
			"TakeMovieScene",
		});
	}
}
