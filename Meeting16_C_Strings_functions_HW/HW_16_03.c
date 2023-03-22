// Напишете собствена версия на стандартната функция strcat от string.h със
// същия интерфейс и функционалност.
// char *strcat( char *dest, const char *src );

#include <stdio.h>

char *mystrcat(char dest[40], char src[40])
{
    int i, len = 0;

    for (i = 0; dest[i] != '\0'; i++) 
    {
        len++;
    }

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[len + i] = src[i];
    }

    dest[len + i] = '\0';


    return dest;
}

void main()
{
    char dest[20] = "Scaler";
    char src[20] = " Topics";
    
    char *str1;
    char *str2;
    str1 = dest;
    str2 = src;

    printf("%s", mystrcat(str1, str2));
}