#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

int main(int argc, char const *argv[]){
    Time * tab = lerDados("tabela.csv"); 
    
    for (int i = 0; i < 20; i++){
        printf("%d\t%.2f\t%s\n", tab->posicao, tab->aproveitamento, tab->time);
    }
    
    return 0;
}
