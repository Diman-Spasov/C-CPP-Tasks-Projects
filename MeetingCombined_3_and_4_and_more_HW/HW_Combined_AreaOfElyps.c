#include <stdio.h>
#include <math.h>
#define PI 3.142857


int main()
{
    double areaOfElyps;
    double areaOfCircle;
    double circleAwide = 2.0;
    double circleBlength = 4.0;
    double radiusOfCircle1 = 1.0;
    double radiusOfCircle2 = 1.5;
    double radiusOfCircle3 = 2.0;
    
    areaOfElyps = PI * circleAwide * circleBlength;
    printf("The area of the Elyps is: %f cm\n", areaOfElyps);

    areaOfCircle = PI * radiusOfCircle1 * radiusOfCircle1;
    printf("The area of the 1st circle is: %f cm\n", areaOfCircle);

    areaOfCircle = PI * radiusOfCircle2 * radiusOfCircle2;
    printf("The area of the 2nd circle is: %f cm\n", areaOfCircle);

    areaOfCircle = PI * radiusOfCircle3 * radiusOfCircle3;
    printf("The area of the 3rd circle is: %f cm\n", areaOfCircle);


    return 0;
}