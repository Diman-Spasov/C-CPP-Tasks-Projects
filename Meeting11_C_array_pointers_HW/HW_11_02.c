#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int sizeOfArr = 20;
    int finder;
    int randArray[sizeOfArr], i;

    for (i = 0; i < sizeOfArr; i++)
        randArray[i] = rand() % 100;
    printf("\nElements of the array: ");

    for (i = 0; i < sizeOfArr; i++)
    {
        printf("\nElement number %d: %d", i + 1, randArray[i]);
    }
    printf("\nEnter a number to possibly find in the array: ");
    scanf(" %d", &finder);
    if (finder == randArray[i])
    {
        printf("We found one!");
    }
    else 
    {
        printf("Number not found in array!");
    }
    return 0;
}
