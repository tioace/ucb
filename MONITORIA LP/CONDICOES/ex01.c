#include <stdio.h>

int ano(int ano){
    if(ano / 4 == 0 || ano / 100 != 0 || ano / 400 == 0){
        printf("Ano %d eh bissexto.", ano);
    }else{
        printf("Ano %d NAO eh bissexto.", ano);
    }
    return 0; 
}

int main(int argc, char const *argv[]){
    int n; 
    scanf("%d", &n);
    ano(n); 
    return 0;
}

