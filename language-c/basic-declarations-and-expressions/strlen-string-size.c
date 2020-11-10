#include <stdio.h>
#include <string.h>

int main() {

    char string_1[] = "Curso de linguagem C";
    int string_Size;

    string_Size = strlen(string_1);

    printf("O tamanho da string %s e igual a: %d \n", string_1, string_Size);

}