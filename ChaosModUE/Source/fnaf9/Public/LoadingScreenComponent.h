#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LoadingScreenComponent.generated.h"

class AActor;
class ULevelStreamViewpoint;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API ULoadingScreenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelStreamViewpoint* FrontViewpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelStreamViewpoint* BackViewpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelStreamViewpoint* LevelStreamViewpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* BoxCollider;
    
    ULoadingScreenComponent();
    UFUNCTION(BlueprintCallable)
    void SetPlayerCollider(UPrimitiveComponent* InPlayerCollider);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelStreamViewpoints(ULevelStreamViewpoint* Front, ULevelStreamViewpoint* Back);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerExit(AActor* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnter(AActor* InPlayer);
    
};

