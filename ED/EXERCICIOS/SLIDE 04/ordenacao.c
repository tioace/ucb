#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 50000

void InsertionSort(int * v, int n); 
void exibir(int * v, int n); 

int main(int argc, char const *argv[]){
    /* code */
    int conjunto [TAMANHO]; 
    srand(time(NULL));
    for (int i = 0; i < TAMANHO; i++){
        /* code */
        conjunto[i] = rand () % 1000;
    }
    
    int tamanho = sizeof(conjunto) / sizeof(int); 
    clock_t T0 = clock(); 
    InsertionSort(conjunto, tamanho); 
    clock_t TF = clock(); 
    exibir(conjunto, tamanho); 
    printf("Tempo de CPU: %f\n", (double) (TF - T0)/CLOCKS_PER_SEC);
    return 0;
}

void InsertionSort(int * v, int n){
    int chave; 
    int i; 
    int j; 

    for (i = 1; i < n; i++){
        chave = v[i]; 
        j = i - 1; 

        while (j >= 0 && v[j] > chave){
            /* code */
            v[j + i] = v[j]; 
            j--; 
        }
        
        v[j + 1] = chave; 
    }
    
}

void exibir(int * v, int n){
    for(int i = 0; i < n; i++){
        printf("\n"); 
    }
}