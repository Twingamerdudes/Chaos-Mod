#pragma once
#include "CoreMinimal.h"
#include "EPlayerPawnType.h"
#include "OnPlayerTriggeredActivatorDelegateDelegate.h"
#include "WorldStateComponent.h"
#include "StoreActiveStateOnTrigger.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UStoreActiveStateOnTrigger : public UWorldStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTriggeredActivatorDelegate OnPlayerTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerPawnType PlayerType;
    
public:
    UStoreActiveStateOnTrigger();
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorTriggered(AActor* OverlappedActor, AActor* OtherActor);
    
};

