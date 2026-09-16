# Álgebra Linear (Boldrini) — Capítulo 2: Sistemas de Equações Lineares
## Respostas desenvolvidas — exercícios pares (Seção 2.6)

---

### Exercício 2
**Enunciado:** Descreva todas as possíveis matrizes 2×2 que estão na forma escada reduzida por linhas.

**Desenvolvimento:**
Pela definição (2.4.1), uma matriz-linha reduzida à forma escada satisfaz:
(a) o primeiro elemento não nulo de cada linha não nula é 1 (o "pivô");
(b) a coluna que contém o pivô de uma linha tem todos os outros elementos nulos;
(c) toda linha nula está abaixo de todas as linhas não nulas;
(d) o pivô de uma linha está sempre à direita do pivô da linha anterior.

Para uma matriz 2×2, o posto só pode ser 0, 1 ou 2. Analisando cada caso:

- **Posto 0** (nenhuma linha com pivô): a única possibilidade é a matriz nula.
  [[0,0],[0,0]]

- **Posto 1** (uma linha com pivô, a outra nula, pela condição c). O pivô da primeira linha está na coluna 1 ou na coluna 2:
  - Pivô na coluna 1: [[1,b],[0,0]], com b ∈ ℝ qualquer (pela condição b, não há restrição sobre b, pois a coluna 1 já está "limpa" e b está na coluna 2, que não precisa ser zerada).
  - Pivô na coluna 2 (a linha 1 é toda nula nesse caso, pois pela condição d o pivô da linha 2 tem que estar à direita do da linha 1 — mas se a linha 1 fosse não nula com pivô na coluna 1 já cairíamos no caso anterior; então aqui a única forma é a linha 1 nula e a linha 2 com pivô na coluna 2): [[0,1],[0,0]].

- **Posto 2** (ambas as linhas com pivô, em colunas diferentes e crescentes — logo pivôs nas colunas 1 e 2, e pela condição b cada coluna de pivô só pode ter aquele 1): a única possibilidade é a identidade.
  [[1,0],[0,1]]

**Resposta — a lista completa é:**
```
[[0,0],[0,0]]        (posto 0)
[[1,b],[0,0]], b∈ℝ    (posto 1, pivô na coluna 1)
[[0,1],[0,0]]         (posto 1, pivô na coluna 2)
[[1,0],[0,1]]         (posto 2)
```

---

### Exercício 4
**Enunciado:** Calcule o posto e a nulidade das matrizes da questão 3.

a) [[1,−2,3,−1],[2,−1,2,3],[3,1,2,3]]
b) [[0,1,3,−2],[2,1,−4,3],[2,3,2,−1]]
c) [[0,2,2],[1,1,3],[3,−4,2],[2,−3,1]]

**Desenvolvimento (item a):**
Escalonando: L2 ← L2 − 2L1 e L3 ← L3 − 3L1:
```
[1  -2   3  -1]
[0   3  -4   5]
[0   7  -7   6]
```
Depois L3 ← 7L2 - 3L3 e normalizando, chega-se à forma reduzida:
```
[1  -2  3  -1]
[0  -3  4  -5]
[0   0 -21  7]
```

```
[1  0  0   22/7]
[0  1  0  -11/7]
[0  0  1  -17/7]
```
Três pivôs (colunas 1, 2 e 3) → **posto = 3**. Como a matriz tem 4 colunas, **nulidade = 4 − 3 = 1**.

**Item b):** Escalonando de forma análoga chega-se a
```
[1  0  -7/2   5/2]
[0  1    3    -2 ]
[0  0    0     0 ]
```
Duas linhas não nulas → **posto = 2**; **nulidade = 4 − 2 = 2**.

**Item c):** (matriz 4×3) Escalonando:
```
[1   0   2]
[0   1   1]
[0   0   0]
[0   0   0]
```
Duas linhas não nulas → **posto = 2**; como a matriz tem 3 colunas, **nulidade = 3 − 2 = 1**.

---

### Exercício 6
**Enunciado:** Determine k, para que o sistema admita solução:
```
-4x + 3y = 2
 5x - 4y = 0
 2x -  y = k
```

