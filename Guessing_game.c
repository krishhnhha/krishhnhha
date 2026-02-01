#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;   // Random number between 1 and 100

    printf("I have chosen a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != number);
}

int main() {
    playGame();
    return 0;
}
