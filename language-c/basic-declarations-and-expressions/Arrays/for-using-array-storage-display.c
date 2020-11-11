//Objetivos:
// 1. Coletar 5 notas do aluno
// 2. Exibir as 5 notas

#include <stdio.h>
#include <stdlib.h> 

int main() {

    float notes[5];
    int i; 

    //coletando notas
    for(i = 0; i < 5; i++) {
        printf("\nDigite aqui a nota: ");
        scanf("%f", &notes[i]);
     }
    

    //exibindo notas 

    for(i = 0;  i < 5; i++) {
        printf("\n A nota da %dª posicao que voce inseriu e igual a: %.2f \n", i, notes[i]);
        }
    
}