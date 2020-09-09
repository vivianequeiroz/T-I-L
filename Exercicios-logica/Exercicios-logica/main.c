#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>


int batataa ()

    {
        
      setlocale (LC_ALL, "Portuguese");

        float nota1;
        float nota2;
        float nota3;
        
        float media;
        
        printf("\n Bem-vindo! Verifique aqui seu status de aprovação inserindo as suas três notas.\n");
        
        printf("\n Digite a sua primeira nota: ");
        scanf("%f" , &nota1);
        
        printf("\n Digite a sua segunda nota: ");
        scanf("%f" , &nota2);
        
        printf("\n Digite a sua terceira nota: ");
        scanf("%f" , &nota3);
        
        media = (nota1 + nota2 + nota3) / 3;
    
        sleep(1);
        printf("\n De acordo com as três seguintes notas digitadas: %.1f %.1f %.1f \n", nota1, nota2, nota3);
        
        sleep(2);
        printf("\n Calculando a média... \n");
        
        sleep(4);
        printf("\n Sua média é igual a: %.1f \n\n", media);
        
        sleep(1);
        if (media >= 7) {
            printf(" Parabéns! Status de aprovação: aprovado.\n\n");
        } else {
            printf(" Status de aprovação: reprovado.\n\n");
        }
        
        return (0);
    }


// linha 10: define o tipo do dado que será guardado - float: decimal
// linha 11: guarda um elemento diferente, logo, a variável possui nome diferente

// linha 13: !Boa Prática! => contextos diferentes - quebra de linha

// linha 30: referência de tipo => %.1f
