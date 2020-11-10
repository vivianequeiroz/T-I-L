// Write a C program to convert a given integer (in seconds) 
// to hours, minutes and seconds.
// Test Data:
// Input seconds: 25300
#include <stdio.h>
#include <stdlib.h>

int main() {
    int given_Seconds, hours, minutes, seconds; 

    printf("Por favor, digite a quantidade de segundos totais: ");
    scanf("%d", &given_Seconds);

    hours = given_Seconds / 3600;

    minutes = (given_Seconds % 3600) / 60;

    seconds = (given_Seconds % 3600) % 60;

    printf("O total de %d segundos equivale a %dh %dmin %dseg. \n", given_Seconds, hours, minutes, seconds);


}