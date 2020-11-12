//Faça um programa que lê a idade de 10 pessoas. 
//Após a leitura o programa deverá apresentar: 
//A maior e a menor idade 
//A média das idades 
//A quantidade de pessoas maiores ou igual a 18 anos 
//A quantidade de pessoas menores que 18 anos 
//ATENÇÃO: Obrigatório a utilização de FOR e VETOR (array) nesta questão.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int people[10];
    int i;

    //coletando idades
    for(i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa que ocupará a %dª posicao do vetor: ", i);
        scanf("%d", &people[i]);
    }
    
    //exibindo idades coletadas
    for(i = 0; i < 10; i++) {
        printf("\nA idade da pessoa que ocupa a %d posicao e igual a: %d", i, people[i]);
    }

    //pessoa de maior idade 

    int higher_age = 0;

    for(i = 0; i < 10; i++) { 
        if(people[i] > higher_age) 
            higher_age = people[i];
    }

    printf("\n\nA pessoa de MAIOR idade e: %d", higher_age);

    //******************************** pessoa de menor idade ********************************

    int lower_age;

    for(i = 0; i < 10; i++) {
        if(people[i] < higher_age) { 
            lower_age = people[i];
        }

        if(people[i] < lower_age) {
            lower_age = people[i];
        }
    }

    printf("\n\nA pessoa de MENOR idade e: %d", lower_age);

    //MEDIA DAS IDADES
    int sum_ages;
    int average; 

    sum_ages = 0;
    for(i = 0; i < 10; i++) {
        sum_ages = sum_ages + people[i];   
    }

    average = sum_ages / 10; 

    printf("\n\nA media das idades e igual a: %d", average);

    //PESSOAS MAIORES E MENORES DE 18;

    int total_major_18 = 0;
    int total_under_18 = 0;
    for(i = 0; i < 10; i++) {
        if(people[i] >= 18) 
            total_major_18++;
        

        if(people[i] < 18)
            total_under_18++;
    } 

    printf("\n\nO total de pessoas com MAIS de 18 anos e igual a: %d \n", total_major_18);
    printf("\nO total de pessoas com MENOS de 18 anos e igual a: %d \n", total_under_18);


    }


//40min

