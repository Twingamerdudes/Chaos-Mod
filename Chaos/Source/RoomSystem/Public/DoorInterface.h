#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DoorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDoorInterface : public UInterface {
    GENERATED_BODY()
};

class IDoorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSecurityLevel(int32 NewSecurityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorRequiredItem(FName ItemName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorLockPlayer(bool Lock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoorLockAI(bool Lock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorLockedForPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDoorLockedForAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasDoorInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceDoorOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceDoorClose();
    
};

