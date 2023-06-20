# Makefile for AutoSAR_Logger project

# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra

# Source files
SRC_DIR := src
EXAMPLES_DIR := examples
SRCS := $(wildcard $(SRC_DIR)/*.c) $(wildcard $(EXAMPLES_DIR)/*.c)
OBJS := $(SRCS:.c=.o)

# Build target
TARGET := app

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
