#include <stdio.h>
   
       int main() {
   
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

       // exibicao de dados da carta1
    
      printf("Carta1: \n"); 
      printf("Carta1: %s\n", Carta1);
      printf("Estado1: %c\n", Estado1);
      printf("Codigo1: %s\n", A01);
      printf("Nome da cidade 1: %s\n", Araraquara);
      printf("Populacao: %d\n", Populacao1);
      printf("Area: %.2f\n", Area1); 
      printf("Pib: %.2f\n", Pib1);
      printf("Pontos turisticos: %d\n", Pontosturisticos1);
      printf("Densidade Populaciona: %.2f\n", Densidade1);
      printf("Pibpercapita: %.2f\n", Pibpercapita1);
      printf("Supertrunfo: %2f\n", Supertrunfo1);


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

      // exibicao de dados da carta2

      printf("Carta2: \n");
      printf("Carta2: %s\n", Carta2);
      printf("Estado2: %c\n", Estado2);
      printf("Codigo2: %s\n", B02);
      printf("Nome da cidade 2: %s\n", Palhoca);
      printf("Populacao: %d\n", Populacao2);
      printf("Pib: %.2f", Pib2);
      printf("Area: %.2f\n", Area2);
      printf("Pontos turisticos: %d\n", Pontosturisticos2);
      printf("Densidade Populacional: %2.f\n", Densidade2);
      printf("Pibpercapita %.2f\n", Pibpercapita2);
      printf("Supertrunfo %.2f\n", Supertrunfo2);

      // comparacao das cartas
     printf("Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
     printf("Populacao (maior vence): %d\n", Populacao1 > Populacao2);
     printf("Pib (maior vence): %d\n", Pib1 > Pib2);
     printf("Area (maior vence): %d\n", Area1 > Area2);
     printf("Pontos turisticos (maior vence): %d\n", Pontosturisticos1 > Pontosturisticos2);
     printf("Densidade populacional (menor vence): %d\n", Densidade1 > Densidade2);
     printf("Pibpercapita (maior vence): %d\n", Pibpercapita1 > Pibpercapita2);
     printf("Supertrunfo (maior vence): %d\n", Supertrunfo1 > Supertrunfo2);
     printf("CONGRATULATIONS CARD 1 WINNER \n");

     return 0;

     } 
