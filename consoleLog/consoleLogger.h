//
// логер для работы с консолью
//

#ifndef LOGGER_CONSOLELOGGER_H
#define LOGGER_CONSOLELOGGER_H
#include <iostream>
#include <windows.h>

#include "../interfaceForLogs/Ilogger.h"

class consoleLogger: public Ilogger{

public:
    void logError(std::string text) override;
    void logWarning(std::string text) override;
    void logInfo(std::string text) override;

};

#endif //LOGGER_CONSOLELOGGER_H
