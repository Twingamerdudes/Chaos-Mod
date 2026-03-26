#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SWGAIUtilLibrary.generated.h"

class UBlackboardComponent;

UCLASS(Blueprintable)
class SWGAIUTILS_API USWGAIUtilLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USWGAIUtilLibrary();
    UFUNCTION(BlueprintCallable)
    static void ClearAllBlackboardValues(UBlackboardComponent* Blackboard);
    
};

