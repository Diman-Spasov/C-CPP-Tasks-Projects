// Напишете функция, която размерня два реда на матрица, по подадени аргументи за
// индекси на редовете, които да се разменят.

// Напишете функция, която разменя две колони на матрица, по подадени аргументи за
// индекси на колоните, които да се разменят.

#include <stdio.h>
void main() 
{
    static int matrix1[10][10], matrix2[10][10];
    int i, j, rows, columns, a, b, c, p, q, r;
    printf("Enter the order (rows * columns) of the matrix\n");
    scanf(" %d * %d", &rows, &columns);
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
        {
            scanf(" %d", &matrix1[i][j]);
            matrix2[i][j] = matrix1[i][j];
        }
    }
    printf("Enter the numbers of two rows to be exchanged \n");
    scanf(" %d %d", &a, &b);
    for (i = 0; i < rows; ++i)
    {
        c = matrix1[a - 1][i];
        matrix1[a - 1][i] = matrix1[b - 1][i];
        matrix1[b - 1][i] = c;
    }
    printf("Enter the numbers of two columns to be exchanged\n");
    scanf(" %d %d", &p, &q);
    printf("The given matrix is \n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
            printf(" %d", matrix2[i][j]);
        printf("\n");
    }
    for (i = 0; i < columns; ++i)
    {
        r = matrix2[i][p - 1]; 
        matrix2[i][p - 1] = matrix2[i][q - 1];
        matrix2[i][q - 1] = r;
    }
    printf("The matrix after interchanging the two rows(in the original matrix)\n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
        {
            printf(" %d", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The matrix after interchanging the two columns(in the original matrix)\n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < columns; ++j)
            printf(" %d", matrix2[i][j]);
        printf("\n");
    }
}
