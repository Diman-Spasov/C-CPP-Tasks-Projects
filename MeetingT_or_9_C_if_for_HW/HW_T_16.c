#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void guess(int numbersRange)
{
    int rightNumber, userGuess, guessCount = 0;
 
    rightNumber = 7;
 
    printf("Guess a number between 1 and %d\n", numbersRange); 
    do {
 
        if (guessCount > 4) {
            printf("\nYou Loose!\n");
            break;
        }
        scanf("%d", &userGuess);

        if (userGuess > rightNumber)
        {
            printf("Lower number please!\n");
            guessCount++;
        }
        else if (rightNumber > userGuess)
        {
            printf("Higher number please!\n");
            guessCount++;
        }
        else
            printf("You guessed the number in %d attempts!\n", guessCount);
    } while (userGuess != rightNumber);
}
int main()
{
    int numbersRange = 20;
    guess(numbersRange);
    return 0;
}