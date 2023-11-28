# Jogo da Velha com Inteligência Artificial Simples

## Introdução

### Jogo da velha é um clássico jogo de tabuleiro para dois jogadores que consiste quem conseguir enfileirar (seja na diagonal, vertical ou horizontal) 3 Cìcrculos ou 3 Cruzes (X ou O) para ganhar a partida. Caso não se consiga enfileirar os 3 zeros ou cruzes, o jogo termina em empate (velha). Nesse projeto criamos um algoritmo capaz de gerar um jogo da velha totalmente funcional, com tabuleiro, sistema de vitória, derrota e empate, tudo isso usando linguagem C e suas funções.

## Objetivo do projeto

### Esse projeto tem como objetivo estimular a aprendizagem de linguagem C, onde o principal intuito é criar uma implementação de um jogo da velha virtual e implementar uma “IA” simples, que no caso do projeto, se enquadra como a lógica da máquina.

## Metodologias Utilizadas

### - Controle de fluxo
### - Estruturas condicionais e de repetição que controlam a execução do programa com base em condições específicas ou repetem determinadas ações.
### - Manipulação de Arrays: Utilização de arrays para armazenar e modificar dados, representando o tabuleiro do jogo e controlando a disponibilidade das casas.
### - Funções: Organização modular do código em blocos de código independentes (funções), facilitando a compreensão, manutenção e reutilização do código
### - Entrada e Saídas de Dados: Uso de funções para obter dados do usuário (entrada) e exibir informações (saída) durante a execução do programa.
### - Algoritmo Minimax: Abordagem algorítmica para tomada de decisões estratégicas em jogos, explorando todas as possíveis jogadas para determinar a melhor escolha, minimizando perdas ou maximizando ganhos.

## Implementação

### - Tabuleiro e Controle de Casas: Matriz 3x3 (tab) e array (‘casasDisponiveis’) controlam o tabuleiro e a disponibilidade de casas.
### - Funções Principais
#### - 'verDis’: Verifica e marca a disponibilidade de uma casa.
#### - ‘printTab’: Imprime o tabuleiro.
#### - ‘movX’ e ‘movO’: Funções para as jogadas dos jogadores 'X' e 'O'.
#### - ‘quemGanha’: Verifica se há um vencedor em linhas horizontais, verticais ou diagonais.
#### - Loop Principal: Itera sobre 9 jogadas, chamando ‘movX’ e ‘mob0’, e verifica se a vitória após cada jogada.

## Escolhas de Implementação:

### - Modulação: Uso de funções facilita leitura e manutenção.
### - Verificação de Disponibilidade (‘verDis’): Evita Jogadas em casas ocupadas.
### - Print do Tabuleiro (‘printTab’): Exibe o tabuleiro em diversas direções.
### - Vitoria (‘quemGanha’): Verifica vitória em diversas direções.

## Desafios Enfrentados

### Na elaborar de uma aplicação, seja de um simples jogo da velha até um sistema complexo e robusto, um dos principais aspectos que circundam a mente doa agente programador é, sem dúvida, a abstração. Desde o momento da elaboração da lógica até sua implementação, o ato de abstrair acompanha todo o fluxo de criação. Assim como outras técnicas de desenvolvimento (como criação do algoritmo, decomposição e reconhecimento de padrões), problemas que exigem um olhar mais apurado para sua resolução, tem como característica a intervenção humana direta, pois nenhuma ferramenta ou IA consegue por completo substituir a capacidade lógica humana.

## Resultado

### Os resultados são bons, no começo não esperávamos bons resultados, até porque foram bastante desafios para conclusão desse projeto, mas conseguimos entregar um ótimo projeto no tempo estimado, obviamente houveram contra tempos, mas no final conseguimos entregar nosso Jogo da velha com IA simples. Além disso, acredito que, o que o projeto exigiu tanto da parte técnica quanto da criativa, aguçou muito os sentidos lógicos da nossa parte como estudantes.
