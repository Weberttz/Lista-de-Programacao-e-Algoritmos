# Repositório de Listas de Programação e Algoritmos

Este repositório reúne uma coleção de exercícios resolvidos em linguagem C, organizados por listas temáticas e provas antigas. Cada diretório é autocontido, contendo o código-fonte das soluções, arquivos de enunciado quando disponíveis, e, em alguns casos, arquivos de saída (executáveis) para facilitar testes.

---

## Estrutura Geral

```
/Lista1PA        # Algoritmos básicos
/Lista2PA        # Vetores e Matrizes
/Lista3PA        # Struct e Strings
/Lista4PA        # Funções
/Lista5PA        # Entrada/Saída e Arquivos
/Lista6PA        # Arquivos de texto e manipulação
/Provas          # Questões de provas realizadas
/ProvasAntigas   # Provas de semestres anteriores
README.md        # Este arquivo de documentação
```

Cada pasta de lista contém subpastas `questaoXX.c` ou, em alguns casos, diretamente o arquivo da questão. Os enunciados originais estão incluídos em arquivos PDF ou em pastas `Arquivos/` conforme disponibilizado pelo curso.

---

## Lista 1 – Algoritmos

- Exercícios sobre lógica de programação, estruturas de decisão e repetição.
- Organização: cada exercício em um arquivo `questaoNN.c` dentro da pasta `Lista1PA/`.
- Enunciados: `Lista de Exercicios - Algoritmos.pdf`.

## Lista 2 – Vetores e Matrizes

- Problemas envolvendo vetores unidimensionais e matrizes bidimensionais.
- Arquivos localizados em `Lista2PA/` com nomes `questaoNN.c`.
- Enunciados: `Lista de Exercicios - Vetores e matrizes.pdf`.

## Lista 3 – Struct e Strings

- Foco em registros (`struct`) e manipulação de cadeias de caracteres.
- Soluções em `Lista3PA/questaoNN.c`.
- Enunciados: `Lista de Exercicios - Struct, strings e matrizes.pdf`.

## Lista 4 – Funções

- Exercícios projetados para praticar decomposição de problemas em funções.
- Cada questão possui seu próprio arquivo `questaoNN.c` sob `Lista4PA/`.
- Enunciados: `Lista de Exercicios - Funcoes.pdf`.

## Lista 5 – Ponteiros

- Conteúdo voltado para a prática de exercícios com a utilização de ponteiros.
- Local: `Lista5PA/questaoNN.c`.
- Enunciados: `Lista de Exercicios - Ponteiros.pdf`.

## Lista 6 – Arquivos de Texto e Manipulação

- Tarefas envolvendo leitura, escrita e processamento de arquivos texto.
- Além dos arquivos `.c`, há uma subpasta `Arquivos/` com exemplos de dados (`Animal.txt`, `arquivo1.txt`, etc.) utilizados nos exercícios.
- Enunciados: `Lista de Exercicios - Arquivos.pdf`.

---

## Provas

- Diretório `Provas/` contém questões aplicadas em avaliações (NPC2 no exemplo).
- Cada prova possui suas próprias pastas `questaoNN.c` e, quando necessário, subpasta `Arquivos/` para dados de entrada.

## Provas Antigas

- Armazena provas de semestres passados organizadas por número (`Prova01/`, `Prova02/`, `Prova03/`).
- Inclui código das questões e, ocasionalmente, anexos com arquivos de dados.

---

## Como utilizar

1. Navegue até a pasta da lista desejada.
2. Compile o código usando 
   ```sh
   gcc questaoNN.c -o questaoNN
   ```
3. Execute o binário gerado ou abra o arquivo fonte para revisão.
4. Consulte os PDFs para ver os enunciados e exemplos de entrada.

---

## Contribuições

Este repositório foi criado para estudos pessoais e não está previsto para contribuições externas.

---

**Autor:** Weberttz  
**Data:** atualizada em março de 2026.
