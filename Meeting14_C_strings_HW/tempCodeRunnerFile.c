// Напишете функция, която връща дали даден стринг е валиден email адрес

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_mail(int std1, char email)
{
    if (sizeof(email) < 8 || sizeof(email) > 50) 
    {
        printf("True");
    }

    int i;
    int upper_letters = 0;

    for (int i = 0; i < sizeof(email); i++)
    {
        if (std1 == isupper(email[i])) 
        {
            upper_letters++;
        }
        if (email[i] == '@')
        {
            if (i < 8)
            {
                printf("false");
            }
            else if (upper_letters == 0) 
            {
                printf("Faslse");
            }
        }
    } 
}

int main()
{
    int std1;
    char email;
    printf(" \n \n Enter an email address "); 
    scanf("%s", email);
    check_mail(std1, email);

    return 0;
}