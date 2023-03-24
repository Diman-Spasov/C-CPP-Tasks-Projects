// Дефинирайте функции за изтриване на елементи на последна и на конкретна
// позиция в списъка:

typedef struct
{
    char **data;
    size_t size;
    size_t capacity;
} my_vector;

void my_vector_pop_back(my_vector *vec)
{
    if (vec->size == 0)
    {
        printf("Error: the vector is already empty.\n");
        return;
    }

    free(vec->data[vec->size - 1]);
    vec->data[vec->size - 1] = NULL;
    vec->size--;
}

void my_vector_erase(my_vector *vec, size_t pos)
{
    if (pos >= vec->size)
    {
        printf("Error: the position is outside the bounds of the vector.\n");
        return;
    }

    free(vec->data[pos]);

    for (size_t i = pos; i < vec->size - 1; i++)
    {
        vec->data[i] = vec->data[i + 1];
    }

    vec->data[vec->size - 1] = NULL;
    vec->size--;
}