#include <stdio.h>

int main(){
	float notas [3]; 
	int acima; 
	float media; 
	float soma; 
	float menor = 10;
	float maior = 0; 
	int i;
	
	for ( i = 0; i < 3; i++){
		scanf("%f", &notas [i]); 

		if(notas[i] > maior){
			maior = notas[i];
		}
		if(notas[i] < menor){
			menor = notas[i];
		}
		
		if(notas[i] >= 7){
			acima++;
		}
		
		soma += notas[i]; 
	}
	
	media = soma / 3; 
	
	printf("Media: %.1f\n", media); 
	printf("Qtd acima: %d\n", acima); 
	printf("Menor nota: %.1f\n", menor); 
	printf("Maior nota: %.1f\n", maior); 
	return 0; 
}
