#include "MoonmanSpawnPoint.h"
#include "Components/BillboardComponent.h"
#include "VisualSourceComponent.h"

void AMoonmanSpawnPoint::SetSpawnProbability(float tempProbability) {
}

void AMoonmanSpawnPoint::SetShouldFollowPlayer(bool In) {
}

void AMoonmanSpawnPoint::SetMMAnimCategory(const EMMAnimCategory In) {
}

void AMoonmanSpawnPoint::SetIsTriggered(bool isTriggered) {
}

void AMoonmanSpawnPoint::SetIsStationary(bool In) {
}

void AMoonmanSpawnPoint::SetIsSpawned(bool IsSpawned) {
}

void AMoonmanSpawnPoint::SetIsSingleUse(bool In) {
}

void AMoonmanSpawnPoint::SetIsMMDetected(bool IsSkeletonDetected) {
}

void AMoonmanSpawnPoint::SetIsAnimLoop(bool In) {
}

void AMoonmanSpawnPoint::SetHasSpawnedOnce(bool HasSpawnedOnce) {
}

void AMoonmanSpawnPoint::SetHasLookedOnce(bool HasLookedOnce) {
}

void AMoonmanSpawnPoint::SetCanSpawn(bool canSpawn) {
}

void AMoonmanSpawnPoint::SetCanPopUp(bool In) {
}

void AMoonmanSpawnPoint::SetAimHeadAtPlayer(bool In) {
}

void AMoonmanSpawnPoint::OnSetAIDisplay(bool enable) {
}

float AMoonmanSpawnPoint::GetSpawnProbability() {
    return 0.0f;
}

float AMoonmanSpawnPoint::GetOriginalProbability() {
    return 0.0f;
}

TArray<UAnimSequence*> AMoonmanSpawnPoint::GetMMAnimSeq_Array() const {
    return TArray<UAnimSequence*>();
}

EMMAnimCategory AMoonmanSpawnPoint::GetMMAnimCategory() const {
    return EMMAnimCategory::None;
}

bool AMoonmanSpawnPoint::GetIsTriggered() {
    return false;
}

bool AMoonmanSpawnPoint::GetIsStationary() {
    return false;
}

bool AMoonmanSpawnPoint::GetIsSpawned() {
    return false;
}

bool AMoonmanSpawnPoint::GetIsSingleUse() {
    return false;
}

bool AMoonmanSpawnPoint::GetIsMMDetected() {
    return false;
}

bool AMoonmanSpawnPoint::GetIsFollowPlayerTrue() {
    return false;
}

bool AMoonmanSpawnPoint::GetIsAnimLoop() {
    return false;
}

bool AMoonmanSpawnPoint::GetHasSpawnedOnce() {
    return false;
}

bool AMoonmanSpawnPoint::GetHasLookedOnce() {
    return false;
}

bool AMoonmanSpawnPoint::GetCanSpawn() {
    return false;
}

bool AMoonmanSpawnPoint::GetCanPopUp() {
    return false;
}

bool AMoonmanSpawnPoint::GetAimHeadAtPlayer() {
    return false;
}

void AMoonmanSpawnPoint::DetectTheSpawnPoint(AMoonmanSpawnPoint* passed_HitActor, bool passed_bVisible) {
}

AMoonmanSpawnPoint::AMoonmanSpawnPoint() {
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon"));
    this->VisualSource = CreateDefaultSubobject<UVisualSourceComponent>(TEXT("VisualSourceComponent"));
    this->b_CanSpawn = true;
    this->MMAnimCategory = EMMAnimCategory::None;
    this->bShouldFollowPlayer = false;
    this->bIsStationary = false;
    this->bAnimLoop = false;
    this->bAimHeadAtPlayer = false;
    this->bCanPopUp = false;
    this->bIsSingleUse = true;
    this->probabilityOfSpawn = 1.00f;
    this->originalProbabilityOfSpawn = 1.00f;
}

