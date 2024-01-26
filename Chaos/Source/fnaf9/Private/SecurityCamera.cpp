#include "SecurityCamera.h"
#include "Components/SceneComponent.h"
#include "SightComponent.h"

void ASecurityCamera::StopOfficeMode() {
}

void ASecurityCamera::StartOfficeMode() {
}

void ASecurityCamera::SetPlayerDetectorEnabled(bool bEnable) {
}

void ASecurityCamera::SetEnemeyDetectorEnabled(bool bEnable) {
}

void ASecurityCamera::OnPlayerDetectorSightChanged(AActor* UpdatedActor, bool bVisible) {
}


void ASecurityCamera::OnEnemyDetectorSightChanged(AActor* UpdatedActor, bool bVisible) {
}

bool ASecurityCamera::IsCameraUnlocked(bool OnlyShowCurrentMission) const {
    return false;
}

bool ASecurityCamera::HasDetectedEnemies() const {
    return false;
}

TArray<AActor*> ASecurityCamera::GetVisibleEnemies() const {
    return TArray<AActor*>();
}


UTextureRenderTarget2D* ASecurityCamera::GetCaptureTarget() const {
    return NULL;
}


ASecurityCamera::ASecurityCamera() {
    this->CameraPivot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraPivot"));
    this->PlayerDetector = CreateDefaultSubobject<USightComponent>(TEXT("CameraVision"));
    this->PlayerControlledPivot = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerControlledPivot"));
    this->EnemyDetector = CreateDefaultSubobject<USightComponent>(TEXT("EnemyDetector"));
    this->FazwatchAccessible = true;
    this->bPlayerDetectorStartsOn = true;
    this->bEnemyDetectorStartsOn = true;
    this->bPlayerDetected = false;
    this->PanMin = -45.00f;
    this->PanMax = 45.00f;
    this->TiltMin = -45.00f;
    this->TiltMax = 0.00f;
}

