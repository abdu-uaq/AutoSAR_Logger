# AutoSAR_Logger

AutoSAR_Logger is an open-source project aimed at providing a solution for AUTOSAR-related concepts. It offers a template codebase that can be used as a starting point for developing AUTOSAR applications. The project focuses on enhancing embedded engineering skills and creating open-source solutions for the AUTOSAR industry.

## Features

- Board initialization and peripheral configuration
- Pin control for GPIO and other peripherals
- Event logging with different severity levels
- Cross-platform compatibility
- Easily customizable for different target boards

## Getting Started

These instructions will help you get the AutoSAR_Logger project up and running on your local machine.

### Prerequisites

- Embedded C programming knowledge
- C Compiler (e.g., GCC, ARM Compiler)
- Build Tools (e.g., Make, CMake)
- AUTOSAR Event Manager library

### Installation

1. Clone the repository:

```bash
git clone https://github.com/your_username/autosar_logger.git
```

2. Build the project using your preferred build tools:

```bash
cd autosar_logger
make
```


## Usage

To use AutoSAR_Logger, follow these steps:

1. Customize the codebase for your specific target board by modifying the relevant sections in the code, such as board initialization and pin control.

2. Build the project and flash the generated binary onto your target board.

3. Include the necessary header files in your application code:

```c
#include "autosar_logger.h"
```

4. Initialize the AutoSAR_Logger library in your application's initialization code:

```c
autosar_logger_init();
```

5. Use the logging functions provided by AutoSAR_Logger to log events with different severity levels. For example:

```c
autosar_log_info("Informational log message");
autosar_log_warning("Warning log message");
autosar_log_error("Error log message");
```

6. When running your application, the log messages will be displayed in the console output or stored in a log file, depending on your configuration.


### NUCLEO-G071RB Board
If you are using the NUCLEO-G071RB board, follow these additional steps:

1. Modify the board-specific initialization code in board_init.c to configure the necessary peripherals and pins specific to the NUCLEO-G071RB board.

2. Build the project using your preferred build tools, specifying the NUCLEO-G071RB board as the target:

```bash
make TARGET=NUCLEO_G071RB
```

3. Flash the generated binary onto the NUCLEO-G071RB board.

### Other Boards
For other target boards, follow these steps:

1. Modify the board-specific initialization code in board_init.c to configure the necessary peripherals and pins specific to your target board.

2. Build the project using your preferred build tools, specifying the appropriate board as the target. 
   For example:
   
   ```bash
   make TARGET=MY_TARGET_BOARD
   ```
   Replace MY_TARGET_BOARD with the name or identifier of your target board.

3. Flash the generated binary onto your target board.

## Contributing
Contributions are welcome! If you find any bugs, have feature requests, or want to contribute to the project, please follow the guidelines below:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push the changes to your fork.
5. Submit a pull request.

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Support
For any questions or issues, please create an issue in the Issue Tracker.

