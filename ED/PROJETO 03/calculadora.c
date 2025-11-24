#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#include "expressao.h"

#define MAX 512

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
/*
1. Converter expressões da notação infixa para notação pós-fixa;
2. Converter expressões da notação pós-fixa para notação infixa;
3. Implementar as operações aritméticas básicas: +, –, *, /, % e ^;
4. Implementar raiz (raiz quadrada), sen (seno), cos (cosseno), tg (tangente) e log (logaritmo decimal);
5. Considerar que os ângulos utilizados em sen, cos e tg estão em graus;
6. As operações indicadas no item D devem operar sobre apenas um operando; e
7. Avaliar corretamente as expressões de teste apresentadas na tabela a seguir.
*/

/*
CRITERIOS DE AVALIAÇAO 

• O código fonte enviado pelo AVA e código-fonte compartilhado em GitHub;
• Estruturação modular do código com uso da linguagem C padrão;
• Distribuição correta dos arquivos: expressao.c, expressao.h e main.c;
• Identificação e tratamento de inconsistências nas entradas;
*/

/*
OBSERVACOES

1. O aluno deverá entregar apenas o arquivo calculadora.c, contendo as implementações das funções
definidas em calculadora.h, sem incluir main().
2. Podem ser criadas funções auxiliares internas em calculadora.c, mas seus protótipos não devem ser
incluídos em calculadora.h.
3. Caso ocorra erro na função char *getFormaInFixa(char *Str), esta deve retornar ponteiro NULL.

6. A correção será automatizada com o comando gcc main.c calculadora.c -o calculadora.exe. Ademais, o
código deve compilar sem erros.
7. Recomenda-se a criação de novos testes além dos fornecidos, para garantir o funcionamento completo
e robusto da solução.

*/


// Retorna 1 se o token é operador binário
int isOperador(const char *s) {
    return (
        strcmp(s, "+") == 0 ||
        strcmp(s, "-") == 0 ||
        strcmp(s, "*") == 0 ||
        strcmp(s, "/") == 0 ||
        strcmp(s, "%") == 0 ||
        strcmp(s, "^") == 0
    );
}

int isFuncao(const char *s) {
    return (
        strcmp(s, "raiz") == 0 ||
        strcmp(s, "sen") == 0 ||
        strcmp(s, "cos") == 0 ||
        strcmp(s, "tg")  == 0 ||
        strcmp(s, "log") == 0
    );
}

int precedencia(const char *op) {
    if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0) return 1;
    if (strcmp(op, "*") == 0 || strcmp(op, "/") == 0 || strcmp(op, "%") == 0) return 2;
    if (strcmp(op, "^") == 0) return 3;
    return 0;
}

float getValorPosFixa(char *StrPosFixa) {
    char tok[64];
    float pilha[256];
    int topo = -1;
    int i = 0;

    while (sscanf(StrPosFixa + i, "%s", tok) == 1) {
        i += strlen(tok) + 1;

        // número
        if (isdigit(tok[0]) || (tok[0]=='-' && isdigit(tok[1]))) {
            pilha[++topo] = atof(tok);
            continue;
        }

        // função
        if (isFuncao(tok)) {
            if (topo < 0) return NAN;
            float a = pilha[topo--];
            float r = 0;

            if (strcmp(tok, "raiz") == 0) r = sqrtf(a);
            else if (strcmp(tok, "sen") == 0) r = sinf(a * M_PI / 180.0);
            else if (strcmp(tok, "cos") == 0) r = cosf(a * M_PI / 180.0);
            else if (strcmp(tok, "tg") == 0) r = tanf(a * M_PI / 180.0);
            else if (strcmp(tok, "log") == 0) r = log10f(a);

            pilha[++topo] = r;
            continue;
        }

        // operador binário
        if (isOperador(tok)) {
            if (topo < 1) return NAN;

            float b = pilha[topo--];
            float a = pilha[topo--];
            float r = 0;

            if (strcmp(tok, "+") == 0) r = a + b;
            else if (strcmp(tok, "-") == 0) r = a - b;
            else if (strcmp(tok, "*") == 0) r = a * b;
            else if (strcmp(tok, "/") == 0) r = a / b;
            else if (strcmp(tok, "%") == 0) r = fmodf(a, b);
            else if (strcmp(tok, "^") == 0) r = powf(a, b);

            pilha[++topo] = r;
            continue;
        }

        return NAN;
    }

    return (topo == 0) ? pilha[0] : NAN;
}


char *getFormaInFixa(char *Str) {

    typedef struct {
        char expr[512];
        int prec;
    } Nodo;

    Nodo pilha[256];
    int topo = -1;

    char token[64];
    int i = 0;

    while (sscanf(Str + i, "%s", token) == 1) {
        i += strlen(token) + 1;

        // ---------------------- verifica numero ----------------------
        int ok = 1;
        int k = 0;

        if (token[0] == '-') k = 1;

        for (; token[k]; k++) {
            if (token[k] == '-') { ok = 0; break; }
            if (!isdigit(token[k]) && token[k] != '.') { ok = 0; break; }
        }

        if (ok) {
            Nodo n;
            strcpy(n.expr, token);
            n.prec = 99;
            pilha[++topo] = n;
            continue;
        }

        // ---------------------- funcao unaria ----------------------
        if (isFuncao(token)) {
            if (topo < 0) return NULL;

            Nodo a = pilha[topo--];
            Nodo r;

            sprintf(r.expr, "%s(%s)", token, a.expr);
            r.prec = 100;

            pilha[++topo] = r;
            continue;
        }

        // ---------------------- operador binario ----------------------
        if (isOperador(token)) {
            if (topo < 1) return NULL;

            Nodo b = pilha[topo--];
            Nodo a = pilha[topo--];
            Nodo r;

            int p = precedencia(token);

            char EA[512], EB[512];

            if (a.prec < p) sprintf(EA, "(%s)", a.expr);
            else strcpy(EA, a.expr);

            if (b.prec <= p) sprintf(EB, "(%s)", b.expr);
            else strcpy(EB, b.expr);

            sprintf(r.expr, "%s%s%s", EA, token, EB);
            r.prec = p;

            pilha[++topo] = r;
            continue;
        }

        // token inválido
        return NULL;
    }

    if (topo != 0) return NULL;

    return strdup(pilha[0].expr);
}