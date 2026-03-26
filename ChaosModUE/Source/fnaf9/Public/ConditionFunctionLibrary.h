#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConditionResultDelegates.h"
#include "OnConditionResultUpdatedDelegate.h"
#include "ConditionFunctionLibrary.generated.h"

class AActor;
class IConditionCheckInterface;
class UConditionCheckInterface;

UCLASS(Blueprintable)
class FNAF9_API UConditionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConditionFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void RemoveConditionDelegate(UPARAM(Ref) FConditionResultDelegates& DelegateHandle, FOnConditionResultUpdated Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void HasMetComponentConditionsWithGet(const AActor* ActorToCheck, bool& bOutConditionsMet, TArray<TScriptInterface<IConditionCheckInterface>>& OutConditionsSucceeded, TArray<TScriptInterface<IConditionCheckInterface>>& OutConditionsFailed);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMetComponentConditions(const AActor* ActorToCheck);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMetAnyComponentConditions(const AActor* ActorToCheck);
    
    UFUNCTION(BlueprintCallable)
    static void CallConditionUpdate(TScriptInterface<IConditionCheckInterface> ConditionCheckInterface, const FConditionResultDelegates& DelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    static void AddConditionDelegate(UPARAM(Ref) FConditionResultDelegates& DelegateHandle, FOnConditionResultUpdated Delegate);
    
};

