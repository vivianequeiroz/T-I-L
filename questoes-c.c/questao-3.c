#include <stdio.h>

int main() {

    int divisor;
    printf("Digite o numero: ");
    scanf("%d", &divisor);

    if (!((divisor % 5) && (divisor & 3)))  {
        printf("Esse numero %d e divisivel por 5 e 3", divisor);
    } else {
        printf("Esse numero nao %d e divisivel por 5 e 3", divisor);
    }
}