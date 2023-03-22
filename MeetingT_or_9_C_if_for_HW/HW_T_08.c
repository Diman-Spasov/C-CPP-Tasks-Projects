#include <stdio.h>
int main()
{
    int firstNum, secondNum;
    char operator;

    printf("This is calculator!\nEnter a number:  ");
    scanf(" %d", &firstNum);
    printf("Enter operator:  ");
    scanf(" %c", &operator);
    printf("Enter another number:  ");
    scanf(" %d", &secondNum);
    switch (operator)
    {
        case '+':
            printf("Result: %d", firstNum + secondNum);
            break;
        case '-':
            printf("Result: %d", firstNum - secondNum);
            break;
        case '*':
            printf("Result: %d", firstNum * secondNum);
            break;
        case '/':
            printf("Result: %d", firstNum / secondNum);
            break;
        default:
            printf("Invalid operator!");
        break;
    }
    return 0;
}