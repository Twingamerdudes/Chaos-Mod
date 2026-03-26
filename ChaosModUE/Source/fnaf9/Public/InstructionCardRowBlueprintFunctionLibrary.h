#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InstructionCardRow.h"
#include "InstructionCardRowBlueprintFunctionLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class FNAF9_API UInstructionCardRowBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInstructionCardRowBlueprintFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetControllerInstructionCard(UPARAM(Ref) FInstructionCardRow& MyStructRef);
    
};

