#include <stdio.h>
#include <string.h>

int main() {

    char string_1[15] = "Linguagem C";
    char string_2[15] = "Linguagem R";

    int return_string;

    return_string = strncmp(string_1, string_2, 9);
    // strncamp(primeira string a ser comparada, segunda string a ser comparada, total 
    // caracteres a serem comparados entre tais strings)

    printf("O retorno da comparacao dos primeiros 9 caracteres de ambas as strings e igual a: %s", return_string);

}