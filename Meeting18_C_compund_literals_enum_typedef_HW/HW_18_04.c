#include <stdio.h>
#include<conio.h>

typedef struct
{
    int day;
    int month;
    int year;
} date;

void date_format(date);

void main()
{
    date today = {29, 11, 2022};
    date_format(today);
    getch();
}

void date_format(date today)
{
    printf("Current Date : %d/%d/%d", today.day, today.month, today.year);
}
