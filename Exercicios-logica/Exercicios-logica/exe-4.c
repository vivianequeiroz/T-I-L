#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int exe4 () {
    
    setlocale(LC_ALL, "Portuguese");
 
    float celsius, conversao;
    
    printf("Digite aqui a temperatura em grau Celsius: ");
    scanf("%f", &celsius);
    
    conversao = (celsius * 1.8) + 32;
    
    printf("\nTemos que, ao realizar a conversão, essa temperatura será igual a %.2f graus Fahrenheit. \n\n", conversao);
 
    return(0);
}
