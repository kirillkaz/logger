//
// интерфейс для логеров
//

#ifndef LOGGER_ILOGGER_H
#define LOGGER_ILOGGER_H

#include<iostream>

class Ilogger{
public:
    virtual void logError(std::string text);
    virtual void logWarning(std::string text);
    virtual void logInfo(std::string text);
    virtual ~Ilogger();
};

#endif
