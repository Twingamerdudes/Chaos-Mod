#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FNAFBaseCharacter.generated.h"

UCLASS(Blueprintable)
class FNAF9_API AFNAFBaseCharacter : public ACharacter {
    GENERATED_BODY()
public:
    AFNAFBaseCharacter();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFellOutOfWorld();
    
};

