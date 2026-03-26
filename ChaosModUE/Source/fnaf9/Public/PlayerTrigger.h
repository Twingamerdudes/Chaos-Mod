#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFNAFGameType.h"
#include "OnPlayerTriggeredDelegateDelegate.h"
#include "SaveHandlerInterface.h"
#include "PlayerTrigger.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class FNAF9_API APlayerTrigger : public AActor, public ISaveHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTriggeredDelegate OnPlayerTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseContinuousTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveOnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFNAFGameType> ValidGameTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnActorOverlap;
    
    APlayerTrigger();
    UFUNCTION(BlueprintCallable)
    void SetTriggerActive(bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldObjectStateChanged(FName ObjectName, bool ObjectState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggerStay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriggerStateSet() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriggerActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanTrigger() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

