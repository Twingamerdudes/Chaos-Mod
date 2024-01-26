#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "EFreddyUpgradeType.h"
#include "FNAFCheatManager.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UFNAFCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UFNAFCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UpgradeFreddy(EFreddyUpgradeType Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugCloaking();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCloaking(bool Value);
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugCloaking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyQualitySettings(int32 VisualQualityLevel, int32 RayTraceQualityLevel);
    
};

