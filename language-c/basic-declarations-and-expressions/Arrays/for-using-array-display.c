#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float notas[5] = { 7, 8, 9.5, 9.9, 5.2};
    int i; 

    for(i = 0; i < 5 ; i++ ) {
        printf("A nota e igual: %.2f \n", notas[i]);
    }
}