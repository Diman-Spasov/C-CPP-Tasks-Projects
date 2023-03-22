// Напишете функция, която проверява дали подаденият й стринг е палиндром
// (редът на буквите от ляво надясно е същият като от дясно на ляво)

#include <stdio.h>
#include <string.h>
 
void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
 
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}
int main()
{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("codeacademy");
    return 0;
}