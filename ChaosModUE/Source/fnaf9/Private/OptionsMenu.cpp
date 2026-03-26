#include "OptionsMenu.h"

void UOptionsMenu::VolumeSliders(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume) {
}

bool UOptionsMenu::UpdateSubtitles(int32 SubtitlesValue, bool SubtitlesOn, bool SubtitlesSmall, bool SubtitlesLarge) {
    return false;
}

void UOptionsMenu::RestoreVideoSettings(TEnumAsByte<EWindowMode::Type> DefaultScreenMode, int32 DefaultRes, int32 DefaultColorblind, int32 VisualQuality) {
}

void UOptionsMenu::RestoreAudioSettings(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume, int32 UISubtitlesValue, bool UISubtitlesOn, bool UISubtitlesSmall, bool UISubtitlesLarge) {
}

void UOptionsMenu::ResolutionSelection(int32 UIValue) {
}

void UOptionsMenu::PSVideoSettings() {
}

void UOptionsMenu::ColorBlindSelection(int32 UIColorValue, float Severity) {
}

void UOptionsMenu::ApplyVideoSettings(int32 UIResValue) {
}

UOptionsMenu::UOptionsMenu() : UUserWidget(FObjectInitializer::Get()) {
}

