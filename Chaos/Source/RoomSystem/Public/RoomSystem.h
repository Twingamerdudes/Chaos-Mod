#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "Subsystems/WorldSubsystem.h"
#include "OnPlayerRoomEventDelegate.h"
#include "OnRoomLoadedDelegate.h"
#include "POIIndex.h"
#include "POIResult.h"
#include "PlayerRoomInfo.h"
#include "RoomSystem.generated.h"

class AActor;
class APawn;
class ARoomAreaBase;

UCLASS(Blueprintable)
class ROOMSYSTEM_API URoomSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRoomEvent OnPlayerEnteredRoom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRoomEvent OnPlayerExitedRoom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoomLoaded OnRoomLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoomLoaded OnRoomUnloaded;
    
    URoomSystem();
    UFUNCTION(BlueprintCallable)
    void StartRoomSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPOIResult> RemovePOIsFromArray(UPARAM(Ref) TArray<FPOIIndex>& POIsToRemove, UPARAM(Ref) TArray<FPOIResult>& POIArray) const;
    
    UFUNCTION(BlueprintCallable)
    void PlayerExitedRoom(ARoomAreaBase* RoomExited);
    
    UFUNCTION(BlueprintCallable)
    void PlayerEnteredRoom(ARoomAreaBase* RoomEntered);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInRoom(AActor* Room) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetWeightedRandomPOIFromArray(const TArray<FPOIResult>& POIArray, bool& bOutValid, FPOIResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARoomAreaBase* GetRoomAtLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetPOIsInRange(const FVector& WorldLocation, float Radius, TArray<FPOIResult>& OutPointIndices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(Latent, LatentInfo="LatentActionInfo"))
    void GetPOIsInNavigableRange(APawn* NavigationPawn, float Radius, TArray<FPOIResult>& OutPOIs, FLatentActionInfo LatentActionInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerVisitAgeForRoom(AActor* Room) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerTimeInRoom(AActor* Room) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerRoomInfo(AActor* Room, FPlayerRoomInfo& RoomInfo, bool& Found) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARoomAreaBase*> GetPlayerCurrentRooms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetHighestHeatPOIFromArray(const TArray<FPOIResult>& POIArray, bool& bValid, FPOIResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestPointOfInterest(const FVector& WorldLocation, bool& bOutValid, FPOIResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ARoomAreaBase*, int32> GetAllRoomDistancesFromRoom(ARoomAreaBase* Room) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ARoomAreaBase*, int32> GetAllRoomDistancesFromPlayerRoom() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustClosestPointOfInterestHeat(const FVector& WorldLocation, float Amount);
    
};

