// Дефинирайте функции всяка за принтиране на всяка една от шестте геометрични фигури
#include <stdio.h>
void squarePrint()
{
    int rows;
    
    squareInput();

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}



void rectanglePrint()
{
    int rows, cols;

    rectangleinput();

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}





void elypsPrint()
{
    float dist, radius;
    
    elypsInput();

    for (int i = 0; i <= 2 * radius; i++)
    {
        for (int j = 0; j <= 2 * radius; j++)
        {
            dist = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (dist > radius - 0.5 && dist < radius + 0.5)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}






void circlePrint()
{
    float dist, radius;

    circleInput();

    for (int i = 0; i <= 2 * radius; i++)
    {
        for (int j = 0; j <= 2 * radius; j++)
        {
            dist = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (dist > radius - 0.5 && dist < radius + 0.5)
                printf("* ");
            else
                printf(" ");
        }

        printf("\n");
    }
}




void trianglePrint()
{
    int i, space, rows, k = 0;

    triangleInput();

    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}
