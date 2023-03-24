// Дефинирайте функции за добавяне на елементи на последна и на конкретна
// позиция в динамичния масив:


void push_back(struct vector *v, char *str)
{
    if (v->size == v->capacity)
    {
        v->capacity *= 2;
        v->data = (char **)realloc(v->data, v->capacity * sizeof(char *));
    }
    v->data[v->size++] = str;
}

void my_vector_insert(char *data, struct vector *vec, size_t pos)
{
    if (pos > vec->size)
    {
        return;
    }

    vec->data = realloc(vec->data, (vec->size + 1) * sizeof(char *));

    for (size_t i = vec->size; i > pos; i--)
    {
        vec->data[i] = vec->data[i - 1];
    }

    vec->data[pos] = malloc(strlen(data) + 1);
    strcpy(vec->data[pos], data);

    vec->size++;
}