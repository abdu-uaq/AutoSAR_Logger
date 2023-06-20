# Compiler options
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# File names
SRC = autosar_logger.c main.c board_init.c
OBJ = $(SRC:.c=.o)
EXECUTABLE = autosar_logger

# Build rule
$(EXECUTABLE): $(OBJ)
    $(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJ)

# Compile rule
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
    rm -f $(OBJ) $(EXECUTABLE)
