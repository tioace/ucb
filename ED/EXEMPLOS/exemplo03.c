#include <stdio.h>
#include <stdlib.h>

// Nó de uma árvore binária (nó tem 2 filhos, no máximo)

typedef struct No {

    int Chave;
    struct No * Esquerda;
    struct No * Direita;
    
} No;

No * criarNo(int Chave) {

    No * N = (No *) malloc(sizeof(No));
    if(N == NULL) {
        printf("ERRO: não há memória para o nó!\n");
        return NULL;
    }

    N->Chave = Chave;
    N->Esquerda = NULL;
    N->Direita = NULL;

    return N;

}

int contarNos(No * N) {
    if (N == NULL) return 0;
    else if (N->Esquerda == NULL && N->Direita == NULL) 
        return 1 + contarNos(N->Esquerda) + contarNos(N->Direita);
}


int main() {    

    system("cls");

    // Nó de nível 1 (raiz)´, com valor de 10

    No * Raiz = criarNo(10);

    // Nós de nível 2 (12 e 15)

    Raiz->Esquerda = criarNo(12);
    Raiz->Direita = criarNo(15);

        printf("Numero de nós: %d\n", contarNos(Raiz));

    // Nó de nível 3: 16 e 18 são filhos de 12 e 20 é filho do 15

    Raiz->Esquerda->Esquerda = criarNo(16);
    Raiz->Esquerda->Direita = criarNo(18);
    Raiz->Direita->Direita = criarNo(20);

    // Nós de nível 4: 17 e 19, como filhos do 20.

    Raiz->Direita->Direita->Esquerda = criarNo(17);
    Raiz->Direita->Direita->Direita = criarNo(19);



}