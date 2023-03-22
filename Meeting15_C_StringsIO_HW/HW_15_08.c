// Напишете програма за смятане на float числа, която има следното главно меню, което дава възможност на потребителя да избере
// аритметична операция или да излезе от програмата. Програмата трябва да работи правилно и с невалидни данни - да уведомява
// потребителя ако въведе невалидни данни и да му даде възможност да ги въведе отново. Примери за невалидни данни:
// несъществуващо меню, въведени букви вместо числа, въведено деление на 0. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char operator;
    float result, num1, num2;
    

    do
    {
        printf(" Select an operation to perform the calculation in C Calculator: ");
        printf(" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 7 Exit \n \n Please, Make a choice ");

        scanf(" %c", &operator); 

        switch (operator)
        {
        case '1':
            printf(" You chose: Addition");
            printf("\n Enter First Number: ");
            scanf(" %.2f", &num1);
            printf(" Enter Second Number: ");
            scanf(" %.2f", &num2);
            result = num1 + num2; 
            printf(" Addition of two numbers is: %.2f", result);
            break; 

        case '2':
            printf(" You chose: Subtraction");
            printf("\n Enter First Number: ");
            scanf(" %.2f", &num1);
            printf(" Enter Second Number: ");
            scanf(" %.2f", &num2);
            result = num1 - num2; 
            printf(" Subtraction of two numbers is: %.2f", result);
            break; 

        case '3':
            printf(" You chose: Multiplication");
            printf("\n Enter First Number: ");
            scanf(" %.2f", &num1);
            printf(" Enter Second Number: ");
            scanf(" %.2f", &num2);
            result = num1 * num2; 
            printf(" Multiplication of two numbers is: %.2f", result);
            break;

        case '4':
            printf(" You chose: Division");
            printf("\n Enter First Number: ");
            scanf(" %.2f", &num1);
            printf(" Enter Second Number: ");
            scanf(" %.2f", &num2);
            if (num2 == 0)
            {
                printf(" \n Divisor cannot be zero. Please enter another value ");
                scanf(" %.2f", &num2);
            }
            result = num1 / num2; 
            printf(" Division of two numbers is: %.2f", result);
            break; 

        case '7':
            printf(" You chose: Exit");
            exit(0);
            break;

        default:
            printf(" Invalid input! ");
            break;
        }
        printf(" \n \n ********************************************** \n ");
        
    } while (operator != '7');

    return 0;
}