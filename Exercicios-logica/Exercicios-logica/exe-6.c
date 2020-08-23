#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int exe6 ()

{
    setlocale(LC_ALL, "Portuguese");
    
    float salary, raising;
    
    printf("Digite aqui o seu salário atual: ");
    scanf("%f", &salary);
    
    raising = salary + (salary * 25/100);
    
    printf("\nCom base no salário informado, seu reajuste é igual a: R$ %.1f \n\n", raising );
    
    return(0);
}
