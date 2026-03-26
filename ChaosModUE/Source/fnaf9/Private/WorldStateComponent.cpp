#include "WorldStateComponent.h"

void UWorldStateComponent::SetObjectState(bool bEnabled) {
}

bool UWorldStateComponent::HasValidSaveName() const {
    return false;
}

bool UWorldStateComponent::GetObjectState() const {
    return false;
}

UWorldStateComponent::UWorldStateComponent() {
    this->bSaveOnStateChange = true;
}

