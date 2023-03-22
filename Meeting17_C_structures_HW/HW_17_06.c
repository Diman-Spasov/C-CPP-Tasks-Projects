// Дефинирайте функции за въвеждане на всяка една от шестте геометрични фигури от потребителя

#include <stdio.h>


void squareInput()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

}
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






void rectangleInput()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    
    printf("Enter number of cols: ");
    scanf("%d", &cols);

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







void elypsInput()
{
    float dist, radius;
    
    printf("Enter the radius/like 6: ");
    scanf("%d", &radius);

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





void circle()
{
    float dist, radius;

    
    printf("Enter the radius/like 3: ");
    scanf("%d", &radius);

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






void triangleInput()
{
    int i, space, rows, k = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
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

