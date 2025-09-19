#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funcao.h"

int ContarLinha(char * arquivo){
    FILE *fp = fopen(arquivo, "r"); 
    if (fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1); 
    }
    
    // --- 1ª PASSAGEM: contar linhas ---
    int count = 0;
    char buffer[1024];
    fgets(buffer, sizeof(buffer), fp); // pula o cabeçalho
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        count++;
    }
    rewind(fp); // volta ao início
    fclose(fp);
   
    return count; 
}

Processo * lerDados(char * arquivo){
    
    printf("Arquivo a ser aberto: %s\n", arquivo); 
    FILE *fp = fopen(arquivo, "r"); 
    if (fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1); 
    }
    
    int tamanho = ContarLinha(arquivo);
    printf("Encontradas %d linhas de dados\n", tamanho);

    Processo * x = malloc(tamanho * sizeof(Processo)); 
    memset(x, 0, tamanho * sizeof(Processo));

    char cabecalho[1024]; 
    fgets(cabecalho, sizeof(cabecalho), fp);

    int i = 0;
    char linha[1024];
    
    // Lê linha por linha e depois usa sscanf
    while (fgets(linha, sizeof(linha), fp) != NULL && i < tamanho) {
        // Remove quebras de linha
        linha[strcspn(linha, "\r\n")] = '\0';
        
        // Substitui campos vazios por "0"
        char temp_linha[1024];
        strcpy(temp_linha, linha);
        char *ptr = temp_linha;
        while (*ptr) {
            if (*ptr == ';' && (*(ptr+1) == ';' || *(ptr+1) == '\0')) {
                memmove(ptr + 2, ptr + 1, strlen(ptr + 1) + 1);
                *(ptr + 1) = '0';
            }
            ptr++;
        }
        
        // Usa sscanf para ler
        int result = sscanf(temp_linha, "%d;%[^;];%[^;];%[^;];%[^;];%[^;];%d;%d;%d;%[^;];%d;%d;%d;%d;%d;%d;%d;%d;%[^;];%d;%d;%d;%d;%d;%d;%d;%d",
            &x[i].id_processo, 
            x[i].numero_sigilo, x[i].sigla_grau, x[i].procedimento, 
            x[i].ramo_justica, x[i].sigla_tribunal, &x[i].id_tribunal, 
            &x[i].recurso, &x[i].id_ultimo_oj, x[i].dt_recebimento, 
            &x[i].id_ultima_classe, &x[i].flag_violencia_domestica, 
            &x[i].flag_feminicidio, &x[i].flag_ambiental, &x[i].flag_quilombolas, 
            &x[i].flag_indigenas, &x[i].flag_infancia, &x[i].decisao, 
            x[i].dt_resolvido, &x[i].cnm1, &x[i].primeirasentm1, &x[i].baixm1, 
            &x[i].decm1, &x[i].mpum1, &x[i].julgadom1, &x[i].desm1, &x[i].susm1);
        
        if (result >= 20) {
            i++;
        }
    }
    
    fclose(fp);
    printf("Registros lidos com sucesso: %d\n", i);
    return x;
}