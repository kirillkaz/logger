#include "fileLogger.h"

fileLogger::fileLogger(std::string filename){
    this->filename = filename;
}

void fileLogger::logError(std::string text){
    std::fstream file;
    file.open(this->filename,std::ios_base::app);

    //беру текущую дату
    time_t now = time(0);
    std::string date = ctime(&now);

    //убираю переход на след строку
    date[date.length()-1] = ' ';

    file << date << "| [Error]: "<< text << std::endl;

    file.close();
}

void fileLogger::logWarning(std::string text){
    std::fstream file;
    file.open(this->filename,std::ios_base::app);

    //беру текущую дату
    time_t now = time(0);
    std::string date = ctime(&now);

    //убираю переход на след строку
    date[date.length()-1] = ' ';

    file << date << "| [Warning]: "<< text << std::endl;

    file.close();
}

void fileLogger::logInfo(std::string text){
    std::fstream file;
    file.open(this->filename,std::ios_base::app);

    //беру текущую дату
    time_t now = time(0);
    std::string date = ctime(&now);

    //убираю переход на след строку
    date[date.length()-1] = ' ';

    file << date << "| [Info]: "<< text << std::endl;

    file.close();
}