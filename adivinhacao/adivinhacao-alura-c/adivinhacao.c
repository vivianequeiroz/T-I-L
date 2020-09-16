#include <stdio.h>

int main() {
 
    printf("****************************************\n");
    printf("*Bem-vindo ao nosso jogo de advinhação!*\n");
    printf("****************************************\n");
    
    int secretNumber = 42, guess, i;
    //i representa o --contador--
    for(i = 1; i <= 3; i++) {          

    printf("Digite aqui o seu chute: \n");
    scanf("%i", &guess);
    
    printf("Tentativa de %i de 3\n", i);
    printf("O seu chute foi: %i \n", guess);

    int hit = (guess == 42);

    if (hit) {
         printf("Parabéns! Você é top e conseguiu acertar o número secreto c:");
         break;

    } else {
         int bigger = (guess > 42);
         if (bigger) {
             printf("Poxa, o número que você digitou é maior que o número secreto. \nContinue tentando!\n");    
         } else {
              printf("Poxa, o número que você digitou é menor que o número secreto. \nContinue tentando!\n");    
         }
     }
  }
  printf("Fim de jogo! ;D");
} 
