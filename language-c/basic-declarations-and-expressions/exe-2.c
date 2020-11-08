//Write a C program to print the following characters in a reverse way.Test Characters: 'X', 'M', 'L
#include <stdlib.h>
#include <stdio.h> 

int main() {
    char letra_1 = 'X', letra_2 = 'M', letra_3 = 'L';

    printf("O inverso de %c%c%c é igual %c%c%c ",
          letra_1, letra_2, letra_3, letra_3, letra_2, letra_1);
}