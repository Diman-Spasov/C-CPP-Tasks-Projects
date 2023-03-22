#include <stdio.h>
int main()
{
    int daysInMonth, userInput;
    
    printf("Enter a month's number:  ");
    scanf(" %d", &userInput);
    switch (userInput)
    {
        case 1:
            daysInMonth = 31;
            printf("Days in month:  %d", daysInMonth);
            break;
        
        case 3:
            daysInMonth = 31;
            printf("Days in month:  %d", daysInMonth);
            break;
        
        case 5:
            daysInMonth = 31;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 7:
            daysInMonth = 31;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 8:
            daysInMonth = 31;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 10:
            daysInMonth = 31;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 12:
            daysInMonth = 31;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 4:
            daysInMonth = 30;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 6:
            daysInMonth = 30;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 9:
            daysInMonth = 30;
            printf("Days in month:  %d", daysInMonth);
            break;

        case 2:
            printf("Days in month:  28/29");
            break;

        case 11:
            daysInMonth = 30;
            printf("Days in month:  %d", daysInMonth);
            break;
        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}
