// Напишете функция, която запълва елементите на масив от цели числа с произволни
// числа от подаден интервал [min, max]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void printRandoms(int min, int max, int count)
{
    for (int i = 0; i < count; i++) 
    {
        int num = (rand() % (max - min + 1)) + min;
        {
            printf("\nElement number %d:   %d;", i + 1, num);
        }
    }
}
int main()
{
    int min = 1, max = 100, count = 10;

    srand(time(0));
 
    printRandoms(min, max, count);
 
    return 0;
}