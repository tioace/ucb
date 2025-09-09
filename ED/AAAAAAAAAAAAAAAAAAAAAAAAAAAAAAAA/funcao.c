#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funcao.h"

/*int ContarLinha(char * arquivo){
    FILE *fp = fopen(arquivo, "r"); 
    if (fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1); 
    }

   
    return count; 
}*/

Processo * lerDados(char * arquivo){
    
    printf("Arquivo a ser aberto: %s\n", arquivo); 
    FILE *fp = fopen(arquivo, "r"); 
    if (fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1); 
    }
    
    //int tamanho = ContarLinha(arquivo);
    //printf("Encontradas %d linhas de dados\n", tamanho);
    
    // --- 1ª PASSAGEM: contar linhas ---
    int count = 0;
    char buffer[1024];
    fgets(buffer, sizeof(buffer), fp); // pula o cabeçalho
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        count++;
    }
    rewind(fp); // volta ao início
    //fclose(fp);

    Processo * x = malloc(count * sizeof(Processo)); 
    if (x == NULL) {
        printf("ERRO: memoria insuficiente!\n");
        fclose(fp);
        exit(1); 
    }
    
    //memset(x, 0, count * sizeof(Processo));

    int i = 0;
    char cabecalho[1024]; 
    fgets(cabecalho, sizeof(cabecalho), fp);

    while (fscanf(fp, "%d;%[^;];%[^;];%[^;];%[^;];%[^;];%d;%d;%d;%[^;];%d;%d;%d;%d;%d;%d;%d;%d;%[^;];%d;%d;%d;%d;%d;%d;%d;%d\n", &x[i].id_processo, 
        x[i].numero_sigilo, x[i].sigla_grau, x[i].procedimento, x[i].ramo_justica, x[i].sigla_tribunal, &x[i].id_tribunal, 
        &x[i].recurso, &x[i].id_ultimo_oj, x[i].dt_recebimento, &x[i].id_ultima_classe, &x[i].flag_violencia_domestica, &x[i].flag_feminicidio, 
        &x[i].flag_ambiental, &x[i].flag_quilombolas, &x[i].flag_indigenas, &x[i].flag_infancia, &x[i].decisao, x[i].dt_resolvido, &x[i].cnm1, 
        &x[i].primeirasentm1, &x[i].baixm1, &x[i].decm1, &x[i].mpum1, &x[i].julgadom1, &x[i].desm1, &x[i].susm1) == 27){
        
        /*printf("%s\n", x[i].Processo); 
        x[i].aproveitamento = (float) 100 * x[i].pontos / (3 * x[i].jogos);
        */
        i++; 
    }
    
    fclose(fp);
    return x;
}