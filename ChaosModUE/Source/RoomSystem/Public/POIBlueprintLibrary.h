#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "POIIndex.h"
#include "POIResult.h"
#include "PointOfInterestRuntimeInfo.h"
#include "POIBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class ROOMSYSTEM_API UPOIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPOIBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void SetPOIVisited(const FPOIIndex& Index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValid(const FPOIIndex& Index);
    
    UFUNCTION(BlueprintCallable)
    static bool HasPOIBeenVisited(const FPOIIndex& Index);
    
    UFUNCTION(BlueprintCallable)
    static void GetPOIResultsFromIndices(const TArray<FPOIIndex>& Indices, TArray<FPOIResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    static FPointOfInterestRuntimeInfo GetPOIInfoFromIndex(const FPOIIndex& Index);
    
    UFUNCTION(BlueprintCallable)
    static void CreatePOIIndicesFromResults(const TArray<FPOIResult>& Results, TArray<FPOIIndex>& Indices);
    
};

