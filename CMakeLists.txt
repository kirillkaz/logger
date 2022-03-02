cmake_minimum_required(VERSION 3.20)
project(logger)

set(CMAKE_CXX_STANDARD 23)

add_executable(logger main.cpp)

add_library(Ilogger interfaceForLogs/Ilogger.cpp interfaceForLogs/Ilogger.h)
add_library(mainlogger logFactory/logger.cpp logFactory/logger.h)
add_library(fLogger fileLog/fileLogger.cpp fileLog/fileLogger.h)
add_library(cLogger consoleLog/consoleLogger.cpp consoleLog/consoleLogger.h)
add_library(globLogger globLog/globLogger.cpp globLog/globLogger.h)

target_link_libraries(cLogger Ilogger )
target_link_libraries(fLogger Ilogger)
target_link_libraries(globLogger fLogger cLogger Ilogger)

target_link_libraries(mainlogger globLogger fLogger cLogger)
target_link_libraries(logger fLogger cLogger globLogger mainlogger Ilogger)