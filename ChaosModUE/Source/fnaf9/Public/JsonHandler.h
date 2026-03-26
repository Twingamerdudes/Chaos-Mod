#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonHandler.generated.h"

class UStruct;

UCLASS(Blueprintable)
class FNAF9_API UJsonHandler : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJsonHandler();
    UFUNCTION(BlueprintCallable)
    static void GenerateJsonStringFromStruct(UStruct* Struct, UPARAM(Ref) FString& OutJsonString);
    
};

