#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], chaR;
    int i, len, f = 0;

    printf("\nenter a string:");
    gets(str);

    len = strlen(str);

    printf("\nenter a character to find its position:");
    scanf("%c", &chaR);

    for (i = 0; i < len; i++)
    {
        if (str[i] == chaR)
        {
            printf("character position:\n%d", i + 1);
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("\ncharacter not found");
    }
}