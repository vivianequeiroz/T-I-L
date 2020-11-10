#include <stdio.h>

int main() {

    int m[2][2] = {{10, 20} , 
                   {30, 40}}; 

    //linha = row
    //coluna = column

    printf("O valor da linha 0, coluna 0 = %d \n", m[0][0]);
    printf("O valor da linha 0, coluna 1 = %d \n", m[0][1]);
    printf("O valor da linha 1, coluna 0 = %d \n", m[1][0]);
    printf("O valor da linha 1, coluna 1 = %d \n", m[1][1]);

}