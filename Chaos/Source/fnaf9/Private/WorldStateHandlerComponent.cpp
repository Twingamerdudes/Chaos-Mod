#include "WorldStateHandlerComponent.h"

void UWorldStateHandlerComponent::SetObjectState(bool bEnable) {
}

void UWorldStateHandlerComponent::OnObjectStateChangedHandle(FName ObjectName, bool ObjectState) {
}

void UWorldStateHandlerComponent::OnObjectStateChangedEvent_Implementation() {
}

bool UWorldStateHandlerComponent::HasValidSaveName() const {
    return false;
}

bool UWorldStateHandlerComponent::GetObjectState() const {
    return false;
}

UWorldStateHandlerComponent::UWorldStateHandlerComponent() {
    this->bConditionMetOnStateSet = true;
}

