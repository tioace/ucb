#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char const *argv[])
{
    char palavra1 [] = "Conhecimento";
    char palavra2 [] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'm', 'e', 'n', 't', 'o', '\0'};
    char frase1 [TAM];
    char frase2 [TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    printf("\nDigite uma palavra: ");
    fgets(frase1, TAM, stdin); 
    fflush(stdin);
    printf("Digite outra palavra : ");
    fgets(frase2, TAM, stdin); 
    fflush(stdin);

    printf("\n----------------------------------");
    if(strcmp(frase1, frase2) == 0){
        printf("\n\nAs palavras sao iguais");
    } else{
        printf("\n\nNao sao iguais");
    }

    printf("\n\n----------------------------------\n\n");

    char contrario[strlen(palavra1) + 1];
    strcpy(contrario, palavra1);
    strrev(contrario);  
    printf("String original: %s\n", palavra1);
    printf("String invertida: %s\n", contrario);

    //  IMPRIMIR A PALAVRA 3 AO CONTRARIO
    return 0;
}
