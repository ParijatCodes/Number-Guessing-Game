
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator using the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int No_Of_Guesses = 0;
    int GuessedNumber;

    do
    {
        printf("The Number is \t");
        scanf("%d", &GuessedNumber);
        if (GuessedNumber < randomNumber)
        {
            printf("Guess Higher\n");
        }
        else if (GuessedNumber > randomNumber)
        {
            printf("Guess Lower\n");
        }
        else
        {
            printf("Congrats You Won\n");
        }
        No_Of_Guesses++;

    } while (GuessedNumber != randomNumber);
    printf("You guess the correct number in %d guesses", No_Of_Guesses);

    return 0;
}
