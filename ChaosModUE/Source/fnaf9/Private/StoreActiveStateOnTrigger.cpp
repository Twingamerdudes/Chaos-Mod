#include "StoreActiveStateOnTrigger.h"

void UStoreActiveStateOnTrigger::OnActorTriggered(AActor* OverlappedActor, AActor* OtherActor) {
}

UStoreActiveStateOnTrigger::UStoreActiveStateOnTrigger() {
    this->PlayerType = EPlayerPawnType::None;
}

