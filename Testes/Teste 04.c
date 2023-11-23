#include <stdio.h>
#include <stdbool.h>

int main() {
    char tab[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'}
    };
    int i, j, v;
    char jogadaX, jogadaO;

    for (v = 0; v < 9; v++) { // for para as 9 jogadas
        printf("V igual a |%d|\n", v);

        // Jogada de X
        if ((v % 2) == 0) {
            jogadaX = 'z';

            printf("Jogador 'X' sua vez:\n");
            printf("Escolha em qual posição do jogo o X ficará:\n");
            scanf(" %c", &jogadaX);

            // Inserindo o X no tabuleiro (tab)
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    if (tab[i][j] == jogadaX) {
                        tab[i][j] = 'X';
                    }
                }
            }

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf(" %c ", tab[i][j]);
                }
                printf("\n");
            }
        }

        // Jogada de 'O'
        else if ((v % 2) != 0) {
            jogadaO = 'z';

            printf("Jogador 'O' sua vez:\n");
            printf("Escolha em qual posição do jogo a 'O' ficará:\n");
            scanf(" %c", &jogadaO);

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    if (tab[i][j] == jogadaO) {
                        tab[i][j] = 'O';
                    }
                }
            }

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf(" %c ", tab[i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}