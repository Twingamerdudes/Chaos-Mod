#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFNAFAISpawnType.h"
#include "SeekerPatrolPath.generated.h"

UINTERFACE(Blueprintable)
class USeekerPatrolPath : public UInterface {
    GENERATED_BODY()
};

class ISeekerPatrolPath : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EFNAFAISpawnType GetSpawnType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetPathName();
    
};

