#include <stdio.h>

int main() {

    // ponteiros apontam para um endereço de memória de 
    // uma variável previamente declarada

    int age = 20; 

    int *pointer;
    // aqui o ponteiro precisa ser declarado também, com * na frente do 
    // nome que lhe for atribuído
    // Isso deve ser feito antes de atribuir o endereço da variável AGE para o ponteiro POINTER

    pointer = &age;
    // & indica que POINTER está recebendo o ENDEREÇO DE MEMÓRIA da variável AGE

    printf("********************************\n");
    printf("***** Utilizando ponteiros *****\n");
    printf("********************************\n");

    printf("\nCONTEUDO da variavel IDADE.....: %d \n", age);
    printf("ENDERECO da variavel IDADE.....: %x \n", &age);
    printf("CONTEUDO da variavel PONTEIRO..: %x \n", pointer);

    // %x pois o numero de endereço de memoria é impresso em heXadeicmal
    // &age == pointer 

}