#include <stdio.h>
int main()
{
    int userInput, userAge;
    printf("Please enter [1] for FEMALE or [2] MALE  ");
    scanf(" %d", &userInput);
    if (userInput == 1)
    {
        printf("Enter your age:  ");
        scanf(" %d", &userAge);
        if (userAge >= 25 && userAge <= 35)
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
        if (userAge >= 30 || userAge <= 40)
        {
            printf("You are SUITIBLE");
        }
        else
        {
            printf("Sorry, you are NOT suitible");
        }
    }
    return 0;
}
