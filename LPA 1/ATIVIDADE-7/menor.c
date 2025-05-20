int menor2(int a, int b){
    int menor;
    if(a < b){
        menor = a;
    }else{
        menor = b; 
    }
    return menor; 
}

int menor3(int a, int b, int c){
    return menor2(menor2(a, b), c); 
}

int menorn(int numeros[], int n){
    int menor = numeros[0]; 

    for (int i = 0; i < n; i++){
        menor = menor2(menor, numeros[i]);
    }
    return menor;
}