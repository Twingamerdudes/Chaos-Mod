#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SecurityNodePuzzle.h"
#include "SecurityPuzzleJsonHandler.generated.h"

UCLASS(Blueprintable)
class FNAF9_API USecurityPuzzleJsonHandler : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USecurityPuzzleJsonHandler();
    UFUNCTION(BlueprintCallable)
    static bool WriteAllPuzzleDataToFile(TArray<FSecurityNodePuzzle> Puzzles);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadSecurityNodePuzzleData();
    
    UFUNCTION(BlueprintCallable)
    static void GenerateStructsArrayFromJsonStringSecurityNodePuzzle(const FString& JsonString, TArray<FSecurityNodePuzzle>& Puzzles);
    
};

