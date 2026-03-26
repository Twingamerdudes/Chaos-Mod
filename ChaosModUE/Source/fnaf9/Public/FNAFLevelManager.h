#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "OnLevelManagerLevelsUpdatedDelegate.h"
#include "FNAFLevelManager.generated.h"

class APawn;
class ULevelStreaming;
class USceneComponent;

UCLASS(Blueprintable)
class FNAF9_API UFNAFLevelManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelManagerLevelsUpdated OnlevelsUpdated;
    
    UFNAFLevelManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterStreamingSource(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterPawnStreamingSource(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerPawn(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelStreamingEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLevelsFromStreamingSource(const USceneComponent* StreamingSource);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLevelArray(const TArray<ULevelStreaming*>& Levels);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLevel(ULevelStreaming* LevelToUnload);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllLevels();
    
    UFUNCTION(BlueprintCallable)
    void RegisterStreamingSource(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPawnStreamingSource(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    bool IsLevelStreamingEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USceneComponent*> GetStreamingSources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetLevelNamesForComponent(const USceneComponent* SceneComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void AddLevelToLoad(ULevelStreaming* LevelToLoad);
    
    UFUNCTION(BlueprintCallable)
    void AddLevelsFromStreamingSourceToLoad(const USceneComponent* StreamingSource);
    
    UFUNCTION(BlueprintCallable)
    void AddLevelArrayToLoad(const TArray<ULevelStreaming*>& LevelsToLoad);
    
};

