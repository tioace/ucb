const gasolina = 6.69;
const etanol = 4.30;
const diesel = 6.03;

function atualizarValor(){
    let tipo = document.getElementById("combustivel").ariaValueMax;
    console.log(tipo);

    let preco; 
    switch(tipo){
        case "gasolina":
            preco = gasolina; 
            break;
        case "etanol":
            preco = etanol; 
            break;
        case "diesel":
            preco = diesel; 
            break; 
        default:
            console.log("Escolha uma opcao");
            break; 
    }

    console.log(preco);
    let litro = parseFloat(document.getElementById("litros".value));
    calcular(preco, litro); 
}




function calcular(preco, litro){
    
    if (litro <= 0 || isNaN(litro)){
        document.getElementById("resultado").textContent = valor; 
        return;
    } else {
        let valor = preco * litro; 
        document.getElementById("resultado").textContent = valor; 
    }
}

let tipoCombustivel = document.getElementById("combustivel");
tipoCombustivel.addEventListener("change", atualizarValor); 