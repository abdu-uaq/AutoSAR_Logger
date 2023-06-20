# AutoSAR_Logger

AutoSAR_Logger is an open-source logging library for AUTOSAR-based embedded systems. It provides a simple and configurable logging mechanism with support for different log levels and file logging. This library is designed to be portable and compatible with various boards and Real-Time Operating Systems (RTOS).

## Features

- Configurable log levels: Error, Warning, Info, Debug
- Thread-safe logging with a mutex
- Optional file logging to record log messages to a file
- Support for different boards and RTOS

## Usage

### Prerequisites

- C compiler
- (Optional) Real-Time Operating System (RTOS) library

### Integration

1. Clone the AutoSAR_Logger repository:

git clone https://github.com/abdu-uaq/AutoSAR_Logger.git


2. Include the necessary files in your project:

- `src/autosar_logger.c`: Contains the implementation of the AutoSAR_Logger library.
- `src/autosar_logger.h`: Contains the header file for the AutoSAR_Logger library.
- `examples/main.c`: An example application that demonstrates the usage of AutoSAR_Logger.
- `examples/board_init.c`: Board-specific initialization code.

3. Include the `autosar_logger.h` header in your application code:

```c
#include "autosar_logger.h"
```
4. Initialize the logger and use the logging functions in your code:

```c
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
```

## Board and RTOS Compatibility
The AutoSAR_Logger library is designed to be compatible with various boards and Real-Time Operating Systems (RTOS). To make it work with your specific board and RTOS, you need to perform the following steps:

1. Board Compatibility: Implement the board-specific initialization code in 'examples/board_init.c'. This code should set up the necessary peripherals and configurations specific to your board.

2. RTOS Compatibility: If you are using an RTOS, make sure to include the appropriate RTOS headers and configure the necessary settings to ensure thread safety and synchronization. Update the 'autosar_logger.h' and 'autosar_logger.c' files to use the mutex or synchronization primitives provided by your RTOS.

## Building and Running
To build the example application, you can use the provided Makefile. Make sure you have a compatible C compiler and, if needed, the necessary RTOS library installed. Run the following command:

```bash
make
```
This will compile the source files and generate an executable named autosar_logger_example.

## License
This project is licensed under the [MIT License](LICENSE).

## Issue Tracker
For bug reports, feature requests, or any other issues, please visit the [issue tracker](https://github.com/abdu-uaq/AutoSAR_Logger/issues).
