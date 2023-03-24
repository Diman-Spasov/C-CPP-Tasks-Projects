// Заделете динамично памет за char* buffer с размер size = 2.
// Използвайте getchar за въвеждане на текст от стандартния вход до достигане на EOF.
// Реалокирайте динамично паметта при нужда (при въвеждане на все по-дълъг текст).
// Принтирайте буфера и освободете паметта.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buffer = (char *)malloc(2 * sizeof(char));
    if (buffer == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    int bufferSize = 2;
    int index = 0;
    char c;
    while ((c = getchar()) != EOF)
    {
        buffer[index++] = c;
        if (index == bufferSize)
        {
            bufferSize *= 2;
            buffer = (char *)realloc(buffer, bufferSize * sizeof(char));
            if (buffer == NULL)
            {
                printf("Memory reallocation failed\n");
                return 1;
            }
        }
    }
    printf("Buffer: %s\n", buffer);
    free(buffer);
    return 0;
}