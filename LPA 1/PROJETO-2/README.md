# **Tutorial de Uso: Ordenador de Lista Telefônica em C**  

Este tutorial explica como compilar e usar o programa `ordenador_telefonico.c`, que ordena listas telefônicas por **nome** (ordem alfabética) ou **telefone** (ordem crescente) e gera um novo arquivo com os dados organizados.  

---

## **📥 Pré-requisitos**  
- Um compilador C (ex: `gcc`).  
- Um arquivo de texto (`lista.txt`) com contatos no formato:  
  ```
  (DDD) Telefone - Nome 
  Exemplo:
  (11) 98765-4321 – João Silva  
  (21) 99876-5432 – Maria Oliveira 
  ```

---

## **🔧 Passo 1: Compilar o Programa**  
Abra o terminal e compile o código com o seguinte comando:  
```sh
gcc ordenador.c -o ordenador.exe
```
Isso gera um executável chamado `ordenador`.  

---

## **🚀 Passo 2: Executar o Programa**  
O programa é executado via linha de comando com os seguintes argumentos:  

### **Opções:**  
| Comando          | Descrição                          |  
|------------------|-----------------------------------|  
| `./ordenador nome` | Ordena por **nome** (A-Z). |  
| `./ordenador ddd` | Ordena por **telefone** (crescente). |  

### **Exemplo 1: Ordenar por Nome**  
```sh
./ordenador nome 
```
**Saída:**  
- Um novo arquivo `lista_sorted.txt` será criado, com os nomes em ordem alfabética.  

### **Exemplo 2: Ordenar por Telefone**  
```sh
./ordenador ddd 
```
**Saída:**  
- Um novo arquivo `lista_sorted.txt` será criado, com os telefones em ordem crescente.  

---

## **❗ Possíveis Erros e Soluções**  
| Erro                          | Causa                           | Solução                      |  
|-------------------------------|--------------------------------|-----------------------------|  
| `Erro ao abrir arquivo`       | Arquivo não existe ou está com nome errado. | Verifique se o arquivo está no mesmo diretório e se o nome está correto. |  
| `Opção inválida`              | Uso incorreto dos argumentos (`nome` ou `ddd`). | Use `nome` para nome ou `ddd` para ordernar em ordem crescente a partir do ddd. |  
| `Arquivo vazio`               | O arquivo não contém dados. | Adicione contatos no formato correto. |  

---
