# Makefile for AutoSAR_Logger

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Werror

# Source files
SRCS := src/autosar_logger.c examples/main.c

# Object files
OBJS := $(SRCS:.c=.o)

# Executable
TARGET := autosar_logger_example

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Clean
clean:
	rm -f $(OBJS) $(TARGET)
