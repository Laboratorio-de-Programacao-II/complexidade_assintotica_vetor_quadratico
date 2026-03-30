## Enunciado

O arquivo `main.c` contém um programa que:

1. Recebe como argumento de linha de comando um tamanho `N`
2. Aloca dinamicamente um vetor de `N` inteiros
3. Preenche o vetor com valores aleatórios
4. Percorre o vetor contando quantos pares de posições `(i, j)` com `i < j` possuem `v[i] == v[j]` (elementos duplicados)
5. Imprime o resultado

O programa já está completo e funcional. O objetivo deste exercício é **analisar o comportamento quadrático na prática**, medindo o tempo de execução para diferentes valores de `N` e comparando com o lab anterior.

### Como compilar e executar

```bash
make
./prog <N>
```

Exemplo:

```bash
./prog 10000
# N=10000  duplicatas=0
```

---

### Questões de análise

Considere `n = N` como o tamanho da entrada.

1. Analise o código de `main.c` e determine a classe de complexidade do algoritmo de contagem de duplicatas. Justifique sua resposta escrevendo a função **T(n)** que conta o número exato de comparações realizadas em função de `n`. *Dica: quantas iterações o par de loops realiza no total?*

2. Escreva **T(n)** usando notação assintótica (Big O) e explique o que isso significa em termos de comportamento do tempo de execução à medida que `N` cresce.

3. Compare com o algoritmo do laboratório anterior (busca linear). Se ambos forem executados com N = 10.000.000, qual dos dois terminaria primeiro? Justifique usando as complexidades de cada um.

---

### Medição experimental

#### O comando `time`

O comando `time` do bash mede o tempo de execução de qualquer programa. Basta colocá-lo antes do comando que deseja medir:

```bash
time ./prog 10000
```

A saída será algo como:

```
N=10000  duplicatas=0

real    0m0,081s
user    0m0,079s
sys     0m0,002s
```

Use sempre o valor de **real** para preencher a tabela. Converta para milissegundos: `0m0,081s` = 81 ms.

#### Valores de N para medir

Execute o programa para cada valor de N abaixo e anote o tempo real em milissegundos.

| N      | Tempo (ms) |
| :----- | :--------- |
| 500    |            |
| 1.000  |            |
| 1.500  |            |
| 2.000  |            |
| 2.500  |            |
| 3.000  |            |
| 3.500  |            |
| 4.000  |            |
| 4.500  |            |
| 5.000  |            |
| 6.000  |            |
| 7.000  |            |
| 8.000  |            |
| 9.000  |            |
| 10.000 |            |
| 12.000 |            |
| 14.000 |            |
| 16.000 |            |
| 18.000 |            |
| 20.000 |            |
| 23.000 |            |
| 26.000 |            |
| 29.000 |            |
| 32.000 |            |
| 35.000 |            |
| 38.000 |            |
| 41.000 |            |
| 44.000 |            |
| 47.000 |            |
| 50.000 |            |

> **Atenção:** diferente do laboratório anterior, perceba que os valores de N aqui são muito menores — na casa dos milhares, não dos milhões. Mesmo assim, os tempos de execução são comparáveis ou maiores. Reflita sobre o motivo.

---

### Gráfico

Com os dados coletados, plote um gráfico com:

- **Eixo X:** valor de N
- **Eixo Y:** tempo de execução em milissegundos

Você pode usar qualquer ferramenta: Excel, Google Sheets, Python (matplotlib), etc. Após gerar o gráfico, analise se o comportamento observado é coerente com a complexidade teórica que você determinou nas questões 1 e 2.

---

### Arquivos editáveis (edição de outros arquivos resultará em nota 0)
- Nenhum arquivo deve ser editado. A entrega consiste em você submeter o gráfico gerado no Github.

### Notas
- Você pode usar qualquer ferramenta offline do computador para editar e compilar seu código
- Não é permitido acessar qualquer página ou ferramenta de Inteligência Artificial para realizar o exercício
- Compile com `make` e execute com `time ./prog <N>`
- Não há uma resposta correta para o gráfico, mas ele deve ser coerente com a complexidade do algoritmo. Coloque legendas e títulos para facilitar a interpretação.
