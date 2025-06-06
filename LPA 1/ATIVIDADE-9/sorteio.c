#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int menor, int maior){
    int n = menor + (rand() % maior ); 
    return n; 
}


int main(int argc, char const *argv[]){
    int menor;
    int maior; 
    int chute;
    int numero;  

    if(argc < 4){
        printf("Informe 3 argumentos."); 
        return 1; 
    }
    

    return 0;
}
