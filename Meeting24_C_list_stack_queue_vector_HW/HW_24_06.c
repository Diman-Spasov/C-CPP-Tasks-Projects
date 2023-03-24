// Дефинирайте функции за достъп до първия, последния и конкретен елемент от масива:
// char* my_vector_front(my_vector vec);
// char* my_vector_back(my_vector vec);
// char* my_vector_at(my_vector vec, size_t index)


char *my_vector_front(my_vector vec)
{
    if (vec.size > 0)
    {
        return vec.data[0];
    }
    return NULL;
}

char *my_vector_back(my_vector vec)
{
    if (vec.size > 0)
    {
        return vec.data[vec.size - 1];
    }
    return NULL;
}

char *my_vector_at(my_vector vec, size_t index)
{
    if (index >= 0 && index < vec.size)
    {
        return vec.data[index];
    }
    return NULL;
}