#include <stdio.h>
#include "autosar_logger.h"

int main() {
    // Initialize the AutoSAR Logger
    autosar_logger_init();

    // Log an informational message
    autosar_log_info("This is an informational log message");

    // Log a warning message
    autosar_log_warning("This is a warning log message");

    // Log an error message
    autosar_log_error("This is an error log message");

    return 0;
}
