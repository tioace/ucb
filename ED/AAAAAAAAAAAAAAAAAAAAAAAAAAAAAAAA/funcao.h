#ifndef FUNCAO_H
#define FUNCAO_H

typedef struct{
    /* data */
    int id_processo;
    char numero_sigilo [35];
    char sigla_grau [5];
    char procedimento [50];
    char ramo_justica [35];
    char sigla_tribunal [10];
    int id_tribunal;
    int recurso;
    int id_ultimo_oj;
    char dt_recebimento [20];
    int id_ultima_classe;
    int flag_violencia_domestica;
    int flag_feminicidio;
    int flag_ambiental;
    int flag_quilombolas;
    int flag_indigenas;
    int flag_infancia;
    int decisao;
    char dt_resolvido [20];
    int cnm1;
    int primeirasentm1;
    int baixm1;
    int decm1;
    int mpum1;
    int julgadom1;
    int desm1;
    int susm1;
} Processo;

Processo * lerDados(char * arquivo);
int ContarLinha(char * arquivo);

#endif