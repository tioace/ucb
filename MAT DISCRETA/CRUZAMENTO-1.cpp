#include <stdio.h>
#include <stdlib.h>

void cruzamento() {
    // Limites e tempos para as vias
    int limiteParadoP = 60;  // Limite máximo de parada para a via principal
    int paradoP = 40, esperaP = 3, andandoP = 55;
    int paradoS = 47, esperaS = 3, andandoS = 39;

    while (1) {
        // *** Via Principal Andando - Via Secundária Parada ***
        for (int i = paradoS; i > 0; i--) {
            printf("Via Principal       Via Secundária\n");
            printf("Andando: %d         Parado: %d\n", andandoP--, i);
            if (andandoP == 0) break;  // Se a via principal terminar de andar, sai do loop
        }

        // Tempo de espera sincronizado
        for (int j = esperaP; j > 0; j--) {
            printf("Via Principal       Via Secundária\n");
            printf("Espera: %d          Espera: %d\n", j, j);
        }

        // *** Via Secundária Andando - Via Principal Parada ***
        int tempoParadoP = 0;
        for (int i = paradoP; i > 0; i--) {
            printf("Via Principal       Via Secundária\n");
            printf("Parado: %d          Andando: %d\n", i, andandoS--);

            tempoParadoP++;
            if (andandoS == 0 || tempoParadoP >= limiteParadoP) break;  
            // Sai se a via secundária terminou de andar ou atingiu o limite
        }

        // Tempo de espera sincronizado
        for (int j = esperaS; j > 0; j--) {
            printf("Via Principal       Via Secundária\n");
            printf("Espera: %d          Espera: %d\n", j, j);
        }

        // Reinicia os tempos para o próximo ciclo
        andandoP = 55;
        andandoS = 39;
    }
}

int main() {
    cruzamento();
    return 0;
}

