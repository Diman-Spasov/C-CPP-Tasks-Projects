//  Дефинирайте функция, която връща текущия капацитет на динамичния масив:
// size_t my_vector_capacity(my_vector vec);
// ● Дефинирайте функция, която променя капацитета на динамичен масив.
// void my_vector_reserve(my_vector vec, size_t minCapacity);
// Ако новоподаденият капацитет е по-голям от текущия, функцията трябва да
// реалокира достатъчно памет за minCapacity на брой елемента (може и повече).
// Ако новоподаденият капацитет е по-малък от текущия - функцията не прави нищо
// (текущият капацитет се запазва, не се намалява; не се алокира/деалокира/реалокира
// памет)

size_t my_vector_capacity(my_vector *vec)
{
    return vec->capacity;
}

int main(void)
{
    my_vector vec;
    vec.size = 0;
    vec.capacity = 10;
    vec.data = malloc(vec.capacity * sizeof(char *));

    printf("The current capacity of the dynamic array is: %lu\n", my_vector_capacity(&vec));

    free(vec.data);
    return 0;
}