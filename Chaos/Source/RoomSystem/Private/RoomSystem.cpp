#include "RoomSystem.h"

void URoomSystem::StartRoomSystem() {
}

TArray<FPOIResult> URoomSystem::RemovePOIsFromArray(TArray<FPOIIndex>& POIsToRemove, TArray<FPOIResult>& POIArray) const {
    return TArray<FPOIResult>();
}

void URoomSystem::PlayerExitedRoom(ARoomAreaBase* RoomExited) {
}

void URoomSystem::PlayerEnteredRoom(ARoomAreaBase* RoomEntered) {
}

bool URoomSystem::IsPlayerInRoom(AActor* Room) const {
    return false;
}

void URoomSystem::GetWeightedRandomPOIFromArray(const TArray<FPOIResult>& POIArray, bool& bOutValid, FPOIResult& OutResult) const {
}

ARoomAreaBase* URoomSystem::GetRoomAtLocation(const FVector& Location) const {
    return NULL;
}

void URoomSystem::GetPOIsInRange(const FVector& WorldLocation, float Radius, TArray<FPOIResult>& OutPointIndices) const {
}

void URoomSystem::GetPOIsInNavigableRange(APawn* NavigationPawn, float Radius, TArray<FPOIResult>& OutPOIs, FLatentActionInfo LatentActionInfo) const {
}

float URoomSystem::GetPlayerVisitAgeForRoom(AActor* Room) const {
    return 0.0f;
}

float URoomSystem::GetPlayerTimeInRoom(AActor* Room) const {
    return 0.0f;
}

void URoomSystem::GetPlayerRoomInfo(AActor* Room, FPlayerRoomInfo& RoomInfo, bool& Found) const {
}

TArray<ARoomAreaBase*> URoomSystem::GetPlayerCurrentRooms() const {
    return TArray<ARoomAreaBase*>();
}

void URoomSystem::GetHighestHeatPOIFromArray(const TArray<FPOIResult>& POIArray, bool& bValid, FPOIResult& OutResult) const {
}

void URoomSystem::GetClosestPointOfInterest(const FVector& WorldLocation, bool& bOutValid, FPOIResult& OutResult) const {
}

TMap<ARoomAreaBase*, int32> URoomSystem::GetAllRoomDistancesFromRoom(ARoomAreaBase* Room) const {
    return TMap<ARoomAreaBase*, int32>();
}

TMap<ARoomAreaBase*, int32> URoomSystem::GetAllRoomDistancesFromPlayerRoom() const {
    return TMap<ARoomAreaBase*, int32>();
}

void URoomSystem::AdjustClosestPointOfInterestHeat(const FVector& WorldLocation, float Amount) {
}

URoomSystem::URoomSystem() {
}

