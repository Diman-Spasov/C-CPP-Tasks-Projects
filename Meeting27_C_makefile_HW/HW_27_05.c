// Добавете и втори .c файл в проекта. Обновете makefile-a от предходната
// задача.

CC = gcc
CFLAGS = -Wall -Wextra

OBJ_DIR = obj

SRCS = main.c second.c
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

TARGET = main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
