#include <stdio.h>
#include <string.h>

int main() {

    char string_Example[11] = "Linguagem";

    strcat(string_Example, " C");
    //strcat(string de destino, string que será concatenada ao final da string de origem)

    printf("String de exemplo = %s \n", string_Example);
    
}