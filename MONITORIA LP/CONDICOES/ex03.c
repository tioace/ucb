#include <stdio.h>


int main(){
	int n; 
	float saldo, saque, deposito, valor; 
	
	saldo = 100; 
	
	printf("1 - Saldo\n");
	printf("2 - Saque\n");
	printf("3 - Deposito\n");
	printf("4 - Sair\n\n");
	
	printf("Digite a opcao que deseja: ");
	scanf("%d", &n); 
	
	printf("\n------------------------------\n\n");
	
	switch(n){
		
		case 1:
			printf("Saldo: R$ %.2f\n", saldo); 
			printf("\n------------------------------\n");
			break; 
		case 2:
			printf("Digite o valor que deseja sacar: ");
			scanf("%f", &valor); 

			if (saldo - valor >= 0){
				saque = saldo - valor; 	
				printf("\n------------------------------\n");
				printf("Valor sacado: R$ %.2f\n", valor);
				printf("Saldo atual: R$ %.2f\n", saque);
				printf("\n------------------------------\n");
			} else {
				printf("O valor que deseja sacar nao esta disponivel\n. "); 
				printf("\n------------------------------\n");
			}				
			break; 
		case 3: 
			printf("Digite o valor que deseja depositar: ");
			scanf("%f", &valor); 
		
			deposito = saldo + valor; 	
			printf("\n------------------------------\n");
			printf("Valor depositado: R$ %.2f\n", valor);
			printf("Saldo atual: R$ %.2f\n", deposito);	
			printf("\n------------------------------\n");
			break; 
		case 4: 
			printf("Voce saiu do sistema. \n"); 
			break; 
	
		default: 
			printf("Digite uma opcao valida. \n");
			break; 
	}
	
	return 0; 
}


