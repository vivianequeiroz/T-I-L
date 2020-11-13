//Ainda baseado na estrutura criada no item 4, 
//apresente trecho de código que calcule a média salárial
//dos 10 funcionários cadastrados


#include <stdio.h>
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

        printf("\nSalario: ");
        scanf("%f", &cadastro_fichas[i].salario);

    }

    //exibe dados inseridos

      printf("\n\n---------- Saída de dados ----------\n\n");

    for(i = 0; i < QUANTIDADE_REGISTROS; i++){

        printf("\n\nVerifique os dados do %d° funcionario\n\n", i+1);

        printf("\nSalario: R$ %.2f", cadastro_fichas[i].salario); 
    }

    float soma_salarios = 0;
    float media_salarial;

    for(i = 0; i < QUANTIDADE_REGISTROS; i++){
      soma_salarios = soma_salarios + cadastro_fichas[i].salario; 
    }

    media_salarial = soma_salarios/QUANTIDADE_REGISTROS; 

    printf("\n\nA media salarial dos funcionarios cadastrados e igual a: R$ %.2f", media_salarial);

}



