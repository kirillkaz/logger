#include "logger.h"

Ilogger* logger::create(){
    return new consoleLogger();
}

logger::~logger(){

}