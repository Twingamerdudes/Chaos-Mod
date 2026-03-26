#include "GameTypeCheckComponent.h"

void UGameTypeCheckComponent::OnNotAllowedGameType_Implementation() {
}

void UGameTypeCheckComponent::OnAllowedGameType_Implementation() {
}

bool UGameTypeCheckComponent::IsAllowed() const {
    return false;
}

UGameTypeCheckComponent::UGameTypeCheckComponent() {
    this->AllowedGameTypes.AddDefaulted(2);
}

