# AutoSAR_Logger

AutoSAR_Logger is an open-source logging library for embedded systems based on the AUTOSAR standard. It provides a flexible and configurable logging framework that can be easily integrated into AUTOSAR projects.

## Features

- Configurable log levels
- Multiple log channels
- Log message filtering
- Runtime log level configuration
- Target board compatibility
- RTOS support

## Getting Started

### Prerequisites

- C/C++ compiler
- AUTOSAR compliant board or microcontroller
- RTOS (optional)

### Usage

1. Clone the repository:

   ```shell
   git clone https://github.com/abd-uaq/AutoSAR_Logger.git
   ```

2. Include the necessary files in your project:

- 'src/autosar_logger.c': Implementation of the AutoSAR_Logger library
- 'src/autosar_logger.h': Header file for the AutoSAR_Logger library
- 'examples/board_init.c': Board-specific initialization code
- 'examples/board_init.h': Header file for the board-specific initialization code
- 'examples/main.c': Example application demonstrating the usage of AutoSAR_Logger

3. Configure the logger settings in 'autosar_logger.h' according to your requirements.

4. Customize the board-specific initialization code in 'board_init.c' to match your target board.

5. Build and run your project.

## Board Compatibility
The AutoSAR_Logger library is designed to be compatible with a wide range of boards and microcontrollers. However, some board-specific initialization code may be required to configure the logger for your specific board.

The following boards are officially supported:

- NUCLEO-F401RE
- NUCLEO-L476RG
- NUCLEO-G071RB

For other boards, you may need to modify the board-specific initialization code in 'board_init.c' to match your board's configuration.

## RTOS Support
AutoSAR_Logger can be used with or without an RTOS. If you are using an RTOS, make sure to include the necessary RTOS headers and configure the logger to work with your RTOS of choice. The example code provided assumes usage with an RTOS.

## Contributing
Contributions to AutoSAR_Logger are welcome! If you have any suggestions, bug reports, or feature requests, please open an issue on the[issue tracker](https://github.com/abdu-uaq/AutoSAR_Logger/issues).

## License
This project is licensed under the [MIT License](LICENSE).

