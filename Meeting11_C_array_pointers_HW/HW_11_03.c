#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numberOfElements = 20;
    double arr[100];

    for (int i = 0; i < numberOfElements; ++i)
    {
        arr[i] = rand() % 100;
        printf("\nElements of the array: %.2lf", arr[i]);
    }
    for (int i = 1; i < numberOfElements; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("\n\tLargest element = %.2lf", arr[0]);

    return 0;
}
