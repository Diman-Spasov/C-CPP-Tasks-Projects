// Напишете функция, която претърсва за последователност от стойности (подадени
// в едномерен масив) в редовете и колоните на двумерен масив. Функцията връща 1
// ако е открила последователността, в някой ред или колона и 0 ако не е.

#include <stdio.h>
int search(int mat[4][4], int n, int x)
{
    if (n == 0)
        return -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (mat[i][j] == x)
            {
                printf("Element found at (%d, %d)\n", i, j);
                return 1;
            }
    }
    printf("Element not found");
    return 0;
}
int main()
{
    int mat[4][4] = {{0, 0, 0, 1},
                     {1, 1, 0, 0},
                     {0, 2, 1, 1},
                     {0, 1, 1, 1}};

    search(mat, 4, 2);
    return 0;
}