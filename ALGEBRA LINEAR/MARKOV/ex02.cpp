/* ============================================================
   Cadeias de Markov — v_n = v_0 * P^n
   ============================================================ */
#include <stdio.h>

#define N 3 /* numero de estados (sempre 3 nos dois exemplos) */

/* out = v * P  (vetor linha vezes matriz) */
void vetor_vezes_matriz(double v[N], double P[N][N], double out[N]) {
    for (int j = 0; j < N; j++) {
        out[j] = 0.0;
        for (int i = 0; i < N; i++) {
            out[j] += v[i] * P[i][j];
        }
    }
}

/* aplica "passos" transicoes a partir de v0 e devolve o vetor final em resultado */
void markov(double v0[N], double P[N][N], int passos, double resultado[N]) {
    double atual[N], prox[N];
    for (int i = 0; i < N; i++) atual[i] = v0[i];

    for (int p = 0; p < passos; p++) {
        vetor_vezes_matriz(atual, P, prox);
        for (int i = 0; i < N; i++) atual[i] = prox[i];
    }
    for (int i = 0; i < N; i++) resultado[i] = atual[i];
}

void imprime_vetor(const char *nomes[N], double v[N]) {
    for (int i = 0; i < N; i++) {
        printf("  P(%s) = %.4f\n", nomes[i], v[i]);
    }
}

int main(void) {
    double resultado[N];

    /* ---------- Exemplo 1: clima ----------
       Estados: 0=Sol 1=Chuva 2=Nublado
       Terca = Sol -> qual a distribuicao na Sexta? (3 passos) */
    double v0_clima[N] = {1.0, 0.0, 0.0};
    double P_clima[N][N] = {
        {0.70, 0.20, 0.10},  /* de Sol    */
        {0.30, 0.40, 0.30},  /* de Chuva  */
        {0.20, 0.30, 0.50}   /* de Nublado*/
    };
    const char *nomes_clima[N] = {"Sol", "Chuva", "Nublado"};

    printf("== Exemplo 1: Clima (Terca -> Sexta, 3 passos) ==\n");
    markov(v0_clima, P_clima, 3, resultado);
    imprime_vetor(nomes_clima, resultado);
    printf("\n");

    /* ---------- Exemplo 2: genetica (autofecundacao) ----------
       Estados: 0=AA 1=Aa 2=aa
       Gen1 = AA -> qual a distribuicao na Gen7? (6 passos) */
    double v0_gen[N] = {1.0, 0.0, 0.0};
    double P_gen[N][N] = {
        {1.00, 0.00, 0.00},  /* de AA */
        {0.25, 0.50, 0.25},  /* de Aa */
        {0.00, 0.00, 1.00}   /* de aa */
    };
    const char *nomes_gen[N] = {"AA", "Aa", "aa"};

    printf("== Exemplo 2: Genetica (Gen1 -> Gen7, 6 passos) ==\n");
    markov(v0_gen, P_gen, 6, resultado);
    imprime_vetor(nomes_gen, resultado);
    printf("\n(AA e aa sao absorventes: uma vez em AA, a cadeia nunca sai de AA)\n");

    return 0;
}
