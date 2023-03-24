// Напишете функция за претърсване на сортиран масив от указатели към стринг литерали. Функцията
// трябва да работи с предикат, подобно на bsort. Използвайте binary search алгоритъм.
// Използвайте функцията за да откриете някоя от стринг литералите от масив от предходната задача.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int lexicographic_cmp(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int reverse_lexicographic_cmp(const void *a, const void *b)
{
    return strcmp(*(const char **)b, *(const char **)a);
}

int length_cmp(const void *a, const void *b)
{
    return strlen(*(const char **)a) - strlen(*(const char **)b);
}

int punctuation_cmp(const void *a, const void *b)
{
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;
    int count1 = 0, count2 = 0;
    for (int i = 0; str1[i]; i++)
    {
        if (ispunct(str1[i]))
        {
            count1++;
        }
    }
    for (int i = 0; str2[i]; i++)
    {
        if (ispunct(str2[i]))
        {
            count2++;
        }
    }
    return count1 - count2;
}

void sort_strings(char *strings[], int n,
                  int (*cmp)(const void *, const void *))
{
    qsort(strings, n, sizeof(char *), cmp);
}

char **binary_search_strings(char *strings[], int n, const char *target,
                             int (*cmp)(const void *, const void *))
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        int result = strcmp(target, strings[mid]);
        if (result == 0)
        {
            return strings + mid;
        }
        else if (result < 0)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return NULL;
}

int main()
{
    char *strings[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = sizeof(strings) / sizeof(strings[0]);

    sort_strings(strings, n, lexicographic_cmp);
    char **found = binary_search_strings(strings, n, "cherry", lexicographic_cmp);
    if (found)
    {
        printf("Found: %s\n", *found);
    }
    else
    {
        printf("Not found\n");
    }

    sort_strings(strings, n, reverse_lexicographic_cmp);
    found = binary_search_strings(strings, n, "cherry", reverse_lexicographic_cmp);
    if (found)
    {
        printf("Found: %s\n", *found);
    }
    else
    {
        printf("Not found\n");
    }

    sort_strings(strings, n, length_cmp);
    found = binary_search_strings(strings, n, "cherry", length_cmp);
    if (found)
    {
        printf("Found: %s\n", *found);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
