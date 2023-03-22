// Дефинирайте функция, която проверява дали точка е във вътрешността на правоъгълник (aabb)

#include <stdio.h>
#include <stdbool.h>
 
bool FindPoint(int x1, int y1, int x2, int y2, int x, int y)
{
    if (x > x1 && x < x2 && y > y1 && y < y2)
        return true;
 
    return false;
}



// int main()
// {
//     int x1 = 0, y1 = 0, x2 = 10, y2 = 8;
 
//     int x = 1, y = 5;
 
//     if (FindPoint(x1, y1, x2, y2, x, y))
//         printf("Yes");
//     else
//         printf("No");
 
//     return 0;
// }