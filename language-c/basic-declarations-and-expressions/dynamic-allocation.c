#include <stdio.h>
#include <stdlib.h>

int main() {

    int *pointer; // 1. criação de ponteiro para vetor
    int i, total_elements;

        //2. Solicitar quantotide total de elementos ao usuário

    printf("Digite aqui o total de elementos que deseja armazenar: ");
    scanf("%d", &total_elements);

        //3. Alocando memória para o vetor de acordo com a 
        // quantidade total de elementos que irão compô-lo

    pointer = (int *)(malloc(total_elements * sizeof(int)));

            // para alocar quantidade necessária multiplica a variavel que guarda a qtd de elementos pelo tamanho de seu tipo, no caso, inteiro
            // função malloc irá efetivamente alocar/reservar a qtd de bytes resultado da multiplicacao 
            // função malloc void -> para converter para o tipo do ponteiro (int) => (int *)

        //4. Verificar se a memória foi reservada com sucesso 

    if(pointer == NULL) {
        printf("Erra ao alocar memoria!");
        system("pause");
        exit(1);
    } 

    printf("\n\n");

        //5. Recebendo dados do vetor

    for(i = 0; i < total_elements; i++) {

        printf("Digite aqui o número para o indice [%d]: ", i);
        scanf("%d", &pointer[i]);

    }

    printf("\n\n");

        //6. Exibir valores armanzenados no vetor

    for(i = 0; i < total_elements; i++) {

        printf("O valor armazenado no elemento [%d] e igual a: %d \n", i, pointer[i]);

    }

        //7. Liberação da memória que o vetor ocupou

    free(pointer);
 

}