#include <stdio.h>
#include <stdlib.h>
#include <String.h>

#include <stdio.h>
#include <stdlib.h>

void cruzamento() {
    // Tempo de cada fase
    int paradoP = 40, esperaP = 3, andandoP = 55;
    int paradoS = 47, esperaS = 3, andandoS = 39;

    while (1) {
        // *** Via Principal Andando - Via Secundária Parada ***
        for (int i = paradoS; i > 0; i--) {
            printf("Via Principal       Via Secundaria\n");
            printf("Andando: %d         Parado: %d\n", andandoP--, i);
            if (andandoP == 0) break;
        }

        // Tempo de espera sincronizado antes de inverter o fluxo
        for (int j = esperaP; j > 0; j--) {
            printf("Via Principal       Via Secundaria\n");
            printf("Espera: %d          Espera: %d\n", j, j);
        }

        // *** Via Secundária Andando - Via Principal Parada ***
        for (int i = paradoP; i > 0; i--) {
            printf("Via Principal       Via Secundaria\n");
            printf("Parado: %d          Andando: %d\n", i, andandoS--);
            if (andandoS == 0) break;
        }

        // Tempo de espera sincronizado antes de inverter o fluxo novamente
        for (int j = esperaS; j > 0; j--) {
            printf("Via Principal       Via Secundaria\n");
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


/*int viaP(){
	int parado, espera, andando; 
	parado = 40;
	espera = 3;
	andando = 55;
	
	for (int i = 1; i <= parado; i++){
		printf("Tempo parado: %d\n", i);
		
		if(i ==  40){
			for(int j = 1; j <= espera; j++){
				printf("Tempo de espera: %d\n", j);
			}
			
			if(i ==  3){
				for(int k = 1; k <= andando; k++){
					printf("Tempo de andando: %d\n", k);
				}		
			}
		}
	}
	return 0; 
}


int viaS(){
	int parado, espera, andando; 	
	parado = 47;
	espera = 3;
	andando = 39;
	
	for (int i = 1; i <= parado; i++){
		printf("Tempo parado: %d\n", i);
		
		if(i ==  47){
			for(int j = 1; j <= espera; j++){
				printf("Tempo de espera: %d\n", j);
			}
			
			if(i ==  3){
				for(int k = 1; k <= andando; k++){
					printf("Tempo andando: %d\n", k);
				}		
			}
		}
	}
	return 0;
}
	//printf("Via Principal: %i      Via Secundaria: %i\n\n", viaP(), viaS());

int main(){
	
	for(int i = 0; i < 5; i++){
			printf("Via Principal             Via Secundaria\n\n");
			printf("%i                      %i\n",viaP(),viaS());
	}

	return 0;
}*/


