#include "InventoryConditionalComponent.h"

void UInventoryConditionalComponent::SetNewConditions(FName NewRequiredInventoryItem, int32 NewRequiredSecurityLevel, bool NewRequiresPartyPass) {
}

void UInventoryConditionalComponent::OnMessageCollected(FName ItemName, FFNAFMessageTableStruct MessageTableStruct) {
}

void UInventoryConditionalComponent::OnItemCollected(FName ItemName, FFNAFInventoryTableStruct InventoryTableStruct) {
}

void UInventoryConditionalComponent::HasMetConditions(bool& OutConditionsMet, EConditionFailReason& OutFailReason) const {
}

UInventoryConditionalComponent::UInventoryConditionalComponent() {
    this->RequiredSecurityLevel = 0;
    this->RequiresPartyPass = false;
    this->RequiresPawn = EPlayerPawnType::None;
    this->PawnTypeIgnoresConditions = EPlayerPawnType::None;
}

