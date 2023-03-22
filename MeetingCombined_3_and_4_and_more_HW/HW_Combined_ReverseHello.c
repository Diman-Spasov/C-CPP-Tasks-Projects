#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    
    char str[] = "HELLO";
    char ch;
    int i = 0;

    while(str[i]){
        ch = str[i];
        putchar(tolower(ch));
        i++;
    }

    return 0;
}