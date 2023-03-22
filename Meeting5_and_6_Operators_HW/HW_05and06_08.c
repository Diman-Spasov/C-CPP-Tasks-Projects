#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

main ()
{
    char  word[20];
    printf("enter word:");
    int d,i;
    scanf("%s",&word);
    d = strlen(word);

    for(i=d-1; i >= 0; i--)
        printf("%c",word[i]);
}