#include <stdio.h>

int main()
{
    int userGuess, winningNum = 3;

    printf("Guess the number between 1 - 5!\nEnter your number: ");
    scanf(" %d", &userGuess);
    
    if (userGuess < winningNum || userGuess > winningNum)
    {
        printf("Guess again!  ");
        scanf(" %d", &userGuess);
    }
    if (userGuess == winningNum)
    {
        printf("YOU WON!!!");
    }
    return 0;
}