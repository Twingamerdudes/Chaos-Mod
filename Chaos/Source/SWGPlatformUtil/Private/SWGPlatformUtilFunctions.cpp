#include "SWGPlatformUtilFunctions.h"

void USWGPlatformUtilFunctions::SwitchOnPlatform(ESWGPlatform& Platform) {
}

void USWGPlatformUtilFunctions::StartActivity(APlayerController* PlayerController, const FString& ActivityId) {
}

void USWGPlatformUtilFunctions::SetActivityAvailability(APlayerController* PlayerController, const FString& ActivityId, bool bEnabled) {
}

void USWGPlatformUtilFunctions::IsInEditorSwitch(ESWGEditor& Editor) {
}

bool USWGPlatformUtilFunctions::IsInEditor() {
    return false;
}

bool USWGPlatformUtilFunctions::GPUSupportsRayTracing() {
    return false;
}

ESWGXboxPlatform USWGPlatformUtilFunctions::GetXboxSpecificPlatform() {
    return ESWGXboxPlatform::NotXbox;
}

FString USWGPlatformUtilFunctions::GetVersionString() {
    return TEXT("");
}

FString USWGPlatformUtilFunctions::GetGPU() {
    return TEXT("");
}

FKey USWGPlatformUtilFunctions::GetGamepadBackKey() {
    return FKey{};
}

FKey USWGPlatformUtilFunctions::GetGamepadAcceptKey() {
    return FKey{};
}

ESWGPlatform USWGPlatformUtilFunctions::GetBuildPlatform() {
    return ESWGPlatform::Steam;
}

void USWGPlatformUtilFunctions::EndActivity(APlayerController* PlayerController, const FString& ActivityId, EGameActivityEndType Outcome) {
}

USWGPlatformUtilFunctions::USWGPlatformUtilFunctions() {
}

