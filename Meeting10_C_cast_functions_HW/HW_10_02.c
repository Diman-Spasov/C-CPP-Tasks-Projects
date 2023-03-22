
#include <stdio.h>
void main(void)

{
    int radius;
    float area;

    printf("Enter the radius of the circle: ");
    scanf(" %d", &radius);

    area = 3.14 * radius * radius;

    printf("Area of Circle with Radius %d is %.2f cm", radius, area);
}

