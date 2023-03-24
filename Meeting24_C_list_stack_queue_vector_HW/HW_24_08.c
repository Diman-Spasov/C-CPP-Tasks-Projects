// Дефинирайте функция за сортиране на елементите на масива по зададен предикат(параметър - указател към
// функция, която сравнява два елемента и връща -1, 0 или 1.
// void my_vector_sort(my_vector vec, //..

void my_vector_sort(my_vector vec, int (*compareFunc)(const char *, const char *))
{
    qsort(vec.data, vec.size, sizeof(char *), compareFunc);
}