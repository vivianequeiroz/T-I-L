//Fazer um algoritmo em Linguagem C, em que o usário deverá fornecer 4 números distintos inteiros. 
//O programa deverá calcular e gravar em um arquivo chamado RESPOSTA.TXT o resultado da soma dos três menores. 
//ATENÇÃO: Obrigatório a utilização de estruturas para gravar os dados em arquivo.

#include <stdio.h>
#include <string.h>

int main() {

    FILE  *pointer_file; //1. Cria uma variável ponteiro para o arquivo
    int i;


    pointer_file = fopen("RESPOSTA.txt", "a");//2. Abre o arquivo em modo de escrita e com modo de abertura a NÃO sobreescreve nada

    if(pointer_file == NULL) {  //3.Testa se arquivo foi criado

        printf("Erro ao abrir o arquivo!"); 

        return 1;

    } else { 

        struct different_numbers {
            int number;
        };

        struct different_numbers numbers[4];

        

        for(i = 0; i < 4; i++) {
            printf("Insira aqui o valor para a [%d] posicao: \n", i);
            scanf("%d", &numbers[i].number);

        }

        for(i = 0; i < 4; i++) {
            printf("O valor da posicao [%d] e igual a: %d \n", i, numbers[i].number);
        }

        int greater = 0;

        for(i = 0; i < 4; i++) {


            if(numbers[i].number > greater) {

                greater = numbers[i].number; 

            }
        }

        struct result_number {
            int result;
        };

        struct result_number sum;

        sum.result = 0;

        for(i = 0; i < 4; i++) {

            if(numbers[i].number < greater) {
                sum.result = sum.result + numbers[i].number;
            }
        }

        


        fprintf(pointer_file, "%d \n", sum.result); // 5.Gravando a soma no arquivo ==> fprintf(nome da variavel do ponteiro da arquivo, tipo +\n para pular linha, origem - variável) 

        fclose(pointer_file);

        printf("\nDados gravados no arquivo com sucesso!");

    }
    

    
    

}