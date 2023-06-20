CC := gcc
CFLAGS := -Wall -Wextra -O2
LDFLAGS :=

SRC_DIR := src
EXAMPLES_DIR := examples

SRC_FILES := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.c, $(SRC_DIR)/%.o, $(SRC_FILES))

EXAMPLE_FILES := $(wildcard $(EXAMPLES_DIR)/*.c)
EXAMPLE_TARGETS := $(patsubst $(EXAMPLES_DIR)/%.c, $(EXAMPLES_DIR)/%, $(EXAMPLE_FILES))

.PHONY: all clean

all: $(EXAMPLE_TARGETS)

$(EXAMPLES_DIR)/%: $(EXAMPLES_DIR)/%.c $(OBJ_FILES)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $< $(OBJ_FILES)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ_FILES) $(EXAMPLE_TARGETS)
