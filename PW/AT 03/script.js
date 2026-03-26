const incrementa = document.getElementById("incrementa");
const decrementa = document.getElementById("decrementa");
const quantidade = document.getElementById("quantidade");

const texto = document.getElementById("texto"); 
const contador = document.getElementById("contador"); 
const textoEscrito = document.getElementById("textoEscrito"); 

const tipo = document.getElementById('tipo');
const adicionar = document.getElementById('adicionar');
const containerListas = document.getElementById('containerListas');

const reset = document.getElementById("reset"); 

let contadorCliques = 0;
quantidade.innerText = "0"; 


incrementa.addEventListener('click', () => {
    contadorCliques++;
    quantidade.innerText = contadorCliques;
});

decrementa.addEventListener('click', () => {
    if (contadorCliques > 0) {
        contadorCliques--;
        quantidade.innerText = contadorCliques;
    } else {
        alert("O contador já está em zero!");
    }
});


texto.addEventListener('input', () => {
    const textoSemEspaco = texto.value.replace(/\s/g, '');
    contador.innerText = textoSemEspaco.length;
});


texto.addEventListener('keypress', (e) => {
    if (e.key === 'Enter' && texto.value.trim() !== "") {
        const novoParagrafo = document.createElement('p');
        novoParagrafo.innerText = texto.value;
        textoEscrito.appendChild(novoParagrafo);
        
        texto.value = ""; 
        contador.innerText = "0";
    }
});


adicionar.addEventListener('click', () => {
    const valorSelecionado = tipo.value; 

    if (valorSelecionado === "") {
        alert("Por favor, selecione um tipo de lista.");
        return;
    }

    const tagLista = valorSelecionado === "ordenada" ? "ol" : "ul";
    const novaLista = document.createElement(tagLista);
    
    const item = document.createElement('li');
    item.innerText = "Novo item adicionado em " + new Date().toLocaleTimeString();
    
    novaLista.appendChild(item);
    containerListas.appendChild(novaLista);
});


reset.addEventListener('click', () => {
    contadorCliques = 0;
    quantidade.innerText = "0";
    
    textoEscrito.innerHTML = "";
    containerListas.innerHTML = "";
    texto.value = "";
    contador.innerText = "0";
    tipo.value = "";
});