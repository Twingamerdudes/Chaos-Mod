#include "LoadingScreenComponent.h"

void ULoadingScreenComponent::SetPlayerCollider(UPrimitiveComponent* InPlayerCollider) {
}

void ULoadingScreenComponent::SetLevelStreamViewpoints(ULevelStreamViewpoint* Front, ULevelStreamViewpoint* Back) {
}

void ULoadingScreenComponent::OnPlayerExit(AActor* InPlayer) {
}

void ULoadingScreenComponent::OnPlayerEnter(AActor* InPlayer) {
}

ULoadingScreenComponent::ULoadingScreenComponent() {
    this->FrontViewpoint = NULL;
    this->BackViewpoint = NULL;
    this->LevelStreamViewpoint = NULL;
    this->BoxCollider = NULL;
}

