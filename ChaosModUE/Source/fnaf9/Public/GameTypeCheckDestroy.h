#pragma once
#include "CoreMinimal.h"
#include "GameTypeCheckComponent.h"
#include "GameTypeCheckDestroy.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameTypeCheckDestroy : public UGameTypeCheckComponent {
    GENERATED_BODY()
public:
    UGameTypeCheckDestroy();
};

