// Използвайте стандартната функция bsearch от stdlib.h за да откриете някоя от стринговите литерали от сортирания лексикографски
// масив от указатели към литерали

#include <stdlib.h>
#include <string.h>

const char *strings[] = {"apple", "banana", "cherry", "dog", "elephant"};
const int num_strings = sizeof(strings) / sizeof(strings[0]);

int compare_strings(const void *a, const void *b)
{
    const char *str_a = (const char *)a;
    const char *str_b = (const char *)b;
    return strcmp(str_a, str_b);
}

int main()
{
    qsort(strings, num_strings, sizeof(strings[0]), compare_strings);

    const char *search_string = "cherry";
    const char **result = bsearch(&search_string, strings, num_strings, sizeof(strings[0]), compare_strings);

    if (result != NULL)
    {
        printf("Found string: %s\n", *result);
    }
    else
    {
        printf("String not found\n");
    }

    return 0;
}