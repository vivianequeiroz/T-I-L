// Baseado na estrutura criada no item 4, 
//construa um algoritmo no qual o usuário possa digitar a
// ficha de registro pessoas.

#include <stdio.h>
#include <string.h>
#define QUANTIDADE_REGISTROS 10


int main() {

      struct tipo_registro {
        char  nome_completo[30];
        int   idade;
        char  endereco[50];
        float salario;
        int   filhos; 
    };

    struct tipo_registro cadastro_fichas[QUANTIDADE_REGISTROS];
 

    int i; 

    printf("\n\n---------- Cadastro de Fichas ----------\n\n");
    printf("\n\nDIGITE SEM ESPACO. SEPARE AS INFORMACOES POR HIFEN!");

    //contrói ficha

    for(i = 0; i < QUANTIDADE_REGISTROS; i++) {

        printf("\n\nDigite os dados do %d° funcionario\n\n", i+1);

        printf("Nome completo: ");
        scanf(" %s", cadastro_fichas[i].nome_completo);
        fflush(stdin);

        printf("\nEndereco: ");
        scanf(" %s", cadastro_fichas[i].endereco);
        fflush(stdin);

        printf("\nIdade: ");
        scanf("%d", &cadastro_fichas[i].idade);

        printf("\nSalario: ");
        scanf("%f", &cadastro_fichas[i].salario);

        printf("\nQuantidade de filhos: ");
        scanf("%d", &cadastro_fichas[i].filhos);
    }

    //exibe dados inseridos

      printf("\n\n---------- Saída de dados ----------\n\n");

    for(i = 0; i < QUANTIDADE_REGISTROS; i++){

        printf("\n\nVerifique os dados do %d° funcionario\n\n", i+1);

        printf("Nome completo: %s", cadastro_fichas[i].nome_completo);
        printf("\nEndereco: %s", cadastro_fichas[i].endereco);
        printf("\nIdade: %d", cadastro_fichas[i].idade);
        printf("\nSalario: R$ %.2f", cadastro_fichas[i].salario);
        printf("\nQuantidade de filhos: %d\n", cadastro_fichas[i].filhos);
    }

}