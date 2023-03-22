// Напишете програма, която отваря файл по зададено име на файл от командния ред и умножава
// всяко число, което отркие във файла по две.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        return 1;
    }

    FILE *fp;
    int num;

    fp = fopen(argv[1], "r");
    if (!fp)
    {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        printf("%d\n", num * 2);
    }

    fclose(fp);
    return 0;
}
