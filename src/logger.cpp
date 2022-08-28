// logger.cpp

/*
    Main logger.cpp Class deffinition file
*/

#include <iostream>
#include <filesystem>

#include "logger.hpp"

using namespace std;
using std::filesystem::exists;

Logger::Logger() {
    level = LEVEL_INFO;                                                         // initialize logging level to INFO if not done by the user
}

Logger::~Logger() {
    // destructor empty
}

int Logger::getLevel() {
    return level;
}

int Logger::setLevel(int value) {
    if (level <= 5 && level >= 0) {
        level = value;
        return 0;
    } else {
        return 1;
    }
}

void Logger::setFilePath(string value) {
    if (exists(filepath)) {
        filepath = value;
    } else {
        filepath = value;
    }
}

void Logger::log(int depth, string text) {
    if (depth <= level) {                                                       // only log under or at the level set
        string formatted = formatLine(text, depth);

        logToConsole(formatted);
        logToFile(formatted);
    }
}

void Logger::info(string text) {
    log(3, text);
}

void Logger::warn(string text) {
    log(2, text);
}

void Logger::error(string text) {
    log(1, text);
}

void Logger::fatal(string text) {
    log(0, text);
}

string Logger::formatLine(string line, int level) {

}
