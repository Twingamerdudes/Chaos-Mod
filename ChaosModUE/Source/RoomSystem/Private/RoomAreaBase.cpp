#include "RoomAreaBase.h"
#include "Components/SceneComponent.h"

void ARoomAreaBase::SetPOIVisited(int32 Index) {
}

void ARoomAreaBase::ResetPOIHeat(int32 Index) {
}

bool ARoomAreaBase::IsLocationInRoom(const FVector& Location) const {
    return false;
}

float ARoomAreaBase::GetTotalRoomArea() const {
    return 0.0f;
}

TArray<FVector> ARoomAreaBase::GetRoomPoints(float PointDelta) {
    return TArray<FVector>();
}

TMap<int32, FVector> ARoomAreaBase::GetRoomEntryPoints() const {
    return TMap<int32, FVector>();
}

FVector ARoomAreaBase::GetRoomEntryPoint(int32 EntryIndex) const {
    return FVector{};
}

TArray<FRoomAdjacencyInfo> ARoomAreaBase::GetRoomAdjacency(const ARoomAreaBase* Room) const {
    return TArray<FRoomAdjacencyInfo>();
}

FVector ARoomAreaBase::GetRandomLocationInRoom() const {
    return FVector{};
}

TArray<FPointOfInterestRuntimeInfo> ARoomAreaBase::GetPointsOfInterestInfo() const {
    return TArray<FPointOfInterestRuntimeInfo>();
}

TArray<FVector> ARoomAreaBase::GetPointsOfInterest() const {
    return TArray<FVector>();
}

FPointOfInterestRuntimeInfo ARoomAreaBase::GetPointOfInterestInfoByIndex(int32 Index) const {
    return FPointOfInterestRuntimeInfo{};
}

float ARoomAreaBase::GetPlayerHeat() const {
    return 0.0f;
}

FName ARoomAreaBase::GetMapName() const {
    return NAME_None;
}

TArray<AActor*> ARoomAreaBase::GetDoors() const {
    return TArray<AActor*>();
}

TArray<UBoxComponent*> ARoomAreaBase::GetDetectors() const {
    return TArray<UBoxComponent*>();
}

USceneComponent* ARoomAreaBase::GetCharacterDetectorRoot() const {
    return NULL;
}

TArray<AActor*> ARoomAreaBase::GetAllHideActors() const {
    return TArray<AActor*>();
}

TArray<AActor*> ARoomAreaBase::GetAllAIHideActors() const {
    return TArray<AActor*>();
}

TArray<FRoomAdjacencyInfo> ARoomAreaBase::GetAllAdjacentRooms() const {
    return TArray<FRoomAdjacencyInfo>();
}

TArray<FRoomAdjacencyInfo> ARoomAreaBase::GetAllAdjacentRoomInfos() const {
    return TArray<FRoomAdjacencyInfo>();
}

float ARoomAreaBase::GetAIHeat() const {
    return 0.0f;
}

FRoomAdjacencyInfo ARoomAreaBase::GetAdjacentInfoFromDoor(AActor* Door) {
    return FRoomAdjacencyInfo{};
}

void ARoomAreaBase::ClearPOIVisited(int32 Index) {
}

void ARoomAreaBase::AdjustPOIHeat(int32 Index, float Amount) {
}

ARoomAreaBase::ARoomAreaBase() {
    this->CharacterDetectorsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CharacterDetectors"));
    this->bPlayerIsInRoom = false;
}

