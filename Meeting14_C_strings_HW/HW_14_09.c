// Напишете функция, която брои броя на редовете в един multi-line стринг
// (стринг, който е на няколко реда)

#include <stdio.h>
#include <string.h>

void count_lines_words_chars(char str[])
{   
    
    int words, newline, characters;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
        else if (str[i] == '\n')
        {
            newline++;
            words++;
        }
        else if (str[i] != ' ' && str[i] != '\n')
        {
            characters++;
        }
    }
    if (characters > 0)
    {
        words++;
        newline++;
    }
    
}
int main()
{
    char str[100];

    int words, newline, characters;

    printf("enter sth: ");
    scanf(" %[^~]", &str);

    count_lines_words_chars(str);

    printf("Total number of words : %d\n", words);
    printf("Total number of lines : %d\n", newline);
    printf("Total number of characters : %d\n", characters);
    

    return 0;
}






// #include <stdio.h>
// int main()
// {
//     char str[100];

//     int words = 0, newline = 0, characters = 0;
//     printf("Enter words: ");
//     scanf(" %[^~]", &str);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == ' ')
//         {
//             words++;
//         }
//         else if (str[i] == '\n')
//         {
//             newline++;
//             words++;
//         }
//         else if (str[i] != ' ' && str[i] != '\n')
//         {
//             characters++;
//         }
//     }
//     if (characters > 0)
//     {
//         words++;
//         newline++;
//     }
//     printf("Total number of words : %d\n", words);
//     printf("Total number of lines : %d\n", newline);
//     printf("Total number of characters : %d\n", characters);
//     return 0;
// }
