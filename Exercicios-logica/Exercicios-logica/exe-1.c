#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exe1 ()
{
    setlocale (LC_ALL, "Portuguese");
    
    float raio;
    float altura;
    
    float volume;
    
    printf("\n Para calcular o volume da lata de óleo, por favor, digite: \n\n Qual o raio da circunferência (em cm) - ");
    scanf("%f", &raio);
    
    printf("Agora, digite o valor da altura (em cm) - ");
    scanf("%f", &altura);
    
    volume = 3.14159 * (raio * raio) * (altura);
    
    printf("\n De acordo com os dados digitados, o volume da lata de óleo é igual a: %.2f centímetros cúbicos. \n\n", volume);
       
    return 0;
}
