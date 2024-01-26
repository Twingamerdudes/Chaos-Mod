#include "ConditionalCheckComponent.h"

void UConditionalCheckComponent::OnConditionUpdated(TScriptInterface<IConditionCheckInterface> ConditionCheckInterface) {
}

UConditionalCheckComponent::UConditionalCheckComponent() {
    this->ConditionCheck = EConditionCheckType::All;
}

