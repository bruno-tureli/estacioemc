#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 10


    int main() {

    int tabuleiro [LIN][COL] = {};
    int i;
    int j;
    int andar1[1] = {3};
    int andar2[3] = {3, 3, 3};
    int andar3[5] = {3, 3, 3, 3, 3};

         //alocação do cone

        for(j = 0; j < 1; j++){
        tabuleiro[0][4 - j] = andar1[i];
         }

        for(j = 0; j < 3; j++){
        tabuleiro[1][3 + j] = andar2[i];
        }

        for(j = 0; j < 5; j++){
        tabuleiro[2][2 + j] = andar3[i];
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

