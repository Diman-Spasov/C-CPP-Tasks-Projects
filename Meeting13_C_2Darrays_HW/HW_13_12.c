// Напишете функция, която търси за под-матрица в матрица (подобно на миналата
// задача, но търсим за двумерен масив)


#include <stdio.h>
#include <math.h>

void mat()
{
    int MainMatrix[][5] = 
    {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {1, 1, 1, 1, 0}};

    int SubMatrix[][3] = 
    {
        {1, 0, 0},
        {1, 0, 0},
    };

    int mainMatRow = 5; 
    int mainMatColumn = 5; 
    int subMatRow = 2; 
    int subMatColumn = 3; 

    int flag, i, j, p, q;

    for (i = 0; i <= (mainMatRow - subMatRow); i++)
    {
        for (j = 0; j <= (mainMatColumn - subMatColumn); j++)
        {
            flag = 0;

            for (int p = 0; p < subMatRow; p++)
            {
                for (int q = 0; q < subMatColumn; q++)
                {
                    if (MainMatrix[i + p][j + q] != SubMatrix[p][q])
                    {
                        flag = 1;

                        break;
                    }
                }
            }
            if (flag == 0)
            {
                printf("\nMatch Found in the Main Matrix at starting location %d, %d", (i + 1), (j + 1));
                break;
            }
        }
    }
}

void main()
{
    printf("\nPrinting the Coordinates of Matrix in Matrix: \n");
    printf("-----------------------------------------------");

    mat();
    
    printf("\n");
}