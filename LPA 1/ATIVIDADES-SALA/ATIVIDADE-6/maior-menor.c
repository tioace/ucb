#include <stdio.h>

int maior(int n, int maior){

    if(n > maior){
        return n; 
    }
    return maior;
}

int menor(int n, int menor){
    if (n < menor){
        return n; 
    }   
    return menor;
}

int main(int argc, char const *argv[])
{
    int n, ler, M, m; 
    printf("\nDigite a quantidade de numeros que deseja comparar: ");
    scanf("%d", &ler);

    M = -2147483648; 
    m = 2147483647;  

    printf("\n\n-----------------------------\n\n");

    for (int i = 0; i < ler; i++){
        printf("Digite os numeros para comparar: ");
        scanf("%d", &n);
        M = maior(n, M);
        m = menor(n, m); 
    }

    printf("\n\n-----------------------------\n\n");
    printf("Maior: %d\nMenor: %d\n", M, m);
    
    return 0;
}