#include "SightComponent.h"

void USightComponent::SetSightType(ESightType InSightType) {
}

void USightComponent::SetSightParams(float Angle, float MinDistance, float MaxDistance) {
}

void USightComponent::SetSightEnabled(bool bEnable) {
}

void USightComponent::SetSightAngle(float Angle) {
}

void USightComponent::SetIncludeTags(const TArray<FName>& InIgnoreTags) {
}

void USightComponent::SetFrustumTypeParams(float InMinYaw, float InMaxYaw, float InMinPitch, float InMaxPitch) {
}

void USightComponent::SetEndDistance(float Distance) {
}

void USightComponent::SetAspectRatio(float Ratio) {
}

void USightComponent::OnVisualQueryResults(const TArray<TWeakObjectPtr<UVisualSourceComponent>>& DetectedSources) {
}

void USightComponent::OnVisibleActorDestroyed(AActor* DestroyedActor) {
}

void USightComponent::OnMoonManQueryResults(const TArray<TWeakObjectPtr<AMoonmanSpawnPoint>>& MoonManSpawnPoints) {
}

ESightType USightComponent::IsUsingConeSight() const {
    return ESightType::Cone;
}

bool USightComponent::IsSightEnabled() const {
    return false;
}

bool USightComponent::IsActorVisible(AActor* Actor) {
    return false;
}

TArray<AActor*> USightComponent::GetVisibleActors() const {
    return TArray<AActor*>();
}

float USightComponent::GetStartDistance() const {
    return 0.0f;
}

float USightComponent::GetSightAngle() const {
    return 0.0f;
}

float USightComponent::GetMinYaw() const {
    return 0.0f;
}

float USightComponent::GetMinPitch() const {
    return 0.0f;
}

float USightComponent::GetMaxYaw() const {
    return 0.0f;
}

float USightComponent::GetMaxPitch() const {
    return 0.0f;
}

TArray<FName> USightComponent::GetIncludeTags() const {
    return TArray<FName>();
}

void USightComponent::GetFrustumTypeParams(float& OutMinYaw, float& OutMaxYaw, float& OutMinPitch, float& OutMaxPitch) const {
}

float USightComponent::GetEndDistance() const {
    return 0.0f;
}

float USightComponent::GetAspectRatio() const {
    return 0.0f;
}

USightComponent::USightComponent() {
    this->SightAngle = 45.00f;
    this->StartDistance = 0.00f;
    this->EndDistance = 500.00f;
    this->SightType = ESightType::Cone;
    this->AspectRatio = 1.88f;
    this->MinYaw = -45.00f;
    this->MaxYaw = 45.00f;
    this->MinPitch = -45.00f;
    this->MaxPitch = 45.00f;
    this->ThetaSteps = 10;
    this->PhiSteps = 15;
    this->bSightDetectionEnabled = true;
    this->bShowVisionDebug = false;
}

