const pessoa = {
    nome: "Fulano",
    idade: 10,
    status: true
};

console.log(pessoa); 

const veiculo = {}
veiculo.marca = "Fiat",
veiculo.ano = 2023,
console.log(veiculo); 


function Veiculo2(marca, ano){
    this.marca = marca; 
    this.ano = ano;
}

const c1 = new Veiculo2("BYD", 2025);
const c2 = new Veiculo2("GWM", 2024);

console.log(c1);
console.log(c2.marca);


class contaBancaria{
    saldo = 0;

    constructor(saldoInicial){
        this.saldo = saldoInicial;
    }

    getSaldo(){
        return this.saldo; 
    }

    
}

const pessoa2 = [];
