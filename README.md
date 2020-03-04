# yazi-log
a tiny c++ logger library

|Author|junping|
|---|---|
|E-mail|oldjun@sina.com|
|Wechat|chenjunping1024|

## Log level
you can log the whole level message in your development, but should only log error & fatal in your production。To show or hide the log message, you just only define or undefine the macro in header file Logger.h and recompile your project，it's very convenient because you don't need to modify the other source code。
  
```c++
#define __DEBUG__
#define __INFO__
#define __WARN__
#define __ERROR__
#define __FATAL__
```
> Tips: To log the debug message, only need to #define \_\_DEBUG\_\_, to hide the debug message, only need to remove #define \_\_DEBUG\_\_

## Initialize the global logger instance and log message
```c++
#include "Logger.h"
using namespace yazi::utility;

int main()
{
    // initialize the global logger
    const string & logfile = "./main.log";
    Logger::instance()->open(logfile);

    debug("this is a debug message");

    info("this is a info message: %s", "yazi-logger");

    error("my name's %s, my age's %d", "junping", 30);

    return 0;
}
```

> Tips: the global logger is a singleton object. The log format is as the same as c++ printf function.

