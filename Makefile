# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror

# Include directories
INCLUDE_DIRS = -I/path/to/cmsis_os2/include

# Libraries
LIBS = -L/path/to/cmsis_os2/lib -lcmsis_os2

# Source files
SRCS = main.c file1.c file2.c

# Object files
OBJS = $(SRCS:.c=.o)

# Build target
TARGET = app

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(LIBS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