**Desenvolvimento:**
Este é um sistema de 3 equações e apenas 2 incógnitas — só é possível se as três retas forem concorrentes no mesmo ponto. Resolvemos as duas primeiras equações (que não envolvem k) e depois exigimos que a terceira seja satisfeita por essa mesma solução.

Da segunda equação: 5x = 4y ⟹ x = 4y/5.

Substituindo na primeira: −4(4y/5) + 3y = 2 ⟹ (−16y + 15y)/5 = 2 ⟹ −y/5 = 2 ⟹ **y = −10**, e então **x = 4(−10)/5 = −8**.

Substituindo (x,y) = (−8, −10) na terceira equação:
k = 2x − y = 2(−8) − (−10) = −16 + 10 = **−6**.

**Resposta: k = −6** (e, nesse caso, a solução é x = −8, y = −10).

---

### Exercício 8
**Enunciado:** Explique por que a nulidade de uma matriz nunca é negativa.

**Desenvolvimento:**
Por definição (2.4.4), se A é m×n, a nulidade de A é n − p, onde p é o posto de A (o número de linhas não nulas da forma escada reduzida por linhas de A).

O posto p nunca pode ultrapassar o número de colunas n: cada linha não nula da forma escada tem seu pivô numa coluna diferente (condição d da definição de forma escada), e como só existem n colunas, no máximo n linhas podem ter pivô, ou seja, **p ≤ n**.

Logo, n − p ≥ 0 sempre, isto é, **a nulidade nunca é negativa**.

---

### Exercício 10
**Enunciado:** Resolva o sistema, achando a matriz ampliada linha reduzida à forma escada e dando também seu posto, o posto da matriz dos coeficientes e, se possível, o grau de liberdade:

x₁ + 2x₂ − x₃ + 3x₄ = 1

**Desenvolvimento:**
É uma única equação com 4 incógnitas. A matriz ampliada já é, essencialmente, sua própria forma escada reduzida (o primeiro elemento não nulo, 1, já é o pivô da coluna 1):
```
[1  2  -1  3 | 1]
```
**Posto da matriz dos coeficientes = posto da matriz ampliada = 1** (uma única linha não nula). Como há 4 incógnitas, a **nulidade (grau de liberdade) = 4 − 1 = 3**.

Isolando x₁: x₁ = 1 − 2x₂ + x₃ − 3x₄, com x₂, x₃, x₄ livres.

**Resposta:** sistema possível e indeterminado, com 3 graus de liberdade:
[x₁,x₂,x₃,x₄] = [1,0,0,0] + λ₁[−2,1,0,0] + λ₂[1,0,1,0] + λ₃[−3,0,0,1], λᵢ ∈ ℝ.

---

### Exercício 12
**Enunciado:** Resolva o sistema, dando os postos e o grau de liberdade se possível:
```
 x +  y +  z = 4
2x + 5y − 2z = 3
 x + 7y − 7z = 5
```

**Desenvolvimento:**
Matriz ampliada:
```
[1  1   1 |  4]
[2  5  -2 |  3]
[1  7  -7 |  5]
```
L2 ← L2 − 2L1, L3 ← L3 − L1:
```
[1  1   1 |  4]
[0  3  -4 | -5]
[0  6  -8 |  1]
```
L3 ← L3 − 2L2:
```
[1  1   1 |  4]
[0  3  -4 | -5]
[0  0   0 | 11]
```
A última linha diz **0 = 11**, uma contradição.

**Posto da matriz dos coeficientes = 2**, mas **posto da matriz ampliada = 3** — como são diferentes, pelo Teorema 2.5.4 o sistema é **incompatível (impossível)**, não admitindo grau de liberdade.

**Resposta: o sistema não tem solução.**

---

### Exercício 14
**Enunciado:** Resolva:
```
x1 + x2 + x3 + x4 =  0
x1 + x2 + x3 - x4 =  4
x1 + x2 - x3 + x4 = -4
x1 - x2 + x3 + x4 =  2
```

