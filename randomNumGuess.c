#include <stdio.h>
#include <stdlib.h> // the Standard Library for random numbers
#include <time.h>   // the time library to seed the random number generator

int main()
{
    srand(time(0));                        // Set the seed for r.n. generation based on the current time
    int randomNumber = (rand() % 100) + 1; // <Generate a r.n.

    // printf("Random number: %d\n", randomNumber);
    int guessedNumber,round=0;
    
    do
    {
        printf("Enter a value: ");
        scanf("%d",&guessedNumber);
        if(guessedNumber>randomNumber){
            printf("Lower than random, please!\n");
        } else{
            printf("Higher than random, please!\n");
        }
        round++;
    } while (randomNumber!=guessedNumber);
    printf("\nYou guessed the number is in %d round with %d.\n",round,guessedNumber);
    
    return 0;
}
