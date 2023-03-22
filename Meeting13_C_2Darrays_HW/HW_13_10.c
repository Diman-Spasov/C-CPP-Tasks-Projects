// Напишете програма, която принтира сумата на всеки ред и на всяка колона
// на една матрица.

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows and column\n");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nElements in the matrix are: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nRow Sum: \n");

    for (int i = 0; i < rows; i++)
    {
        int rsum = 0;
        for (int j = 0; j < cols; j++)
        {
            rsum = rsum + arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d", i, rsum);
    }

    printf("\nColumn Sum: \n");

    for (int i = 0; i < rows; i++)
    {
        int csum = 0;
        for (int j = 0; j < cols; j++)
        {
            csum = csum + arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d", i, csum);
    }

    
    return 0;
}