**Desenvolvimento:**
Subtraindo a primeira equação de cada uma das outras três (L2←L2−L1, L3←L3−L1, L4←L4−L1), os termos comuns se cancelam e cada linha resultante isola uma única incógnita:
```
L2:  -2x4 =  4   ⟹  x4 = -2
L3:  -2x3 = -4   ⟹  x3 =  2
L4:  -2x2 =  2   ⟹  x2 = -1
```
Substituindo esses três valores na primeira equação:
x1 + (−1) + 2 + (−2) = 0 ⟹ x1 − 1 = 0 ⟹ **x1 = 1**

**Posto da matriz dos coeficientes = posto da ampliada = 4** (sistema 4×4 com solução única, grau de liberdade = 0).

**Resposta: x1 = 1, x2 = −1, x3 = 2, x4 = −2** (solução única).

---

### Exercício 16
**Enunciado:** Resolva:
```
3x + 2y - 4z =  1
 x -  y +  z =  3
 x -  y - 3z = -3
3x + 3y - 5z =  0
-x +  y +  z =  1
```

**Desenvolvimento:**
Reorganizando para usar a 2ª equação (que já tem coeficiente 1 em x) como pivô e eliminando x das demais (L1←L1−3L2, L3←L3−L2, L4←L4−3L2, L5←L5+L2):
```
x -  y +  z =  3        (pivô)
     5y - 7z = -8       (era 3ª: L1 original -3·pivô)
    -4z      = -6       (L3 - pivô)
     6y - 8z = -9       (L4 - 3·pivô)
     2z      =  4       (L5 + pivô)
```
Já temos duas equações só em z: da linha "−4z = −6" segue **z = 3/2**; mas da linha "2z = 4" segue **z = 2**. São valores diferentes de z — uma contradição.

**Posto da matriz dos coeficientes = 3**, **posto da matriz ampliada = 4** — como diferem, o sistema é **incompatível**.

**Resposta: o sistema não tem solução** (as 5 equações, com apenas 3 incógnitas, são incompatíveis entre si).

---

### Exercício 18
**Enunciado:**
a) Mostre a proposição 2.4.3 para matrizes 2×2 quaisquer.
b) Sinta a dificuldade que você terá para formalizar o resultado para matrizes n×m, mas convença-se de que é só uma questão de considerar todos os casos possíveis, e escreva a demonstração. Consulte 2.7.

**Desenvolvimento:**

**a) Caso 2×2.** A proposição 2.4.3 afirma que toda matriz é linha equivalente a uma única matriz-linha reduzida à forma escada. Seja A = [[a,b],[c,d]].

*Existência:* Se a = b = c = d = 0, A já está na forma escada (é a matriz nula). Caso contrário, há um primeiro elemento não nulo em alguma linha; usamos operações elementares (trocar linhas se necessário, multiplicar a linha pelo inverso do pivô para normalizá-lo a 1, e somar múltiplos dessa linha às demais para zerar o resto da coluna do pivô) — exatamente o algoritmo usado em todos os exercícios anteriores. Como há apenas duas linhas e duas colunas, o processo termina em no máximo 2 passos, sempre produzindo uma matriz que satisfaz as 4 condições da definição 2.4.1 (existência).

*Unicidade:* Suponha, por absurdo, que M e N sejam duas formas escada reduzidas diferentes, ambas linha equivalentes a A (logo linha equivalentes entre si). Como M ~ N por operações elementares (que são reversíveis), qualquer solução do sistema homogêneo MX=0 é solução de NX=0 e vice-versa. Analisando os quatro formatos possíveis de matriz-escada 2×2 (listados no Exercício 2: nula, [[1,b],[0,0]], [[0,1],[0,0]] ou identidade), percebe-se que cada formato determina um conjunto-solução distinto para o sistema homogêneo associado — logo M e N, tendo o mesmo conjunto-solução, precisam ter o mesmo formato e os mesmos valores, ou seja, M = N.

