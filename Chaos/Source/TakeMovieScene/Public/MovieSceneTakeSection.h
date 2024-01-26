#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "MovieSceneSection.h"
#include "Channels/MovieSceneStringChannel.h"
#include "MovieSceneTakeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneTakeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    
    FMovieSceneIntegerChannel HoursCurve;
    
    
    FMovieSceneIntegerChannel MinutesCurve;
    
    
    FMovieSceneIntegerChannel SecondsCurve;
    
    
    FMovieSceneIntegerChannel FramesCurve;
    
   
    FMovieSceneFloatChannel SubFramesCurve;
    
   
    FMovieSceneStringChannel Slate;
    
    UMovieSceneTakeSection();
};

