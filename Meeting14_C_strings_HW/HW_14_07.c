// Напишете функция, която приема два стринга и връща число - колко пъти се
// среща втория стринг в първия

#include <stdio.h>

static
int count_occurrences(const char *string, const char *substr)
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        int j;
        for (j = 0; substr[j] != '\0' && substr[j] == string[i+j]; j++)
            ;
        if (substr[j] == '\0')
            count++;
    }
    return count;
}
int main(void)
{
    const char string[] = "Code Academy Code Academy";
    const char substr[] = "Code";

    printf("\nString << %s >> vs sub << %s >> = %d\n",
           string+0, substr+0, count_occurrences(string+0, substr+0));
    printf("\nString << %s >> vs sub << %s >> = %d\n",
           string+0, substr+1, count_occurrences(string+0, substr+1));
    printf("\nString << %s >> vs sub << %s >> = %d\n",
           string+0, substr+2, count_occurrences(string+0, substr+2));
    
    printf("\n");

    return 0;
}