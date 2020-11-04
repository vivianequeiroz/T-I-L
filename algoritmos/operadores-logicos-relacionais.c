// verificar se os valores informados podem formar um triangulo e verificar se são escalenos ou equiláteros 


#include <stdio.h>

int main () {

    float lado_1, lado_2, lado_3, triangulo;
    int equilatero = 0, escaleno = 0;


    printf("Insira aqui o valor do primeiro lado: \n");
    scanf("%f", lado_1);

    printf("Insira aqui o valor do segundo lado: \n");
    scanf("%f", lado_2);

    printf("Insira aqui o valor do terceiro lado: \n");
    scanf("%f", lado_3);

    triangulo = (lado_1 < lado_2 + lado_3) && (lado_2 < lado_1 + lado_3) && (lado_3 < lado_1 + lado_2);
    equilatero = (lado_1 == lado_2) && (lado_2 == lado_3);
    escaleno = (lado_1 != lado_2) && (lado_2 != lado_3) && (lado_3 != lado_1);

    printf("Pode formar um triangulo?", triangulo);
    printf("É equilatero? ", equilatero);
    printf("É escaleno? ", escaleno);

}