#include <stdio.h> 

int main() {

    int A[10], B[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("%d. Digite aqui o valor para a posicao atual do vetor A: ", i);
        scanf("%d", &A[i]); 
    }

    printf("\n Verifique a saida de dados do vetor A! \n\n");

    for(i = 0; i < 10; i++) {
        printf("A[%d] = %d \n", i, A[i]);
    }

     printf("\n Agora, verifique esses mesmos dados na saída do vetor B! \n\n");

    for(i = 0; i < 10; i++) {
        B[i] = A[i] * 10;
        printf("B[%d] = %d \n", i, B[i]);
    }

}