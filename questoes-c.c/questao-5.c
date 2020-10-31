#include <stdio.h>

int main () {

    int   opcaoEscolhida, naoDesejaSair = 1;
    float media_Aritmetica, media_Ponderada;
    
    float nota_1_Aritmetica, nota_2_Aritmetica;
    
    float nota_1_Ponderada, nota_2_Ponderada, nota_3_Ponderada;
    float peso_1, peso_2, peso_3;

    do {
        printf("Olá! Escolha uma das seguintes opções (1/2/3): \n\n\n");

        printf("1. Média Aritmética \n");
        printf("2. Média Ponderada \n");
        printf("3. Sair \n\n\n");

        printf("Digite aqui a opção desejada...: ");
        scanf("%i", &opcaoEscolhida);

        switch (opcaoEscolhida) {

            case 1:
                
               
                printf("\nDigite aqui a primeira nota: ");
                scanf("%f", &nota_1_Aritmetica);

                printf("Digite aqui a segunda nota: ");
                scanf("%f", &nota_2_Aritmetica);

                media_Aritmetica = (nota_1_Aritmetica + nota_2_Aritmetica) / 2; 

                printf("\n\nBem, de acordo com as notas que você digitou - %.2f e %.2f - a média aritmética é igual a: %.2f \n", nota_1_Aritmetica, nota_2_Aritmetica, media_Aritmetica);

            break;


            case 2:

                printf("\nDigite aqui a primeira nota: ");
                scanf("%f", &nota_1_Ponderada);

                printf("\nDigite aqui o primeiro peso: ");
                scanf("%f", &peso_1);


                printf("\nDigite aqui a segunda nota: ");
                scanf("%f", &nota_2_Ponderada);

                printf("\nDigite aqui o segundo peso: ");
                scanf("%f", &peso_2);


                printf("\nDigite aqui a terceira nota: ");
                scanf("%f", &nota_3_Ponderada);

                printf("\nDigite aqui o terceiro peso: ");
                scanf("%f", &peso_3);


                media_Ponderada = (nota_1_Ponderada * peso_1 + nota_2_Ponderada * peso_2 + nota_3_Ponderada * peso_3) / (peso_1 + peso_2 + peso_3); 

                printf("\n\nBem, de acordo com as notas que você digitou - %.2f, %.2f e %.2f - a média ponderada é igual a: %.2f \n\n", nota_1_Ponderada, nota_2_Ponderada, nota_3_Ponderada, media_Ponderada);

            break;

            default:
                naoDesejaSair = 0;
            break;
            
        }

    } while (naoDesejaSair);
      
        printf("\n\nVocê saiu da aplicação."); 


}