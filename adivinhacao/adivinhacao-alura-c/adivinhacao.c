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

    int i;

    int hit = 0;
    int level;

    printf("Qual o nível de dificuldade?");
    printf("\n~Apenas lembrando que o número é inteiro e possui dois digítos, ok? ;)\n");
    printf("\n(1) Fácil - 20 tentativas,\n(2) Média - 15 tentativas\n(3) Difícil - 6 tentativas\n\n");
    printf("Escolha: \n\n");
    scanf("%i", &level);

    int numberAttempts;

    switch (level)  {
    case 1: 
          numberAttempts = 20;
          break;
     case 2: 
          numberAttempts = 15;
          break;
    default:
          numberAttempts = 6;
          break;
    }

    for (i = 0; i < numberAttempts; i++) {
         printf("\n**** Tentativa %i  ****\n", attempts);
         printf("Qual é o seu chute? ");
         scanf ("%i", &guess);
         printf("Seu chute foi %i \n\n", guess);
    

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
             printf("Poxa, o número que você digitou é maior que o número secreto. :0 \nContinue tentando!\n");    
         } else {
              printf("Poxa, o número que você digitou é menor que o número secreto. :(\nContinue tentando!\n");    
         }

         attempts++;
   


    double lostPoints = abs(guess - secretNumber) / (double)2;

    points = points - lostPoints;

    }
  
     printf("Fim de jogo! :3\n\n");
     
     if(hit) {
          printf("Você ganhou!");
          printf("Você acertou depois de %i tentativas!!!\n", attempts);
          printf("Total de pontos: %.2f \n\n", points);
     } else {
          printf("Você esgotou todas as chances de acertar :( \n");
          printf("Mas, não fique triste! Apenas continue tentando! :D");
     }

}
