#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int i, j;
    char casasDisponiveis[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    char vitoria [8][3] = {
    //vitoria em horizontal:
    {casasDisponiveis[0],casasDisponiveis[1],casasDisponiveis[2]},
    {casasDisponiveis[3],casasDisponiveis[4],casasDisponiveis[5]},
    {casasDisponiveis[6],casasDisponiveis[7],casasDisponiveis[8]},
    //vitoria em vertical:
    {casasDisponiveis[0],casasDisponiveis[3],casasDisponiveis[6]},
    {casasDisponiveis[1],casasDisponiveis[4],casasDisponiveis[7]},
    {casasDisponiveis[2],casasDisponiveis[5],casasDisponiveis[8]},
    //vitoria em diagonal:
    {casasDisponiveis[0],casasDisponiveis[4],casasDisponiveis[8]},
    {casasDisponiveis[2],casasDisponiveis[4],casasDisponiveis[6]}
    };

    void atualizarVitoria(char vitoria[8][3], char casasDisponiveis[9]) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 3; j++) {
                vitoria[i][j] = casasDisponiveis[i * 3 + j];
            }
        }
    }

    for(i = 0; i < 8; i++){
        for(j = 0; j < 3; j++){
            printf("%c", vitoria[i][j]);
        }
        printf("\n");
    }

    bool quemGanha(char XO){
        for(i = 0; i < 8; i++){
            for(j = 0; j < 0; i++){
                if((vitoria[i][j] == XO) && (vitoria[i][j + 1] == XO) && (vitoria[i][j +2] == XO)){
                    return true;
                }
            }
        }
        return false;
    }

    if(quemGanha('X') == true){
        printf("vitoria");
    }else{
        printf("derrota");
    }

    return 0;
}