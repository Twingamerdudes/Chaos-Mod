#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EMapArea.h"
#include "LoadCompletedDelegateDelegate.h"
#include "SaveHandlerInterface.h"
#include "LevelLoadSubsystem.generated.h"

class UDataTable;
class ULevelStreaming;

UCLASS(Blueprintable)
class FNAF9_API ULevelLoadSubsystem : public UTickableWorldSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadCompletedDelegate LoadCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnloadedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnloadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OldLevelsAreUnLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NextLevelsAreVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTick;
    
public:
    ULevelLoadSubsystem();
    UFUNCTION(BlueprintCallable)
    void LoadTheNextArea(EMapArea MapArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTickable() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetVisibleLevels();
    
    UFUNCTION(BlueprintCallable)
    EMapArea GetCurrentMapArea();
    
    
    // Fix for true pure virtual functions not being implemented
};

