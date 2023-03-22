#include <stdio.h>
#include <string.h>
int main(void)
{
    char myStr[60];
    int strLength, i;

    printf("Program in C for reversing a given string \n ");
    printf("Please insert the string you want to reverse: ");
    scanf("%s", myStr);

    strLength = strlen(myStr);

    for (i = strLength - 1; i >= 0; i--)
    {
        printf("%c", myStr[i]);
    }
    return 0;
}