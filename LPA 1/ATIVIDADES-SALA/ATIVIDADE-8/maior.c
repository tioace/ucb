int maior2(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    }else{
        maior = b; 
    }
    return maior; 
}

int maior3(int a, int b, int c){
    return maior2(maior2(a, b), c); 
}

int maiorn(int numeros[], int n){
    int maior = numeros[0]; 

    for (int i = 0; i < n; i++){
        maior = maior2(maior, numeros[i]);
    }
    return maior;
}