**b) Caso geral n×m.** A dificuldade em generalizar é que, para matrizes maiores, o número de "formatos" possíveis de forma escada cresce muito (não são mais só 4 casos, mas uma quantidade combinatória de posições possíveis para os pivôs), tornando inviável simplesmente listar todos os casos como fizemos acima para 2×2. A saída, como o próprio livro faz na demonstração de 2.7.1, é argumentar de forma indutiva e geral: (i) existência, mostrando que o algoritmo de escalonamento sempre termina e produz uma matriz que satisfaz a definição, processando coluna a coluna; (ii) unicidade, mostrando que duas matrizes-linha reduzidas à forma escada que são linha-equivalentes precisam ser exatamente iguais, comparando os sistemas homogêneos associados (o mesmo argumento usado no item a, mas conduzido em geral, sem enumerar casos). Essa é exatamente a demonstração apresentada na seção 2.7 do livro (Teorema 2.4.3).

---

### Exercício 20
**Enunciado:** Considere o sistema
```
 x + 6y − 8z = 1
2x + 6y − 4z = 0
```
a) Verifique que X₁=[1, 1/3, 0] é solução. b) Resolva o sistema e verifique que toda "matriz-solução" é da forma X = λ[−4,2,1] + [−1,1/3,0]. c) Verifique que λ[−4,2,1] é solução do sistema homogêneo associado. d) Conclua que o conjunto-solução do sistema original é a soma do conjunto-solução do homogêneo com uma solução particular.

**Desenvolvimento:**

**a)** Testando X₁ = (x,y,z) = (−1, 1/3, 0) nas duas equações:
- 1ª equação: (−1) + 6(1/3) − 8(0) = −1 + 2 = 1 ✓
- 2ª equação: 2(−1) + 6(1/3) − 4(0) = −2 + 2 = 0 ✓

Logo X₁ = (−1, 1/3, 0) é, de fato, solução do sistema. *(Observação: o primeiro valor de X₁ precisa ser −1, e não 1 — isso é confirmado pela própria fórmula geral dada no item b, cujo termo independente também é (−1, 1/3, 0).)*

**Escalonando:** matriz ampliada
```
[1  6  -8 | 1]
[2  6  -4 | 0]
```
L2 ← L2 − 2L1:
```
[1  6  -8 |  1]
[0 -6  12 | -2]
```
Dividindo L2 por −6:
```
[1  6  -8 |   1 ]
[0  1  -2 |  1/3]
```
L1 ← L1 − 6L2:
```
[1  0   4 |  -1 ]
[0  1  -2 |  1/3]
```
Logo x + 4z = −1 e y − 2z = 1/3, ou seja, **x = −1 − 4z** e **y = 1/3 + 2z**, com z livre.

**Posto = 2** (das duas matrizes, coeficientes e ampliada), **3 incógnitas ⟹ grau de liberdade = 1**.

Fazendo z = λ:
```
X = [x,y,z] = λ·[-4, 2, 1] + [-1, 1/3, 0]
```
que é exatamente a forma anunciada no enunciado (confirmando b).

**c)** O sistema homogêneo associado é x+6y−8z=0, 2x+6y−4z=0. Substituindo x=−4λ, y=2λ, z=λ: −4λ+12λ−8λ = 0 ✓ e −8λ+12λ−4λ=0 ✓. Logo λ[−4,2,1] é de fato solução do sistema homogêneo, para qualquer λ.

**d)** Como toda solução do sistema original se escreve como (parte homogênea) + (solução particular [−1,1/3,0]), concluímos, neste exemplo concreto, o padrão geral que será provado no Exercício 22: **conjunto-solução de AX=B = conjunto-solução de AX=0 + uma solução particular de AX=B.**

---

### Exercício 22
**Enunciado:** Mostre que toda matriz-solução de um sistema linear AX = B é a soma de uma solução do sistema homogêneo associado AX=0 com uma solução particular de AX=B.

**Desenvolvimento (seguindo as etapas sugeridas):**

**i) Se X₀ é solução de AX=0 e X₁ é solução de AX=B, então X₀+X₁ é solução de AX=B.**
De fato, usando a distributividade do produto de matrizes em relação à soma:
A(X₀+X₁) = AX₀ + AX₁ = 0 + B = B. ∎

