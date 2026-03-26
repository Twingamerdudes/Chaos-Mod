#include "DownloadableContentHandler.h"

bool UDownloadableContentHandler::HasMountedDLCPack() {
    return false;
}

bool UDownloadableContentHandler::HasDLC() {
    return false;
}

TArray<FString> UDownloadableContentHandler::GetDLCPurchases() {
    return TArray<FString>();
}

UDownloadableContentHandler::UDownloadableContentHandler() {
}

