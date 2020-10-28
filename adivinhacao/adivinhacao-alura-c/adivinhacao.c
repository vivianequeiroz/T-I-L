#include <stdio.h>
#define NUMBER_OF_ATTEMPTS 5     

int main() {
 
    printf("****************************************\n");
    printf("*Bem-vindo ao nosso jogo de advinhação!*\n");
    printf("****************************************\n");
    
    int secretNumber = 42;
    int guess;
    int attempts = 1;
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
         printf("Parabéns! Você é top e conseguiu acertar o número secreto c:\n");
         break;
          
    } else if (bigger) {
             printf("Poxa, o número que você digitou é maior que o número secreto. \nContinue tentando!\n");    
         } else {
              printf("Poxa, o número que você digitou é menor que o número secreto. \nContinue tentando!\n");    
         }

         attempts++;
    }
  
  printf("Fim de jogo! ;D\n");
     printf("Voce acertou depois de %i tentativas!!!", attempts);
}
