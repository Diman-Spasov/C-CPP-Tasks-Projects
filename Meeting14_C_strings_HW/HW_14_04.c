// Напишете функция, която скъсява подадения й стринг до първия whitespace.

#include <stdio.h>
 
void removeLeading(char *str, char *str1)
{
    int idx = 0, j, k = 0;
 
    while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
    {
        idx++;
    }
    for (j = idx; str[j] != '\0'; j++)
    {
        str1[k] = str[j];
        k++;
    }
    str1[k] = '\0';
 
    printf("%s", str1);
}
int main()
{
    char str[] = "          CodeAcademy";
 
    char str1[100];
 
    removeLeading(str, str1);
 
    return 0;
}