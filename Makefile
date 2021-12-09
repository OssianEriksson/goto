CC = gcc
CFLAGS = -O3 -Wall

OBJ_DIR = obj

SOURCES = $(shell find . -name '*.c')
OBJECTS := $(SOURCES:./%.c=$(OBJ_DIR)/%.o)
HEADERS = goto.h
PROGRAM = goto

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) -c -o $@ $< $(CFLAGS)

$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

all: $(PROGRAM)

.PHONY: clean
clean:
	rm -f $(PROGRAM)
	rm -Rf $(OBJ_DIR)
	touch *.c
