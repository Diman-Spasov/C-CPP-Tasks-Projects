// Напишете функция за сортиране на масив от указатели към стринг литерали, която работи с
// предикатна функция, подобно на qsort (приемa като параметър указател към функция-предикат)
// Напишете функции, които сортират масив:
// ● лексикографски, в обратен ред
// ● по брой символи в стринга
// ● по брой пунктуационни знаци в стринга

#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int lexicographical_sort(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int lexicographical_sort_reverse(const void *a, const void *b)
{
    return strcmp(*(const char **)b, *(const char **)a);
}

int length_sort(const void *a, const void *b)
{
    return strlen(*(const char **)a) - strlen(*(const char **)b);
}

int punctuation_sort(const void *a, const void *b)
{
    int a_punctuation_count = 0, b_punctuation_count = 0;
    const char *str_a = *(const char **)a, *str_b = *(const char **)b;
    for (int i = 0; i < strlen(str_a); i++)
    {
        if (ispunct(str_a[i]))
        {
            a_punctuation_count++;
        }
    }
    for (int i = 0; i < strlen(str_b); i++)
    {
        if (ispunct(str_b[i]))
        {
            b_punctuation_count++;
        }
    }
    return a_punctuation_count - b_punctuation_count;
}

void string_sort(char **arr, size_t n, int (*cmp)(const void *, const void *))
{
    qsort(arr, n, sizeof(char *), cmp);
}