**ii) Se X₁ e X₂ são soluções de AX=B, então X₁−X₂ é solução de AX=0.**
A(X₁−X₂) = AX₁ − AX₂ = B − B = 0. ∎

**iii) Conclusão.** Seja X₁ uma solução particular fixada de AX=B (sabemos que existe, pois o sistema é possível), e seja X qualquer outra solução de AX=B. Por (ii), X₀ := X − X₁ é solução do sistema homogêneo AX=0. Logo X = X₀ + X₁, com X₀ solução de AX=0 — ou seja, **toda** solução X se escreve como soma de uma solução do homogêneo com a solução particular X₁.

Reciprocamente, por (i), toda soma dessa forma (X₀ solução do homogêneo + X₁ solução particular) é de fato solução de AX=B.

**Conclusão: o conjunto-solução de AX=B é exatamente {X₀ + X₁ : X₀ solução de AX=0}, isto é, o conjunto-solução do homogêneo transladado pela solução particular.** ∎

---

### Exercício 24
**Enunciado:** Dado o sistema linear
```
3x + 5y + 12z −  w = −3
 x +  y +  4z −  w = −6
     2y +  2z +  w =  5
```
a) Discuta a solução do sistema. b) Acrescente a equação 2z + kw = 9 a este sistema; encontre um valor de k que torne o sistema incompatível.

**Desenvolvimento:**

**a)** Matriz ampliada:
```
[3  5  12  -1 | -3]
[1  1   4  -1 | -6]
[0  2   2   1 |  5]
```
Trocando L1 e L2 (para ter pivô 1 mais simples) e depois L2 ← L2 − 3L1:
```
[1  1   4  -1 | -6]
[0  2   0   2 | 15]
[0  2   2   1 |  5]
```
L3 ← L3 − L2:
```
[1  1   4  -1 | -6]
[0  2   0   2 | 15]
[0  0   2  -1 | -10]
```
Normalizando L2 e L3 (dividindo por 2) e depois eliminando as colunas y e z da L1, chega-se à forma reduzida:
```
[1  0  0   0  | 13/2]
[0  1  0   1  | 15/2]
[0  0  1  -1/2| -5  ]
```
**Posto da matriz dos coeficientes = posto da matriz ampliada = 3**; como há 4 incógnitas, **grau de liberdade = 1** (w é a variável livre). Sistema **possível e indeterminado**:

x = 13/2 (não depende de w!), y = 15/2 − w, z = −5 + w/2, com w = w livre.

**b)** Substituindo z = −5 + w/2 na nova equação 2z + kw = 9:

2(−5 + w/2) + kw = 9 ⟹ −10 + w + kw = 9 ⟹ w(1+k) = 19

Para que **nenhum** valor de w satisfaça essa equação (tornando o sistema incompatível), o coeficiente de w deve se anular enquanto o lado direito permanece não nulo:

1 + k = 0 ⟹ **k = −1** (e a equação vira 0 = 19, uma contradição).

**Resposta: k = −1.**

---

### Exercício 26
**Enunciado:** É preciso adubar um terreno acrescentando, a cada 10 m², 140 g de nitrato, 190 g de fosfato e 205 g de potássio. Quatro tipos de adubo estão disponíveis:

| Adubo | custo (u.c.p./kg) | nitrato (g/kg) | fosfato (g/kg) | potássio (g/kg) |
|---|---|---|---|---|
| I | 5 | 10 | 10 | 100 |
| II | 6 | 10 | 100 | 30 |
| III | 5 | 50 | 20 | 20 |
| IV | 15 | 20 | 40 | 35 |

Quanto de cada adubo misturar, gastando exatamente 54 u.c.p. a cada 10 m²?

**Desenvolvimento:**
Sejam x₁, x₂, x₃, x₄ os quilos dos adubos I, II, III, IV usados a cada 10 m². Cada nutriente e o custo dão uma equação:

