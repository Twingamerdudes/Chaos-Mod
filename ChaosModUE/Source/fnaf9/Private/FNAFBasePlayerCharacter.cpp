#include "FNAFBasePlayerCharacter.h"

void AFNAFBasePlayerCharacter::TeleportPlayerWithCameraLocation(const FVector& CameraWorldLocation, float Yaw) {
}

void AFNAFBasePlayerCharacter::TeleportPlayer(const FVector& WorldLocation, float Yaw) {
}

void AFNAFBasePlayerCharacter::OnKillZLevelsLoaded() {
}

EPlayerPawnType AFNAFBasePlayerCharacter::GetPlayerPawnType_Implementation() const {
    return EPlayerPawnType::None;
}

void AFNAFBasePlayerCharacter::GetLastSavedLocationAndRotation(FVector& LastSavedLocation, FRotator& LastSavedRotation) {
}

AFNAFBasePlayerCharacter::AFNAFBasePlayerCharacter() {
    this->PawnType = EPlayerPawnType::None;
}

