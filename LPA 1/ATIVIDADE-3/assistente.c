#include <stdio.h>

int main(int argc, char const *argv[]){
    int a; 

    do{
        printf("Escolha entre um filme do tipo INTENSO ou LEVE:\n");
        printf("(1) Leve\n(2) Intenso\n\n");
        printf("Digite outro numero caso queira encerrar o programa.\n\nEscolha: ");
		scanf("%d", &a);
        
		printf("\n-------------------------------------------\n\n");
		
        if(a == 1){
            printf("\nEscolha entre o genero COMEDIA ou ANIMACAO:\n");
            printf("(1) Comedia\n(2) Animacao\n\nEscolha: ");
            scanf("%d", &a);
			printf("\n-------------------------------------------\n\n");
			
            if (a == 1){
                printf("Assistir ao filme As Branquelas");
                printf("\n\n-------------------------------------------\n");
                
                printf("\n\nDeseja assistir outro filme: ");
                printf("\n(1) Sim\n(2) Nao\n\nEscolha: ");
                scanf("%d", &a);
				printf("\n-------------------------------------------\n\n");
				
                if (a == 2){
                    break;
                }
                
            }

            if (a == 2){
                printf("Assistir ao filme Toy Story");
                printf("\n\n-------------------------------------------\n");
                printf("1\n\nDeseja assistir outro filme: ");
                printf("\n(1) Sim\n(2) Nao\n\nEscolha: ");
                scanf("%d", &a);
                printf("\n-------------------------------------------\n\n");

                if (a == 2){
                    break;
                }
            }
            
        }

        if(a == 2){
            printf("\nEscolha entre o genero TERROR ou ACAO:\n");
            printf("(1) Terror\n(2) Acao\n\nEscolha: ");
            scanf("%d", &a);
			printf("\n\n-------------------------------------------\n");
			
            if (a == 1){
                printf("\nEscolha entre o genero TERROR PSICOLOGICO ou TERROR SOBRENATURAL: \n");
                printf("(1) Psicologico\n(2) Sobrenatural\n\nEscolha: ");
                scanf("%d", &a);

                if (a == 1){
                	printf("\n-------------------------------------------\n\n");
                    printf("Assistir ao filme Corra");
                    printf("\n\n-------------------------------------------\n\n");
                    printf("\n\nDeseja assistir outro filme: ");
                    printf("\n(1) Sim\n(2) Nao\n\nEscolha: ");
                    scanf("%d", &a);
                    printf("\n\n-------------------------------------------\n\n");
                    if (a == 2){
                        break;
                    }
                    
                }
            
                    
                if (a == 2){
                	printf("\n\n-------------------------------------------\n\n");
                    printf("Assistir ao filme Invocacao do Mal");
                    printf("\n\n-------------------------------------------\n\n");
                    printf("\n\nDeseja assistir outro filme: ");
                    printf("\n(1) Sim\n(2) Nao\n\nEscolha: ");
                    scanf("%d", &a);
                    printf("\n\n-------------------------------------------\n\n");

                    if (a == 2){
                        break;
                    }
                    
                }
            }

            if (a == 2){
                printf("\nEscolha entre o genero HEROIS FANTASTICOS ou AVENTURA REALISTA: \n");
                printf("(1) Herois Fantasticos\n(2) Aventura Realista\n\nEscolha: ");
                scanf("%d", &a);
                printf("\n\n-------------------------------------------\n\n");

                if (a == 1){
                	printf("\n\n-------------------------------------------\n\n");
                    printf("Assistir ao filme Vingadores Ultimato");
                    printf("\n\n-------------------------------------------\n\n");
                    printf("\n\nDeseja assistir outro filme: ");
                    printf("\n(1) Sim\n(2) Nao\n\nEscolha: ");
                    scanf("%d", &a);
                    printf("\n\n-------------------------------------------\n\n");

                    if (a == 2){
                        break;
                    }
                    
                }
                    
                if (a == 2){
                    printf("Assistir ao filme Mad Max");
                    printf("\n\n-------------------------------------------\n\n");
                    printf("\n\nDeseja assistir outro filme: ");
                    printf("\n(1) Sim\n(2) Nao\n\nEscolha: ");
                    scanf("%d", &a);
                    printf("\n\n-------------------------------------------\n\n");

                    if (a == 2){
                        break;
                    }
                    
                }
            }
        }
       
        
    } while (a == 1 || a == 2);
    
    return 0;
}
