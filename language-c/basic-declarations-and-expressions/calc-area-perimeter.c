// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches
// 1 inche = 2.54centimeters 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int height = 7, width = 5;

    int perimeter = (height * 2) + (width * 2);
    int area = height * width; 
    
    int perimeter_cm = perimeter * 2.54;
    int area_cm = area * 2.54;

    printf("O perimetro do retangulo e igual a %i polegadas e sua área é igual a %i polegadas quadradas. Agora, o valor do perimetro em centimetro e igual a %i e da area e igual a %i centimetros quadrados", perimeter, area, perimeter_cm, area_cm);

}