// Дефинирайте функции за промяна на броя на елементите на динамичния масив:
// void my_vector_resize(my_vector vec, size_t elementsCount);
// void my_vector_resize_init(my_vector vec, size_t elementsCount,char *defaultValue);
// Ако elementsCount е по-малък от текущия размер, съдържанието на динамичния
// масив става първите elementsCount и останалите се унищожават.
// Ако elementsCount е по-голямо от текущия размер, динамичният масив се разширява
// до elementsCount брой елементи, като:
// ● my_vector_resize инициализира новите елементи на NULL
// ● my_vector_resize_init инициализира новите елементи на стойността на 3тия си
// параметър: defaultValue



void my_vector_resize(my_vector *vec, size_t elementsCount)
{
    vec->capacity = elementsCount;
    vec->data = realloc(vec->data, vec->capacity * sizeof(char *));
}

void my_vector_resize_init(my_vector *vec, size_t elementsCount, char *defaultValue)
{
    vec->capacity = elementsCount;
    vec->data = realloc(vec->data, vec->capacity * sizeof(char *));
    for (size_t i = vec->size; i < vec->capacity; i++)
    {
        vec->data[i] = malloc((strlen(defaultValue) + 1) * sizeof(char));
        strcpy(vec->data[i], defaultValue);
    }
    vec->size = vec->capacity;
}