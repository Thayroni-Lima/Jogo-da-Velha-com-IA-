    void movO(){
        if ((v % 2) == 0) {
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


            // Jogada de 'O'
        if ((v % 2) != 0) {
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
            printTab(tab);
        }