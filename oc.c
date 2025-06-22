#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 10


    int main () {

    int tabuleiro [LIN][COL] = {};
    int i;
    int j;
    int linha1[1] = {3};
    int linha2[3] = {3, 3, 3};
    int linha3[3] = {3};

    //Alocação da forma geométrica

    for(j = 0; j < 1; j++){
        tabuleiro[4][5 - j] = linha1[j];
    }

    for(j = 0; j < 3; j++){
        tabuleiro[5][6 - j] = linha2[j];
    }

    for(j = 0; j < 1; j++){
        tabuleiro[6][5 - j] = linha3[j];
    }


    printf("....BATALHA NAVAL...\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
             printf("%d \t", tabuleiro[i][j]);
        }

             printf("\n");
        }


    return 0;

    }



