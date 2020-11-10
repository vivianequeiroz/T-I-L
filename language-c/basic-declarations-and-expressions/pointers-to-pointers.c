#include <stdio.h>

int main() {

    int x, *pointerX, **pointer_To_pointerX;


    // inicializando x com zero, mostrando seu VALOR  e seu ENDEREÇO

    x = 0;
    
    printf("O VALOR de x e: %d \n", x);
    printf("O ENDERECO de x e: %x \n", &x);

    // realizando ATRIBUIÇÃO DOS ENDEREÇOS para os ponteiros

    pointerX = &x;
    pointer_To_pointerX = &pointerX;

    *pointerX += 10;

    printf("Agor, temos que: \n\n");

    printf("O VALOR de X e: %d \n", x);
    printf("O ENDEREÇO apontado por POINTERX: %x \n", pointerX); // para mostrar APENAS ENDEREÇO -> SEM ASTERISCO!
    printf("O ENDEREÇO da -> variável POINTERX <- : %x \n", &pointerX); // com &, mostra o ENDEREÇO DA VARIÁVEL
    printf("O VALOR da variável X apontada por POINTERX: %d \n", *pointerX); // remete ao endereço que o ponteiro aponta e COM ASTERISCO LÊ O VALOR da variável a qual faz referencia  


    **pointer_To_pointerX += 10;
    printf("O VALOR de X e: %d \n", x);
    printf("O ENDEREÇO apontado por POINTER TO POINTERX: %x \n", pointerX); 
    printf("O ENDEREÇO da -> variável POINTER TO POINTERX <- : %x \n", &pointer_To_pointerX);
    printf("O VALOR da variável X apontada por POINTER TO POINTERX: %d \n", **pointer_To_pointerX); 

}