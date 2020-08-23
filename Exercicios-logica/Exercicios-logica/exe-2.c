#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int exe2 () {
    
    setlocale(LC_ALL, "Portuguese");
    
    int numero, dobro, quadrado;
    
    printf("Digite o número: ");
    scanf("%i", &numero);
    
    dobro = numero * 2;
    printf("\n Temos que o dobro desse número é igual a: %i \n", dobro);
    
    quadrado = numero * numero;
    printf("\n Já o quadrado desse número é igual a: %i \n\n", quadrado);
    
    return(0);
}
