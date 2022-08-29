// logger.cpp

/*
    Main logger.cpp Class deffinition file
*/

#include <iostream>
//#include <filesystem>

#include "logger.hpp"

using namespace std;
//using std::filesystem::exists;

Logger::Logger() {
    levell = LEVEL_INFO;                                                         // initialize logging level to INFO if not done by the user
}

Logger::~Logger() {
    // destructor empty
}

int Logger::getLevel() {
    return levell;
}

int Logger::setLevel(int value) {
    if (levell <= 5 && levell >= 0) {
        levell = value;
        return 0;
    } else {
        return 1;
    }
}

void Logger::setFilePath(string value) {
//    if (exists(filepath)) {
    if (true) {
        filepath = value;
    } else {
        filepath = value;
    }
}

void Logger::log(int depth, string text) {
    if (depth <= levell) {                                                       // only log under or at the level set
        string formatted = formatLine(text, depth);

        logToConsole(formatted);
        logToFile(formatted);
    }
}

void Logger::info(string text) {
    log(LEVEL_INFO, text);
}

void Logger::warn(string text) {
    log(LEVEL_WARN, text);
}

void Logger::error(string text) {
    log(LEVEL_ERROR, text);
}

void Logger::fatal(string text) {
    log(LEVEL_FATAL, text);
}

string Logger::formatLine(string line, int level) {
    return line;
}

void Logger::logToFile(string) {

}

void Logger::logToConsole(string) {

}
