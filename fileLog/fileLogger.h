//
// логер для работы с файлом
//

#ifndef LOGGER_FILELOGGER_H
#define LOGGER_FILELOGGER_H

#include <iostream>
#include <windows.h>
#include <fstream>
#include <ctime>
#include "../interfaceForLogs/Ilogger.h"

class fileLogger: public Ilogger {

public:
    std::string filename;
    fileLogger(std::string filename = "logs");
    void logError(std::string text) override;
    void logWarning(std::string text) override;
    void logInfo(std::string text) override;
};

#endif
