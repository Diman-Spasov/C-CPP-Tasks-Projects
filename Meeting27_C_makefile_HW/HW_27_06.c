// Променете makefile-a така че да може да работи с множество .c файлове, без да
// трябва да се изреждат поименно.

CC=gcc
CFLAGS=-Wall -Wextra -pedantic

SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

EXE=program

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJ)
