#include <stdio.h>

int main() {

    int multiplicator[9], multiplying, result;
    int i;
    
    multiplying = 9;

    for(i = 0; i < 10; i++) {
        result = multiplicator[i] * multiplying;
        printf("O valor de %d por %d e igual a: %d \n", multiplicator, multiplying, result);
    }

}