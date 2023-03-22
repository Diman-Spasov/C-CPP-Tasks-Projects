// Дефинирайте структура UserInfo със следните данни за всеки потребител:
// ● Категория на шофьорска книжка ( ползвайте enum за различните категории )
// ● Три имена
// ● ЕГН ( PIN )
// Дефинирайте функции за сериализация(писане) и десериализация(четене) на обект от тип UserInfo.
// Тествайте с текстов файл с данни за потребител и програма, която прочита файла, променя нещо и
// го записва във същия файл.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100
#define MAX_EGN_LEN 10

enum DrivingCategory
{
    A,
    B,
    C,
    D,
    E
};

struct UserInfo
{
    enum DrivingCategory category;
    char first_name[MAX_NAME_LEN];
    char middle_name[MAX_NAME_LEN];
    char last_name[MAX_NAME_LEN];
    char egn[MAX_EGN_LEN];
};

void serialize_user_info(struct UserInfo user, FILE *file)
{
    fwrite(&user.category, sizeof(enum DrivingCategory), 1, file);
    fwrite(user.first_name, sizeof(char), MAX_NAME_LEN, file);
    fwrite(user.middle_name, sizeof(char), MAX_NAME_LEN, file);
    fwrite(user.last_name, sizeof(char), MAX_NAME_LEN, file);
    fwrite(user.egn, sizeof(char), MAX_EGN_LEN, file);
}

struct UserInfo deserialize_user_info(FILE *file)
{
    struct UserInfo user;
    fread(&user.category, sizeof(enum DrivingCategory), 1, file);
    fread(user.first_name, sizeof(char), MAX_NAME_LEN, file);
    fread(user.middle_name, sizeof(char), MAX_NAME_LEN, file);
    fread(user.last_name, sizeof(char), MAX_NAME_LEN, file);
    fread(user.egn, sizeof(char), MAX_EGN_LEN, file);

    return user;
}

int main(int argc, char *argv[])
{
    char file_name[] = "user_info.bin";
    FILE *file;
    struct UserInfo user;
    user.category = B;
    strcpy(user.first_name, "John");
    strcpy(user.middle_name, "Michael");
    strcpy(user.last_name, "Doe");
    strcpy(user.egn, "1234567890");

    file = fopen(file_name, "wb");
    serialize_user_info(user, file);
    fclose(file);

    file = fopen(file_name, "rb");
    user = deserialize_user_info(file);
    fclose(file);

    printf("User Information:\n");
    printf("Category: %d\n", user.category);
    printf("First Name: %s\n", user.first_name);
    printf("Middle Name: %s\n", user.middle_name);
    printf("Last Name: %s\n", user.last_name);
    printf("EGN: %s\n", user.egn);

    return 0;
}