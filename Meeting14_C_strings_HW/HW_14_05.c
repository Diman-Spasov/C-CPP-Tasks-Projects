// // Напишете функция, която приема стринг и char символ и връща броя на
// // срещанията на символа в стринга.

#include <stdio.h>
#include <string.h>
 
int occurChar(const char *s,char c)
{
    int count = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char s[1000], c;
	int count = 0;  
  
    printf("Enter  the string: ");
    gets(s);

    printf("\nEnter character to be searched: ");
    c = getchar();
    count = check(s, c);

    printf("\nCharacter '%c' occurs %d times \n ", c, count);
 
	return 0;  
}