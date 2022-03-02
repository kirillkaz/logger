#include <iostream>
#include <windows.h>
#include "consoleLog/consoleLogger.h"
#include "fileLog/fileLogger.h"
#include "globLog/globLogger.h"
#include "logFactory/logger.h"
#include "interfaceForLogs/Ilogger.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);


    Ilogger* cLogger = new consoleLogger();
    Ilogger* fLogger = new fileLogger();
    Ilogger* gLogger = new globLogger();

    logger* mainlog = new logger();
    Ilogger* something = mainlog->create();

    cLogger->logError("hello");

    return 0;
}
