#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char buff[255];
    int i, flag = 1;
    char c;
    do
    {
        c = getchar();
        if (c == ' ' && flag)
        {
            buff[i++] = c;
            flag = 0;

        }
        else if (c != ' ')
        {
            buff[i++] = c;
            flag = 1;
        }
    } while (c != EOF);
    printf("%s", buff);
    
}