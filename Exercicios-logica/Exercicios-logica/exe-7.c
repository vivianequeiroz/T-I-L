#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    int birthYear, currentYear, ageYear, ageMonths, ageDays, ageWeeks;
    
    printf("Insira aqui seu ano de nascimento: ");
    scanf("%i", &birthYear);
    
    printf("\nInsira aqui o ano atual: ");
    scanf("%i", &currentYear);
    
    ageYear = currentYear - birthYear;
    printf("\na) A sua idade é igual a %i anos.", ageYear);
    
    ageMonths = ageYear * 12;
    printf("\nb) A sua idade é igual a %i meses.", ageMonths);
    
    ageDays = ageYear * 365;
    printf("\nc) A sua idade é igual a %i dias.", ageDays);
    
    ageWeeks = ageYear * 52;
    printf("\nd) A sua idade é igual a %i semanas.\n\n", ageWeeks);
    
}
