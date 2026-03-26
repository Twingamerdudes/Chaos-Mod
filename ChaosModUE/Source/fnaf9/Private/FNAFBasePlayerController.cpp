#include "FNAFBasePlayerController.h"

void AFNAFBasePlayerController::OnUsingGamepadChanged_Implementation() {
}








bool AFNAFBasePlayerController::IsUsingGamepad() const {
    return false;
}


TArray<FKey> AFNAFBasePlayerController::GetCurrentKeysDown() const {
    return TArray<FKey>();
}

bool AFNAFBasePlayerController::AnyOtherKeysDown(FKey Key) const {
    return false;
}

AFNAFBasePlayerController::AFNAFBasePlayerController() {
}

