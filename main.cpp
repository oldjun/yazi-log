#include <iostream>
#include <string>
using namespace std;

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
