#include <stdio.h>

float media(float a, float b, float c){
	float media = (a + b + c) / 3;
	
	if(media >= 9){
		printf("Media %.1f - CONCEITO A: Excelente", media);
	} else if(media < 9 && media >= 7.5){
		printf("Media %.1f - CONCEITO B: Muito bom", media);
	} else if(media < 7.5 && media >= 6){
		printf("Media %.1f - CONCEITO C: Bom", media);
	} else if(media < 6 && media >= 4){
		printf("Media %.1f - CONCEITO D: Insuficiente", media);
	} else{
		printf("Media %.1f - CONCEITO E: Reprovado", media);
	}
	
	return media; 
}

int main(){
	int a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	media (a, b, c); 
	return 0;
}
