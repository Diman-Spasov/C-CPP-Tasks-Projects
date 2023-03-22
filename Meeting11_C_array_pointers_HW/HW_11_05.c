#include <stdio.h>
int main()
{
    int arr1[100], numbersInArr, counter = 0;
    int i, j, numOfElements;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &numbersInArr);
    printf("Input %d elements in the array: \n", numbersInArr);

    for (i = 0; i < numbersInArr; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < numbersInArr; i++)
    {
        counter = 0;
        for (j = 0, numOfElements = numbersInArr; j < numOfElements + 1; j++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    counter++;
                }
            }
        }
        if (counter == 0)
        {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n\n");
}
