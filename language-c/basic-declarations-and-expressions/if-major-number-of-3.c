//Write a C program that accepts three integers and find the maximum of three. Go to the editor
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number_1, number_2, number_3;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &number_1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &number_2);
    
    printf("Digite o terceiro numero: \n");
    scanf("%d", &number_3);

    if (number_1 + number_2 < number_3 || number_1 + number_2 == number_3) 
       printf("O maior numero e: %i", number_3);
         
    if (number_1 + number_3 < number_2 || number_1 + number_3 == number_2) 
         printf("O maior numero e: %i", number_2);
    
    if (number_2 + number_3 < number_1 || number_2 + number_3 == number_1)
       printf("O maior numero e: %i", number_1);    
}