# **Tutorial de Uso: Ordenador de Lista Telefônica em C**  

Este tutorial explica como compilar e usar o programa `ordenador_telefonico.c`, que ordena listas telefônicas por **nome** (ordem alfabética) ou **telefone** (ordem crescente) e gera um novo arquivo com os dados organizados.  

---

## **📥 Pré-requisitos**  
- Um compilador C (ex: `gcc`).  
- Um arquivo de texto (`lista.txt`) com contatos no formato:  
  ```
  Nome - (DDD) Telefone
  Exemplo:
  João Silva - (11) 98765-4321
  Maria Oliveira - (21) 99876-5432
  ```

---

## **🔧 Passo 1: Compilar o Programa**  
Abra o terminal e compile o código com o seguinte comando:  
```sh
gcc ordenador_telefonico.c -o ordenador
```
Isso gera um executável chamado `ordenador`.  

---

## **🚀 Passo 2: Executar o Programa**  
O programa é executado via linha de comando com os seguintes argumentos:  

### **Opções:**  
| Comando          | Descrição                          |  
|------------------|-----------------------------------|  
| `./ordenador -n lista.txt` | Ordena por **nome** (A-Z). |  
| `./ordenador -t lista.txt` | Ordena por **telefone** (crescente). |  

### **Exemplo 1: Ordenar por Nome**  
```sh
./ordenador nome lista.txt
```
**Saída:**  
- Um novo arquivo `lista_sorted.txt` será criado, com os nomes em ordem alfabética.  

### **Exemplo 2: Ordenar por Telefone**  
```sh
./ordenador ddd lista.txt
```
**Saída:**  
- Um novo arquivo `lista_sorted.txt` será criado, com os telefones em ordem crescente.  

---

## **❗ Possíveis Erros e Soluções**  
| Erro                          | Causa                           | Solução                      |  
|-------------------------------|--------------------------------|-----------------------------|  
| `Erro ao abrir arquivo`       | Arquivo não existe ou está com nome errado. | Verifique se o arquivo está no mesmo diretório e se o nome está correto. |  
| `Opção inválida`              | Uso incorreto dos argumentos (`-n` ou `-t`). | Use `-n` para nome ou `-t` para telefone. |  
| `Arquivo vazio`               | O arquivo não contém dados. | Adicione contatos no formato correto. |  

---
