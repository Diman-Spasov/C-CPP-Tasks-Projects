// Дефинирайте функция, която проверява дали два кръга имат допирни точки (не се пресичат и нито единия не е 
// изцяло във вътрешността на другия)

#include <stdio.h>
#include <math.h>

int circle(int x1, int y1, int x2, int y2, int r1, int r2)
{
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    if (d <= r1 - r2)
    {
        printf("Circle B is inside A");
    }
    else if (d <= r2 - r1)
    {
        printf("Circle B is inside B");
    }
    else if (d < r1 + r2)
    {
        printf("Circle intersect each other");
    }
    else if (d == r1 + r2)
    {
        printf("Circle touch each other");
    }
    else
    {
        printf("Circle not touch each other");
    }
}




// int main()
// {
//     int x1 = -10, y1 = 8;
//     int x2 = 14, y2 = -24;
//     int r1 = 30, r2 = 10;

//     circle(x1, y1, x2, y2, r1, r2);
 
//     return 0;
// }