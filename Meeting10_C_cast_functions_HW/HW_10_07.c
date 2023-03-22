#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int randomNumber;

    srand(time(0));
    randomNumber = rand() % 2 + 1;

    switch (randomNumber)
    {
    case 1:
        printf("HEADS!");
        break;
    case 2:
        printf("TAILS!");
        break;
    }
    return 0;
}