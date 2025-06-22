#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 10


    int main () {

    int tabuleiro [LIN][COL] = {};
    int i;
    int j;
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};

    //alocação do navio1 - horizontal
     for(i = 0; i < 3; i++){
        tabuleiro[0][3 + i] = navio1[i];
     }
    //alocação do navio2 - vertical
    for(j = 0; j <3; j++){
        tabuleiro[5 + j][0] = navio2[j];
    }

    // alocação do navio 3 na diagonal

        tabuleiro[1][0] = navio3[i];
        tabuleiro[2][1] = navio3[i];
        tabuleiro[3][2] = navio3[i];
     

     // alocação do navio4 na diagonal secundária

     
        tabuleiro[3][7] = navio4[j];
        tabuleiro[4][6] = navio4[j];
        tabuleiro[5][5] = navio4[j];
     

    //saida de dados do tabuleiro
    printf("....BATALHA NAVAL...\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("%d \t", tabuleiro[i][j]);
        }

             printf("\n");
        }


    return 0;

    }

