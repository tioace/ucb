# Álgebra Linear (Boldrini) — Capítulo 1: Matrizes
## Respostas desenvolvidas — exercícios pares

---

## Seção 1.4 — Exercícios

### Exercício 2
**Enunciado:** Seja A = [[2, x²], [2x−1, 0]]. Se A' = A, então x = ?

**Desenvolvimento:**
A transposta troca linha por coluna:

A' = [[2, 2x−1], [x², 0]]

Para que A' = A, os elementos correspondentes devem ser iguais. Comparando a posição (1,2):

x² = 2x − 1  ⟹  x² − 2x + 1 = 0  ⟹  (x − 1)² = 0  ⟹  x = 1

(A posição (2,1) fornece a mesma equação, então é consistente.)

**Resposta: x = 1**

---

### Exercício 4
**Enunciado:** Se A é uma matriz triangular superior, então A' é ____.

**Desenvolvimento:**
A é triangular superior significa aᵢⱼ = 0 sempre que i > j (zeros abaixo da diagonal).
Por definição de transposta, (A')ᵢⱼ = aⱼᵢ.
Esse elemento é nulo quando j > i, ou seja, quando i < j — isto é, A' tem zeros **acima** da diagonal.

**Resposta: A' é uma matriz triangular inferior.**

---

### Exercício 6
**Enunciado:** Verdadeiro ou falso?

**a) (−A)' = −(A')**
Verdadeiro. A transposição é uma operação linear: (kA)' = kA' para qualquer escalar k; tomando k = −1 obtemos exatamente essa igualdade.

**b) (A + B)' = B' + A'**
Verdadeiro. Sabemos que (A+B)' = A' + B', e a soma de matrizes é comutativa, logo A' + B' = B' + A'.

**c) Se AB = 0, então A = 0 ou B = 0**
Falso. Contraexemplo: A = [[0,1],[0,0]], B = [[0,1],[0,0]]. Nenhuma das duas é nula, mas

AB = [[0,0],[0,0]] = 0.

**d) (k₁A)(k₂B) = (k₁k₂)AB**
Verdadeiro. Escalares "saem" do produto matricial livremente: (k₁A)(k₂B) = k₁k₂(AB).

**e) (−A)(−B) = −(AB)**
Falso. O produto de dois fatores negativos é positivo: (−A)(−B) = AB, e não −(AB) (a menos que AB = 0). Exemplo: A=[[1,2],[3,4]], B=[[2,0],[1,1]]: (−A)(−B) = [[4,2],[10,4]], enquanto −(AB) = [[−4,−2],[−10,−4]].

**f) Se A e B são matrizes simétricas, então AB = BA**
Falso. Contraexemplo: A = [[1,0],[0,0]] e B = [[0,1],[1,0]] são simétricas, mas
AB = [[0,1],[0,0]] e BA = [[0,0],[1,0]], que são diferentes.

**g) Se A · B = 0, então B · A = 0**
Falso. Contraexemplo: A = [[0,1],[0,0]], B = [[1,0],[0,0]]. Temos AB = [[0,0],[0,0]] = 0, mas BA = [[0,1],[0,0]] ≠ 0.

**h) Se podemos efetuar o produto A · A, então A é uma matriz quadrada**
Verdadeiro. Para multiplicar A (m×n) por A (m×n) é preciso que o número de colunas do primeiro fator (n) seja igual ao número de linhas do segundo (m), ou seja, n = m — A é quadrada.

---

### Exercício 8
**Enunciado:** Se A é uma matriz triangular superior, então A² é ____.

**Desenvolvimento:**
De modo geral, o produto de duas matrizes triangulares superiores é triangular superior. Justificativa: se A e B são triangulares superiores (aᵢₖ = 0 para k<i, bₖⱼ = 0 para k>j), o elemento (AB)ᵢⱼ = Σₖ aᵢₖbₖⱼ. Para i > j, cada termo da soma exige simultaneamente k ≥ i e k ≤ j; como i > j isso é impossível, logo (AB)ᵢⱼ = 0 para i > j.
Como A² = A·A é o produto de duas triangulares superiores (a mesma A), o resultado se aplica.

**Resposta: A² é uma matriz triangular superior.**

---

### Exercício 10
**Enunciado:** Dadas
A = [[1,−3,2],[2,1,−3],[4,−3,−1]], B = [[1,4,1,0],[2,1,1,1],[1,−2,1,2]] e C = [[2,1,−1,−2],[3,−2,−1,−1],[2,−5,−1,0]],
mostre que AB = AC.

