#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AIHideLocationInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UAIHideLocationInterface : public UInterface {
    GENERATED_BODY()
};

class IAIHideLocationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayerInAttackRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetHideLocationAndRotation(FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetHideCueActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAIEjectLocationAndRotation(FVector& Location, FRotator& Rotation);
    
};

