#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main()
{
    char c;
    c = getchar();
    int countLines, countSpaces, countTabs;
    do
    {
        c = getchar();
        if (c == '\n')
        {
            countLines++;
        }
        else if (c == ' ')
        {
            countSpaces++;
        }
        else if (c == '\t')
        {
            countTabs++;
        }

    } while (c != EOF);
    printf("Lines: %d\nSpaces: %d\nTabs: %d", countLines, countSpaces, countTabs);
    
}