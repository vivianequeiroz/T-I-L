#include <stdio.h>
#include <string.h>

int main() {

    FILE  *pointer_file; //1. Cria uma variável ponteiro para o arquivo
    int number_1, number_2, number_3, number_4;
    int sum; 

    pointer_file = fopen("RESPOSTA.txt", "a");//2. Abre o arquivo em modo de escrita e com modo de abertura a NÃO sobreescreve nada

    if(pointer_file == NULL) {  //3.Testa se arquivo foi criado

        printf("Erro ao abrir o arquivo!"); 

        return 1;

    } else { 

        printf("Digite aqui o primeiro número inteiro: \n"); //4. Solicitando string ao usuário 
        scanf("%d", &number_1);

        printf("Digite aqui o segundo número inteiro: \n"); //4. Solicitando string ao usuário 
        scanf("%d", &number_2); 

        printf("Digite aqui o terceiro número inteiro: \n"); //4. Solicitando string ao usuário 
        scanf("%d", &number_3); 

        printf("Digite aqui o quarto número inteiro: \n"); //4. Solicitando string ao usuário 
        scanf("%d", &number_4); 



        fprintf(pointer_file, "%d \n", sum); // 5.Gravando a string no arquivo ==> fprintf(nome da variavel do ponteiro da arquivo, tipo +\n para pular linha, origem - variável) 

        fclose(pointer_file);

        printf("Dados gravados no arquivo com sucesso!");

    }

}