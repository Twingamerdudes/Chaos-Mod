#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EConditionFailReason.h"
#include "DoorInteractor.generated.h"

class UDoorComponent;

UINTERFACE(Blueprintable)
class UDoorInteractor : public UInterface {
    GENERATED_BODY()
};

class IDoorInteractor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOverlappedDoor(bool bCanEnterDoor, EConditionFailReason CantEnterReason, UDoorComponent* DoorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndOverlapDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoorEntryNotAllowed(UDoorComponent* DoorComponent);
    
};

