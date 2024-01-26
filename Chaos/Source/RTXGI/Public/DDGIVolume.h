#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DDGIVolume.generated.h"

class UDDGIVolumeComponent;

UCLASS(Blueprintable)
class RTXGI_API ADDGIVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDDGIVolumeComponent* DDGIVolumeComponent;
    
    ADDGIVolume();
};

