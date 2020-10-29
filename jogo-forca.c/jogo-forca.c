#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char secretWord[20];

    sprintf(secretWord, "MELANCIA");
     
     int hit = 0;
     int hanged = 0;


     do {

          char guess;
     printf("Digite uma letra: ");
     scanf("%c", &guess);

         for(int i= 0; i < strlen(secretWord); i++) {
             if(secretWord[i] == guess) {
                 printf("A letra está na posição %i \n", i);
             }
         }
         
     } while (!hit  == 0 && !hanged == 0);

}