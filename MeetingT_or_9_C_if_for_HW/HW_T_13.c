#include <stdio.h>
int main()
{
    int i = 1;
    for (; i < 11; i++)
    {
        if (i != 7 && i != 5 && i == 10)
            break;
            printf(" %d\n", i);
    }
    return 0;
}
