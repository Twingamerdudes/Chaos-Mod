#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurvivalItemPackage.generated.h"

class ASurvivalItemRandomizer;

UCLASS(Blueprintable)
class FNAF9_API ASurvivalItemPackage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASurvivalItemRandomizer* SurvivalRandomizer;
    
    ASurvivalItemPackage();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCollected() const;
    
    UFUNCTION(BlueprintCallable)
    void Collect();
    
};

