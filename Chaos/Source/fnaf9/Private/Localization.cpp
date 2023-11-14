#include "Localization.h"

TEnumAsByte<ELocalizationCulture> ULocalization::GetLocalizationCultureFromSteam() {
    return English;
}

TEnumAsByte<ELocalizationCulture> ULocalization::GetLocalizationCulture() {
    return English;
}

void ULocalization::ChangeLocalizationCulture(TEnumAsByte<ELocalizationCulture> Culture) {
}

ULocalization::ULocalization() {
}

