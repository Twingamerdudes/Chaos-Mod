#include "StreamingLoadComponent.h"

void UStreamingLoadComponent::StartAsyncLoadForLocation(const FVector& WorldLocation) {
}

void UStreamingLoadComponent::OnLevelLoaded() {
}

bool UStreamingLoadComponent::IsStreamingLevels() const {
    return false;
}

void UStreamingLoadComponent::EnableAllStreamingVolumes(bool bEnable) {
}

UStreamingLoadComponent::UStreamingLoadComponent() {
    this->bTurnVolumesOnAfterLoad = false;
}

