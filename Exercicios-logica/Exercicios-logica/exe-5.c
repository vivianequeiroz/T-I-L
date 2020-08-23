#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int exe5 ()

{
    setlocale(LC_ALL, "Portuguese");
    
    float gross, net, socialSecurity, income;
    
    printf("Digite aqui o valor de seu salário bruto: ");
    scanf("%f", &gross);
    
    socialSecurity = gross * (8.5 / 100);
    
    income = (gross - socialSecurity) * (27.5 / 100);
    
    net = gross - socialSecurity - income;
    
    printf ("\nDiante do salário bruto de R$ %.1f, temos que: \n", gross );
    
    printf ("\nO salário líquido é igual a: R$ %.1f \n", net );
    
    printf ("\nO desconto da previdência incidente sobre o salário líquido é igual a: R$ %.1f \n", socialSecurity );
    
    printf ("\nE o desconto incidente sobre o IR (após desconto da previdência) é igual a: R$ %.1f \n", income );

    return(0);
}
