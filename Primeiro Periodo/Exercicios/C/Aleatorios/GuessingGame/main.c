#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int X, Number, Attemps;
    char Choose;

    X = rand() % 100 + 1;
    Attemps = 1;

    printf("Guess the value of X is between 1 and 100, you have 20 tries!\n");

    do {
        printf("Enter a number:");
        scanf("%d",&Number);

        if (Number > X){
            printf("The value of X is less than: %i\n", Number);
        } else {
            if (Number < X){
                printf("The value of X is greater than: %i\n", Number);
            } else {
                printf("You guessed it, congratulations!");
            }
        }
        Attemps++;
    } while (Number != X && Attemps <= 20 );

    if (Attemps > 20){
        printf("You have exceeded the retry limit, try again!\n");
        printf("The value of X was: %i\n", X);
    }

    while (Choose != 'y' && Choose != 'n'){
        printf("Do you want to try again? y for yes, n for no:\n");
        scanf(" %c", Choose);

        if (Choose == 'y'){
            main();
        }
    }
    return 0;
}