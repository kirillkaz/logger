#include "consoleLogger.h"
void consoleLogger::logError(std::string text) {
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    //смена цвета текста консоли на красный
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 12));
    std::cout << "[Error]: " << text << std::endl;

    //смена цвета текста консоли на белый
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 15));
}

void consoleLogger::logWarning(std::string text) {
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    //смена цвета текста консоли на желтый
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 14));
    std::cout << "[Warning]: " << text << std::endl;

    //смена цвета текста консоли на белый
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 15));
}

void consoleLogger::logInfo(std::string text) {
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    //смена цвета текста консоли на синий
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 9));
    std::cout << "[Info]: " << text << std::endl;

    //смена цвета текста консоли на белый
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((0 << 4) | 15));
}