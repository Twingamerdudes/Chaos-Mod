#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConditionCheckInterface.h"
#include "EConditionFailReason.h"
#include "EPlayerPawnType.h"
#include "FNAFInventoryTableStruct.h"
#include "FNAFMessageTableStruct.h"
#include "InventoryConditionalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UInventoryConditionalComponent : public UActorComponent, public IConditionCheckInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredInventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredSecurityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresPartyPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerPawnType RequiresPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerPawnType PawnTypeIgnoresConditions;
    
    UInventoryConditionalComponent();
    UFUNCTION(BlueprintCallable)
    void SetNewConditions(FName NewRequiredInventoryItem, int32 NewRequiredSecurityLevel, bool NewRequiresPartyPass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMessageCollected(FName ItemName, FFNAFMessageTableStruct MessageTableStruct);
    
    UFUNCTION(BlueprintCallable)
    void OnItemCollected(FName ItemName, FFNAFInventoryTableStruct InventoryTableStruct);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasMetConditions(bool& OutConditionsMet, EConditionFailReason& OutFailReason) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

