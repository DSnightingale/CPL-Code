#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int high = 100;

    printf("Let's play a interesting game!\n"
           "The computer will generate a radom number.\n"
           "And you'll have 7 opportunities to guess the correct number.\n"
           "Good luck, baby!\n");

    srand(time(NULL));
    int secret = rand() % high + 1;

    int tries = 7;

    while (tries > 0)
    {
        printf("Please input your guess number.\n"
               "You still have %d opportunities.\n",
               tries);

        int guess = 0;
        scanf("%d", &guess);

        if (guess == secret)
        {
            printf("You Win!\n");
            break;
        }
        else if (guess > secret)
        {
            printf("guess > secret\n");
        }
        else
        {
            printf("guess < secret\n");
        }
        tries--;
    }

    if (tries == 0)
    {
        printf("You lose!");
    }
    return 0;
}