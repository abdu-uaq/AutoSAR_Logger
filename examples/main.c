// main.c

#include "autosar_logger.h"

int main() {
    // Initialize the logger
    loggerInit();

    // Log messages at different levels
    logMessage("Error message", LOG_LEVEL_ERROR);
    logMessage("Warning message", LOG_LEVEL_WARNING);
    logMessage("Info message", LOG_LEVEL_INFO);
    logMessage("Debug message", LOG_LEVEL_DEBUG);

    // Enable file logging
    enableFileLogging("log.txt");

    // Log more messages
    logMessage("Logging to file: Message 1", LOG_LEVEL_INFO);
    logMessage("Logging to file: Message 2", LOG_LEVEL_INFO);

    // Disable file logging
    disableFileLogging();

    // Cleanup and shutdown
    // ...

    return 0;
}
