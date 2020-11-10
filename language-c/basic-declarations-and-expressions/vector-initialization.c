#include <stdio.h>

int main() {

    int vector[6]; 
    int i;

    //   Inicializando todos as posicoes com zero:
    // 1. int vector [6] = { }
    // 2. int vector [6] - {0}
    // 3. loop for (também serve para exibir o mesmo valor para todas as posicoes caso 
    // não sejam auto-atribuidos em sua declaração)

    //  ** int vector[6] = {20, 40} => o restante das posicoes sempre recebe valor 0 !!!


    // Visualiando

    for( i = 0; i < 6; i++) {
        vector[i] = 0;
        printf("O valor do vetor na posicao %d e igual a: %d", i, vector[i]);
    }

}