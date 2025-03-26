public class Cruzamento {

    public static void main(String[] args) {
        cruzamento();
    }

    public static void cruzamento() {
        // Limites e tempos para as vias
        int limiteParadoP = 60;  // Limite máximo de parada para a via principal
        int paradoP = 40, esperaP = 3, andandoP = 55;
        int paradoS = 47, esperaS = 3, andandoS = 39;

        while (true) {
            // *** Via Principal Andando - Via Secundária Parada ***
            for (int i = paradoS; i > 0; i--) {
                System.out.println("Via Principal       Via Secundária");
                System.out.printf("Andando: %d         Parado: %d\n", andandoP--, i);
                if (andandoP == 0) break;  // Sai do loop se a via principal terminar de andar
                dormir(1000); // Pausa de 1 segundo para simular o tempo real
            }

            // Tempo de espera sincronizado
            for (int j = esperaP; j > 0; j--) {
                System.out.println("Via Principal       Via Secundária");
                System.out.printf("Espera: %d          Espera: %d\n", j, j);
                dormir(1000);
            }

            // *** Via Secundária Andando - Via Principal Parada ***
            int tempoParadoP = 0;
            for (int i = paradoP; i > 0; i--) {
                System.out.println("Via Principal       Via Secundária");
                System.out.printf("Parado: %d          Andando: %d\n", i, andandoS--);

                tempoParadoP++;
                if (andandoS == 0 || tempoParadoP >= limiteParadoP) break;  
                // Sai se a via secundária terminar de andar ou atingir o limite
                dormir(1000);
            }

            // Tempo de espera sincronizado
            for (int j = esperaS; j > 0; j--) {
                System.out.println("Via Principal       Via Secundária");
                System.out.printf("Espera: %d          Espera: %d\n", j, j);
                dormir(1000);
            }

            // Reinicia os tempos para o próximo ciclo
            andandoP = 55;
            andandoS = 39;
        }
    }

    // Método auxiliar para simular o tempo de espera (em milissegundos)
    public static void dormir(int tempo) {
        try {
            Thread.sleep(tempo);
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}
