#include <stdio.h>

int main(){

    int productCount, productPrice, productType;
    float totalPrice;

    printf("Hello what type of room do you need \n > For Luxury Suit - press '1' \n > For Standart Room - press '2' \n");
    scanf("%d", &productType);

    if (productType == 1) {productPrice = 180;}
    else {productPrice = 120;};

    printf("How many nights you would like to stay?\n > ");
    scanf("%d", &productCount);

    if (productCount > 14)
    {
        printf("Max days (14)\nEnter again:  ");
        scanf(" %d", &productCount);
    }
    totalPrice = (productPrice * productCount) + (6 * (productPrice * productCount)) / 100; 

    printf(" Your total is: $%0.2f\n", totalPrice);
    printf("Goodbye!");
    return 0;
}