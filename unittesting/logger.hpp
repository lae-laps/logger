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
        static int levell;
        static int mode;  
        static string filepath;

        Logger();
        ~Logger();

        static int getLevel();
        static int setLevel(int);                                               // will return 0 if the level is valid and 1 if the level is invalid

        static void setFilePath(string);

        static void log(int, string);                                  // TODO: make this unsigned without breaking

        static void info(string);
        static void warn(string);
        static void error(string);
        static void fatal(string);


        static const int LEVEL_NONE = 4;
        static const int LEVEL_INFO = 3;
        static const int LEVEL_WARN = 2;
        static const int LEVEL_ERROR = 1;
        static const int LEVEL_FATAL = 0;


    protected:
        static string formatLine(string, int);

        static void logToFile(string);
        static void logToConsole(string);

    private:
        // Please use getter and setter methods for these attributes

        // The mode defines how to interpret the logging paths. There are two options - (0 and 1)
        // When set to 0, the path will be interpreted as a file, and created if not existing. This will be a fixed path which will never change
        // When set to 1, the path will be interpreted as a directory and files will be created daily. This option is very slightly slower as the
        // day will have to be checked, but will be usefull for long-term running applications such as servers
        //static int mode;                                               // TODO: make this unsigned without breaking

        // The level of logging to use. By implementing this, you can set all the loggs you want in your program and only execute those of more
        // or the same importance as the number you specify for this attribute.
        // 0 : FATAL
        // 1 : ERROR
        // 2 : WARN
        // 3 : INFO
        // 4 : NONE
        //static int level;                                              // TODO: make this unsigned without breaking

        // The filepath attribute is interpreted depending on the status of the mode attribute. It can either represent an unique file or a
        // directory to automatically dump daily logs.
        //static string filepath;

        //static const int LEVEL_NONE = 4;
        //static const int LEVEL_INFO = 3;
        //static const int LEVEL_WARN = 2;
        //static const int LEVEL_ERROR = 1;
        //static const int LEVEL_FATAL = 0;
};

#endif
