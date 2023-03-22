#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randRange(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++) 
    {
        int randomNum = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", randomNum);
    }
}
int main()
{
    int lower = 1, upper = 2, count = 1;
    srand(time(0));
    randRange(lower, upper, count);
 
    return 0;
}