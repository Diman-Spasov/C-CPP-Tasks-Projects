// Дефинирайте функция за пресмятането на разстоянието между две точки в равнината.

#include <stdio.h>
#include <math.h>


void distance_Between_Points()
{
    float x1, y1, x2, y2, distance;

	distance = ((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1));

	return distance;
}



// int main() 
// {
// 	float x1, y1, x2, y2, gdistance;

// 	printf("Input x1: ");
// 	scanf("%f", &x1);
// 	printf("Input y1: ");
// 	scanf("%f", &y1);
//     printf("Input x2: ");
// 	scanf("%f", &x2);
// 	printf("Input y2: ");
// 	scanf("%f", &y2);

//     distance_Between_Points();

// 	printf("Distance between the said points: %.2f", sqrt(gdistance));
// 	printf("\n");

// 	return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main() 
// {
//     float x1, y1, x2, y2, gdistance;

//     printf("Input x1: ");
//     scanf("%f", &x1);
//     printf("Input y1: ");
//     scanf("%f", &y1);
//     printf("Input x2: ");
//     scanf("%f", &x2);
//     printf("Input y2: ");
//     scanf("%f", &y2);

//     gdistance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

//     printf("Distance between the said points: %.2f", sqrt(gdistance));
//     printf("\n");

//     return 0;
// }