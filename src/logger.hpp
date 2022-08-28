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

        static int  getLevel()
        static void setLevel(int);

        static void log(int, string);

        static void info(String text);
        static void warn(String text);
        static void error(String text);
        static void fatal(String text);

    protected:

    private:
        static int level;

        const int LEVEL_INFO = 3;
        const int LEVEL_WARN = 2;
        const int LEVEL_ERROR = 1;
        const int LEVEL_FATAL = 0;
}

#endif

// /*

class Logger {
  private const LEVEL_INFO = 3;
  private const LEVEL_WARN = 2;
  private const LEVEL_ERROR = 1;
  private const LEVEL_FATAL = 0;

  private static level;


  // Constructor
  Logger() {
    level = LEVEL_FATAL;
  };

  static setLevel(int level) {
    Logger:level = level;
  };

  static getLevel(int level);


  // set the file where the logger saves the logs
  static void setFilePath(String filepath);

  private static String formatLine(String text);

  static void log(int level, String text) {
    // abort if not enough level to log
    if level > Logger.level return;



  }

  static void info(String text);
  static void warn(String text);
  static void error(String text);
  static void fatal(String text);

}



Logger.log()

Logger::log()
*/
