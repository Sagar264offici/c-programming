#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = 1 + rand() % 100;
int no_of_guesses =0, guessed;
    // printf("Random Number (1-100): %d\n", random_number);

do {
    printf("Guess the number\n");
 scanf("%d",&guessed);
 if(guessed> random_number)
 {
    printf("Lower Number Please\n");
 }
 else{
    printf("Higher The Number Please\n");
 }
 no_of_guesses++;
}while (guessed!=random_number);
printf("You Guessed The Correct Number in \t%d try\n", no_of_guesses);
printf("Nice Try super Diddy\n");
    return 0;
}
