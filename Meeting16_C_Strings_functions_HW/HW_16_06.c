// Напишете собствена версия на стандартната функция strstr от string.h със
// същия интерфейс и функционалност.
// char *strstr( const char* str, const char* substr );

#include <stdio.h>
#include <string.h>

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 100

char *stristr4(const char *str, const char *substr, size_t num);

int main() 
{
    char c[MAX], d[MAX];
    printf("Please enter the string you want to compare.");
    gets(c);
    printf("Please enter the next string you want to compare.");
    gets(d);
    printf("The first string to be obtained from \n%s, and \n%s is \n%s",
           c, d, my_strstr(c, d, MAX));
}

char *my_strstr(const char *str, const char *substr, size_t num) 
{
    char* ptr = str;

    while(*stt )
    {
        if ((*str )
    }
    return 0;
}