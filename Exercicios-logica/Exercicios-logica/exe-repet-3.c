#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()

{
    setlocale(LC_ALL, "Portuguese");
    
    int numberInteger, count, result;
    
    printf("Digite aqui o número inteiro: \n");
    scanf("%i", &numberInteger);
    
    count = 1;
    
    do {
        result = count * numberInteger;
        printf("%i vezes %i é igual a %i \n", count, numberInteger, result);
        count++;
    } while (count < 11);
    
    
}


