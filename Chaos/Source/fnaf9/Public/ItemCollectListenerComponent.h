#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FNAFInventoryTableStruct.h"
#include "OnCorrectItemCollectedDelegateDelegate.h"
#include "ItemCollectListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UItemCollectListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCorrectItemCollectedDelegate OnItemCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCorrectItemCollectedDelegate OnItemAlreadyCollected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventsEnabled;
    
public:
    UItemCollectListenerComponent();
    UFUNCTION(BlueprintCallable)
    void SetEventsEnabled(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemCollectedHandler(FName ItemName, FFNAFInventoryTableStruct InventoryItemInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEventsEnabled() const;
    
};

