#include "ConditionFunctionLibrary.h"

void UConditionFunctionLibrary::RemoveConditionDelegate(FConditionResultDelegates& DelegateHandle, FOnConditionResultUpdated Delegate) {
}

void UConditionFunctionLibrary::HasMetComponentConditionsWithGet(const AActor* ActorToCheck, bool& bOutConditionsMet, TArray<TScriptInterface<IConditionCheckInterface>>& OutConditionsSucceeded, TArray<TScriptInterface<IConditionCheckInterface>>& OutConditionsFailed) {
}

bool UConditionFunctionLibrary::HasMetComponentConditions(const AActor* ActorToCheck) {
    return false;
}

bool UConditionFunctionLibrary::HasMetAnyComponentConditions(const AActor* ActorToCheck) {
    return false;
}

void UConditionFunctionLibrary::CallConditionUpdate(TScriptInterface<IConditionCheckInterface> ConditionCheckInterface, const FConditionResultDelegates& DelegateHandle) {
}

void UConditionFunctionLibrary::AddConditionDelegate(FConditionResultDelegates& DelegateHandle, FOnConditionResultUpdated Delegate) {
}

UConditionFunctionLibrary::UConditionFunctionLibrary() {
}

