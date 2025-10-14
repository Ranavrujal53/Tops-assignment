#include <stdio.h>
#include <stdlib.h>//generates random numbers
#include <time.h>//returns the current system time in seconds

main() {
    int number, guess;

    // Generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (between 1 and 100): ");

    
    while (1) {
        scanf("%d", &guess);

        if (guess == number) {
            printf("?? You guessed it right! The number was %d\n", number);
            break;
        } 
        else if (guess < number) {
            printf("Too low! Try again: ");
        } 
        else {
            printf("Too high! Try again: ");
        }
    }

    return 0;
}

