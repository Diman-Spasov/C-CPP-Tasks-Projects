// Напишете фунцкия, която приема стринг и връща указател към началото на
// най-дългата дума, която намери в стринга

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1024

void longest_string_Word(char *str, char *longest_str, int max_wlen)
{

    int len;
    int i, index = 0;
    int wlen = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i <= len; i++)
    {

        if (str[i] != ' ' && str[i] != '\0')
        {
            wlen++;
            continue;
        }

        if (wlen > max_wlen)
        {
            max_wlen = wlen;
            index = i - max_wlen;
        }

        wlen = 0;
    }

    for (i = 0; i < max_wlen; i++)
    {
        longest_str[i] = str[index + i];
    }

    longest_str[i] = '\0';

}
int main()
{

    char str[MAX_STRING_LEN];
    char longest_str[MAX_STRING_LEN];
    int max_wlen;

    longest_string_Word(str, longest_str, max_wlen);

    printf("Longest word: %s.\n", longest_str);
    printf("Longest word length: %d.\n", max_wlen);

    return 1;
}









// #include <stdio.h>
// #include <string.h>

// #define MAX_STRING_LEN 1024

// int main()
// {
//     char str[MAX_STRING_LEN];
//     char longest_str[MAX_STRING_LEN];
//     int len;
//     int i, index = 0;
//     int max_wlen = 0, wlen = 0;

//     printf("Enter a string: ");
//     gets(str);

//     len = strlen(str);

//     for (i = 0; i <= len; i++)
//     {

//         if (str[i] != ' ' && str[i] != '\0')
//         {
//             wlen++;
//             continue;
//         }
//         if (wlen > max_wlen)
//         {
//             max_wlen = wlen;
//             index = i - max_wlen;
//         }

//         wlen = 0;
//     }

//     for (i = 0; i < max_wlen; i++)
//     {
//         longest_str[i] = str[index + i];
//     }

//     longest_str[i] = '\0';

//     printf("Longest word: %s.\n", longest_str);
//     printf("Longest word length: %d.\n", max_wlen);

//     return 1;
// }