#include <stdio.h>
int main()
{
 int nA, nB, nX, nY;
    printf("Enter decimal number: ");
    scanf("%d", &nA);
    printf("Enter decimal number: ");
    scanf("%d", &nB);
    printf("Enter decimal number: ");
    scanf("%d", &nX);
    printf("Enter decimal number: ");
    scanf("%d", &nY);

    if (nA > nB && nA != 0)
    {
        printf("&& Operator : Both conditions are true\n");
    }
    if ( nX > nY || nY != 20) {
        printf("|| Operator : Only one condition is true\n");
    }
    if ( ! (nA > nB && nB !=0 ) ) {
        printf(" ! Operator : Both conditions are true\n");
    } 
}