#include <stdio.h>
#include <stdlib.h>

int main() {

    // 1. Criar uma variável FILE da stdio.h e em seguida um ponteiro que apontará para FILE
    FILE *pointer_file; 

    //2. Abrir o arquivo - fopen("nome do arquivo criado onde o programa exe está alocado", modo de abertura) 

    pointer_file = fopen("arquivo1.txt", "a");
    // a - append - ou w - write - abre ou cria arquivo para gravar 

    // 3. Fechar arquivo

    fclose(pointer_file);

    //mensagem ao usuário
    printf("Arquivo criado com sucesso!\n");



}