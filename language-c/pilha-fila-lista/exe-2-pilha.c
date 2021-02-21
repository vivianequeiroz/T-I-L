#include <stdio.h>

#define MAX 10

int pilha[MAX];
int inicio = 0, fim = 0;

// Protótipo das funções
int pilhaCheia(void);
int pilhaVazia(void);
void push(int);
int pop(void);
void exibe(int *);
void limpa_linha(void);

int pilhaCheia() {
    return (fim == MAX);
}

int pilhaVazia() {
    return (inicio == fim);
}

void push(int x) {
    pilha[fim++] = x;
}

int pop() {
    return pilha[fim-- - 1];
}

void exibe(int pilha[MAX]) {
    int x;
    if (!pilhaVazia()) {
        printf("\nElementos da estrutura: ");
        for( x = inicio; x < fim; x++) {
            printf("%d ", pilha[x]);
        }
    } else {
        printf("\nA estrutura esta vazia!");
    }
    printf("\n");
}

void limpa_linha() {
    scanf("%*[^\n]");
    scanf("%*c");
}

int main() {

    int escolha, valor;

    do {
        printf("\n1 EMPILHA:\n");
        printf("2 DESEMPILHA:\n");
        printf("3 MOSTRAR:\n");
        printf("4 SAIR:\n");
        printf("\nSua opcao: ");
        scanf("%d", &escolha);
        limpa_linha();

        switch(escolha) {

        case 1:
            if (!pilhaCheia()) {
                printf("\nEscolha o valor: ");
                scanf("%d", &valor);
                limpa_linha();
                push(valor);
            } else
                printf("\nA estrutura esta cheia!\n");
            break;
        case 2:
            if (!pilhaVazia()) {
                printf("\nElemento removido: %d\n", pop());
            } else
                printf("\nA estrutura esta vazia!\n");
            break;
        case 3:
            exibe(pilha);
            break;
        case 4:
            // sair
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
        }
    } while( escolha != 4);

    return 0;
}