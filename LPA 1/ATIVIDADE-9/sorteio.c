#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define ARQUIVO "sorteio.txt"

int sorteio(int menor, int maior){
    srand(time(NULL) + getpid());
    int n = menor + rand() % (maior - menor + 1) ; 
    return n; 
}

void salvar (int menor, int maior, int chute, int sorteio, const char *resultado ){
    FILE *arq = fopen(ARQUIVO, "a");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    
    fprintf(arq, "Minimo: %d | Maximo: %d | Numuero chutado: %d | Numuero sorteado: %d | Resultado: %s\n", menor, maior, chute, sorteio, resultado);
    fclose(arq);
    printf("\n\nResultado: %s\n", resultado);
    printf("Tentativa salva em '%s'!\n\n", ARQUIVO);
}


int main(int argc, char const *argv[]){
    if(argc < 4){
        printf("Informe 3 argumentos."); 
        return 1; 
    }

    int menor = atoi(argv[1]);
    int maior = atoi(argv[2]);
    int chute = atoi(argv[3]);

    if (menor >= maior) {
        printf("Erro: 'menor' deve ser menor que 'maior'.\n");
        return 1;
    }
    
    int numero = sorteio(menor, maior);  
    const char *resultado;
    
    if (chute == numero){
        resultado = "ACERTOU! :)";
    } else {
        resultado = "ERROU! :(";
    }

    salvar(menor, maior, chute, numero, resultado);
    
    return 0;
}
