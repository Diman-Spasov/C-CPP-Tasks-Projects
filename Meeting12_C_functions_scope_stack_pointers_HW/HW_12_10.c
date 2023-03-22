#include<stdio.h>
int main()
{
    int firstArr[5], secondArr[5], swappedArr[5], i;
    printf("Enter First array->");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &firstArr[i]);
    }
    printf("\nEnter Second array->");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &secondArr[i]);
    }
    printf("\nArrays before swapping");
    printf("\nFirst array->");
    for (i = 0; i < 5; i++)
    {
        printf("%d", firstArr[i]);
    }
    printf("\nSecond array->");
    for (i = 0; i < 5; i++)
    {
        printf("%d", secondArr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        swappedArr[i] = firstArr[i];
        firstArr[i] = secondArr[i];
        secondArr[i] = swappedArr[i];
    }
    printf("\n\nArrays after swapping");
    printf("\nFirst array->");
    for (i = 0; i < 5; i++)
    {
        printf("%d", firstArr[i]);
    }
    printf("\nSecond array->");
    for (i = 0; i < 5; i++)
    {
        printf("%d", secondArr[i]);
    }
    return 0;
}
