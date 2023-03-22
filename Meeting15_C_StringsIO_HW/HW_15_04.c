#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void vPrintOnlyCapLetters(void)
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (isupper(c))
        {
            putchar(c);
        }
    }
}
void vPrintOnlySmallLetters(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            putchar(ch);
        }
    }
}
void vPrintOnlyNumbers(void)
{
    char num;
    while ((num = getchar()) != EOF)
    {
        if (isdigit(num))
        {
            putchar(num);
        }
    }
}
int main()
{
    char c, ch, num;
    vPrintOnlyCapLetters();
    vPrintOnlySmallLetters();
    vPrintOnlyNumbers();
}
