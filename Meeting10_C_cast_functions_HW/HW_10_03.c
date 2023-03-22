

#include <stdio.h>

int base = 5;
int height = 10;

void sqAngleTriangle(void)
{
    int areaOfTriangle = (base + height) / 2;
    printf("The area of the square triangle is: %d cm", areaOfTriangle);
}
void sqRectangle(void)
{
    int areaOfRectangle = ((base + height) / 2) * 2;
    printf("\nThe area of rectangle is: %d cm", areaOfRectangle);
}
int main()
{ 
    sqAngleTriangle();
    sqRectangle();
    return 0;
}