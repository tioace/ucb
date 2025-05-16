#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char const *argv[]){
    int x, y, z; 
    int numeros[argc - 1]; 

    if(argc < 3){
        printf("Informe 2 ou mais argumentos."); 
        return 1; 
    }

    if(argc == 3){
        int x = atoi(argv[1]); 
        int y = atoi(argv[2]); 
        printf("Maior (%d, %d): %d", x ,y, maior2(x,y)); 
    }else if (argc == 4){
        int x = atoi(argv[1]); 
        int y = atoi(argv[2]); 
        int z = atoi(argv[3]); 
        printf("Maior (%d, %d, %d): %d", x ,y, z, maior3(x, y, z)); 
    } else{
        for (int i = 1; i < argc; i++){
            numeros[i -1] = atoi(argv[i]); 
            printf("%d", maiorn(numeros, argc - 1)); 
        }
        
    }

    return 0;
}
