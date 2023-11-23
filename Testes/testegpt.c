#include <stdio.h>

// Função para imprimir um array bidimensional
void imprimirArrayBidimensional(char array[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'}
    };

    // Chamando a função para imprimir o array bidimensional
    imprimirArrayBidimensional(tabuleiro, 3, 3);

    return 0;
}
