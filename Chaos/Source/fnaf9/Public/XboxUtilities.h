#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "XboxUtilities.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UXboxUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXboxUtilities();
private:
    UFUNCTION(BlueprintCallable)
    static void XboxQuit();
    
};

