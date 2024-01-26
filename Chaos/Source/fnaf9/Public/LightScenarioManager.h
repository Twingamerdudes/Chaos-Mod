#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ELightScenarioArea.h"
#include "ELightingScenario.h"
#include "OnLightScenarioChangeParamDelegate.h"
#include "SaveHandlerInterface.h"
#include "LightScenarioManager.generated.h"

UCLASS(Blueprintable)
class FNAF9_API ULightScenarioManager : public UWorldSubsystem, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    ULightScenarioManager();
    UFUNCTION(BlueprintCallable)
    void UnloadArea();
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnEndScenarioChange(FOnLightScenarioChangeParam Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindOnBeginScenarioChange(FOnLightScenarioChangeParam Delegate);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialScenario(int32 Area, ELightingScenario Scenario);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnloadFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnTick();
    
    UFUNCTION(BlueprintCallable)
    void OnPropagate();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeoutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAreaUnloadFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAreaLoadFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangingScenario() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLightScenarioAreaFromMap(const FName& MapName, ELightScenarioArea& OutArea, ELightingScenario& OutScenario) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetLevelNameFromAreaScenario(int32 Area, ELightingScenario Scenario);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELightingScenario GetCurrentLightingScenario() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentArea() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoadSequence();
    
    UFUNCTION(BlueprintCallable)
    void ChangeScenario(ELightingScenario NewScenario, bool bUseFade);
    
    UFUNCTION(BlueprintCallable)
    void ChangeArea(int32 Area);
    
    UFUNCTION(BlueprintCallable)
    void BindOnEndScenarioChange(FOnLightScenarioChangeParam Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindOnBeginScenarioChange(FOnLightScenarioChangeParam Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadSequence();
    
    
    // Fix for true pure virtual functions not being implemented
};

