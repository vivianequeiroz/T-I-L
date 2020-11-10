#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
#include "jogo-forca.h" 


void openingGame() {

    printf("*********************\n");
    printf("*** Jogo da Forca ***\n");
    printf("*********************\n\n");
}


void makeAGuess(char guesses[26], int *givenAttempts) {

    char guess;
    scanf(" %c", &guess);

    guesses[(*givenAttempts)] = guess;
    (*givenAttempts)++;
}


int alreadyMadeGuess(char word, char guesses[26], int givenAttempts) {
    int found = 0;

    for(int j = 0; j < givenAttempts; j++) {
        if(guesses[j] == word) {
            found = 1;
            break;
        }
    }

    return found;
}


void drawGallows(char secretWord[20], char guesses[26], int givenAttempts) {

    for(int i =0; i < strlen(secretWord); i++) {
            
        int found = alreadyMadeGuess(secretWord[i], guesses, givenAttempts);

        if(found) {
            printf("%c", secretWord[i]);
        } else {
            printf(" _ ");
        }
    }
    printf("\n");
}


void addNewWord() {

    char userWantToAdd;
    
    printf("Você gostaria de adicionar uma nova palavra ao jogo?? (S/N) \n");
    scanf("%c", &userWantToAdd);

    if (userWantToAdd == 'S') {
        char newWord[20];
        printf("Qual serria a palavra? \n");
        scanf("%s", newWord);
          
        FILE* f;

        f = fopen("palavras.txt", "r+");
        if(f == 0) {
            printf("Desculpe, banco de dados indisponível :c ");
            exit(1);
        }
          
        int totalWords; 
        fscanf(f, "%i", &totalWords);
        totalWords++; 

        fseek(f, 0, SEEK_SET); 
        fprintf(f, "%i", totalWords);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", newWord);

        fclose(f);   
        
    }
}


void chooseWord(char secretWord[20]) {

    FILE* f;

    f = fopen("palavras.txt", "r");

    if(f ==0) {
        printf("Desculpe, banco de dados indisponível :c");
        exit(1);
    }

    int totalWords; 
    fscanf(f, "%i", &totalWords);

    srand(time(0));
    int randomly = rand() % totalWords;

    for(int i = 0; i<= randomly; i++) {
        fscanf(f, "%s", secretWord);
    }

    fclose(f);
}


int hanged(int  givenAttempts, char secretWord[20], char guesses[26]) {

    int errors = 0;
    
    for(int i=0; i < givenAttempts; i++) {
        
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


int hit(char secretWord[20],  char guesses[26], int givenAttempts) {

for(int i = 0; i < strlen(secretWord); i++) {
    if (!alreadyMadeGuess(secretWord[i], guesses, givenAttempts)){
        return 0;
        }
    }

    return 1;
}


int main() {

    char secretWord[20];

    chooseWord(secretWord);
     
     int hitGuess = 0;
     int hangedPlayer = 0;

     char guesses[26];
     int givenAttempts = 0;

     openingGame();

     do {
        
        drawGallows(secretWord, guesses, givenAttempts);
        makeAGuess(guesses, &givenAttempts);

        hangedPlayer = hanged(givenAttempts, secretWord, guesses);
        hitGuess = hit(secretWord, guesses, givenAttempts);

    } while (!hitGuess  && !hangedPlayer);

    void addNewWord();
}
