#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include "expressao.h"

int main() {
    char entrada[512];

    printf("=== Testador de Expressoes Pos-Fixas ===\n");
    printf("Digite uma expressao pos-fixa (ou 'sair'): \n\n");

    while (1) {
        printf("> ");
        fgets(entrada, 512, stdin);

        // remover \n
        entrada[strcspn(entrada, "\n")] = 0;

        if (strcmp(entrada, "sair") == 0)
            break;

        if (strlen(entrada) == 0)
            continue;

        // converte para infixa 
        char *infixa = getFormaInFixa(entrada);

        if (infixa == NULL) {
            printf("Erro: expressao invalida.\n\n");
            continue;
        }

        float valor = getValorPosFixa(entrada);

        printf("Pos-fixa: %s\n", entrada);
        printf("Infixa  : %s\n", infixa);
        printf("Valor   : %.2f\n\n", valor);

        free(infixa); 
    }

    return 0;
}
