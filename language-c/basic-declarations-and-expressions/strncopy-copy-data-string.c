#include <stdio.h>
#include <string.h>

int main() {

    char name_1[15], name_2[15];

    printf("Digite aqui o Nome 1: ");
    fgets(name_1, 15, stdin);

    printf("Nome 1 = %s \n", name_1);

    strncpy(name_2, name_1, 4);
    // strncpy(string destino, string origem, qtd de caracteres a serem passados)

    printf("Nome 2 = %s \n", name_2);    
    
}