#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 3

void imprimirTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAMANHO - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < TAMANHO - 1) {
            printf("-----------\n");
        }
    }
}

int verificarVitoria(char tabuleiro[TAMANHO][TAMANHO], char jogador) {
    for (int i = 0; i < TAMANHO; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1; // Vitória
        }
    }

    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1; // Vitória
    }

    int empate = 1;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == ' ') {
                empate = 0;
                break;
            }
        }
        if (!empate) {
            break;
        }
    }
    if (empate) {
        return 2; // Empate
    }

    return 0; // Jogo continua
}

void fazerJogada(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char jogador) {
    if (linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO && tabuleiro[linha][coluna] == ' ') {
        tabuleiro[linha][coluna] = jogador;
    } else {
        printf("Jogada inválida. Tente novamente.\n");
    }
}

void fazerJogadaMaquina(char tabuleiro[TAMANHO][TAMANHO], char jogador) {
    int linha, coluna;

    // Implementação simples de escolha aleatória
    do {
        linha = rand() % TAMANHO;
        coluna = rand() % TAMANHO;
    } while (tabuleiro[linha][coluna] != ' ');

    printf("A máquina jogou na linha %d, coluna %d.\n", linha, coluna);
    tabuleiro[linha][coluna] = jogador;
}

int main() {
    char tabuleiro[TAMANHO][TAMANHO];
    int linha, coluna;
    char jogador = 'X';
    int estadoJogo = 0;

    srand(time(NULL)); // Inicializar a semente para a escolha aleatória

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    do {
        imprimirTabuleiro(tabuleiro);

        if (jogador == 'X') {
            printf("Jogador X, faça sua jogada (linha e coluna): ");
            scanf("%d %d", &linha, &coluna);
            fazerJogada(tabuleiro, linha, coluna, jogador);
        } else {
            printf("A vez da máquina (O).\n");
            fazerJogadaMaquina(tabuleiro, jogador);
        }

        estadoJogo = verificarVitoria(tabuleiro, jogador);

        jogador = (jogador == 'X') ? 'O' : 'X';

    } while (estadoJogo == 0);

    imprimirTabuleiro(tabuleiro);
    if (estadoJogo == 1) {
        printf((jogador == 'X') ? "Jogador X venceu!\n" : "A máquina venceu!\n");
    } else {
        printf("O jogo terminou em empate!\n");
    }

    return 0;
}