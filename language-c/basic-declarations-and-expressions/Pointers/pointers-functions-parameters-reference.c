#include <stdio.h>

void addition(int *number_Inserted) {
    // aqui ao usar asterisco é considerado o valor da variável
    // na chamada da funçao addition na Main

    *number_Inserted += 10;
    
    return; 
}


int main() {

    int number;

    printf("Digite aqui um numero: \n");
    scanf("%d", &number);

    addition(&number);
    // aqui é passado o endereço de memória da variável numero 

    printf("Agora, o numero vale: %d", number);

}