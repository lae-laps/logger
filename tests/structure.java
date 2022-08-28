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
