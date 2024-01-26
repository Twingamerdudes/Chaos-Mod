#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DLCSaveSnapshotData.h"
#include "SaveHandlerInterface.h"
#include "TemporarySnapshotSystem.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UTemporarySnapshotSystem : public UGameInstanceSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UTemporarySnapshotSystem();
    UFUNCTION(BlueprintCallable)
    void SetUseSnapshot(bool UseSnapshot);
    
    UFUNCTION(BlueprintCallable)
    void SetInitializeOnPost(bool Initialize);
    
    UFUNCTION(BlueprintCallable)
    void SetAlternativeTranform(FTransform AltTranform);
    
    UFUNCTION(BlueprintCallable)
    bool GetUseSnapshot();
    
    UFUNCTION(BlueprintCallable)
    FDLCSaveSnapshotData GetTemporaryGameStateSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void CreateTemporaryGameStateSnapshot();
    
    
    // Fix for true pure virtual functions not being implemented
};

