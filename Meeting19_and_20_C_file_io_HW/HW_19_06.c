
// Дефинирайте структура UserData със следните members:
// ● c-string масиви от char за име, презиме и фамилия
// ● PIN (ЕГН)
// ● enum E_DrivingLicenseCategory - категория за водач на МПС
// Дефинирайте функции за четене и писане на UserData дата обекти в/от подаден
// FILE* като аргумент(форматирайте текстовите данни както намерите за добре)
// Прочетете UserData обект от текстов файл.
// Запишете UserData обект в текстов файл.



#include <stdio.h>
#include <string.h>


struct UserData 
    {
        char name[20];
        char surname[20];
        char lastName[20];
        long long int pin;
        enum E_DrivingLicenseCategory;
    };

int main()
{   
    
    FILE* ptr;
    FILE* ptr2;
    FILE* ptr3;

    char str[500];
    ptr = fopen("C:/Users/bghak/Desktop/C projects/Meeting19_C_file_io_HW/19_6_txtfiles/name.txt", "a+");
    ptr2 = fopen("C:/Users/bghak/Desktop/C projects/Meeting19_C_file_io_HW/19_6_txtfiles/surname.txt", "a+");
    ptr3 = fopen("C:/Users/bghak/Desktop/C projects/Meeting19_C_file_io_HW/19_6_txtfiles/lastname.txt", "a+");


    struct UserData User1;

    strcpy( User1.name, fgets(str, 500, ptr));
    strcpy( User1.surname, fgets(str, 500, ptr2));
    strcpy( User1.lastName, fgets(str, 500, ptr3));
    User1.pin = 9965466516;
    
    
    printf("user1 name: %s\n", User1.name);
    printf("user1 surname: %s\n", User1.surname);
    printf("user1 last name: %s\n", User1.lastName);
    printf("user1 PIN: %d\n", User1.pin);



    return 0;
}