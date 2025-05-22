#include <stdio.h>

#define TAM_NOME 50
struct Aluno{
    char nome [TAM_NOME];
    float nota; 
};


void imprimir(struct Aluno a){
    printf("Aluno %s ---- Nota: %.2f", a.nome, a.nota);
}

float menor (float menor){
    float x = 2147483647; 
    if (menor < x){
        x = menor;
    }
    return x; 
}

float maior (float maior){
    float x = - 2147483647; 
    if (maior > x){
        x = maior;
    }
    return x; 
}

int main(int argc, char const *argv[]){
    int n; 
    struct Aluno a [3]; 
    float m [3], M [3]; 

    for (int i = 0; i < 3; i++){
        printf("\nDigite o nome do aluno: ");
        fgets(a[i].nome, TAM_NOME, stdin); 
        printf("Digite a nota do aluno: ");
        scanf("%f", &a[i].nota);
        fgetc(stdin); 
        M = maior(a[i].nota);
        m = menor(a[i].nota);
    }

    printf("\n----------------------------------------\n\n"); 
    
    for (int i = 0; i < 3; i++){
        printf("\nAluno %s Nota: %.2f\n", a[i].nome, a[i].nota);
        
    }
    
    printf("\n----------------------------------------\n\n"); 
    
    printf("Menor nota: %.2f", m);
    printf("Maior nota: %.2f", M);

    return 0;
}