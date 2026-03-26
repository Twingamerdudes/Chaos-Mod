#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConditionCheckInterface.h"
#include "EConditionCheckType.h"
#include "OnConditionalCheckUpdatedDelegate.h"
#include "ConditionalCheckComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UConditionalCheckComponent : public UActorComponent, public IConditionCheckInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConditionalCheckUpdated OnConditionalCheckUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType ConditionCheck;
    
    UConditionalCheckComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnConditionUpdated(TScriptInterface<IConditionCheckInterface> ConditionCheckInterface);
    
    
    // Fix for true pure virtual functions not being implemented
};

