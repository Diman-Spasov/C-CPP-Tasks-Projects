// Дефинирайте функция за сериализация на масив от обекти от тип UserInfo.
// Тествайте с прочитане на файл с множество данни за потребители, променяне на данните и
// записване на новата информация в същия файл

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum DriverCategory
{
    A,
    B,
    C,
    D
};

struct UserInfo
{
    enum DriverCategory category;
    char firstName[100];
    char middleName[100];
    char lastName[100];
    char PIN[10];
};

void writeArrayOfUserInfoToFile(const char *fileName, struct UserInfo *users, int count)
{
    FILE *fp = fopen(fileName, "wb");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fwrite(users, sizeof(struct UserInfo), count, fp);
    fclose(fp);
}

void readArrayOfUserInfoFromFile(const char *fileName, struct UserInfo **users, int *count)
{
    FILE *fp = fopen(fileName, "rb");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    int size = ftell(fp) / sizeof(struct UserInfo);
    rewind(fp);

    *users = (struct UserInfo *)malloc(sizeof(struct UserInfo) * size);
    *count = size;

    fread(*users, sizeof(struct UserInfo), size, fp);
    fclose(fp);
}

int main()
{
    struct UserInfo users[] = {{A, "John", "Doe", "Smith", "1234"},
                               {B, "Jane", "Doe", "Brown", "5678"},
                               {C, "Jim", "Smith", "Johnson", "9101"}};
    int count = sizeof(users) / sizeof(users[0]);

    writeArrayOfUserInfoToFile("user_info.bin", users, count);

    struct UserInfo *readUsers;
    int readCount;
    readArrayOfUserInfoFromFile("user_info.bin", &readUsers, &readCount);

    for (int i = 0; i < readCount; i++)
    {
        printf("Category: %d\n", readUsers[i].category);
        printf("Name: %s %s %s\n", readUsers[i].firstName, readUsers[i].middleName, readUsers[i].lastName);
        printf("PIN: %s\n", readUsers[i].PIN);
        printf("\n");
    }

    free(readUsers);

    return 0;
}
