#ifndef AUTOSAR_LOGGER_H
#define AUTOSAR_LOGGER_H

#include <stdio.h>
#include <time.h>

// Log levels
typedef enum {
    DEBUG,
    INFO,
    WARNING,
    ERROR
} LogLevel;

// Initialize the logger
void loggerInit();

// Enable file logging
void enableFileLogging(const char* fileName);

// Disable file logging
void disableFileLogging();

// Log a message
void logMessage(const char* message, LogLevel level);

#endif // AUTOSAR_LOGGER_H
