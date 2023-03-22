#include <stdio.h>
int main()
{
   char str[1000], rts[1000];
   int begin, end, count = 0;

   printf("Enter your word here:\n > ");
   gets(str);

    while (str[count] != '\0')
        count++;

    end = count - 1;

    for (begin = 0; begin < count; begin++) {
        rts[begin] = str[end];
        end--;
    }
    rts[begin] = '\0';

    printf("%s", rts);

   return 0;
}