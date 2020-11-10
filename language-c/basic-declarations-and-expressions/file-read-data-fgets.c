#include <stdio.h>
#include <string.h>

int main() { 

    FILE *pointer_file; //1.Criação de ponteiro que irá referenciar arquivo, tipo FILE
    char text_string[20]; //2. Conforme texto for verificado, os dados serão gravados nessa string (max 20 caracter por vez) a fim de exibir para o user

    pointer_file = fopen("arquivo_palavra.txt", "r"); //3. Abrir arquivo no modo leitura

    //4. Ler dados do arquivo, enviar para variavel e imprimir na tela ENQUANTO não for o final do arquivo

    while(fgets(text_string, 20, pointer_file) != NULL) { 
     // =>fgets(ler para a variavel previamente definida em 2., total de caracteres, ponteiro que aponta para arquivo que está sendo varrido)
        printf("%s", text_string);
    }

    fclose(pointer_file); //6. Fechando arquivo

    // Segmentation fault em qualquer IDE online 
    // In computing, a segmentation fault (often shortened to segfault) 
    //or access violation is a fault, or failure condition, raised by hardware 
    //with memory protection, notifying an operating system (OS) the software has 
    // attempted to access a restricted area of memory (a memory access violation)

}