#include <stdio.h>

void main()
{
    int i, numbers, arr[100], shift;

    printf("Enter the number of elements:\n");
    scanf("%d", &numbers);

    printf("Enter the elements\n");
    for (i = 0; i < numbers; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array\n");
    for (i = 0; i < numbers; i++)
    {
        printf("%d ", arr[i]);
    }

    shift = arr[numbers - 1];
    
    for (i = numbers - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = shift;

    printf("\nNew array after rotating by one postion in the right direction\n");
    for (i = 0; i < numbers; i++)
    {
        printf("%d ", arr[i]);
    }
}