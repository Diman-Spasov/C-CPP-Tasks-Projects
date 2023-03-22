#include <stdio.h>
#include <string.h>

int main(){

    int productCount = 0;
    int productPrice = 0;
    int totalPrice = 0;
    int productType = 0;
    char userContinue;

    printf("Hello what vehicle do you need? \n > For Caravan - press '1' \n > For Camper - press '2' \n");
    scanf("%d", &productType);

    if (productType == 1) {productPrice = 90;}
    else {productPrice = 100;};

    printf("How many vehicles you require?\n > ");
    scanf("%d", &productCount);

    totalPrice = productPrice * productCount;

    printf(" Your total is: $%d\n", totalPrice);

    printf("Whould you like to see other products? \n > Y/N \n");
    scanf(" %c", &userContinue);
   
    while (userContinue == 'y' || userContinue == 'Y'){
        printf("It was a joke :D We don't have any !!! haha \n");
        printf("Whould you like to see other products? \n > Y/N \n");
        scanf(" %c", &userContinue);
    }
    printf("Goodbye!");
    return 0;
}