#include "ItemCollectListenerComponent.h"

void UItemCollectListenerComponent::SetEventsEnabled(bool bEnable) {
}

void UItemCollectListenerComponent::OnItemCollectedHandler(FName ItemName, FFNAFInventoryTableStruct InventoryItemInfo) {
}

bool UItemCollectListenerComponent::GetEventsEnabled() const {
    return false;
}

UItemCollectListenerComponent::UItemCollectListenerComponent() {
    this->bEventsEnabled = true;
}

