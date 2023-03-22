#include <stdio.h>
int main()
{
    int i, arr[6] = {1, 17, -34, -47, 74, -4};
    for (; i < 6; i++)
    {
        if (arr[i] < 0)
        {
            printf("0 ");
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
