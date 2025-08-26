#ifndef EQUIPE_H
#define EQUIPE_H 

typedef struct {
    int posicao;
    char estado [30];
    char time [40];
    int pontos;
    int jogos;
    int vitorias; 
    int empates; 
    int derrotas; 
    int golP;
    int golS;
    int saldoG; 
    float aproveitamento; 
} Time;

Time * lerDados(char * arquivo);

#endif