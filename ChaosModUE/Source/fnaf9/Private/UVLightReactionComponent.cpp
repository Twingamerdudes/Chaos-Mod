#include "UVLightReactionComponent.h"

void UUVLightReactionComponent::Setup(UMaterialInstanceDynamic* InMaterial, TArray<USceneComponent*> InLocatorComponents) {
}

void UUVLightReactionComponent::RemoveActor(AActor* ActorToRemove) {
}

float UUVLightReactionComponent::GetRadius() const {
    return 0.0f;
}

bool UUVLightReactionComponent::GetEmitterInRange() const {
    return false;
}

void UUVLightReactionComponent::CalculateUV() {
}

void UUVLightReactionComponent::AddActor(AActor* ActorToAdd) {
}

UUVLightReactionComponent::UUVLightReactionComponent() {
    this->Material = NULL;
    this->DistanceExponent = 4.00f;
    this->ProjectExponent = 1.00f;
    this->Radius = 512.00f;
    this->OverrideUVLightPrecision = false;
    this->OverrideUVLightPrecisionValue = 0.00f;
}

