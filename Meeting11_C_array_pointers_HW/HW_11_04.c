#include <stdio.h>

int main()
{
    int revArr[10];

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &revArr[i]);
    }
    printf("Displaying integers ORIGINAL ORDER: ");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d, ", revArr[i]);
    }
    printf("\nDisplaying integers in REVERSE ORDER: ");
    for (int i = 10 - 1; i >= 0; i--)
    {
        printf("%d, ", revArr[i]);
    }
    return 0;
}
