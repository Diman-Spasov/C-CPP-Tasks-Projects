// Използвайте стандартната функция qsort от stdlib.h за да сортирате:
// ● масив от int във възходящ ред
// ● масив от char във низходящ ред
// ● масив от масив от константни указатели към стринг литерали лексикографски
// ● масив от unsigned long във низходящ ред, като четните стойности са преди нечетните, пример:
// 4, 2, 6, 1, 7, 5, 3, 9, 8, 0 след сортиране: 8, 6, 4, 2, 0, 9, 7, 5, 3, 1




// sorting an array of integers in ascending order using qsort
#include <stdlib.h>
#include <stdio.h>

int compareChars(const void *a, const void *b)
{
    return (*(char *)b - *(char *)a);
}

int main()
{
    char arr[] = {'e', 'd', 'c', 'b', 'a'};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(char), compareChars);

    for (int i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}




// sorting an array of characters in descending order using qsort

int compareChars(const void *a, const void *b)
{
    return (*(char *)b - *(char *)a);
}

int main()
{
    char arr[] = {'e', 'd', 'c', 'b', 'a'};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(char), compareChars);

    for (int i = 0; i < n; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}




// sorting an array of arrays of constant string literals lexicographically

#include <string.h>

int compareStrings(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    const char *arr[][3] = {{"apple", "banana", "cherry"}, {"dog", "cat", "bird"}};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(const char *), compareStrings);

    for (int i = 0; i < n; i++)
    {
        printf("%s ", arr[i][0]);
    }
    printf("\n");

    return 0;
}



// sorting an array of unsigned longs in descending order, with even values appearing before odd values

int compareULongs(const void *a, const void *b)
{
    unsigned long x = *(unsigned long *)a;
    unsigned long y = *(unsigned long *)b;

    if ((x % 2 == 0) && (y % 2 != 0))
    {
        return -1;
    }
    if ((x % 2 != 0) && (y % 2 == 0))
    {
        return 1;
    }
    return (y - x);
}