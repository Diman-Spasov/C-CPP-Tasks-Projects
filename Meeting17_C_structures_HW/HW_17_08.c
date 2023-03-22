// Направете нова версия на програмата за отдаване на превозни средства под наем. В бъдеще ще разширим функционалността на
// програмата да работи с файлове и дати, засега ще четем хард-коднати свободни превозни средства(ПС) и ще ги отдаваме едно по едно
// докато не свършат или не излезем от програмата
// Програмата трябва да има следните менюта:
// ○ Main Menu, със следните опции:
// ■ Press 1 to choose vehicle (води до Choose Vehicle Menu с всички свободни ПС)
// ■ Press 2 to choose vehicle by brand(води до Choose Brand Menu с всички марки от които има налични ПС, след което до
// Choose Vehicle Menu с всички свободни ПС от избраната марка)
// ■ Press q to quit.
// ○ Choose Vehicle Menu - списък с множество свободни ПС(в зависимост от контекста, някой път всички, друг път - от дадена
// марка), с опция за избор на ПС(водеща до Vehicle Details Menu) + опция за връщане в Main Menu (“Press b to go back to
// Main Menu”)
// ○ Choose Brand Menu - списък с марки ПС, за които има налично свободно ПС. Дава възможност за избор на марка(при
// което води до Choose Vehicle Menu със свободни ПС от избраната марка) или връщане в Main Menu
// ○ Vehicle Details Menu, със следното съдържание:
// ■ <Детайли за марката - име и кратка информация>
// ■ <Детайли за модела - име и кратка информация>
// ■ <Брой свободни ПС от тази марка и модел>
// ■ <Цена за наемане за едно денонощие>
// ■ Опции за наемане на ПС (за текущото изпълнение на програмата) и за връщане в предходното меню - Choose Vehicle
// Menu (с последните филтри за менюто)
// Направете отделен модул (в отделни .h и .c файлове) за съхранение на информацията, свързана с различните марки
// и модели на превозни средства. За всяка марка, както и за всеки модел от дадена марка трябва да пазим име и
// кратко описание на марката/модела. В бъдеще модулът ще има функции за четене на информацията от файл(ове)
// или от мрежата, засега можем да хард-коднем примерни данни.
// ● Направете отделен модул за съхранение и достъп до информацията за всичките ПС на компанията, с цена за
// денонощие и наличност (дали е наличен за текущото изпълнение на програмата засега)
// ● Напревете трети, основен модул на програмата, който да чете избора на потребителя и да контролира потока на
// изпълнение на програмата, на базата на направения от потребителя избор.
// ● Дефинирайте и използвайте отделни типове за различните видове данни:
// ○ Информация за марка(име и кратко описание засега)
// ○ Информация за модел от марка(име и кратко описание засега)
// ○ Информация за превозните средства с които разполага компанията(марка, модел, наличност, цена за всяко ПС)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main()
// {
//     int choiseVehicle = 0;
//     int choiseBrand = 0;
//     int userChoise = 0;
//     char choiseRent = 0;
//     int daysOfRent = 0;
//     int pricePerUnit = 50;
//     int total = 0;
    
    
//     printf("Press 1 to choose vehicle\n");    
//     printf("Press 2 to choose vehicle by brand\n");
//     printf("Press Q to quit\n");
//     scanf(" %d", &userChoise);

//     switch (userChoise)
//     {
//     case 1:
//         printf("Vehicles list:\n(1)Audi A4\t(2)Audi A6\n(3)BMW M4\t(4)BMW M6\n");
//         scanf(" %d", &choiseVehicle);
//         int b = userChoise;
//         switch (choiseVehicle)
//         {
//         case 1:
//             printf("Audi A4:\nGood model\nWe have model year 2012 sedan with all extras set\nFor rental - Available (1)\nPrice: %d\n\nDo you want to rent this vehicle? Y / N\n", pricePerUnit);
//             scanf(" %c", &choiseRent);

//             switch (choiseRent)
//             {
//             case 'y':
//                 printf("How many days (MAX 5):\n");
//                 scanf(" %d", &daysOfRent);
//                 printf("You have rent Audi A4 for %d days.\n", daysOfRent);
//                 total = pricePerUnit * daysOfRent;
//                 printf("Your total is: $%d", total);
//                 break;
            
//             default:
//                 break;
//             }
//             break;
        
//         case 2:
//             printf("Audi A6:\nGood model\nWe have model year 2018 sedan with all extras set\nFor rental - Available (1)\nPrice: %d\n\nDo you want to rent this vehicle? Y / N\n", pricePerUnit);
//             scanf(" %c", &choiseRent);

//             switch (choiseRent)
//             {
//             case 'y':
//                 printf("How many days (MAX 5):\n");
//                 scanf(" %d", &daysOfRent);
//                 printf("You have rent Audi A6 for %d days.\n", daysOfRent);
//                 total = pricePerUnit * daysOfRent;
//                 printf("Your total is: $%d", total);
//                 break;
            
//             default:
//                 break;
//             }
//             break;
            
//         case 3:
//             printf("BMW M4:\nGood model\nWe have model year 2012 coupe with all extras set\nFor rental - Available (1)\nPrice: %d\n\nDo you want to rent this vehicle? Y / N\n", pricePerUnit);
//             scanf(" %c", &choiseRent);

//             switch (choiseRent)
//             {
//             case 'y':
//                 printf("How many days (MAX 5):\n");
//                 scanf(" %d", &daysOfRent);
//                 printf("You have rent BMW M4 for %d days.\n", daysOfRent);
//                 total = pricePerUnit * daysOfRent;
//                 printf("Your total is: $%d", total);
//                 break;
            
