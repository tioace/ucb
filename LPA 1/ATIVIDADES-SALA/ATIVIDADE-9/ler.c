#include <stdio.h>

#define MAX_TXT 256

int main(int argc, char const *argv[]){
    FILE *sexta = fopen(argv[1], "r");
    char texto [MAX_TXT]; 

    if (sexta == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while (fgets(texto, MAX_TXT, sexta)){
    
        fprintf(stdout, texto);
    }
    
    fclose(sexta); 
    
    return 0;
}