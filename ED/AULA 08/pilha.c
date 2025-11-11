#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

Item * criarItem(int chave){
    Item * I = (Item *) malloc(sizeof(Item)); 

    if(I == NULL){
        printf("ERRO: nao foi possivel alocar memoria para esse item");
        return NULL; 
    }

    I->chave = chave;
    I->anterior = NULL; 

    return I; 
}

Pilha * criarPilha(){
    Pilha * I = (Pilha *) malloc(sizeof(Pilha)); 

    if(I == NULL){
        printf("ERRO: nao foi possivel alocar memoria para esse pilha");
        return NULL; 
    }

}