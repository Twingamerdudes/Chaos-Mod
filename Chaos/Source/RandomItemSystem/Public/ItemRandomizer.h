#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "ItemRandomizer.generated.h"

class ARandomItemGroup;

UCLASS(Blueprintable)
class RANDOMITEMSYSTEM_API AItemRandomizer : public AActor {
    GENERATED_BODY()
public:
    AItemRandomizer();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupItem(ARandomItemGroup* ItemGroup, FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Randomize(TSubclassOf<ARandomItemGroup> RandomItemCls, FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PickRandomLocationFromGroup(ARandomItemGroup* Group, FRandomStream& RandomStream, int32& OutLocationIndex);
    
};

