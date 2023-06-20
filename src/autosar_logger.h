#ifndef AUTOSAR_LOGGER_H
#define AUTOSAR_LOGGER_H

// Initialize the AutoSAR Logger
void autosar_logger_init();

// Log an informational message
void autosar_log_info(const char* message, ...);

// Log a warning message
void autosar_log_warning(const char* message, ...);

// Log an error message
void autosar_log_error(const char* message, ...);

#endif  // AUTOSAR_LOGGER_H
