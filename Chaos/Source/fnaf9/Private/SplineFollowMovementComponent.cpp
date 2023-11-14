#include "SplineFollowMovementComponent.h"

void USplineFollowMovementComponent::StopFollowingSpline() {
}

void USplineFollowMovementComponent::StartFollowingSpline() {
}

void USplineFollowMovementComponent::SetSplineToFollow(USplineComponent* Spline) {
}

void USplineFollowMovementComponent::SetDistanceAlongSpline(float Distance) {
}

void USplineFollowMovementComponent::SetDirectionAndSplineToFollow(USplineComponent* Spline, bool Direction) {
}

bool USplineFollowMovementComponent::IsFollowingSpline() const {
    return false;
}

float USplineFollowMovementComponent::GetCurrentDistance() const {
    return 0.0f;
}

USplineFollowMovementComponent::USplineFollowMovementComponent() {
    this->MovementSpeed = 0.00f;
    this->SplineToFollow = NULL;
    this->bOrientToTangent = true;
    this->bForward = true;
    this->bAutoMove = true;
}

