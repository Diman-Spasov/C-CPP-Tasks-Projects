// Напишете функция calmify_str, която заменя всички малки букви с главни и
// всички точки с удивителни в подадения й стринг


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int stringlength(char *s)
{
    int j;
    for (j = 0; s[j]; j++)
        ;

    return j;
}
void calmify_str(char *s, char c1, char c2, char ch)
{
    static int i = 0, j = 0;

    if (!s[i])
        return;
    if (s[i] == c1)
        s[i] = c2;
    if (s[i] == '.')
        s[i] = '!';
    i++;
    
    ch = s[j];
    putchar(toupper(ch));

    j++;
    
    calmify_str(s, c1, c2, ch);
}
int main()
{
    char s[1000], c1, c2, ch;

    printf("\nEnter  the string: ");
    gets(s);

    printf("\nEnter a character to replace: ");
    c1 = getchar();
    getchar();

    printf("\nEnter character to replace %c with: ", c1);
    c2 = getchar();
    
    printf("\nBefore Replace: %s || After replace: ", s);

    calmify_str(s, c1, c2, ch);
    
    return 0;
}