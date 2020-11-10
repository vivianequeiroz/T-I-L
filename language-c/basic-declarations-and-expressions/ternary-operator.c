#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    
    printf("Digite um numero: \n");
    scanf("%d", &number);

    // condição ? comando para condição verdadeira : comando para condição falsa

    number >= 0 ? number++ : number--;
    //number >=0 ? printf("O número é positivo!") : printf("O número é negativo!");

    printf("O novo valor do numero e igual a: %d", number);
}