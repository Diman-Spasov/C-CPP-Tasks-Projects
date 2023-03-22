// Напишете програма, която отваря три файла едновременно:
// ● файл с имена, всяко на нов ред ( в режим на четене )
// ● файл с фамилии, всяка на нов ред ( в режим на четене )
// ● файл с произволно-генерирани двойки от име + фамилия. ( в режим на
// писане )
// Програмата трябва да пита потребителя за желан брой нови генерирания
// на произволна двойка име-фамилия и за това дали да добави
// новогенерираните имена в края на файла или да замести съдържанието
// му изцяло.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100

void open_files(FILE **names_file, FILE **surnames_file, FILE **full_names_file)
{
    char names_filename[] = "names.txt";
    char surnames_filename[] = "surnames.txt";
    char full_names_filename[] = "full_names.txt";

    *names_file = fopen(names_filename, "r");
    if (*names_file == NULL)
    {
        printf("Error opening file %s\n", names_filename);
        exit(1);
    }

    *surnames_file = fopen(surnames_filename, "r");
    if (*surnames_file == NULL)
    {
        printf("Error opening file %s\n", surnames_filename);
        exit(1);
    }

    *full_names_file = fopen(full_names_filename, "w");
    if (*full_names_file == NULL)
    {
        printf("Error opening file %s\n", full_names_filename);
        exit(1);
    }
}

int count_lines(FILE *file)
{
    int lines = 0;
    char buffer[MAX_NAME_LEN];

    while (fgets(buffer, MAX_NAME_LEN, file) != NULL)
    {
        lines++;
    }

    rewind(file);
    return lines;
}

void generate_full_names(FILE *names_file, FILE *surnames_file, FILE *full_names_file, int num_names, int overwrite)
{
    int num_names_in_file = count_lines(names_file);
    int num_surnames_in_file = count_lines(surnames_file);
    char name[MAX_NAME_LEN];
    char surname[MAX_NAME_LEN];

    if (overwrite == 1)
    {
        ftruncate(fileno(full_names_file), 0);
    }

    for (int i = 0; i < num_names; i++)
    {
        int random_name_index = rand() % num_names_in_file;
        int random_surname_index = rand() % num_surnames_in_file;

        for (int j = 0; j <= random_name_index; j++)
        {
            fgets(name, MAX_NAME_LEN, names_file);
        }

        for (int j = 0; j <= random_surname_index; j++)
        {
            fgets(surname, MAX_NAME_LEN, surnames_file);
        }

        name[strlen(name) - 1] = '\0';
        surname[strlen(surname) - 1] = '\0';

        fprintf(full_names_file, "%s %s\n", name, surname);

        rewind(names_file);
        rewind(surnames_file);
    }
}

int main(int argc, char const *argv[])
{
    int num_names, overwrite;
    FILE *names_file;
    FILE *surnames_file;
    FILE *full_names_file;

    printf("Enter number of names to generate: ");
    scanf("%d", &num_names);

    printf("Overwrite existing file? (0 = No, 1 = Yes): ");
    scanf("%d", &overwrite);

    open_files(&names_file, &surnames_file, &full_names_file);
    generate_full_names(names_file, surnames_file, full_names_file, num_names, overwrite);

    fclose(names_file);
    fclose(surnames_file);
    fclose(full_names_file);

    return 0;
}
