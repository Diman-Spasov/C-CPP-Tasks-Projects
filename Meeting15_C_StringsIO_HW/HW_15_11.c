#include <stdio.h>
 
void print(char s[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d, ", s[i]);
    }
}
 
void reverse(char s[], int n)
{
    int reverse[n];
 
    for (int i = 0; i < n; i++) 
    {
        reverse[n - 1 - i] = s[i];
    }
 
    for (int i = 0; i < n; i++) 
    {
        s[i] = reverse[i];
    }
}
 
int main(void)
{
    char s[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(s)/sizeof(s[0]);
 
    reverse(s, n);
    print(s, n);
 
    return 0;
}