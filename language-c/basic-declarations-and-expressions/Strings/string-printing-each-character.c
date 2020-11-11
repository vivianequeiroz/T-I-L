#include <stdio.h>
//#include <string.h>


int main() {

    char name[10] = "Borboleta"; // uma posição para o caracter terminador - \0
    int i;
    int count_character = 0;

    for(i = 0; name[i] != '\0' ; i++) {

        printf("O caracter na posicao %i e igual a: %c \n", i, name[i]);
        count_character++;
    }

    printf("A quantidade total de caracteres da string e igual a: %lu \n", count_character);
    // printf("A quantidade total de caracteres da string e igual a: %i \n", strlen(count_character));

    
}