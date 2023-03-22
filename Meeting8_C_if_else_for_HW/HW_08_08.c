#include <stdio.h>
void toLower(char[]);

int main()
{
    char string[100];

    printf("Enter a string to convert it into lower case\n");
    gets(string);

    toLower(string);

    printf("The string in upper case: %s\n", string);

    return 0;
}
void toLower(char str[])
{
    int chaR = 0;

    while (str[chaR] != '\0')
    {
        if (str[chaR] >= 'A' && str[chaR] <= 'Z')
        {
            str[chaR] = str[chaR] + 32;
        }
        chaR++;
    }
}