#include <stdio.h>
#include <stdlib.h>
#include <time.h>



       int main() {

       // dados da primeira carta

       char Carta1[50] = "Carta1"; 
       char Estado1 = 'S';
       char A01[50] = "A01";
       char Araraquara[50] = "Araraquara";
       int Populacao1 = 252318;
       float Area1 = 1003.625;
       float Pib1 = 11953000.03;
       int Pontosturisticos1 = 4;
       float Densidade1 = Populacao1 / Area1;
       float Pibpercapita1 = Pib1 / Populacao1;
       float Supertrunfo1 = Populacao1 + Area1 + Pib1 + Pontosturisticos1 + Pibpercapita1 + (Area1 / Populacao1);

      
       // dados da segunda carta
     
       char Carta2[50] = "carta2";
       char Estado2 = 'S';
       char B02[50] = "B02";
       char Palhoca[50] = "Palhoca";
       int Populacao2 = 245477;
       float Area2 = 394.850;
       float Pib2 = 8209000.05;
       int Pontosturisticos2 = 4;
       float Densidade2 = Populacao2 / Area2;
       float Pibpercapita2 = Pib2 / Populacao2;
       float Supertrunfo2 = Populacao2 + Area2 + Pib2 + Pontosturisticos2 + Pibpercapita2 + (Area2 / Populacao2);

       // Exibindo menu

       int opcaoJogador;
       int atributo1;
       int atributo2;
       int resultado1;
       int resultado2;
       int soma;  

       printf("Bem ao jogo do Super-Trunfo!\n");
       printf("Escolha uma opcao\n");
       printf("1. Iniciar o Jogo\n");
       printf("2. Carregar o Jogo\n");
       printf("3. Sair\n");
       scanf("%d", &opcaoJogador);

       switch (opcaoJogador)
       { 
         case 1: 
          printf("Execução do jogo\n");

          printf("Escolha o primeiro atributo\n");
          printf("1. Populacao1\n");
          printf("2. Area1\n");
          printf("3. Pib1\n");
          printf("4. Pontosturisticos1\n");
          printf("5. Densidade1\n");
          printf("6. Pibpercapita1\n");
          printf("7. Supertrunfo1\n");
          scanf("%d", &atributo1);
            
          
           switch (atributo1)
          {
            case 1:
              printf("Voce escolheu: Populacao1\n");
              break;
            
            case 2:
              printf("Voce escolheu: Area1\n");
              break;
           
            case 3:
              printf("Voce escolheu: Pib1\n");
              break;

            case 4:
              printf("Voce escolheu: Pontosturisticos1\n");
              break;

            case 5:
              printf("Voce escolheu: Densidade1\n");
              break;

            case 6:
              printf("Voce escolheu: Pibpercapita1\n");
              break;
              
            case 7:
              printf("Voce escolheu: Supertrunfo1\n");
              break;

              default:
              printf("none: \n");
              break;

            }
            
           printf("Escolha o segundo atributo\n");
           printf("8. Populacao2\n");
           printf("9. Area2\n");
           printf("10. Pib2\n");  
           printf("11. Pontosturisticos2\n");
           printf("12. Densidade2\n");
           printf("13. Pibpercapita2\n");
           printf("14. Supertrunfo2\n"); 
           scanf("%d", &atributo2); 

           if ((atributo2 - 7) == atributo1){
            printf("Opcao repetida\n");
            return 0;

           } else { 
           

           switch (atributo2)
             {
             case 8:
               printf("Voce escolheu: Populacao2\n");
               resultado2 = Populacao1 > Populacao2 ? 1 : 0;
               if (resultado2 == 1) {
                 printf("Voce ganhou!\n");
               } else if (resultado2 == 0) {
                 printf("Voce perdeu!\n");
                } else {
                 printf("Empatou!\n");
                } 
                   break;

             case 9:
               printf("Voce escolheu: Area2\n");
               resultado2 = Area1 > Area2 ? 1 : 0;
               if (resultado2 == 1) {
                 printf("Voce ganhou\n");
               } else if (resultado2 == 0) {
                 printf("voce perdeu!\n");
               } else {
                 printf("Empatou!\n");
               }
                  break;
             
             case 10:
               printf("Voce escolheu: Pib2\n");
               resultado2 = Pib1 > Pib2 ? 1 : 0;
              if (resultado2 == 1) {
                printf("Voce ganhou!\n");
              } else if (resultado2 == 0) {
                printf("Voce perdeu\n");
              } else {
                printf("Empatou\n");
              }
                 break;

             case 11:
               printf("Voce escolheu: Pontosturisticos2\n");
               resultado2 = Pontosturisticos1 > Pontosturisticos2 ? 1 : 0;
              if (resultado2 == 1) {
               printf("Voce ganhou\n");
              } else if (resultado2 == 0) {
               printf("Voce perdeu\n");
              } else {
               printf("Empatou!\n"); 
              }
                 break;

             case 12:
               printf("Voce escolheu: Densidade2\n");
               resultado2 = Densidade1 < Densidade2 ? 1 : 0;
               if (resultado2 == 1) {
                 printf("Voce perdeu!\n");
               } else if (resultado2 == 0) {
                printf("Voce ganhou!\n");
               } else {
                printf("Empatou\n"); 
               }
                  break;

             case 13:
               printf("Voce escolheu: Pibpercapita2\n");
               resultado2 = Pibpercapita1 > Pibpercapita2 ? 1 : 0;  
               if (resultado2 == 1) {
                printf("Voce ganhou!\n");
               } else if (resultado2 == 0) {
               printf("Voce perdeu!\n");
               } else {
                printf("Empatou!\n");
               }
                  break;

             case 14:
               printf("Voce escolheu: Supertrunfo2\n");
               resultado2 = Supertrunfo1 > Supertrunfo2 ? 1 : 0;
               if (resultado2 == 1) {
                 printf("Voce ganhou!\n");
               } else if (resultado2 == 0) {
                 printf("Voce perdeu\n");
               } else { 
                 printf("Empatou\n");
               }
                   break;

             default:
               printf("none\n");
                   break;
            
           }

            }
          break;

             case 2:
               printf("Carregando jogo jogo\n");
               break;
             case 3:
               printf("Saindo do jogo\n");
              break;
             default:
              printf("None\n");
              break;

       }

      
       return 0;

       }

          
