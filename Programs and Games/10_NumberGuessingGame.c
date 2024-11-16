#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int chooseRandomNumber(int n)
{
    srand(time(0));
    return rand() % n + 1;
}
int main()
{
    int number, guess, attempts = 0;
    number = chooseRandomNumber(100);
    printf("Guess the number between 1 and 100\n");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        attempts++;
    } while (guess != number);
    printf("Congratulations! You guessed the number it was %d in %d attempts.\n", number, attempts);

    return 0;
}