// Дефинирайте нов тип - списък с указатели към стрингове (към началото им - char*).
// Дефинирайте следните интерфейсни функции (”my_” e примерно име на библиотека. Би могло и да е “str”, тъй
// като е списък с char* елементи):
// ● Функция за инициализация на членовете на списъка:
// void my_list_init(my_list ls);
// ● Приемлив интерфейс е и : void my_list_init(my_list *ls);
// ● Същото важи и за останалите функции.
// ● Функция за проверка на това дали списъкът е празен:
// _Bool my_list_empty(my_list ls);
// ● Функция за премахването на всички елементи на списъка:
// void my_list_clear(my_list ls);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct
{
    char **elements;
    int size;
    int capacity;
} my_list;

my_list *my_list_create()
{
    my_list *list = (my_list *)malloc(sizeof(my_list));
    list->elements = (char **)malloc(sizeof(char *) * 10);
    list->size = 0;
    list->capacity = 10;
    return list;
}

void my_list_destroy(my_list *list)
{
    for (int i = 0; i < list->size; i++)
    {
        free(list->elements[i]);
    }
    free(list->elements);
    free(list);
}

void my_list_add(my_list *list, const char *element)
{
    if (list->size == list->capacity)
    {
        list->capacity *= 2;
        list->elements = (char **)realloc(list->elements, sizeof(char *) * list->capacity);
    }
    list->elements[list->size] = (char *)malloc(strlen(element) + 1);
    strcpy(list->elements[list->size], element);
    list->size++;
}

void my_list_print(const my_list *list)
{
    for (int i = 0; i < list->size; i++)
    {
        printf("%s\n", list->elements[i]);
    }
}

void my_list_init(my_list *ls)
{
    ls->size = 0;
    ls->capacity = 10;
    ls->data = (char**) malloc(ls->capacity * sizeof(char*));
}

_Bool my_list_empty(my_list ls)
{
    return ls.size == 0;
}

void my_list_clear(my_list *ls)
{
    while (!my_list_empty(*ls))
    {
        char *str = my_list_front(*ls);
        my_list_pop_front(ls);
        free(str);
    }
}

int main()
{
    my_list *list = my_list_create();
    my_list_add(list, "apple");
    my_list_add(list, "banana");
    my_list_add(list, "cherry");
    my_list_print(list);
    my_list_destroy(list);
    return 0;
}