#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

int main(int argc, char const *argv[]){
    
    if (argc < 3){
        printf("Argumentos invalidos"); 
        return 1; 
    }

    if (strcmp(argv[1], "-maior")){
        if (argc == 4){
            printf("Argumentos invalidos");
        }
        

    }
    

    
    return 0;
}
