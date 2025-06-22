#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 10


    int main() {

    int tabuleiro[LIN][COL] = {};
    int i;
    int j;
    int horizonte[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int vertical[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};

    for(j = 0; j < 10; j++){
            tabuleiro[5][9 - j] = horizonte[j];
    }

    for(i = 0; i < 10; i++){
            tabuleiro[0 + i][5] = vertical[i];

    }

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