**Desenvolvimento:**
Calculando AB linha a linha (linha de A vezes cada coluna de B), por exemplo o elemento (1,1):
(AB)₁₁ = 1·1 + (−3)·2 + 2·1 = 1 − 6 + 2 = −3.
Repetindo o processo para todas as posições, obtém-se:

AB = [[−3, −3, 0, 1], [1, 15, 0, −5], [−3, 15, 0, −5]]

Fazendo o mesmo cálculo para AC — por exemplo (AC)₁₁ = 1·2 + (−3)·3 + 2·2 = 2 − 9 + 4 = −3 — chega-se a:

AC = [[−3, −3, 0, 1], [1, 15, 0, −5], [−3, 15, 0, −5]]

Como as duas matrizes resultantes são idênticas, **AB = AC**, mesmo com B ≠ C (isso mostra que, ao contrário dos números reais, não se pode "cancelar" A dos dois lados de uma igualdade matricial).

---

### Exercício 12
**Enunciado:** Explique por que, em geral, (A+B)² ≠ A² + 2AB + B² e (A+B)(A−B) ≠ A² − B².

**Desenvolvimento:**
Expandindo diretamente pela definição de produto de matrizes (sem usar comutatividade, que não vale em geral):

(A+B)² = (A+B)(A+B) = A² + AB + BA + B²

Esse resultado só se reduz a A² + 2AB + B² se AB = BA, ou seja, se A e B comutarem — o que não ocorre em geral para matrizes.

Da mesma forma:

(A+B)(A−B) = A² − AB + BA − B²

que só se reduz a A² − B² quando AB = BA.

**Conclusão:** as fórmulas do produto notável válidas para números reais dependem da comutatividade da multiplicação; como o produto de matrizes não é comutativo em geral (AB ≠ BA), essas identidades falham, a menos que A e B comutem.

---

### Exercício 14
**Enunciado:** Se A = [[3,−2],[−4,3]], ache B, de modo que B² = A.

**Desenvolvimento:**
Suponha B = [[a,b],[c,d]]. Então:

B² = [[a²+bc, b(a+d)], [c(a+d), bc+d²]]

Igualando a A = [[3,−2],[−4,3]]:

(i) a² + bc = 3
(ii) b(a+d) = −2
(iii) c(a+d) = −4
(iv) bc + d² = 3

Dividindo (iii) por (ii) (supondo a+d ≠ 0): c/b = 2, ou seja, c = 2b.

Subtraindo (iv) − (i): d² − a² = 0 ⟹ (d−a)(d+a) = 0. Se a+d = 0, (ii) e (iii) seriam nulas, o que contradiz (ii)=−2. Logo a = d.

Substituindo em (ii): b·(2a) = −2 ⟹ ab = −1 ⟹ b = −1/a, e c = −2/a.

Substituindo em (i): a² + (−1/a)(−2/a) = a² + 2/a² = 3. Fazendo u = a²: u + 2/u = 3 ⟹ u² − 3u + 2 = 0 ⟹ u = 1 ou u = 2.

Tomando u = 1 (a = 1): b = −1, c = −2, d = 1.

**Resposta: B = [[1,−1],[−2,1]]** (verificação: B² = [[1+2, −1−1],[−2−2, 2+1]] = [[3,−2],[−4,3]] = A ✓)

*(B = [[−1,1],[2,−1]], o simétrico, também satisfaz B² = A; há ainda soluções com entradas irracionais, vindas de u = 2.)*

---

### Exercício 16
**Enunciado:** Dada a matriz de rede de comunicação (5 estações)

A = 
```
[0 1 1 1 1]
[1 0 1 1 0]
[0 1 0 1 0]
[0 0 1 0 1]
[0 0 0 1 0]
```
qual seria o significado da matriz A² = A · A? Calcule A².

**Desenvolvimento:**
O elemento (A²)ᵢⱼ = Σₖ aᵢₖaₖⱼ só recebe contribuição não nula quando existe uma estação intermediária k tal que aᵢₖ = 1 **e** aₖⱼ = 1, isto é, quando a estação i transmite diretamente a k, e k transmite diretamente a j. Logo:

**(A²)ᵢⱼ representa o número de formas de a estação i alcançar a estação j usando exatamente uma retransmissão (dois "saltos").**

Calculando o produto:

A² = 
```
[1 1 2 3 1]
[0 2 2 2 2]
[1 0 2 1 1]
[0 1 0 2 0]
[0 0 1 0 1]
```

