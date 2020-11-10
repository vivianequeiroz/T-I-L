#include <stdio.h>
#include <string.h>

int main() {
    char name_1[15]="Pedro";
    char name_2[15]="Marcio";

    // Caso a variável receba um valor depois de sua declaração
    // o programa não o reconhecerá!

    printf("Nome = %s \n", name_1);

    strcpy(name_1, name_2);
    //strcpy(string que vai alocar a info, string que fornecerá a info a ser alocada);

    printf("Nome = %s \n", name_1);
}        