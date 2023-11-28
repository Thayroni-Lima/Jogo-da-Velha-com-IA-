#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char tab[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'}
    };
    char casasDisponiveis[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    int i, j, v;
    char jogadaX, jogadaO, MJX, MJO;
    bool laco;

    //-----------------------------------FUNÇÕES---------------------------------------

    //função para retornar caractere aleatório de a-i
    char retRanChar(){
        srand((unsigned int)time(NULL));
        return (rand() % 9) + 'a';
    }

    //Função para verificar disponibilidade de casa e garante a casa não seja jogada novamente
    bool verDis(char jogada, const char XO){
        for(int i = 0; i < 9; i++){
            if(jogada == casasDisponiveis[i]){
                casasDisponiveis[i] = XO;
                return true;
            }
        }
        return false;
    }

    //função para Printar tabuleiro
    void printTab(){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                printf(" %c ", tab[i][j]);
                if (j < 2){
                    printf("|");  
                }
            }
            printf("\n");
            if(i < 2){
                printf("-----------\n");
            }
        }
        printf("\n");
    }

    //função para a jogada de 'X'
    void movX(){
        //1ª tentativa
        if ((v % 2) == 0) {
            printTab(tab);
            jogadaX = '\0';

            //obtendo a jogada pelo modo aleatorio ou pelo modo jogador
            switch (MJX){
                case 'm':
                    jogadaX = retRanChar();
                    break;

                case 'j':
                    printf("Jogador 'X' sua vez.\n");
                    printf("Escolha em qual posição do jogo o 'X' ficará:\n");                
                    scanf(" %c", &jogadaX);
                    break;            
                
                default:
                    break;
            }

            //Inserindo o X no tabuleiro (tab) se a casa estiver disponível
            if(verDis(jogadaX, 'X') == true){
                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        if (tab[i][j] == jogadaX){
                            tab[i][j] = 'X';
                        }
                    }
                }
            }
            
            //Caso não disponível, laço while para jogar casa certa
            else{
                while(laco == false){
                    printTab(tab);
                    jogadaX = '\0';

                    //obtendo a jogada pelo modo aleatorio ou pelo modo jogador
                    switch (MJX){
                        case 'm':
                            jogadaX = retRanChar();
                            break;

                        case 'j':
                            printf("Jogada não disponível. Tente novamente.\n");
                            printf("Escolha em qual posição do jogo o 'X' ficará:\n");
                            scanf(" %c", &jogadaX);
                            break;            
                        
                        default:
                            break;
                    }                    

                    // Inserindo o X no tabuleiro (tab)
                    if(verDis(jogadaX, 'X') == true){
                        laco = true;
                        for (i = 0; i < 3; i++) {
                            for (j = 0; j < 3; j++) {
                                if (tab[i][j] == jogadaX) {
                                    tab[i][j] = 'X';
                                }
                            }
                        }
                    }
                }
                laco = false;
            }
        }
    }
    
    //função para a jogada de 'O'
    void movO(){
        //1ª tentativa
        if ((v % 2) != 0) {
            printTab(tab);
            jogadaO = '\0';

            switch (MJO){
                case 'm':
                    jogadaO = retRanChar();
                    break;

                case 'j':
                    printf("Jogador 'O' sua vez.\n");
                    printf("Escolha em qual posição do jogo o 'O' ficará:\n");
                    scanf(" %c", &jogadaO);
                    break;            
                
                default:
                    break;
            }  

            //Inserindo o O no tabuleiro (tab) se a casa estiver disponível
            if(verDis(jogadaO, 'O') == true){
                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        if (tab[i][j] == jogadaO){
                            tab[i][j] = 'O';
                        }
                    }
                }
            }
            
            //Caso não disponível, laço while para jogar casa certa
            else{
                while(laco == false){
                    printTab(tab);
                    jogadaO = '\0';

                    switch (MJO){
                        case 'm':
                            jogadaO = retRanChar();
                            break;

                        case 'j':
                            printf("Jogada não disponível. Tente novamente.\n");
                            printf("Escolha em qual posição do jogo o 'O' ficará:\n");
                            scanf(" %c", &jogadaO);
                            break;            
                        
                        default:
                            break;
                    }
                        

                    // Inserindo o O no tabuleiro (tab)
                    if(verDis(jogadaO, 'O') == true){
                        laco = true;
                        for (i = 0; i < 3; i++) {
                            for (j = 0; j < 3; j++) {
                                if (tab[i][j] == jogadaO) {
                                    tab[i][j] = 'O';
                                }
                            }
                        }
                    }
                }
                laco = false;
            }
        }
    }

    int quemGanha(char XO){
        //Horizontal
        if((casasDisponiveis[0] == XO && casasDisponiveis[1] == XO && casasDisponiveis[2] == XO) || 
        (casasDisponiveis[3] == XO && casasDisponiveis[4] == XO && casasDisponiveis[5] == XO) ||
        (casasDisponiveis[6] == XO && casasDisponiveis[7] == XO && casasDisponiveis[8] == XO)
        ){
            return 1;
        } 
        //vertical
        else if((casasDisponiveis[0] == XO && casasDisponiveis[3] == XO && casasDisponiveis[6] == XO) || 
        (casasDisponiveis[1] == XO && casasDisponiveis[4] == XO && casasDisponiveis[7] == XO) ||
        (casasDisponiveis[2] == XO && casasDisponiveis[5] == XO && casasDisponiveis[8] == XO)
        ){
            return 2;
        }
        //diagonal
        else if((casasDisponiveis[0] == XO && casasDisponiveis[4] == XO && casasDisponiveis[8] == XO) || 
        (casasDisponiveis[2] == XO && casasDisponiveis[4] == XO && casasDisponiveis[6] == XO)
        ){
            return 3;
        }
        return 0;
    }

    //----------------------------------FIM DE FUNÇÕES-------------------------------------------

    //----------------------------------PROGRAMA-------------------------------------------

    //Apresentação
    printf("\nEis o tabuleiro de Jogo da Velha onde iremos jogar:\n\n");
    printTab(tab);
    printf("---------------------------------------------------------\n\n");
    printf("Escolha o modo de jogo para 'X':\n - Caso queira que o 'X' seja a máquina, digite 'm'. Caso queira jogar, digite 'j':\n");
    scanf(" %c", &MJX);
    printf("Escolha o modo de jogo para 'O':\n - Caso queira que o 'O' seja a máquina, digite 'm'. Caso queira jogar, digite 'j':\n");
    scanf(" %c", &MJO);

    for(v = 0; v < 9; v++){ // for para as 9 jogadas

        printf("%dª jogada:\n\n", v + 1);

        //jogada de X
        movX();
        switch (quemGanha('X'))
        {
        case 1:
            printf("O 'X' ganhou por vitória na horizontal\n");
            printTab();
            return 0;
        
        case 2:
            printf("O 'X' ganhou por vitória na vertical\n");
            printTab();
            return 0;

        case 3:
            printf("O 'X' ganhou por vitória na diagonal\n");
            printTab();
            return 0;
        
        default:
        }


        //jogada de O
        movO();
        switch (quemGanha('O'))
        {
        case 1:
            printf("A 'O' ganhou por vitória na horizontal\n");
            printTab();
            return 0;
        
        case 2:
            printf("A 'O' ganhou por vitória na vertical\n");
            printTab();
            return 0;

        case 3:
            printf("A 'O' ganhou por vitória na diagonal\n");
            printTab();
            return 0;
        
        default:
        }
    }

    printf("Empate! :P");
}