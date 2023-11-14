#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "Blueprint/UserWidget.h"
#include "OptionsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FNAF9_API UOptionsMenu : public UUserWidget {
    GENERATED_BODY()
public:
    UOptionsMenu();
    UFUNCTION(BlueprintCallable)
    void VolumeSliders(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateSubtitles(int32 SubtitlesValue, bool SubtitlesOn, bool SubtitlesSmall, bool SubtitlesLarge);
    
    UFUNCTION(BlueprintCallable)
    void RestoreVideoSettings(TEnumAsByte<EWindowMode::Type> DefaultScreenMode, int32 DefaultRes, int32 DefaultColorblind, int32 VisualQuality);
    
    UFUNCTION(BlueprintCallable)
    void RestoreAudioSettings(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume, int32 UISubtitlesValue, bool UISubtitlesOn, bool UISubtitlesSmall, bool UISubtitlesLarge);
    
    UFUNCTION(BlueprintCallable)
    void ResolutionSelection(int32 UIValue);
    
    UFUNCTION(BlueprintCallable)
    void PSVideoSettings();
    
    UFUNCTION(BlueprintCallable)
    void ColorBlindSelection(int32 UIColorValue, float Severity);
    
    UFUNCTION(BlueprintCallable)
    void ApplyVideoSettings(int32 UIResValue);
    
};

