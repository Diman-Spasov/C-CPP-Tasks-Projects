#include <stdio.h>
int main() {
    int naturalNumbers, i, sumNum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &naturalNumbers);

    for (i = 1; i <= naturalNumbers; ++i) 
    {
        sumNum += i;
    }
    printf("Sum = %d", sumNum);
    return 0;
}