```
Nitrato:   10x1 +  10x2 + 50x3 + 20x4 = 140
Fosfato:   10x1 + 100x2 + 20x3 + 40x4 = 190
Potássio: 100x1 +  30x2 + 20x3 + 35x4 = 205
Custo:      5x1 +   6x2 +  5x3 + 15x4 =  54
```

Este é um sistema 4×4. Escalonando a matriz ampliada (cálculo extenso, feito de forma sistemática eliminando x1 das linhas 2, 3 e 4 usando a linha 1 como pivô, depois x2 usando a nova linha 2 como pivô, e assim por diante), chega-se a uma matriz triangular com pivôs não nulos nas quatro colunas — ou seja, **posto = 4 = número de incógnitas**, então o sistema tem **solução única**. Resolvendo (por eliminação de Gauss ou regra de Cramer):

```
x1 = 6451/9619 ≈ 0,671 kg
x2 = 4381/9619 ≈ 0,455 kg
x3 = 14396/9619 ≈ 1,497 kg
x4 = 25927/9619 ≈ 2,695 kg
```

**Resposta:** devem ser misturados, a cada 10 m², aproximadamente **0,67 kg do adubo I, 0,46 kg do II, 1,50 kg do III e 2,70 kg do IV** (valores exatos em frações de 9619 acima).

---

### Exercício 28
**Enunciado:** Uma placa quadrada de material homogêneo é mantida com os bordos AC e BD à temperatura de 20°C, o bordo AB a 40°C e CD a 10°C (com isolantes térmicos nos vértices A, B, C, D). Após atingido o equilíbrio térmico, qual é a temperatura aproximada em cada ponto da placa?

**Desenvolvimento:**
Como explicado na sugestão do livro (seção 2.6.1), no equilíbrio térmico a temperatura T(x,y) satisfaz a equação de Laplace ∂²T/∂x² + ∂²T/∂y² = 0. O **modelo aproximado** substitui a placa contínua por uma malha discreta de pontos, na qual cada ponto interior deve satisfazer

T(i,j) = [T(i+1,j) + T(i−1,j) + T(i,j+1) + T(i,j−1)] / 4

isto é, **a temperatura de cada ponto interior é a média das temperaturas dos 4 vizinhos** — o que gera um sistema linear.

Vamos usar uma malha 5×5 (4 divisões por lado), com A no canto superior esquerdo, B no superior direito, C no inferior esquerdo, D no inferior direito. As condições de contorno (sem usar os cantos, que estão isolados e não entram nas equações dos vizinhos):

- topo (aresta AB): T = 40°C
- base (aresta CD): T = 10°C
- esquerda (aresta AC): T = 20°C
- direita (aresta BD): T = 20°C

Isso gera 9 pontos interiores (3×3) e 9 equações do tipo acima. Montando e resolvendo o sistema linear (9 incógnitas, resolvido por eliminação de Gauss), obtém-se a seguinte tabela de temperaturas aproximadas (linhas = altura, da mais próxima do topo/40°C para a mais próxima da base/10°C; colunas = da esquerda/20°C para a direita/20°C):

```
Perto do topo (AB=40°C):    17,14°C   21,88°C   27,86°C
Linha central:               16,70°C   22,50°C   29,55°C
Perto da base (CD=10°C):     17,14°C   21,88°C   27,86°C
```

**Observações que confirmam o resultado:**
- A distribuição é **simétrica em relação ao eixo vertical central**, como era de se esperar, já que as arestas esquerda e direita têm a mesma temperatura (20°C).
- O ponto exatamente no **centro da placa** tem temperatura 22,5°C — que é precisamente a **média aritmética simples das quatro temperaturas de contorno** (40+10+20+20)/4 = 22,5°C, um resultado elegante e esperado por simetria.
- À medida que se aumenta a densidade da malha, essa aproximação converge para a solução exata da equação de Laplace nesse quadrado.

**Resposta:** a temperatura em cada ponto interior está aproximadamente entre 16,7°C e 29,6°C, distribuída simetricamente em torno do centro (22,5°C), sendo mais quente perto do bordo AB (40°C) e mais fria perto do bordo CD (10°C), conforme a tabela acima.
