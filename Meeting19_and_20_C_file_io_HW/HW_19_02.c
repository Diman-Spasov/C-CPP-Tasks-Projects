// Напишете програма, която чете стринг от стандартния вход и го извежда
// на стандартния изход с функциите getc и putc.
// Moже да ползвате fgetc и fputc, които са почти същите.
// Потърсете информация за разликата между различните версии - при
// едната двойка не можем да имаме аргументи със странични ефекти. При
// кои?



#include<stdio.h>
int main()
{
    char name[50];
    
    printf("Enter your name: ");
    gets(name); 
    printf("Your name is: ");
    puts(name); 

    return 0;
}

// puts appends a newline to the string, and fputs doesn't.

// Otherwise there is no difference, 
// except of course that with fputs you can specify a different stream,
//  while puts always writes to stdout.