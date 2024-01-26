#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PointOfInterestRuntimeInfo.h"
#include "POIResultBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UPOIResultBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPOIResultBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool HasPOIBeenVisited(const FPointOfInterestRuntimeInfo& Info);
    
};

