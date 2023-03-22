// Напишете стандартната програма за Linux: cat , която приема като аргументи от командния ред
// имена на файлове и изкарва съдържанието им на стандартния изход. Ако на програмата не са
// подадени никакви аргументи, то тя да изкара съдържанието подадено от стандартния вход на
// стандартния изход.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        int c;
        while ((c = getchar()) != EOF)
        {
            putchar(c);
        }
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            FILE *file = fopen(argv[i], "r");
            if (file == NULL)
            {
                perror(argv[i]);
                exit(EXIT_FAILURE);
            }

            int c;
            while ((c = fgetc(file)) != EOF)
            {
                putchar(c);
            }

            fclose(file);
        }
    }
    return 0;
}
