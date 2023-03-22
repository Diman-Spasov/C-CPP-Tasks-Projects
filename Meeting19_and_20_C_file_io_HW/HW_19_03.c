// Напишете програма, която чете стринг от стандартния вход и го извежда
// на стандартния изход с функциите fprintf и fscanf


#include <stdio.h>
// int main()
// {
//     FILE *fp;
//     char buff[255];
//     fp = fopen("Text_code.txt", "r");
//     while (fscanf(fp, "%s", buff) != EOF)
//     {
//         printf("%s ", buff);
//     }
//     fclose(fp);
// }





void main()  
{
    FILE *fptr;
    int id;
    char name[30];
    float salary;
    fptr = fopen("Text_code.txt", "w+"); 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Enter the id\n");
    scanf("%d", &id);
    fprintf(fptr, "Id= %d\n", id);

    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);

    printf("Enter the salary\n");
    scanf("%f", &salary);
    fprintf(fptr, "Salary= %.2f\n", salary);

    fclose(fptr);
}