// Напишете функция, която умножава 3-мерен float вектор(едномерен масив с три
// float елемента) по 3x3 float матрицa по формулата:
// (резултатът е 3-мерен float вектор)


#include <stdio.h>

void print_matrix(int n, int m[4][4]);

void print_vector(int n, int v[4]);

void matrix_x_vector(int n, int y[4], int x[4][4], int A[4][1]);

void print_matrix(int n, int m[4][4])
{
    printf("\nMatrix Given\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%3i", m[i][j]);
        printf("\n");
    }
}
void print_vector(int n, int v[4])
{
    printf("\nVector Given\n");

    for (int i = 0; i < n; i++)
        printf("%3i", v[i]);
    printf("\n");
}
void matrix_x_vector(int n, int y[4], int x[4][4], int A[4][1])
{
    printf("\nResulted Matrix of [M]*[V]\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[j][0] += x[j][i] * y[i];

            printf("%4i", A[j][0]);
        }
        printf("\n");
    }
    printf("\nThe vector: \n");
    for (int i = 0; i < n; i++)

        printf("%4i\n", A[i][0]);
}
int main()
{
    int n = 4;

    int m1[4] = {1, 2, 3, 4};

    int m2[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    int multiplied_matrix[4][1] = {0, 0, 0, 0};

    print_vector(n, m1);

    print_matrix(n, m2);

    matrix_x_vector(n, m1, m2, multiplied_matrix);

    printf("\n");
    return 0;
}