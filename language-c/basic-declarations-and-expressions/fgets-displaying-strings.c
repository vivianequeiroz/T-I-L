#include <stdio.h>

int main(void) {

    char name[20]; 

    printf("Digite aqui o seu nome: \n");
    fgets(name,20,stdin);

    printf("O seu nome é: %s", name);

    // O uso do scanf não é o ideal para armazenar 
    // strings, pois ele para o armazenamento de dados 
    // assim que encontra um espaço em branco.

    //Nesse cenário, é ideal utilizar a função fgets 
    // que recebe 3 parametros: 
    // fgets(variável, quantidade de caracteres, stdin[para ler do teclado]);
    
    return 0;
}