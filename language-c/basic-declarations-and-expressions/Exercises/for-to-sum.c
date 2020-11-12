//Faça um algoritmo que leia um número positivo e inteiro N. 
//O Algoritmo deverá mostrar na tela a soma de todos os inteiros de  1 a N.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int acumulator = 0;
    int i;
    int integer; 
    int sum;

    printf("Digite aqui um numero inteiro:  ");
    scanf("%d", &integer);

    printf("O numero digitado foi: %d \n", integer);

     for(i = 0; i < integer; i++) {
       acumulator = acumulator + 1;
       sum = sum + acumulator;
     }
  

    printf("A soma de todos os inteiros de 1 até %d é igual a: %d \n", integer, sum);

}

// 58 min