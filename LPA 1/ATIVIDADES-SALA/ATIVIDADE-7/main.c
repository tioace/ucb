#include <stdio.h>

#define TAM_NOME 50
struct Aluno{
    char nome [TAM_NOME];
    float nota; 
};


void imprimir(struct Aluno a){
    printf("Aluno %s ---- Nota: %.2f", a.nome, a.nota);
}

struct Aluno menor (struct Aluno a[]){
    float x = 2147483647;
    struct Aluno m; 
    
    for(int i = 0; i < 5; i++){        
        if (a[i].nota < x){
            x = a[i].nota;
            m = a[i];       
        }
    }
             
    return m; 
}

struct Aluno maior (struct Aluno a[]){   
    float x = - 2147483647; 
    struct Aluno M;

    for(int i = 0; i < 5; i++){        
        if (a[i].nota > x){
            x = a[i].nota;
            M = a[i];
        }
    }

    return M;
}

/*float media (float nota){
    float soma;
    int cont; 

    for (int i = 0; i < 5; i++){
        soma += nota; 
        cont++; 
    }

    float m = soma/cont; 

    return m; 
}*/

int main(int argc, char const *argv[]){
    int n; 
    struct Aluno a [5]; 
    struct Aluno m, M; 
    float med, soma, cont; 

    for (int i = 0; i < 5; i++){
        printf("\nDigite o nome do aluno: ");
        fgets(a[i].nome, TAM_NOME, stdin); 
        printf("Digite a nota do aluno: ");
        scanf("%f", &a[i].nota);
        fgetc(stdin); 
        soma += a[i].nota;
        cont++; 
    }

    med = soma / cont; 

    M = maior(a);
    m = menor(a);
    

    printf("\n\n----------------------------------------\n\n"); 
    
    for (int i = 0; i < 5; i++){
        printf("\nAluno: %sNota: %.2f\n", a[i].nome, a[i].nota);
        
    }
    
    printf("\n\n----------------------------------------\n\n\n"); 
    printf("MEDIA da turma: %.2f\n\n", med) ;
    printf("MAIOR nota: %.2f ----- Aluno: %s", M.nota, M.nome);
    printf("MENOR nota: %.2f ----- Aluno: %s",m.nota, m.nome);

    return 0;
}