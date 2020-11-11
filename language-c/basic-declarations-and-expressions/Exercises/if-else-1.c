//Write a C program to compute the sum of the two given integer values.
//If the two values are the same, then return triple their sum

#include <stdio.h>

int main () {

    int number_1, number_2, sum, triple_sum;

    printf("\n----- Calculando dois inteiros -----\n");

    printf("Digite aqui o primeiro numero inteiro: ");
    scanf("%d", &number_1);

    printf("Digite aqui o segundo numero inteiro: ");
    scanf("%d", &number_2);

    if (number_1 == number_2) {

        triple_sum = (number_1 + number_2) * 3;

        printf("Como o %d e %d sao iguais, o resultado desse calculo e: %d", number_1, number_2, triple_sum);
    } else {

        sum = number_1 + number_2;
        printf("Como o %d e %d sao diferentes, o resultado desse calculo e: %d", number_1, number_2, sum);

    }

}