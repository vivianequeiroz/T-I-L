#include <stdio.h>
#include <stdlib.h>


void showPeopleMinorDezoito(int idadePessoas[10]);
void showWelcome();


int main() {
  int idadePessoas[10], max = 0, min;

    for (int i = 0; i < 10; i++){
        printf("Insira aqui a idade da %d pessoa: ", i + 1);
        scanf("%d", &idadePessoas[i]);
    }

    for (int i = 0; i < 10; i++) {

        if (idadePessoas[i] > max){
        max = idadePessoas[i];
    }

    if (idadePessoas[i] < min || min == 0){
      min = idadePessoas[i];
    }

    printf("\nA maior idade digitada foi: %d\n", max);
    printf("\nA menor idade digitada foi: %d\n", min);

    int quantidadeTotalPessoas = 0;
    
    for (int i = 0; i < 10; i++) {
    if (idadePessoas[i] >= 18) {
      quantidadeTotalPessoas++;
    
  }
  printf("\nA quantidade de pessoas que tem 18 anos ou mais e de: %d\n", quantidadeTotalPessoas);

 }

    int quantidadeTotalPessoas = 0;
    for (int i = 0; i < 10; i++) {
    if (idadePessoas[i] < 18) {
      quantidadeTotalPessoas++;
    }
  }
  printf("\nA quantidade de pessoas que tem menos de 18 anos e de: %d\n", quantidadeTotalPessoas);
}
}

