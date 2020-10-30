#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void openingGame() {

    printf("*********************\n");
    printf("*** Jogo de Forca ***\n");
    printf("*********************\n\n");
}

void makeAGuess(char guesses[26], int attempts) {

    char guess;
    scanf(" %c", &guess);

    guesses[attempts] = guess;
}


int main() {

    char secretWord[20];

    sprintf(secretWord, "MELANCIA");
     
     int hit = 0;
     int hanged = 0;

     char guesses[26];
     int attempts = 0;

     openingGame();

     do {
        for(int i =0; i < strlen(secretWord); i++) {
            
            int find = 0;

            for(int j = 0; j < attempts; j++) {
                if(guesses[j] == secretWord[i]) {
                    find = 1;
                    break;
                }
            }

        if(find) {
            printf("%c", secretWord[i]);
        } else {
            printf(" _ ");
        }
    }
    printf("\n");

    makeAGuess(guesses, attempts);
    attempts++;

    } while (!hit  && !hanged );
}
