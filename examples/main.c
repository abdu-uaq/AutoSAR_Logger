#include "autosar_logger.h"

int main() {
    // Initialize the logger
    loggerInit();
    
    // Enable file logging
    enableFileLogging("log.txt");
    
    // Log messages at different levels
    logMessage("This is a debug message", DEBUG);
    logMessage("This is an info message", INFO);
    logMessage("This is a warning message", WARNING);
    logMessage("This is an error message", ERROR);
    
    // Disable file logging
    disableFileLogging();
    
    return 0;
}
