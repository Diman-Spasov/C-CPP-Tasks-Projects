#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char c;
    char buff[255];
    int countSymbols;
    int newLine;

    for (int i = 0; buff[i] != '\0'; i++)
    {
        if(buff[i - 1] == '\n' || i == 0) && ((buff[i +1] =='\n' || buff[i +2] == '\n' || buff[i + 3] == '\n'))
        {
            while (buff[i] != '\n')
            {
                i++;
            }
            
        }
        else
        {
            printf("%c", buff[i]);
        }
        countSymbols = 0;
    }
}