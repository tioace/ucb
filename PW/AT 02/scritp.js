/*1 - Crie um jogo onde o computador gera um número aleatório de 1 a 20, e o usuário
precisa adivinhar qual é. O jogo deve dar dicas se o número digitado for maior ou menor
que o número secreto. O jogo só termina quando o usuário acertar*/

// EXERCICIO 01

var chute = parseInt(window.prompt("Ditite um valor: ")); 
var aleatorio = Math.floor(Math.random() * 20); 

while (aleatorio !== chute){
    if(chute > aleatorio){
        console.log("O numero digitado é maior que o numero secreto");
        var chute = parseInt(window.prompt("Ditite um valor: ")); 
    } else if (chute < aleatorio){
        console.log("O numero digitado é menor que o numero secreto");
        var chute = parseInt(window.prompt("Ditite um valor: ")); 
    } 
}

if (chute === aleatorio) {
    console.log("Voce acertou o numero!!");
}


//----------------------------------------------------------------------------------------------------------------------

/*
2 –Crie um jogo de Pedra, Papel ou Tesoura onde:
• O usuário escolhe uma das três opções digitando no prompt().
• O computador escolhe uma opção aleatória.
• O programa deve determinar o vencedor e exibir o resultado no console.log().

*/

//EXERCICIO 02

var chute = parseInt(window.prompt("Ditite um valor de 1 a 3: ")); 
var aleatorio = Math.floor(Math.random() * 3) + 1; 
// 1 pedra
// 2 tesoura 
// 3 papel

if(chute === 1 && aleatorio === 2){
    console.log("Voce ganhou!");
} else if (chute === 1 && aleatorio === 3){
    console.log("Voce perdeu!");
} else if (chute === 1 && aleatorio === 1){
    console.log("Empate!");
} 

else if(chute === 2 && aleatorio === 3){
    console.log("Voce ganhou!");
} else if (chute === 2 && aleatorio === 1){
    console.log("Voce perdeu!");
} else if (chute === 2 && aleatorio === 2){
    console.log("Empate!");
} 


else if(chute === 3 && aleatorio === 2){
    console.log("Voce ganhou!");
} else if (chute === 3 && aleatorio === 1){
    console.log("Voce perdeu!");
} else if (chute === 3 && aleatorio === 3){
    console.log("Empate!");
} 


//----------------------------------------------------------------------------------------------------------------------
/*
3 - Crie um programa que pede ao usuário para digitar um número e, em seguida, exibe
a tabuada desse número de 1 a 10 no formato de uma tabela.
Exemplo de saída:
Se o número escolhido por 5, a saída será:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...*/

//EXERCICIO 03

var num = parseInt(window.prompt("Ditite um numero: "));
var i = parseInt(0); 
for (i; i < 10; i++){
    console.log(i+1  + " * " + num + " = " + num * (i+1) + "\n");
}


//----------------------------------------------------------------------------------------------------------------------

//EXERCICIO 04
/*
4 - Crie um programa que desenha um triângulo de asteriscos (*) no console, onde o
número de linhas é especificado pelo usuário.
Exemplo de saída:
Se o usuário digitar 5 para o número de linhas, o resultado será:
*
**
***
****
*****
*/


var num = parseInt(window.prompt("Ditite um numero: "));

var i = parseInt(1); 

for (i; i <= num; i++){
    console.log("*".repeat(i)); 
}



//----------------------------------------------------------------------------------------------------------------------


//EXERCICIO 05

/*
5 - Escreva um programa para encontrar a soma da série 1 + 11 + 111 + ... n termos.
Conforme a entrada a seguir:
Exemplo da saída:
Se o usuário digitar a quantidade de termos igual a 5, o resultado será:
1 + 11 + 111 + 1111 + 11111
A soma é: 12.345
*/ 

var num = parseInt(window.prompt("Ditite um numero: "));

var termos = []; 
var soma = 0;

var i = parseInt(1); 

for (i; i <= num; i++){
let termoString = "1".repeat(i);
    
    termos.push(termoString);       
    soma += parseInt(termoString);  
}


console.log(termos.join(" + "));
console.log("A soma é: " + soma.toLocaleString('pt-BR'));