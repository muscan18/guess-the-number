#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber) {
            printf("Higher! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Lower! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", randomNumber, attempts);
        }
    } while (guess != randomNumber);
return 0;
}
