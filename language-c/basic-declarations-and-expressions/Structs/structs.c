#include <stdio.h>

int main() {


   //  struct <identificador> {
            
   //         <listagem dos tipos e membros>;

   //};

    struct student_Info { // student_Info = TIPO DE DADO

        char name[40];
        int number;
        float note;
    }; // definição da struct - seus componentes 

    struct student_Info student; // declarando a variável student

    printf("\n Cadastro de aluno! \n");

    printf("\nNome do aluno .........: ");
    fgets(student.name, 40, stdin);
    // variável + local onde se quer armazenar essa info dentro do struct

    printf("\nNumero do aluno .......: ");
    scanf("%d", &student.number);

    printf("\nNota do aluno .........: ");
    scanf("%f", &student.note);


    printf("\n\nO(A) aluno(a) %s, cujo numero na chamada e %i, tirou nota igual a: %.2f. \n", 
          student.name, student.number, student.note);

}