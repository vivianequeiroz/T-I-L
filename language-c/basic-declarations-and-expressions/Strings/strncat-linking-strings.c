#include <stdio.h>
#include <string.h>

int main() {

    char string_1[30] = "Curso";
    char string_2[18] = " de linguagem C";

    strncat(string_1, string_2, 13);
    //strncat(string destino, string origem, qdt caracteres da string origem)

    printf("A string 1 recebe: %s \n", string_1);

}