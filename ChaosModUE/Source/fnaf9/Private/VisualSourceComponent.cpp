#include "VisualSourceComponent.h"

void UVisualSourceComponent::SetVisualOffsetLocations(const TArray<FVector>& InVisualOffsets) {
}

void UVisualSourceComponent::SetVisualOffset(int32 PointIndex, FVector visualOffset) {
}

void UVisualSourceComponent::SetSourceVisibility(bool bEnable) {
}

void UVisualSourceComponent::RemoveVisualOffset(int32 PointIndex) {
}

TArray<FVector> UVisualSourceComponent::GetVisualOffsets() const {
    return TArray<FVector>();
}

TArray<FVector> UVisualSourceComponent::GetVisualLocations() const {
    return TArray<FVector>();
}

bool UVisualSourceComponent::GetSourceVisibility() const {
    return false;
}

FVector UVisualSourceComponent::GetDetectedVisualLocation() const {
    return FVector{};
}

void UVisualSourceComponent::DetectTheSource(const FVector VSLocation, AActor* passed_HitActor, bool passed_bVisible) {
}

UVisualSourceComponent::UVisualSourceComponent() {
    this->bIsVisibilityEnabled = true;
}

