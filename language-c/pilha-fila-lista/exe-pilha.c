// // Uma pequena empresa de logística pretende implementar um porto seco para armazenar containers e precisa para um programa simples para gerenciar seu porto.

// // Dado o tamanho da empresa, essa possui apenas 4 locais onde pode empilhar os containers e seu equipamento permite empilhar no máximo 3 containers.

// // Por política da empresa, um novo container deve ser colocado no local com a pilha mais baixa disponível (se mais de um local tiver a mesma quantidade de containers, tanto faz em que pilha será adicionado).

// // Cada container é adicionado a partir de um código informado e o sistema não pode permitir códigos repetidos. Para  remoção também é preciso informar o código do container, mas o mesmo somente será removido se estiver no topo da pilha.

// // O algoritmo deve mostrar as seguintes mensagens:

// //     Codigo invalido!: quando for fornecido um valor já existe no momento de inserção e quando for fornecido um valor não existente no momento de remoção.
// //     Impossivel empilhar!: quando não for mais possível adicionar containers nas pilhas.
// //     Impossivel desempilhar!: quando não for possível remover um container, ou por não existir mais containers ou por ele não estar no topo da pilha.





// // #include <iostream>
// #define tamPilha 3 //quantidade de containers em cada local
// #define tamPorto 4 //quantidade de locais do porto seco
// using namespace std;
 
// //define a estrutura que será a pilha
// //a estrutura armazena a indicação do topo da pilha e um vetor com os itens (valores) da pilha
// typedef struct{
//       int topo = 0;
//       int item [tamPilha] ;
// } PILHA;
 
// //retorna se a pilha está vazia ou não
// bool pilhaVazia(PILHA p){
//     if(p.topo == 0) {
//         return true;
//     } else {
//         return false;
//     }
// }
 
// //retorna se a pilha está cheia ou não
// bool pilhaCheia(PILHA p) {
// 	int tam = sizeof(p.item)/sizeof(int); //determina o tamanho do vetor
 
//     if (p.topo < tam) {
//         return false;
//     } else {
//         return true;
//     }
// }
 
// //adiciona valor na pilha
// void empilha(PILHA &p, int x){
//     p.item[p.topo++]=x;
// }
 
// //remove valor da pilha
// int desempilha(PILHA &p){
//     return p.item[--p.topo];
// }
 
// //retorna o valor que está em cima na pilha
// int valorTopo(PILHA p) {
//     return p.item[p.topo - 1];
// }
 
// //mostra os valores armazenados na pilha
// void mostraPilha(PILHA p) {
// 	cout << "Valores da pilha: ";
// 	if (p.topo > 0) {
//         for (int i = 0; i < p.topo; i++) {
//             cout << p.item[i] << " ";
//         }
//     } else {
//         cout << "pilha vazia";
//     }
// 	cout << "\n";
// }
 
// void mostraPorto(PILHA vet[tamPorto]) {
//     for (int i = 0; i < tamPorto; i++) {
//         cout << "Porto " << i+1 << " -> ";
//         mostraPilha(vet[i]);
//     }
// }
 
// //determina qual pilha está mais vazia retornando a posição no vetor
// int pilhaMaisVazia(PILHA vet[tamPorto]) {
//     //armazena o menor valor e que pilha (posicao) ele esta
//     int menor = vet[0].topo, posicao = 0;
//     for (int i = 1; i < tamPorto; i++) {
//         if (vet[i].topo < menor) {
//             menor = vet[i].topo;
//             posicao = i;
//         }
//     }
 
//     return posicao;
// }
 
// void mostraOpcoes() {
//     cout << "Opcoes disponiveis: " << endl;
//     cout << "0: sair" << endl;
//     cout << "1: adicionar container" << endl;
//     cout << "2: remover   container" << endl;
//     cout << "Digite sua opcao: ";
// }
 
// //verifica se o código está presente em alguma das pilhas do porto
// //se existir retorna a posicao no vetor (local do porto)
// int codigoExiste(PILHA vet[tamPorto], int cod) {
//     for (int i = 0; i < tamPorto; i++) {
//         for (int j = 0; j < vet[i].topo; j++) {
//             if (vet[i].item[j] == cod) {
//                 return i;
//             }
//         }
//     }
//     return -1; //se não encontrar o código vai retornar aqui
// }
 
// int main(){
//     PILHA local[tamPorto]; //cria um vetor de pilhas
//     int opcao, codigo;
 
//     while (true) {
//         mostraOpcoes();
//         cin >> opcao;
//         if (opcao == 0) {
//             break;
//         }
 
//         cout << "Informe o codigo do container: ";
//         cin >> codigo;
 
//         if (opcao == 1) { //adicionar container
//             if (codigoExiste(local, codigo) != -1) {
//                 cout << "Codigo invalido" << endl; //codigo fornecido já existente
//             } else {
//                 int posicaoPorto = pilhaMaisVazia(local);
//                 if (pilhaCheia(local[posicaoPorto])) {
//                     cout << "Impossivel empilhar!" << endl; //nenhum lugar vago disponível
//                 } else {
//                     empilha(local[posicaoPorto],codigo);
//                 }
//             }
//         } else { //remover container
//             int posicaoPorto = codigoExiste(local, codigo);
//             if (posicaoPorto == -1) {
//                 cout << "Codigo invalido!" << endl; //codigo fornecido não existente
//             } else {
//                 if (valorTopo(local[posicaoPorto]) == codigo) {
//                     desempilha(local[posicaoPorto]);
//                 } else {
//                     cout << "Impossivel desempilhar!" << endl; //código fornecido não esta no topo da pilha
//                 }
//             }
//         }
 
//         mostraPorto(local);
//         cout << "\n";
//     }
 
//     return 0;
// }