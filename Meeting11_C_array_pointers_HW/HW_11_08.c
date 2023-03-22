#include <stdio.h>
void main()
{
    int numbers;

    printf("Enter number of elements in the array: ");
    scanf("%d", &numbers);

    int arr[numbers];

    printf("Enter %d elements in the array: ", numbers);
    for (int i = 0; i < numbers; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Displaying the original array: ");
    for (int i = 0; i < numbers; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\nEven numbers in the array are: ");
    for (int i = 0; i < numbers; i++)
    {
        if (arr[i] % 2 == 0)
            printf("%d, ", arr[i]);
    }

    printf("\nOdd numbers in the array are: ");
    for (int i = 0; i < numbers; i++)
    {
        if (arr[i] % 2 == 1)
            printf("%d, ", arr[i]);
    }
}
