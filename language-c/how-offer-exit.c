#include <stdio.h>

int main(void)
{
  float nota1 = 0, nota2 = 0, media = 0;
  int resp;
  
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    
    media = (nota1 + nota2)/2;
    printf("Media do aluno = %f\n",media);
    
    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);
  
  }while (resp==1);

  // Operadores relacionais comparam resultados de expressões, números e variáveis.
  // Eles retornarem valores lógicos, ou seja, verdadeiro ou falso. 
  // Nesse exercício, o usuário tem a opção de sair do programa pois:
  // *enquanto* a variável resp receber o valor lógico VERDADEIRO (interpretado pela máquina como 1)
  // o código será executado. Mas, se qualquer outro número for inserido resp deixa de ser verdadeiro. Portanto,
  // o código para. 
  // Portanto, para criar essa funcionalidade basta criar uma variável que sempre receberá valor lógico VERDADEIRO
  // E oferecer ao usuário a opção 2 para sair, pois, imediadiatamente, a condição - definida pela variável - torna-se falsa e o programada para.   
  
  return 0;
}