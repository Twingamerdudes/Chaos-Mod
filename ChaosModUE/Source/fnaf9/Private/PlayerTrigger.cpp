#include "PlayerTrigger.h"
#include "Components/BoxComponent.h"

void APlayerTrigger::SetTriggerActive(bool bActive) {
}

void APlayerTrigger::SaveActivated() {
}

void APlayerTrigger::OnWorldObjectStateChanged(FName ObjectName, bool ObjectState) {
}

void APlayerTrigger::OnTriggerStay_Implementation() {
}

void APlayerTrigger::OnTriggered_Implementation() {
}

bool APlayerTrigger::IsTriggerStateSet() const {
    return false;
}

bool APlayerTrigger::IsTriggerActive() const {
    return false;
}

void APlayerTrigger::ForceTrigger() {
}

bool APlayerTrigger::CanTrigger_Implementation() const {
    return false;
}

APlayerTrigger::APlayerTrigger() {
    this->TriggerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerCollider"));
    this->bUseContinuousTrigger = false;
    this->bSaveOnTrigger = false;
    this->ValidGameTypes.AddDefaulted(1);
    this->bFixCollision = true;
    this->bTriggerOnActorOverlap = true;
}

