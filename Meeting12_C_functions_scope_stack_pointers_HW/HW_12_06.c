// Напишете функция, която запълва масив от цели числа с въведени от потребителя
// стойности

#include <stdio.h>
#include <conio.h>
 
int input(int *a, int num)
{
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }           
}     
int output(const int *a, int num)
{ 
    for (int i = 0; i < num; i++)
    {
        printf("%d / ", a[i]);
    }          
}
int main()
{
    int a[1000], i, num;

    printf("Enter size of array: ");
    scanf("%d", &num);

    printf("Enter %d elements in the array: \n", num);
    input(a, num);

    printf("\nElements in array: ");
    output(a, num);
    printf("\n");

    return 0;
}