#include <stdio.h>
int main()
{
    int userHight;
    printf("Enter your hight in cm:  ");
    scanf(" %d", &userHight);
    if (userHight <= 145)
    {
        printf("You Shortiiieee! :D\n");
    }
    else if (userHight <= 180)
    {
        printf("You are fine...\n");
    }
    else if (userHight <= 205)
    {
        printf("You are tall as F*ck\n");
    }
    else 
    {
        printf("YOU ARE AN ALIEN!\n");
    }
    printf("\nGoodbye!");
    return 0;
}
