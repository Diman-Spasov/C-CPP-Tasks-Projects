#include<stdio.h>
int main()
{
    int year = 1, seconds;

    seconds = year * 365 * 24 * 60 * 60;
    printf("%d year = %d seconds ", year, seconds);

    return 0;
}