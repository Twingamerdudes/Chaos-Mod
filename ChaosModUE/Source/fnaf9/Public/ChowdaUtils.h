#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChowdaUtils.generated.h"

class UInputSettings;

UCLASS(Blueprintable)
class FNAF9_API UChowdaUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChowdaUtils();
    UFUNCTION(BlueprintCallable)
    static UInputSettings* ResetInputsToDefaults();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayInEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool DoInputMappingsMatch();
    
};

