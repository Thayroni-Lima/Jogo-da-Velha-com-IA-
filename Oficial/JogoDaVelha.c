#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    char tab[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'}
    };
    int i, j, v;
    char jogadaX, jogadaO;
    
    //-----------------------------------FUNÇÕES---------------------------------------
    //função para Printar tabuleiro
    void printTab(char tab[3][3]){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                printf(" %c ", tab[i][j]);
            }
            printf("\n");
        };
        printf("\n");
    }

    //função para a jogada de 'X'
    void movX(){
        if ((v % 2) == 0) {
            jogadaX = 'z';

            printf("Jogador 'X' sua vez.\n");
            printf("Escolha em qual posição do jogo o  'X' ficará:\n");
            scanf(" %c", &jogadaX);

            // Inserindo o X no tabuleiro (tab)
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    if (tab[i][j] == jogadaX) {
                        tab[i][j] = 'X';
                    }
                }
            }
            printTab(tab);
        }
    }
    
    //função para a jogada de 'O'
    void movO(){
        if ((v % 2) != 0) {
            jogadaO= 'z';

            printf("Jogador 'O' sua vez.\n");
            printf("Escolha em qual posição do jogo o  'O' ficará:\n");
            scanf(" %c", &jogadaO);

            // Inserindo o O no tabuleiro (tab)
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    if (tab[i][j] == jogadaO) {
                        tab[i][j] = 'O';
                    }
                }
            }
            printTab(tab);
        }
    }

    //----------------------------------FIM DE FUNÇÕES-------------------------------------------

/*---------------------------------------------------------------------------------------------*/

    //----------------------------------PROGRAMA-------------------------------------------

    //Apresentação
    printf("\nEis o tabuleiro de Jogo da Velha onde iremos jogar:\n\n");
    printTab(tab);
    printf("---------------------------------------------------------\n\n");

    for(v = 0; v < 9; v++){ // for para as 9 jogadas
        printf("%dª jogada:\n", v + 1);

        movX();

        movO();
    }

    return 0;
}