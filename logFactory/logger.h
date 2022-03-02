//
//  logger - фабрика
//

#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include "../interfaceForLogs/Ilogger.h"
#include "../consoleLog/consoleLogger.h"
#include "../fileLog/fileLogger.h"
#include "../globLog/globLogger.h"

class logger{
public:

    Ilogger* create();
    virtual ~logger();

};

#endif
