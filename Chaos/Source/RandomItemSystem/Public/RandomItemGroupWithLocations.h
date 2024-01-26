#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RandomItemGroup.h"
#include "RandomItemGroupWithLocations.generated.h"

UCLASS(Blueprintable)
class RANDOMITEMSYSTEM_API ARandomItemGroupWithLocations : public ARandomItemGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PossibleLocations;
    
    ARandomItemGroupWithLocations();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetPossibleLocations() const;
    
};

