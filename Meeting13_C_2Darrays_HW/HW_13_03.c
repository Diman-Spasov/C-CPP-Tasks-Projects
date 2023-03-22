// Напишете функция, която проверява дали дадена float матрица е identity matrix -
// матрица с размер (N x N), където само елементите в главния диагонал са единици, а
// всички останали елементи са нули.

#include <stdio.h>
 
int isidentity(int a[][100], int N)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && a[i][j] != 1)
                return 0;
            else if (i != j && a[i][j] != 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int N = 4;
    int a[10][100], i, j, col, row;
    printf("Enter the order of the matrix (M x N):\n");
    printf("M = number of rows;\n");
    printf("N = number of columns\n");
    scanf(" %d %d", &row, &col);
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }

    if (isidentity(a, N))
        printf("Identity matrix!");
    else
        printf("NoT identity!");
    return 0;
}