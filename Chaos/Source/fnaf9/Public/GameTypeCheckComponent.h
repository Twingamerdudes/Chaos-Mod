#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFNAFGameType.h"
#include "OnGameTypeAllowEventDelegate.h"
#include "GameTypeCheckComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API UGameTypeCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFNAFGameType> AllowedGameTypes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameTypeAllowEvent OnGameTypeAllowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameTypeAllowEvent OnGameTypeNotAllowed;
    
    UGameTypeCheckComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotAllowedGameType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllowedGameType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowed() const;
    
};

