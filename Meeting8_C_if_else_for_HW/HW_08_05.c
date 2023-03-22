#include <stdio.h>
#include <string.h>

void squeeze(char str1[], char str2[]);

int main()
{
    char inputStr[] = "This is a story about Code Academy";
    char targetChars[] = "a";

    squeeze(inputStr, targetChars);
    printf("%s\n", inputStr);
}
void squeeze(char str1[], char str2[])
{
    int strLength1 = strlen(str1);
    int i, j;
    char *found_index;

    for (i = j = 0; i < strLength1; i++)
    {
        found_index = strchr(str2, str1[i]);

        if (found_index == NULL)
        {
            str1[j++] = str1[i];
        }
    }
    str1[j] = '\0';
}