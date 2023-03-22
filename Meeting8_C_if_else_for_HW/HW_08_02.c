#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int num = 123;
    char snum[5];

    itoa(num, snum, 10);
    printf("%s", snum);
    return 0;
}