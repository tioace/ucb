#include <stdio.h>

int ler (int op1, int op2, char* txtOp1, char* txtOp2, char* txtOpci){
    int op; 

    do{
        printf("Escolha uma opcao: \n%d - %s\n%d - %s\n\n", op1, txtOp1, op2, txtOp2, txtOpci);
        scanf("%d", &op);
    } while (op != op1 && op != op2);

    return op; 
}

int main(int argc, char const *argv[]){
    int op, resposta; 

    op = ler(1, 0, "Iniciar quiz", "Sair", "");
    
    if(op == 1){
        resposta = ler(1, 2, "Rio de Janeiro", "Brasilia", "Qual eh a capital do Brasil?"); 
        if (resposta == 1){
            printf("Pode melhorar!");
        }

        else{
            printf("Voce acertou!");
        }
    } 

    return 0;
}
