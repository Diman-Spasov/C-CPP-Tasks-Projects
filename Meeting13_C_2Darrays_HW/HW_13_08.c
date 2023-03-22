// Напишете функция, която умножава две 3x3 float матрици по формулата:


#include <stdio.h>

void getMatrixElements(float matrix[][10], int row, int column) 
{
   printf("\nEnter elements: \n");

   for (int i = 0; i < row; ++i) 
   {
      for (int j = 0; j < column; ++j) 
      {
         printf("Enter a%d %d: ", i + 1, j + 1);
         scanf(" %f", &matrix[i][j]);
      }
   }
}
void multiplyMatrices(float first[][10], float second[][10], float result[][10], int row1, int col1, int row2, int col2) 
{
   for (int i = 0; i < row1; ++i) 
   {
      for (int j = 0; j < col2; ++j) 
      {
         result[i][j] = 0;
      }
   }

   for (int i = 0; i < row1; ++i)
      {
      for (int j = 0; j < col2; ++j) 
      {
         for (int k = 0; k < col1; ++k) 
         {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}
void display(float result[][10], int row, int column) 
{
   printf("\nOutput Matrix:\n");
   for (int i = 0; i < row; ++i) 
   {
      for (int j = 0; j < column; ++j) 
      {
         printf("%.2f  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}
int main() 
{
   float first[10][10], second[10][10], result[10][10];
   int row1, col1, row2, col2;

   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &row1, &col1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &row2, &col2);

   while (col1 != row2) 
   {
      printf("Error! Enter rows and columns again.\n");
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &row1, &col1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &row2, &col2);
   }
   getMatrixElements(first, row1, col1);

   getMatrixElements(second, row2, col2);

   multiplyMatrices(first, second, result, row1, col1, row2, col2);

   display(result, row1, col2);

   return 0;
}