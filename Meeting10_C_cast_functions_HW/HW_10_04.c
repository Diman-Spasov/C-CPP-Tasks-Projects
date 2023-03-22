#include <stdio.h>

int main()
{
    int i;
    int fact = 1;
    int number = 6;
    for (i = 1; i <= number; i++)
    {
        fact = i * fact;
    }
    printf("Factorial of 49 devided by factorial of 43 is 10068347520\nBecause it's 6 out of 49\n");
    printf("Factorial of %d is: %d", number, fact);

    int result = 10068347520 / fact;
    
    printf("\nYour chances are -  10068347520 / %d which is:\n\t 1 : %d", fact, result);
    return 0;
}