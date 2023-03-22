#include <stdio.h>
int production_of_arr(int arr[], int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
        result = result * arr[i];
    return result;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", production_of_arr(arr, n));
    return 0;
}
