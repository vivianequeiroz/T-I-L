 #include <stdio.h>
 #include <stdlib.h>
 
     struct type_address {
         char street[40];
         int number;
         char neighbourhood[20]; 
         char city[40];
         char state[3];
         int zip_code;
     };

     struct type_date_of_birth {
         int day;
         int month;
         int year;
     };

     struct customer_register {
         char customer_name[40];
         int phone;

         struct type_address address;
         struct type_date_of_birth date_of_birth;
     } customer_reg[2]; //customer_reg define a struct customer_register e permite cadastrar todos os dados nela contido [incluindo demais structs]. 
     // [2] indica que podem ser cadastrados até dois clientes


 int main(void) {

     int i; 

     printf("\n\n---------- Cadastro de clientes ----------\n\n");

         //1. Coletando dados que serão armazenandos dentro da struct custumer_reg
    
    for(i = 0; i < 2; i ++) {
        printf("\n\n Nome do cliente..............: ");
        fflush(stdin);
        fgets(customer_reg[i].customer_name, 40, stdin);

        printf("\n Número de telefone.............: ");
        scanf("%d", &customer_reg[i].phone);

        printf("\n Rua............................: ");
        fflush(stdin);
        fgets(customer_reg[i].address.street, 40, stdin);

        printf("\n Numero da casa/apto............: ");
        scanf("%d", &customer_reg[i].address.number);

        printf("\n Bairro.........................: ");
        fflush(stdin);
        fgets(customer_reg[i].address.neighbourhood, 20, stdin);

        printf("\n Cidade.........................: ");
        fflush(stdin);
        fgets(customer_reg[i].address.city, 40, stdin);

        printf("\n Estado.........................: ");
        fflush(stdin);
        fgets(customer_reg[i].address.state, 3, stdin);

        printf("\n CEP............................: ");
        scanf("%d", &customer_reg->address.zip_code);

        printf("\n Dia de nascimento..............: ");
        scanf("%d", &customer_reg->date_of_birth.day);

        printf("\n Mes de nascimento..............: ");
        scanf("%d", &customer_reg->date_of_birth.month);

        printf("\n Ano de nascimento..............: ");
        scanf("%d", &customer_reg->date_of_birth.year);

    }

        // Percorendo os dados inseridos

    for(i = 0; i < 2; i++) {

        printf("\n Nome............: %s", customer_reg[i].customer_name);
        printf("\n Rua.............: %s", customer_reg[i].address.street);
        printf("\n Numero..........: %d", customer_reg[i].address.number);
        printf("\n Bairro..........: %s", customer_reg[i].address.neighbourhood);
        printf("\n Cidade..........: %s", customer_reg[i].address.state);
        printf("\n Estado..........: %s", customer_reg[i].address.state);
        printf("\n CEP.............: %d", customer_reg[i].address.zip_code);
        printf("\n Dia nasc........: %d", customer_reg[i].date_of_birth.day);
        printf("\n Mes nasc........: %d", customer_reg[i].date_of_birth.month);
        printf("\n Ano nasc........: %d", customer_reg[i].date_of_birth.year);
    
    }

    return 0;
 }







 