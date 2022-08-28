/*  logger.hpp

    Copyright (c) 2022 - laelaps

    This is a fast and minimal c++ library to provide quick and reliable dual logging
    to console aswell as to a specified file which is initialized

*/

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>

using namespace std;

class Logger {
    public:
        Logger();
        ~Logger();

        static int getLevel()
        static int setLevel(int);                                               // will return 0 if the level is valid and 1 if the level is invalid

        static void setFilePath(string);

        static void log(int, string);

        static void info(String text);
        static void warn(String text);
        static void error(String text);
        static void fatal(String text);

    protected:
        static string formatLine(string);

        static void logToFile(string);
        static void logToConsole(string);

    private:
        static int level;
        static string filepath;

        const int LEVEL_NONE = 4;
        const int LEVEL_INFO = 3;
        const int LEVEL_WARN = 2;
        const int LEVEL_ERROR = 1;
        const int LEVEL_FATAL = 0;
}

#endif
