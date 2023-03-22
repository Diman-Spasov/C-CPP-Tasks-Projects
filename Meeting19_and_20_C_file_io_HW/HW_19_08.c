// Напишете програма, която принтира статистики за текст от файл. Програмата трябва да работи със
// следните command-line аргументи
// ● първи аргумент(задължителен): име на файл, който да прочете
// ● от 0 до 3 аргумента за това каква информация да изведе програмата
// ○ брой символи - ако има аргумент “-c”
// ○ брой думи - “-w”
// ○ брой редове - “-l”
// ○ Ако не е подаден нито един от трите аргумента, да принтира само броя думи във файла
// Направете програмата да пише в stderr при грешки или невалидни аргументи.

#include <stdio.h>
#include <string.h>

int count_chars(char *file_name)
{
    int count = 0;
    char ch;
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Could not open file %s\n", file_name);
        return 0;
    }
    while ((ch = getc(file)) != EOF)
    {
        count++;
    }
    fclose(file);
    return count;
}

int count_words(char *file_name)
{
    int count = 0;
    char word[100];
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Could not open file %s\n", file_name);
        return 0;
    }
    while (fscanf(file, "%s", word) != EOF)
    {
        count++;
    }
    fclose(file);
    return count;
}

int count_lines(char *file_name)
{
    int count = 0;
    char line[100];
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Could not open file %s\n", file_name);
        return 0;
    }
    while (fgets(line, 100, file) != NULL)
    {
        count++;
    }
    fclose(file);
    return count;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Error: No file name provided\n");
        return 1;
    }
    char *file_name = argv[1];
    if (argc == 2)
    {
        printf("Number of words: %d\n", count_words(file_name));
        return 0;
    }
    for (int i = 2; i < argc; i++)
    {
        if (strcmp(argv[i], "-c") == 0)
        {
            printf("Number of characters: %d\n", count_chars(file_name));
        }
        else if (strcmp(argv[i], "-w") == 0)
        {
            printf("Number of words: %d\n", count_words(file_name));
        }
        else if (strcmp(argv[i], "-l") == 0)
        {
            printf("Number of lines: %d\n", count_lines(file_name));
        }
        else
        {
            fprintf(stderr, "Error: Invalid argument %s\n", argv[i]);
            return 1;
        }
    }
    return 0;
}
