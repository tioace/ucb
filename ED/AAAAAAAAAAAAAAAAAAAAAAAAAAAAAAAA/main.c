#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "funcao.h"

int main(int argc, char const *argv[]){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Processo * pro = lerDados("TJDFT_amostra.csv");
    //int tamanho = ContarLinha("TJDFT_amostra.csv"); 
    
    for (int i = 0; i < 11; i++) {
        printf("%d\t%s\t%s\n", pro[i].id_processo, pro[i].sigla_grau, pro[i].procedimento);
    }
    
    free(pro);
    return 0;
}
