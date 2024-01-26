#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "XSXUtilities.generated.h"

UCLASS(Blueprintable)
class FNAF9_API UXSXUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXSXUtilities();
private:
    UFUNCTION(BlueprintCallable)
    static FString GetXSXConsoleType();
    
};

