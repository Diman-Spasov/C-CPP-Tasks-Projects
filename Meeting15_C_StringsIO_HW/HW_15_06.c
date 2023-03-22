#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char buff[1000] = {0};
    int countSpace, c, i, temp, counter, counterWord;
    while ((c = getchar()) != EOF)
    {
        buff[i++] = c;
    }
    int len = (int)strlen(buff);
    for (int i = 0; i < len; i++)
    {
        if (buff[i] != ' '&& !ispunct(buff[i]) && buff[i] != EOF)
        {
            while (buff[i] != ' ')
            {
                if (buff[i] == '\n')
                {
                    break;
                }
                counter++;
            }
            counterWord++;
        }
    }
    printf("%s", buff);
}
