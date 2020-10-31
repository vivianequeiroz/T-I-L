#include <stdio.h>

int main(void) {
    int numeroDigitado;

    printf("\n Insira um numero positivo e inteiro para verificar a soma de todos até ele: ");
    scanf("%d", &numeroDigitado);

    int resultado = 0, soma = 1;

      while (soma <= numeroDigitado) {
        resultado += soma++;
    }
    printf("A soma de todos os números até %d é de: %d\n", numeroDigitado, resultado);
}