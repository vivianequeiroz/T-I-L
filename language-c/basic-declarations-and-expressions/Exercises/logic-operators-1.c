#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[20]; 
    int year_birth, actual_year;
    int age, age_months, age_days, age_weeks;

    printf("Digite aqui o seu nome: ");
    fgets(name, 20, stdin);

    printf("Digite aqui o seu ano de nascimento, %s: ", name);
    scanf("%d", &year_birth);

    actual_year = 2020;

    age = actual_year - year_birth;

    age_months = age * 12;

    age_weeks = age * 7;

    age_days = age * 365; 

    printf("A sua idade é igual a %d anos \n", age);
    printf("A sua idade é igual a %d meses \n",  age_months);
    printf("A sua idade é igual a %d dias \n", age_days);
    printf("A idade é igual a %d semanas \n", age_weeks);

}