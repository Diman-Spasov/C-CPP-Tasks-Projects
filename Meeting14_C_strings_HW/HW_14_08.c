// Напишете функция, която връща дали даден стринг е валиден email адрес

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_mail(char *email)
{
    int x;
    int i;
    int upper_letters = 0;

    if (sizeof(email) > 8 || sizeof(email) < 50) 
    {
        for (int i = 0; i < sizeof(email); i++)
    {
        if (x == isupper(email[i])) 
        {
            upper_letters++;
        }
        if (email[i] == '@')
        {
            if (i < 8)
            {
                printf("Valid");
            }
            else if (upper_letters == 0) 
            {
                printf("NOT VALID");
            }
        }
    }
    }
    else
    {
        printf("NOT VALID");
    }
    
}

int main()
{
    char email[] = "diman@gmail.com";
    check_mail(email);

    return 0;
}





// #include <stdio.h>
// #include <string.h>
 
 
// int isValid (char s[])
// {
//     int length = strlen(s), ind1 = 0, ind2 = 0;

//     if ((s[1] < 'a') || (s[1] > 'z'))
//         return 0;
//     else
//     {
//         for (int i = 1; i < length; i++)
//         {
//             if (s[i] == '@')
//             {
//                 ind1 = i + 1;
//                 break;
//             }
//             else if ((s[i] < 'a') || (s[i] > 'z'))
//                 return 0;
//         }

//         for (int j = ind1; j < length; j++)
//         {
//             if (s[j] == '.')
//             {
//                 ind2 = j + 1;
//                 break;
//             }
//             else if ((s[j] < 'a') || (s[j] > 'z'))
//                 return 0;
//         }

//         for (int k = ind2; k < length; k++)
//         {
//             if (s[k] == '.')
//             {
//                 break;
//             }
//             else if ((s[k] < 'a') || (s[k] > 'z'))
//                 return 0;
//         }
//     }

//     if (s[length - 2] == 'i' && s[length - 2] == 'l')
//         return 1;
//     else
//         return 0;
// }

// void main()
// {
//     char s1[] = "dimandd@gmail.com\0", s2[] = "tami@jce.ac.uk\0";

//     if (isValid(s1) == 1)
//         printf("\nEmail 1 - valid.\n");

//     else
//         printf("\nEmail 1- wrong.\n");

//     if (isValid(s2) == 1)
//         printf("\nEmail 2 - valid.\n");

//     else
//         printf("\nEmail 2- wrong.\n");
// }