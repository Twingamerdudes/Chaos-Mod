#include "AISpawnTrigger.h"
#include "Components/ArrowComponent.h"

void AAISpawnTrigger::OnAISpawnedFailure_Implementation(APawn* SpawnedPawn) {
}

void AAISpawnTrigger::OnAISpawned_Implementation(APawn* SpawnedPawn) {
}

AAISpawnTrigger::AAISpawnTrigger() {
    this->SpawnAnyCharacter = false;
    this->ForceShattered = false;
    this->SpawnLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnLocation"));
}

