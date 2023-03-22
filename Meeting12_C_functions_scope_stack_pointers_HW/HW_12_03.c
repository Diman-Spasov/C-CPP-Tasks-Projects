#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int sum, loop;
    float avg;

    sum = avg = 0;

    for (loop = 0; loop < 5; loop++)
    {
        sum = sum + array[loop];
    }

    avg = (float)sum / loop;
    printf("Average of array:  %.2f", avg);

    return 0;
}
