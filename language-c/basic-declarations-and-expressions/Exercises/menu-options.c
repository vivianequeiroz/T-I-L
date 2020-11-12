//Faça um programa que apresente um menu de opções conforme abaixo: 
//Média Aritmética Média Ponderada Sair Digite a opção desejada...:  
//Após a escolha da opção pelo usuário, o sistema deverá fazer:
//Na opção 1: Receber duas notas, calcular a media aritmética e apresentar o resultado 
//Na opção 2: Receber três notas e seus respectivos pesos. Calcular e apresentar a média ponderada. 
//Na opção Sair, fechar o sistema 
//ATENÇÃO: Para essa questão é obrigatório a utilização de DO..WHILE e SWITCH..CASE

#include <stdio.h>
#include <stdlib.h>


int main() {

    int option_chosen;
    int resp;

    float arit_average;
    float pond_average;
    
    float note_1, note_2, note_3;
    int weight_1, weight_2, weight_3;
            

    printf("\n\n ------ Menu ------ \n\n");

    printf("Escolha uma das opcoes abaixo: \n\n");
    printf("1. Calcular media aritmetica. \n");
    printf("2. Calcular media ponderada. \n");
    printf("3. Sair. \n\n");

    printf("Digite a opção escolhida: ");
    scanf("%d", &option_chosen);

    printf("\n");
    
    do
    {
        switch (option_chosen)
        {
        case 1: 

            printf("\nDigite a primeira nota: ");
            scanf("%f", &note_1);
            printf("Digite a segunda nota: ");
            scanf("%f", &note_2);

            arit_average = (note_1 + note_2) / 2;

            printf("\nA media aritmetica e igual a : %.2f \n", arit_average);

            printf("\n\nDigite 1 para continuar ou 2 para sair:  ");
            scanf("%d", &resp);
            
            break;

        case 2: 

            printf("Digite a primeira nota: ");
            scanf("%f", &note_1);
            printf("Digite o peso para a primeira nota: ");
            scanf("%d", &weight_1);


            printf("\nDigite a segunda nota: ");
            scanf("%f", &note_2);
            printf("Digite o peso para a segunda nota: ");
            scanf("%d", &weight_2);


            printf("\nDigite a terceira nota: ");
            scanf("%f", &note_3);
            printf("Digite o peso para a terceira nota: ");
            scanf("%d", &weight_3);

            pond_average = (note_1 * weight_1) + (note_2 * weight_2) + (note_3 + weight_3) / weight_1 + weight_2 + weight_3;

            printf("\nA media ponderada e igual a : %.2f \n", pond_average);

            printf("\n\nDigite 1 para continuar ou 2 para sair:  \n");
            scanf("%d", &resp);

  
        default:
            break;
        }
        
    } while (resp==1);
    
}


// 1h20