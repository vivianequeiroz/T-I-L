#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int exe3 () {
    
    setlocale(LC_ALL, "Portuguese");
 
    int base;
    int expoente;
    
    int potencia;
    int contador;
    int acumulador;
    
    printf("Digite aqui o valor da base do número: ");
    scanf("%i", &base);
    
    
    printf("\nAgora, digite o valor do expoente: ");
    scanf("%i", &expoente);
    
    acumulador = 1;
    
    for(contador = 0; contador < expoente; contador++) {
        acumulador = acumulador * base;
    }
    
    potencia = acumulador;
    
    printf("\nTemos que o resultado da potência de %i elevado a %i é igual a %i. \n\n", base, expoente, potencia);
    
    return(0);
    
}

 //for ( init_clause ; cond_expression ; iteration_expression ) loop_statement
