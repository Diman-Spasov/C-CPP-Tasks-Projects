#include <stdio.h>
int main() 
{
    int naturalNumbers = 10, i, sumNumbers = 0;

    for (i = 1; i <= naturalNumbers; ++i) 
    {
        sumNumbers += i;
    }
    printf("Sum = %d", sumNumbers);  
    return 0;
}