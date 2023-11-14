#include "TeleportationSubsystem.h"

void UTeleportationSubsystem::TeleportAI(APawn* AIPawn, float CapsuleHeight) {
}

void UTeleportationSubsystem::SetPlayerSaveInNormal(bool PlayerSaveInNormal) {
}

void UTeleportationSubsystem::SetPlayerInNormalForChapterReplay(bool PlayerInNormal) {
}

void UTeleportationSubsystem::SetPlayerInNormal(bool PlayerInNormal) {
}

bool UTeleportationSubsystem::IsPlayerInNormal() {
    return false;
}

float UTeleportationSubsystem::GetTeleportationDistance() {
    return 0.0f;
}

bool UTeleportationSubsystem::GetPlayerSaveInNormal() {
    return false;
}

APawn* UTeleportationSubsystem::GetCurrentAIPawn() {
    return NULL;
}

void UTeleportationSubsystem::ForceTeleport() {
}

bool UTeleportationSubsystem::CheckIfPlayerCanTeleport() {
    return false;
}

bool UTeleportationSubsystem::CanTeleport() {
    return false;
}

UTeleportationSubsystem::UTeleportationSubsystem() {
    this->bIsTeleporting = false;
    this->bDisableRestrictions = false;
    this->bInATeleportZone = true;
    this->NavData = NULL;
    this->FilterClass = NULL;
    this->bPlayerInNormal = true;
    this->bPlayerSaveInNormal = true;
    this->bAIInNormal = true;
    this->TeleportDistance = 5000.00f;
    this->CoolDownTime = 0.00f;
    this->AICapsule = 96.00f;
    this->CassieCapsule = 60.00f;
    this->IsCoolDownComplete = true;
    this->bNavMeshBlocked = false;
}

