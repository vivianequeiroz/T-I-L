#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
    printf("****************************************\n");
    printf("*Bem-vindo ao nosso jogo de advinhação!*\n");
    printf("****************************************\n");

    int seconds = time(0);
    srand(seconds);
    
    int randomNumber = rand();

    int secretNumber = randomNumber % 100;
    int guess;
    int attempts = 1;

    double points = 1000;
    //i representa o --contador--
    while(1){
         printf("Tentativa %i\n", attempts);
         printf("Qual é o seu chute? ");
         scanf ("%i", &guess);
         printf("Seu chute foi %i \n", attempts);
    

    if (guess < 0){
         printf("\n***** Ei, você digitou um número negativo, mas o seu chute só pode conter números positivos! *****\n");
         continue;
    }

    int hit = guess == secretNumber;
    int bigger = guess > secretNumber;

    if (hit) {
         printf("Parabéns! Você é top e conseguiu acertar o número secreto :D \n\n");
         break;
          
    } else if (bigger) {
             printf("Poxa, o número que você digitou é maior que o número secreto. \nContinue tentando!\n");    
         } else {
              printf("Poxa, o número que você digitou é menor que o número secreto. \nContinue tentando!\n");    
         }

         attempts++;
   


    double lostPoints = abs(guess - secretNumber) / (double)2;

    points = points - lostPoints;

    }
  
     printf("Voce acertou depois de %i tentativas!!!\n", attempts);
     printf("Total de pontos: %.2f \n\n", points);
     printf("Fim de jogo! :3\n\n");
      

}
