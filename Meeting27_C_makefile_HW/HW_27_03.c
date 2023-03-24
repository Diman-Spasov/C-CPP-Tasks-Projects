// Променете програмата от предходната задача да пише текст във файл, ако
// файлът не съществува - го създава.
// Добавете нов target на makefile-а, който да компилира .ехе и да го стартира,
// създавайки текстовия файл.
// Добавете изтриването на текстовия файл в clean рецептата.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp = fopen("output.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating/opening file\n");
        exit(1);
    }
    fprintf(fp, "Hello, World!\n");
    fclose(fp);
    return 0;
}


all: main

main: main.c
    gcc -o main main.c

run: main
    ./main

clean:
    rm -f main output.txt

