// Направете билд процеса от предходната задача по такъв начин, че да създава и
// .o файлове (може и в отделна директория за intermetiate files).
// За целта трябва да компилирате и линквате на отделни стъпки.
// Добавете и изтриването на .о файловете в clean target-a

CC = gcc
CFLAGS = -c
LDFLAGS =
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = hello

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
