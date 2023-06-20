#include "autosar_logger.h"

// File logging flag
static int fileLoggingEnabled = 0;

// File pointer for log file
static FILE* logFile = NULL;

// Convert log level enum to string
const char* levelToString(LogLevel level) {
    switch (level) {
        case DEBUG: return "DEBUG";
        case INFO: return "INFO";
        case WARNING: return "WARNING";
        case ERROR: return "ERROR";
        default: return "";
    }
}

// Initialize the logger
void loggerInit() {
    // TODO: Implement any initialization code if needed
}

// Enable file logging
void enableFileLogging(const char* fileName) {
    fileLoggingEnabled = 1;
    
    // Open the log file in append mode
    logFile = fopen(fileName, "a");
    
    if (logFile == NULL) {
        printf("Failed to open log file for writing\n");
    }
}

// Disable file logging
void disableFileLogging() {
    fileLoggingEnabled = 0;
    
    // Close the log file if it's open
    if (logFile != NULL) {
        fclose(logFile);
        logFile = NULL;
    }
}

// Log a message
void logMessage(const char* message, LogLevel level) {
    // Get the current time
    time_t now = time(NULL);
    struct tm* timeInfo = localtime(&now);
    
    // Format the timestamp
    char timestamp[20];
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", timeInfo);
    
    // Print the log message to console
    printf("[%s] [%s] %s\n", timestamp, levelToString(level), message);
    
    // Log to file if file logging is enabled
    if (fileLoggingEnabled && logFile != NULL) {
