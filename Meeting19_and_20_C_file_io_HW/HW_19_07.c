// Дефинирайте функции за четене и писане на масив от UserData обекти във FILE*.
// Тествайте четенето и писането на колекции от UserData в/от файлове.

int readUserDataArray(UserData *userDataArray, int size, FILE *file)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (fread(&userDataArray[i], sizeof(UserData), 1, file) != 1)
        {
            break;
        }
    }
    return i;
}

int writeUserDataArray(UserData *userDataArray, int size, FILE *file)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (fwrite(&userDataArray[i], sizeof(UserData), 1, file) != 1)
        {
            break;
        }
    }
    return i;
}
