//Write a C program to get the absolute difference between n and 51. 
//If n is greater than 51 return triple the absolute difference.


#include <stdio.h>
#include <stdlib.h>

int main() {

    float n;
    int abs_difference, triple_abs_difference; 

    printf("Digite aqui um numero: \n");
    scanf("%f", &n);

    if(n > 51) {

        triple_abs_difference = (n - 51) * -3;
        printf("A diferenca absoluta entre %.2f e 51 e igual a: %i \n", n, triple_abs_difference);

    } else {

        abs_difference = (51 - n);
        printf("A diferenca absoluta entre %.2f e 51 e igual a: %i \n", n, abs_difference);

    }

}