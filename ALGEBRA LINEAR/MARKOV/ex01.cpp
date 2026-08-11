/* ============================================================
   Cadeia de Markov generica — v_n = v_0 * P^n
   INPUT:  numero de estados, matriz de transicao, estado inicial,
           numero de passos, estado alvo
   OUTPUT: probabilidade de estar no estado alvo apos N passos
   Apenas biblioteca padrao (stdio.h). Sem alocacao dinamica.
   ============================================================ */
#include <stdio.h>

#define MAX_N 10 /* numero maximo de estados suportado */

/* out = v * P  (vetor linha vezes matriz), para "n" estados */
void vetor_vezes_matriz(int n, double v[MAX_N], double P[MAX_N][MAX_N], double out[MAX_N]) {
    for (int j = 0; j < n; j++) {
        out[j] = 0.0;
        for (int i = 0; i < n; i++) {
            out[j] += v[i] * P[i][j];
        }
    }
}

/* aplica "passos" transicoes a partir de v0 e devolve o vetor final em resultado */
void markov(int n, double v0[MAX_N], double P[MAX_N][MAX_N], int passos, double resultado[MAX_N]) {
    double atual[MAX_N], prox[MAX_N];
    for (int i = 0; i < n; i++) atual[i] = v0[i];

    for (int p = 0; p < passos; p++) {
        vetor_vezes_matriz(n, atual, P, prox);
        for (int i = 0; i < n; i++) atual[i] = prox[i];
    }
    for (int i = 0; i < n; i++) resultado[i] = atual[i];
}

int main(void) {
    int n;
    double P[MAX_N][MAX_N];
    double v0[MAX_N];
    double resultado[MAX_N];
    int passos, alvo;
    int estado_inicial;

    printf("Numero de estados: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_N) {
        printf("Numero de estados invalido (1-%d).\n", MAX_N);
        return 1;
    }

    printf("Digite a matriz de transicao P (%d linhas x %d colunas, valores separados por espaco):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%lf", &P[i][j]) != 1) {
                printf("Erro ao ler a matriz.\n");
                return 1;
            }
        }
    }

    printf("Estado inicial (indice de 0 a %d): ", n - 1);
    if (scanf("%d", &estado_inicial) != 1 || estado_inicial < 0 || estado_inicial >= n) {
        printf("Estado inicial invalido.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) v0[i] = (i == estado_inicial) ? 1.0 : 0.0;

    printf("Numero de passos (transicoes): ");
    if (scanf("%d", &passos) != 1 || passos < 0) {
        printf("Numero de passos invalido.\n");
        return 1;
    }

    printf("Estado alvo (indice de 0 a %d): ", n - 1);
    if (scanf("%d", &alvo) != 1 || alvo < 0 || alvo >= n) {
        printf("Estado alvo invalido.\n");
        return 1;
    }

    markov(n, v0, P, passos, resultado);

    printf("\nDistribuicao completa apos %d passo(s):\n", passos);
    for (int i = 0; i < n; i++) {
        printf("  estado %d: %.6f\n", i, resultado[i]);
    }
    printf("\nProbabilidade de terminar no estado %d apos %d passo(s): %.6f\n", alvo, passos, resultado[alvo]);

    return 0;
}
