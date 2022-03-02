//
// логер для работы с консолью и файлом одновременно
//

#ifndef LOGGER_GLOBLOGGER_H
#define LOGGER_GLOBLOGGER_H

#include <iostream>
#include "../fileLog/fileLogger.h"
#include "../consoleLog/consoleLogger.h"
#include "../interfaceForLogs/Ilogger.h"

class globLogger: public Ilogger {
public:
    void logError(std::string text);
    void logWarning(std::string text);
    void logInfo(std::string text);
};

#endif
