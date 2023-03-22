// Напишете собствена версия на стандартната функция strncmp от string.h със
// същия интерфейс и функционалност.
// int strncmp( const char *lhs, const char *rhs, size_t count );

#include <stdio.h>  
int my_strncmp(char lhs[],char rhs[])  
{
    int flag, i;                 

    while (lhs[i] != '\0' && rhs[i] != '\0') 
    {
        if (lhs[i] != rhs[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        return 0;
    else
        return 1;
}