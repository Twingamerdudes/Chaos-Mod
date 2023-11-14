using UnrealBuildTool;

public class fnaf9GameTarget : TargetRules {
	public fnaf9GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
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
