// Напишете програма, която проверява дали две дадени матрици от float са еднакви,
// сравнявайки съответните елементи в тях. Разпечатайте в конзолата двете изходни
// матрици и резултата от сравнението

#include <stdio.h>
#define N 4

int are_equal(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (A[i][j] != B[i][j])
                return 0;
    return 1;
}
int main()
{
    int A[N][N] = { { 1, 2, 3, 4 },
                    { 1, 2, 3, 4 },
                    { 1, 2, 3, 4 },
                    { 1, 2, 3, 4 } };
  
    int B[N][N] = { { 1, 2, 3, 4 },
                    { 1, 2, 3, 4 },
                    { 1, 2, 3, 4 },
                    { 1, 2, 3, 4 } };
    printf("\n First Matrix \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n Second Matrix \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d", B[i][j]);
        }
        printf("\n");
    }
    if (are_equal(A, B))
        printf("\n Matrices are equal");
    else
        printf("\n Matrices are not equal");
    return 0;
}