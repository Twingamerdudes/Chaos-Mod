#include "DoorComponent.h"

void UDoorComponent::SetSecurityLevel(int32 NewSecurityLevel) {
}

void UDoorComponent::SetPlayerBlocker(UPrimitiveComponent* InPlayerBlocker) {
}

void UDoorComponent::SetLockedForPlayer(bool bLocked) {
}

void UDoorComponent::SetLockedForAI(bool bLocked) {
}

void UDoorComponent::SetAutomaticDoorEnableForPlayer(bool bEnable) {
}

void UDoorComponent::SetAutomaticDoorEnableForAI(bool bEnable) {
}

void UDoorComponent::PawnExitedDoor(APawn* Pawn) {
}

void UDoorComponent::PawnEnteredDoor(APawn* Pawn) {
}

bool UDoorComponent::IsLockedForPlayer() const {
    return false;
}

bool UDoorComponent::IsLockedForAI() const {
    return false;
}

void UDoorComponent::HasMetConditions(AFNAFBasePlayerCharacter* BasePlayerCharacter, bool& bConditionsMet, EConditionFailReason& FailReason) const {
}

bool UDoorComponent::HasDoorInitialized() const {
    return false;
}

TArray<APawn*> UDoorComponent::GetPawnsInDoor() const {
    return TArray<APawn*>();
}

bool UDoorComponent::GetIsAutomaticDoorEnabledForPlayer() const {
    return false;
}

bool UDoorComponent::GetIsAutomaticDoorEnabledForAI() const {
    return false;
}

EDoorSide UDoorComponent::GetDoorSideFromLocation(const FVector& WorldLocation) const {
    return EDoorSide::Both;
}

EDoorSide UDoorComponent::GetDoorSideFromActor(AActor* Actor) const {
    return EDoorSide::Both;
}

FDoorEntryRequirements UDoorComponent::GetCurrentRequirements() const {
    return FDoorEntryRequirements{};
}

void UDoorComponent::ForceOpen() {
}

void UDoorComponent::ForceClose() {
}

void UDoorComponent::CopyConditions(UDoorComponent* OtherDoorComponent) {
}

void UDoorComponent::CanPawnOpenDoor(APawn* Pawn, bool& bOutConditionsMet, EConditionFailReason& OutFailReason) const {
}

UDoorComponent::UDoorComponent() {
    this->bIsOpen = false;
    this->bIsLockedForAI = false;
    this->bIsLockedForPlayer = false;
    this->PlayerBlocker = NULL;
}

