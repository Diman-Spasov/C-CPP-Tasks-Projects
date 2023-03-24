// Дефинирайте функции за промяна на броя на елементите на списъка:
// void my_list_resize(my_list ls, size_t elementsCount);
// void my_list_resize_init(my_list ls, size_t elementsCount,char *defaultValue );
// Ако elementsCount е по-малък от текущия размер, съдържанието на списъка става първите
// elementsCount и останалите се унищожават.
// Ако elementsCount е по-голямо от текущия размер, списъкът се разширява до elementsCount
// брой елементи, като:
// ● my_list_resize инициализира новите елементи на NULL
// ● my_list_resize_init инициализира новите елементи на стойността на 3тия си параметър:
// defaultValue

void my_list_resize(my_list ls, size_t elementsCount)
{
    ls->data = (char **)realloc(ls->data, elementsCount * sizeof(char *));
    ls->count = elementsCount;
}

void my_list_resize_init(my_list ls, size_t elementsCount, char *defaultValue)
{
    ls->data = (char **)realloc(ls->data, elementsCount * sizeof(char *));
    for (size_t i = ls->count; i < elementsCount; i++)
    {
        ls->data[i] = (char *)malloc((strlen(defaultValue) + 1) * sizeof(char));
        strcpy(ls->data[i], defaultValue);
    }
    ls->count = elementsCount;
}

// =================================================

void my_list_resize(my_list ls, size_t elementsCount)
{
    if (ls->capacity < elementsCount)
    {
        ls->capacity = elementsCount;
        ls->data = realloc(ls->data, ls->capacity * sizeof(char *));
    }
    for (size_t i = ls->size; i < elementsCount; ++i)
    {
        ls->data[i] = NULL;
    }
    ls->size = elementsCount;
}

void my_list_resize_init(my_list ls, size_t elementsCount, char *defaultValue)
{
    if (ls->capacity < elementsCount)
    {
        ls->capacity = elementsCount;
        ls->data = realloc(ls->data, ls->capacity * sizeof(char *));
    }
    for (size_t i = ls->size; i < elementsCount; ++i)
    {
        ls->data[i] = strdup(defaultValue);
    }
    ls->size = elementsCount;
}
