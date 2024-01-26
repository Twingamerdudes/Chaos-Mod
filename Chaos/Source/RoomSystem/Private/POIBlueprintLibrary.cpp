#include "POIBlueprintLibrary.h"

void UPOIBlueprintLibrary::SetPOIVisited(const FPOIIndex& Index) {
}

bool UPOIBlueprintLibrary::IsValid(const FPOIIndex& Index) {
    return false;
}

bool UPOIBlueprintLibrary::HasPOIBeenVisited(const FPOIIndex& Index) {
    return false;
}

void UPOIBlueprintLibrary::GetPOIResultsFromIndices(const TArray<FPOIIndex>& Indices, TArray<FPOIResult>& Results) {
}

FPointOfInterestRuntimeInfo UPOIBlueprintLibrary::GetPOIInfoFromIndex(const FPOIIndex& Index) {
    return FPointOfInterestRuntimeInfo{};
}

void UPOIBlueprintLibrary::CreatePOIIndicesFromResults(const TArray<FPOIResult>& Results, TArray<FPOIIndex>& Indices) {
}

UPOIBlueprintLibrary::UPOIBlueprintLibrary() {
}

