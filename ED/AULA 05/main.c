#include <stdio.h>
#include <stdlib.h>

int pb (int * v, int n, int chave){
    int esquerda = 0;
    int direita = n - 1; 

    while (esquerda <= direita){
        int meio = (esquerda + direita) / 2; 

        if (v[meio] == chave){
            return meio; 
        } else if(v[meio] < chave){
            esquerda = meio + 1;    
        }else{
            direita = meio - 1; 
        }

        
    
}


int main(int argc, char const *argv[]){
    int numero [] = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 21};
    int tamanho = sizeof(numero) / sizeof(int);
    int elemento = 12; 
    int posicao = pb(numero, tamanho, elemento);

    if(posicao != ERRO){
        printf("A posicao eh %d\n", posicao);
    } else{
        printf("Elemento nao esta no vetor. \n"); 
    } 
        
    }
    return 0;
}
