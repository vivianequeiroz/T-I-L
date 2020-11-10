#include <stdio.h>
#include <string.h>

int main() {

    char string_1[ ] = "abc";
    char string_2[ ] = "abd";

    int return_string;
    //variável para checar a diferença

    return_string = strcmp(string_1, string_2);
    // strcamp(strings a serem comparadas)
    
    // Os possíveis retornos são:

    //   0 => quando forem IGUAIS
    //   < 0 => quando o conteúdo da primeira string for MENOR que o da segunda
    //   > 0 => quando o conteúdo da primeira string for MAIOR que o da segunda

    // Aqui o programa comparará as strings seguinda a tabela ASCII. Portanto, "c" minúsculo 
    // terá valor menor que "d" minúsculo

    printf("Retorno = %d \n", return_string);

}