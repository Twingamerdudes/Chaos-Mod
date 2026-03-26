#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConditionCheckInterface.h"
#include "OnObjectStateChangedDelegate.h"
#include "WorldStateHandlerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UWorldStateHandlerComponent : public UActorComponent, public IConditionCheckInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectStateChanged OnObjectStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConditionMetOnStateSet;
    
    UWorldStateHandlerComponent();
    UFUNCTION(BlueprintCallable)
    void SetObjectState(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectStateChangedHandle(FName ObjectName, bool ObjectState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnObjectStateChangedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidSaveName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetObjectState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

