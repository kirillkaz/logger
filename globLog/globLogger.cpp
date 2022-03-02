#include "globLogger.h"

void globLogger::logError(std::string text){
    consoleLogger cLogger;
    fileLogger fLogger;

    cLogger.logError(text);
    fLogger.logError(text);
}

void globLogger::logWarning(std::string text){
    consoleLogger cLogger;
    fileLogger fLogger;

    cLogger.logWarning(text);
    fLogger.logWarning(text);
}

void globLogger::logInfo(std::string text){
    consoleLogger cLogger;
    fileLogger fLogger;

    cLogger.logInfo(text);
    fLogger.logInfo(text);
}