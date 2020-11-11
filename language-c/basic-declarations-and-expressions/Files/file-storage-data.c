#include <stdio.h>
#include <string.h>

int main() {

    FILE  *pointer_file; //1. Cria uma variável ponteiro para o arquivo
    char word[20];

    pointer_file = fopen("arquivo_palavra.txt", "a");//2. Abre o arquivo em modo de escrita e com modo de abertura a NÃO sobreescreve nada

    if(pointer_file == NULL) {  //3.Testa se arquivo foi criado

        printf("Erro ao abrir o arquivo!"); 

        return 1;

    } else { 

        printf("Digite aqui uma palavra para testarmos a gravacao no arquivo: \n"); //4. Solicitando string ao usuário 
        fgets(word, 20, stdin);  

        fprintf(pointer_file, "%s \n", word); // 5.Gravando a string no arquivo ==> fprintf(nome da variavel do ponteiro da arquivo, tipo +\n para pular linha, origem - variável) 

        fclose(pointer_file);

        printf("Dados gravados no arquivo com sucesso!");

    }

}