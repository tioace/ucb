#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char chave; 

    struct No * F1;
    struct No * F2;
    struct No * F3;

    struct No * F[3];

} No;

No * criarNo (char chave){
    No * N = (No *) malloc(sizeof(N));

    if (N = NULL){
        /* code */
        printf("ERRO: nao foi possivel alocar memoria para esse item");
        return NULL; 
    }
    
}