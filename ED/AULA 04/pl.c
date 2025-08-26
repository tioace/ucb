//algoritimo de pesquisa sequencial 

#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int PesquisaSequencial(int *vetor, int tamanho, int chave){

    for (int i = 0; i < tamanho; i++){
        
        if (vetor[i] == chave){
            return i; //elemento chave foi encontrado no vetor
        } 
    }
    return ERRO; 
    
}

int main(int argc, char const *argv[]){
    
    int numeros[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21
    };

    int tamanho = sizeof(numeros)/sizeof(numeros[0]);  
    int elemento = 35; 
    int posicao = PesquisaSequencial(numeros, tamanho, elemento); 

    //printf("%d\n", posicao);

    if (posicao != ERRO){
        printf("Elemento %d encontrado na posicao: %d\n", elemento, posicao);
    } else{
        printf("Elemento %d nao encontrado no vetor.\n", elemento); 
    }
    return 0;
}