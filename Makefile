# Makefile

TARGET = autosar_logger_example
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LDFLAGS = -pthread

SRCS = src/autosar_logger.c examples/main.c examples/board_init.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
