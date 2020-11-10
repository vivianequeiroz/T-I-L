#include <stdio.h>

void print_Heading(void) {
    //essa função sendo do tipo void não retorna valor algum, portanto,
    //também não possui parametros e seu return é vazio

    printf(" *~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~* \n\n");

    return;
}

int multiplication(int first_Value, int second_Value) {
    // aqui os tipos dentro do parametro devem ser iguais aos tipo de info
    // que serão recebidas na função main, mas nao precisam ter o mesmo nome!

    int result_Multiplication;

    result_Multiplication = first_Value * second_Value;

    return result_Multiplication;
}


int main(void) {

    int number_1, number_2, final_Result;

    print_Heading();

    printf("         Calcule a multiplicação entre dois números           \n\n");
    
    print_Heading();

    printf("Digite o primeiro numero: ");
    scanf("%d", &number_1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &number_2);

    final_Result = multiplication(number_1, number_2);
    
    printf("\n\n");

    printf("\nO resultado da multipliacao e igual a: %i", final_Result);

    return 0;
}