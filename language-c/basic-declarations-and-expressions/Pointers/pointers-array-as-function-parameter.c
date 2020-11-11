#include <stdio.h>

float average(int total_Notes, float *vector_Notes){ 
// ao ser fornecido o ponteiro de vector_Notes, será referenciado
// o valor da primeira posicao do array - por consequencia, o programa detectará 
// os demais automaticamente

    float average_Class = 0, sum = 0;

    int i;

    for(i = 0; i < 10; i++) {
        sum += vector_Notes[i];
    }

    average_Class = sum / total_Notes; 

    return average_Class;

}


int main() {

    float vector_Notes[10];
    float Total_Avarage_Class_Notes;

    int i;

    for(i = 0; i < 10; i++) {

        printf("\nDigite aqui a nota do(a) aluno(a): ");
        scanf("%f", &vector_Notes[i]);
    }

    Total_Avarage_Class_Notes = average(10, vector_Notes);
    
    printf("\n A media da sala e igual a: %.2f", Total_Avarage_Class_Notes);


}