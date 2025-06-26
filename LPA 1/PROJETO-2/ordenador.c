#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[100];
    char telefone[20];
    int ddd;
} Contato;

int comparaDDD(const void *a, const void *b) {
    Contato *c1 = (Contato *)a;
    Contato *c2 = (Contato *)b;
    return c1->ddd - c2->ddd;
}

int comparaNome(const void *a, const void *b) {
    Contato *c1 = (Contato *)a;
    Contato *c2 = (Contato *)b;
    return strcmp(c1->nome, c2->nome);
}

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, ""); // Para lidar com caracteres especiais (como o travessão)

    if (argc != 2) {
        printf("Uso: %s [nome|ddd]\n", argv[0]);
        return 1;
    }

    FILE *lista = fopen("lista.txt", "r");
    if (lista == NULL) {
        printf("Erro ao abrir arquivo 'lista.txt'.\n");
        return 1;
    }

    // Contar quantas linhas existem
    int qtd_linhas = 0;
    char linha[200];
    while (fgets(linha, sizeof(linha), lista)) {
        qtd_linhas++;
    }
    rewind(lista);

    // Alocar memória
    Contato *agenda = malloc(qtd_linhas * sizeof(Contato));
    if (agenda == NULL) {
        printf("Erro de memória.\n");
        fclose(lista);
        return 1;
    }

    // Ler os contatos
    int i = 0;
    while (fgets(linha, sizeof(linha), lista)) {
        // Substituir o travessão UTF-8 por algo que possamos usar como delimitador
        char *separador = strstr(linha, "–"); // travessão (U+2013)
        if (!separador) continue;

        *separador = '\0'; 

        char telefone[30], nome[100];
        strncpy(telefone, linha, sizeof(telefone) - 1);
        telefone[sizeof(telefone) - 1] = '\0';

        strncpy(nome, separador + 3, sizeof(nome) - 1); // pula "– "
        nome[sizeof(nome) - 1] = '\0';

       
        nome[strcspn(nome, "\n")] = '\0';

        int ddd = 0;
        sscanf(telefone, "(%d)", &ddd);

        strncpy(agenda[i].telefone, telefone, sizeof(agenda[i].telefone));
        strncpy(agenda[i].nome, nome, sizeof(agenda[i].nome));
        agenda[i].ddd = ddd;

        i++;
    }

    fclose(lista);

    // Ordenar
    if (strcmp(argv[1], "ddd") == 0) {
        qsort(agenda, i, sizeof(Contato), comparaDDD);
    } else if (strcmp(argv[1], "nome") == 0) {
        qsort(agenda, i, sizeof(Contato), comparaNome);
    } else {
        printf("Critério inválido. Use 'nome' ou 'ddd'.\n");
        free(agenda);
        return 1;
    }


    FILE *saida = fopen("lista_sorted.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar arquivo de saída.\n");
        free(agenda);
        return 1;
    }

    for (int j = 0; j < i; j++) {
        fprintf(saida, "%s – %s\n", agenda[j].telefone, agenda[j].nome);
    }

    fclose(saida);
    free(agenda);
    printf("Arquivo ordenado gerado com sucesso em 'lista_sorted.txt'.\n");

    return 0;
}
