#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void openingGame() {

    printf("*********************\n");
    printf("*** Jogo da Forca ***\n");
    printf("*********************\n\n");
}


void makeAGuess(char guesses[26], int *attempts) {

    char guess;
    scanf(" %c", &guess);

    guesses[(*attempts)] = guess;
    (*attempts)++;
}

int alreadyMadeGuess(char word, char guesses[26], int attempts) {
    int found = 0;

    for(int j = 0; j < attempts; j++) {
        if(guesses[j] == word) {
            found = 1;
            break;
        }
    }

    return found;
}

void drawGallows(char secretWord[20], char guesses[26], int attempts) {

    for(int i =0; i < strlen(secretWord); i++) {
            
        int found = alreadyMadeGuess(secretWord[i], guesses, attempts);

        if(found) {
            printf("%c", secretWord[i]);
        } else {
            printf(" _ ");
        }
    }
    printf("\n");
}


void chooseWord(char secretWord[20]) {

    sprintf(secretWord, "MELANCIA");
}

int hanged(int  attempts, char secretWord[20], char guesses[26]) {

    int errors = 0;
    
    for(int i=0; i < attempts; i++) {
        
        int exist = 0;
        for(int j = 0; j < strlen(secretWord); j++) {
            if(guesses[i] == secretWord[j]) {
                
                exist = 1;
                break;
            }
        }

        if(!exist) errors++;
    }

    return errors >=5;
}

int main() {

    char secretWord[20];

    chooseWord(secretWord);
     
     int hit = 0;
     int hangedPlayer = 0;

     char guesses[26];
     int attempts = 0;

     openingGame();

     do {
        
    drawGallows(secretWord, guesses, attempts);
    makeAGuess(guesses, &attempts);

    hangedPlayer = hanged(attempts, secretWord, guesses);

    } while (!hit  && !hangedPlayer);
}
