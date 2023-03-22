#include <stdio.h>
int main()
{
    int userGender, userAge, message;
    printf("Please enter [1] for FEMALE or [2] MALE  ");
    scanf(" %d", &userGender);
    if (userGender == 1)
    {
        printf("Enter your age:  ");
        scanf(" %d", &userAge);
        if (userAge == 25 || userAge == 35)
        {
            printf("You are SUITIBLE");
        }
        else
        {
            printf("Sorry, you are NOT suitible!");
        }
    }
    else
    {
        printf("Enter your age:  ");
        scanf(" %d", &userAge);
        (userAge == 30 || userAge == 40) ? printf("You are SUITIBLE") : printf("Sorry, you are NOT suitible");
        
    }
    return 0;
}
