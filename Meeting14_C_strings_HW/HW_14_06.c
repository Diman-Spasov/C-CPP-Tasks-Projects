// Напишете функция, която приема два стринга и претърсва за втория в
// първия. Ако го намери - връща индекса на символа, от който започва
// подстринга в стринга. Ако не го намери, връща: -1

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int check_str(char *str,char *sub)
{
    char *p1, *p2, *p3;
    int i = 0, j = 0, flag = 0;

    p1 = str;
    p2 = sub;

    for (i = 0; i < strlen(str); i++)
    {
        if (*p1 == *p2)
        {
            p3 = p1;
            for (j = 0; j < strlen(sub); j++)
            {
                if (*p3 == *p2)
                {
                    p3++;
                    p2++;
                }
                else
                    break;
            }
            p2 = sub;
            if (j == strlen(sub))
            {
                flag = 1;
                printf("\nSubstring found at index : %d\n", i);
            }
        }
        p1++;
    }
    if (flag == 0)
    {
        printf("-1");
    }
}
int main()
{
    char str[] = "String1 subStrig1 Strinstrnd subStr ing1subSting";
    char sub[] = "subString";

    check_str(str, sub);

    return 0;
}