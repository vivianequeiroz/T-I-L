#include <stdio.h>

int main() {

    int multiplicator[9], multiplying, result;
    int i;
    
    printf("Digite aqui o valor da tabuada que deseja calcular: \n");
    scanf("%d", &multiplying);
    
    for(i = 0; i < 10; i++) {
         multiplicator[i] = i;
     }

    for(i = 0; i < 10; i++) {
        result = multiplicator[i] * multiplying;
        printf("O valor de %d por %d e igual a: %d \n", multiplicator[i], i, result);
    }

}