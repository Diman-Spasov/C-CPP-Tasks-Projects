#include <stdio.h>
#include <conio.h>

int main()
{
    int a[1000], i, elementCount, minNum, maxNum;

    printf("Enter size of the array: ");
    scanf("%d", &elementCount);

    printf("Enter elements in array: ");
    for (i = 0; i < elementCount; i++)
    {
        scanf("%d", &a[i]);
    }

    minNum = maxNum = a[0];
    for (i = 1; i < elementCount; i++)
    {
        if (minNum > a[i])
            minNum = a[i];

        if (maxNum < a[i])
            maxNum = a[i];
    }
    printf("MIN of array is: %d", minNum);
    printf("\nMAX of array is: %d", maxNum);

    return 0;
}