//             default:
//                 break;
//             }
        
//             break;
            
//         case 4:
//             printf("BMW M6:\nGood model\nWe have model year 2013 coupe with all extras set\nFor rental - Available (1)\nPrice: %d\n\nDo you want to rent this vehicle? Y / N\n", pricePerUnit);
//             scanf(" %c", &choiseRent);

//             switch (choiseRent)
//             {
//             case 'y':
//                 printf("How many days (MAX 5):\n");
//                 scanf(" %d", &daysOfRent);
//                 printf("You have rent BMW M6 for %d days.\n", daysOfRent);
//                 total = pricePerUnit * daysOfRent;
//                 printf("Your total is: $%d", total);
//                 break;
            
//             default:
//                 break;
//             }
//             break;
            
//         case 'b':
            
//             break;
        
//         default:
//             break;
//         }
//         break;
    
//     case 2:
//         printf("Vehilces by brand list:\n(1)Audi\t(2)BMW\n");
//         scanf(" %d", &choiseBrand);
//         switch (choiseBrand)
//         {
//         case 1:
//             printf("Audi:\nWe have (1) A4 2012 sedan available\nWe have (1) A6 2013 sedan available\n");

//             break;
//         case 2:
//             printf("Audi:\nWe have (1) M4 2012 coupe available\nWe have (1) M6 2013 coupe available\n");

//         default:
//             break;
//         }
//         break;

//     case 'q':
//         break;

//     default:
//         printf("Invalid input");
//         break;
//     }
// }
void main_menu();
void vehicle_menu();
void choose_brand_menu();
void vehicle_details_menu();
void brand_list_models_audi();
void brand_list_models_bmw();

int user_choise_menu;
int vehicle_choise;
int brand_choise;
int model_choise;
char rent_choise;

int unit_price = 50;
int unit_count = 1;
int totalSum = unit_price * unit_count;

void main_menu()
{
    printf("Press 1 to choose vehicle\nPress 2 to choose vehicle by brand\nPress Q to quit\n ");
    scanf(" %d", &user_choise_menu);
    if (user_choise_menu == 1)
    {
        vehicle_menu();
    }
    else if (user_choise_menu == 2)
    {
        choose_brand_menu();
    }
    else
        exit(0);
}


void vehicle_menu()
{ 
    
    printf("Vehicles list:\n(1)Audi A4\t(2)Audi A6\n(3)BMW M4\t(4)BMW M6\n");
    scanf(" %d", &vehicle_choise);
    if (vehicle_choise == 1)
    {
        vehicle_details_menu(s1.audiA4);
    }
    else if (vehicle_choise == 2)
    {
        vehicle_details_menu(s1.audiA6);
    }
    else if (vehicle_choise == 3)
    {
        vehicle_details_menu(s1.bmwM4);
    }
    else if (vehicle_choise == 4)
    {
        vehicle_details_menu(s1.bm2M6);
    }
    

}


void choose_brand_menu()
{
    printf("Brands list:\n(1) Audi\n(2) BMW\n\n");
    scanf(" %d", &brand_choise);
    if (brand_choise == 1)
    {
        
    }
}

void brand_list_models_audi()
{
    printf("(1) Audi A4\n(2) Audi A6\n");
    scanf(" %d", &model_choise);
    if (model_choise == 1)
    {
        vehicle_details_menu(s1.audiA4);
    }
    else if (model_choise == 2)
    {
        vehicle_details_menu(s1.audiA6);
    }

}

void brand_list_models_bmw()
{
    printf("(1) Audi M4\n(2) Audi M6\n");
    scanf(" %d", &model_choise);
    if (model_choise == 1)
    {
        vehicle_details_menu(s1.bmwM4);
    }
    else if (model_choise == 2)
    {
        vehicle_details_menu(s1.bmwM6);
    }

}


void vehicle_details_menu()
{
    struct vehicleDetails
    {
        char audiA4[1000];
        char audiA6[1000];
        char bmwM4[1000];
        char bmwM6[1000];
    }s1;
    
    strcpy(s1.audiA4, "Audi A4 2012 Full pack Extras \n( 1 ) car Available!\nPrice per unit: $%d\nDo you like to rent it Y/N ?\n", unit_price);
    strcpy(s1.audiA6, "Audi A6 2012 Full pack Extras \n( 1 ) car Available!\nPrice per unit: $%d\nDo you like to rent it Y/N ?\n", unit_price);
    strcpy(s1.bmwM4, "BMW M4 2012 Full pack Extras \n( 1 ) car Available!\nPrice per unit: $%d\nDo you like to rent it Y/N ?\n", unit_price);
    strcpy(s1.bmwM6, "BMW M6 2012 Full pack Extras \n( 1 ) car Available!\nPrice per unit: $%d\nDo you like to rent it Y/N ?\n", unit_price);

    printf("Details for: %s", s1.audiA4);
    scanf(" %c", &rent_choise);
    if (rent_choise == 'y')
    {
        printf("Your total is: $%d", totalSum);
    }
    
    printf("Details for: %s", s1.audiA6);
    scanf(" %c", &rent_choise);
    if (rent_choise == 'y')
    {
        printf("Your total is: $%d", totalSum);
    }

    printf("Details for: %s", s1.bmwM4);
    scanf(" %c", &rent_choise);
    if (rent_choise == 'y')
    {
        printf("Your total is: $%d", totalSum);
    }

    printf("Details for: %s", s1.bmwM6);
    scanf(" %c", &rent_choise);
    if (rent_choise == 'y')
    {
        printf("Your total is: $%d", totalSum);
    }
    
}


int main()
{
    main_menu();
    
    
}