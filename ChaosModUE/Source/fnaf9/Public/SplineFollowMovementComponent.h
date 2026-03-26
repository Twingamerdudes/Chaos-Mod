#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFinishedFollowingSplineDelegateDelegate.h"
#include "SplineFollowMovementComponent.generated.h"

class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FNAF9_API USplineFollowMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedFollowingSplineDelegate OnFinishedFollowingSpline;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedFollowingSplineDelegate OnSplineLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientToTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoMove;
    
    USplineFollowMovementComponent();
    UFUNCTION(BlueprintCallable)
    void StopFollowingSpline();
    
    UFUNCTION(BlueprintCallable)
    void StartFollowingSpline();
    
    UFUNCTION(BlueprintCallable)
    void SetSplineToFollow(USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceAlongSpline(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionAndSplineToFollow(USplineComponent* Spline, bool Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDistance() const;
    
};

