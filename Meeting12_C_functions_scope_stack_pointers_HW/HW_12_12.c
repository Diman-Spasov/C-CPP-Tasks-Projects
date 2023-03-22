#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* copyString(char s[])
{
    char* s2;
    s2 = (char*)malloc(20);
 
    strcpy(s2, s);
    return (char*)s2;
}
int main()
{
    char s1[20] = "Copycat";
    char* s2;
    s2 = copyString(s1);
    printf("Original string: %s\n", s1);
    printf("Coppied string: %s", s2);
    return 0;
}
