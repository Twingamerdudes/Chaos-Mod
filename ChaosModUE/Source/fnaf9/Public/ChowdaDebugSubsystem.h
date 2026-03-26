#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AnimatronicTypeData.h"
#include "EMapArea.h"
#include "ChowdaDebugSubsystem.generated.h"

class UDataTable;
class ULevelLoadSubsystem;

UCLASS(Blueprintable)
class FNAF9_API UChowdaDebugSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelLoadSubsystem* LevelLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentLocation;
    
public:
    UChowdaDebugSubsystem();
    UFUNCTION(BlueprintCallable)
    void SpawnDLCRabbit(TArray<FAnimatronicTypeData> TypesToAlertIn);
    
    UFUNCTION(BlueprintCallable)
    void GoToThisArea(EMapArea MapArea);
    
};

