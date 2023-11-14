#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EFNAFGameState.h"
#include "EMMAnimCategory.h"
#include "OnMMRegisterSpawnDelegate.h"
#include "OnMMUnregisterSpawnDelegate.h"
#include "MoonmanManagementSystem.generated.h"

class AMoonmanSpawnPoint;

UCLASS(Blueprintable)
class FNAF9_API UMoonmanManagementSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMMRegisterSpawn OnMMRegisterSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMMUnregisterSpawn OnMMUnregisterSpawn;
    
    UMoonmanManagementSystem();
    UFUNCTION(BlueprintCallable)
    void UnRegisterSpawn(AMoonmanSpawnPoint* InSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void UnpauseMoonmanManager();
    
    UFUNCTION(BlueprintCallable)
    void StartMoonmanLiteManager();
    
    UFUNCTION(BlueprintCallable)
    void StartMoonmanDangerManager();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawn(AMoonmanSpawnPoint* InSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void PauseMoonmanManager();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMoonmanSpawnPoint*> GetAllMMSpawnPointsFor(EMMAnimCategory MMAnimation) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AMoonmanSpawnPoint*> GetAllMMSpawnPoints();
    
};

