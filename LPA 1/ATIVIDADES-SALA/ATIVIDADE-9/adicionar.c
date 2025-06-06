#include <stdio.h>

/*
MODOS DE ABERTURA DE UM ARQUIVO 

'r'-> leitura
'w'-> criar e escrever um arquivo 
'a'-> criar, se não existir e adicionar ao final do arquivo 

*/

int main(int argc, char const *argv[]){
    FILE *arq = fopen(argv[1], "a");
    if (arq == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1; 
    }
    

    fprintf(arq, argv[2]);

    fclose(arq); 
    return 0;
}