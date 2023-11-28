#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int i, j, k;
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

    void atualizarVitoria(char vitoria[8][3], char casasDisponiveis[9]){
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 3; j++) {
                vitoria[i][j] = casasDisponiveis[(i * 3) + j];
            }
        }
    }

    for(i = 0; i < 9; i++){
        printf("Digite:\n");
        scanf("%c", &casasDisponiveis[i]);
        atualizarVitoria(vitoria, casasDisponiveis);
        for(j = 0; j < 9; j++){
            printf("%c", casasDisponiveis[j]);
        }
        printf("\n");

        for(j = 0; j < 8; j++){
            for(k = 0; k < 3; k++){
                printf("%c", vitoria[j][k]);
            }
        }

    }
}