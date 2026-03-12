let meuElemento = document.getElementById("paragrafo");
console.log(meuElemento);
console.log(meuElemento.textContent);

let elemento = document.getElementsByClassName("paragrafo");
console.log(elemento);

for(let i = 0; i < elemento.length; i++){
    console.log(elemento[i].textContent);
}

//HTML VIA JAVA SCRIPT 

let tag = document.getElementsByTagName("p");
console.log(tag);   

let destino = document.getElementById("elemento");
let p = document.createElement("p"); 
p.textContent = "Paragrafo criado via javascript";
destino.append(p);


let lista = document.getElementById("lista");
let ul = document.createElement("ul");
let itens = ["Arroz", "Feijao"]; 

for(let i = 0; i < itens.length; i++){
    let li = document.createElement("li");
    li.textContent = itens[i]; 
    ul.append(li); 
}

lista.append(ul);

