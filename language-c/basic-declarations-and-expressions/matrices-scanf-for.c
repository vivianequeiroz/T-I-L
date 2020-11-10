#include <stdio.h>

int main() {

    int matrice[3][3];
    int i, j;

    //i para as linhas, j para as colunas

    printf("\nDigite aqui os valores para a matriz!\n\n");

    for(i = 0; i < 3; i++)

        for(j = 0; j < 3; j++) {

            printf("Elemento[%d][%d] = ", i, j);
            scanf("%d", &matrice[i][j]);

            // Sequência de execução:
            // 1. O looping começa com a linha (i) na posicao 0;
            // 2. Entra dentro do proximo looping da coluna
            // 3. Termina todo o ciclo das colunas 
            // 4. Volta para o looping da linha, indo para a próxima, e trava até completar novamente todo o looping das colunas
            
        }

    printf("\nOs valores da matriz são: \n\n");

    for(i = 0; i < 3; i++)

           for(j = 0; j < 3; j++) {

            printf("Elemento[%d][%d] = %d \n", i, j, matrice[i][j]);
        }
            
}