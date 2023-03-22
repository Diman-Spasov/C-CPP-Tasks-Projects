#include <stdio.h>
void swap(int *a, int *b)
{
    int swapp = *a;
    *a = *b;
    *b = swapp;
}
int main()
{
    int a = 5, b = 10;
    swap(&a, &b);
    printf("Original values: A = 5, B = 10");
    printf("\nAfter Swapping: A = %d, B = %d", a, b);
    return 0;
}