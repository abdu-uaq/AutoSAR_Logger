// autosar_logger.h

#ifndef AUTOSAR_LOGGER_H
#define AUTOSAR_LOGGER_H

// Include necessary RTOS headers

// Define the log levels
typedef enum {
    LOG_LEVEL_ERROR,
    LOG_LEVEL_WARNING,
    LOG_LEVEL_INFO,
    LOG_LEVEL_DEBUG
} LogLevel;

// Initialize the logger
void loggerInit();

// Log a message with the specified level
void logMessage(const char* message, LogLevel level);

// Enable file logging with the specified filename
void enableFileLogging(const char* filename);

// Disable file logging
void disableFileLogging();

#endif // AUTOSAR_LOGGER_H
