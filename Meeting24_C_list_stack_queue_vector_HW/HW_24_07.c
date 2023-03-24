// Дефинирайте функция за итериране на елементите на масива, която приема указател към друга функция, подадена
// от клиента, която извършва желаните операции на всеки отделен елемент от списъка.
// void my_vector_iterate(my_vector vec, void (*iterFunc)(char*));


void my_vector_iterate(my_vector vec, void (*iterFunc)(char *))
{
    size_t i;
    for (i = 0; i < vec.size; i++)
    {
        iterFunc(vec.data[i]);
    }
}