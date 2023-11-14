#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PointOfInterestRuntimeInfo.h"
#include "RoomAdjacencyInfo.h"
#include "RoomAreaBase.generated.h"

class ARoomAreaBase;
class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ROOMSYSTEM_API ARoomAreaBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CharacterDetectorsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> CharacterDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVector> RoomEntryPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomAdjacencyInfo> AdjacentRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HideActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AIHideActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AICharactersInRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PointsOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerIsInRoom;
    
public:
    ARoomAreaBase();
    UFUNCTION(BlueprintCallable)
    void SetPOIVisited(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ResetPOIHeat(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInRoom(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalRoomArea() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetRoomPoints(float PointDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FVector> GetRoomEntryPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRoomEntryPoint(int32 EntryIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRoomAdjacencyInfo> GetRoomAdjacency(const ARoomAreaBase* Room) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRandomLocationInRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPointOfInterestRuntimeInfo> GetPointsOfInterestInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetPointsOfInterest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPointOfInterestRuntimeInfo GetPointOfInterestInfoByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerHeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetDoors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBoxComponent*> GetDetectors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetCharacterDetectorRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllHideActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllAIHideActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRoomAdjacencyInfo> GetAllAdjacentRooms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRoomAdjacencyInfo> GetAllAdjacentRoomInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAIHeat() const;
    
    UFUNCTION(BlueprintCallable)
    FRoomAdjacencyInfo GetAdjacentInfoFromDoor(AActor* Door);
    
    UFUNCTION(BlueprintCallable)
    void ClearPOIVisited(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void AdjustPOIHeat(int32 Index, float Amount);
    
};