Por exemplo, (A²)₁₄ = 3 significa que a estação 1 alcança a estação 4 por três caminhos de dois saltos distintos (via 2, via 3 e via 5). Já (A²)₄₂ = 1 confirma o exemplo do livro: a estação 4 alcança a 2 só por uma retransmissão, através da estação 3.

---

### Exercício 18
**Enunciado:** Tente descobrir outras situações concretas que possam ser analisadas de modo similar a cada um dos problemas 15, 16 e 17.

**Desenvolvimento (resposta aberta):**

- **Análogo ao problema 15** (custo de produção via multiplicação de matrizes): qualquer processo de manufatura em que uma matriz descreve "quanto de cada insumo entra em cada produto" e outra traz os preços dos insumos — por exemplo, uma fábrica de móveis (madeira, parafusos, verniz por peça) ou uma indústria alimentícia (matrizes de insumo-produto usadas em economia, como os modelos de Leontief).

- **Análogo ao problema 16** (alcance em rede via A²): redes de contatos em epidemiologia — se aᵢⱼ = 1 indica que a pessoa i teve contato direto com j, A² indica pares de pessoas conectadas por um contato intermediário (útil para rastreamento de contatos); da mesma forma, redes de voos (A² = destinos alcançáveis com uma conexão) ou redes sociais ("amigos de amigos").

- **Análogo ao problema 17** (mudança de hábito via cadeia de Markov): previsão de participação de mercado entre operadoras de celular, hábitos de compra entre marcas de um mesmo produto, ou modelos de rotatividade de clientes entre planos de assinatura — sempre que existe uma probabilidade de "trocar" de uma opção para outra a cada período.

---

## Seção 1.6 — Exercícios

### Exercício 2
**Enunciado:** As probabilidades de um time ganhar, perder e empatar após uma vitória são 1/2, 1/5, 3/10; após uma derrota são 3/10, 3/10, 2/5; após um empate são 1/5, 2/5, 2/5. Se o time não melhorar nem piorar, conseguirá mais vitórias que derrotas a longo prazo?

**Desenvolvimento:**
Organizando a matriz de transição T (colunas = resultado atual, linhas = resultado seguinte, na ordem Vitória, Derrota, Empate):

T = 
```
[1/2   3/10  1/5]
[1/5   3/10  2/5]
[3/10  2/5   2/5]
```

(cada coluna soma 1, como deve ser). A longo prazo, o vetor de probabilidades (V, D, E) se estabiliza num vetor estacionário p tal que Tp = p, com V+D+E=1.

Resolvendo o sistema Tp = p junto com V+D+E=1, obtém-se:

**V = 26/79 ≈ 0,329  D = 24/79 ≈ 0,304  E = 29/79 ≈ 0,367**

**Resposta:** Como V = 26/79 > D = 24/79, a longo prazo o time vence uma fração ligeiramente maior das partidas do que perde — **sim, terá mais vitórias que derrotas**, embora a diferença seja pequena (a maior probabilidade, na verdade, é a de empate).

---

### Exercício 4
**Enunciado:** Se num dia é registrado S (satisfatório), a probabilidade de se ter S no dia seguinte é 2/5; se é registrado I (insatisfatório), a probabilidade de se ter S no dia seguinte é 1/5.
a) Qual é a probabilidade do quarto dia ser S, se o primeiro dia é I?
b) O que se pode dizer a longo prazo sobre a probabilidade de termos dias S ou I?

**Desenvolvimento:**
Matriz de transição (colunas = dia atual, linhas = dia seguinte, ordem S, I):

T = 
```
[2/5  1/5]
[3/5  4/5]
```

**a)** Dia 1 é I com certeza: p₁ = (0, 1). Aplicando T sucessivamente (cada aplicação avança um dia):

p₂ = T·p₁ = (1/5, 4/5)
p₃ = T·p₂ = (6/25, 19/25)
p₄ = T·p₃ = (31/125, 94/125)

**Resposta: P(dia 4 = S) = 31/125 ≈ 0,248**

**b)** O vetor estacionário p = (S, I) satisfaz Tp = p e S + I = 1:

**S = 1/4  I = 3/4**

**Resposta:** Independentemente da condição do primeiro dia, a longo prazo a qualidade do ar será satisfatória (S) em 25% dos dias e insatisfatória (I) em 75% dos dias — a região tende a manter o ar insatisfatório na maior parte do tempo.
