#include <stdio.h>

int primo(int n){
	int teste; 
	for (int i = 2; i <= n / 2; i++) {
	    if (n % i == 0) {
	       teste++;
	       break;
	    }
	}
	
	if(teste == 0){
		printf("O numero %d eh primo.", n);
	}
	else{
		printf("O numero %d NAO eh primo.", n);
	}
	
	return 0;
}

int main(){
	int n; 
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("\n\n-----------------------\n\n");
	primo(n);
}
