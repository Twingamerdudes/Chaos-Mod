#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimatronicTypeData.h"
#include "EFNAFAISpawnType.h"
#include "EFNAFAISubType.h"
#include "AnimatronicTypeDataBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UAnimatronicTypeDataBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimatronicTypeDataBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static TArray<EFNAFAISpawnType> GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray(TArray<FAnimatronicTypeData> SpawnTypes);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAnimatronicTypeData> GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray(TArray<EFNAFAISpawnType> SpawnTypes, EFNAFAISubType SpawnSubType);
    
};

