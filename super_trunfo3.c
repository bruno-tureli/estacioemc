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

      // Exibindo menu

      int opcao1;
      
      printf("1- Populacao\n");
      printf("2- Area\n");
      printf("3- Pontosturisticos\n");
      printf("4- Densidade\n");
      printf("5- Pibpercapita\n");
      printf("6- Supertrunfo\n");

      printf("Digite o primeiro atributo: \n");
      scanf("%d", &opcao1);

      switch (opcao1) {
case 1:
            printf("Voce escolheu o atributo Populacao\n");
            break;
case 2:
            printf("Voce escolheu o atributo Area\n");
            break;
case 3: 
            printf("Voce escolheu o atributo Pontosturisticos\n");
            break;
case 4:
            printf("Voce escolheu Densidade\n");
            break;
case 5:
            printf("Voce escolheu Pibpercapita\n");
            break;
case 6:
            printf("Voce escolheu Supertrunfo\n");
            break;
        default:
            printf("Atributo invalido \n");
            break;
      }

      int opcao2; 

      printf("7- Populacao\n");
      printf("8- Area\n");
      printf("9- Pontosturisticos\n");
      printf("10- Densidade\n");
      printf("11- Pibpercapita\n");
      printf("12- Supertrunfo\n");
      
      printf("Digite o segundo atributo: \n");
      scanf("%d", &opcao2);

     switch(opcao2) {
     case 7:
       printf("Você escolheu o atributo Populacao\n");
       break;
     case 8:
       printf("Voce escolheu o atributo Area\n");
       break;
     case 9:
       printf("Voce escolheu o atributo Pontosturisticos\n");
       break;
     case 10:
       printf("Voce escolheu o atributo Densidade\n");
       break;
     case 11:
       printf("Voce escolheu o atributo Pibpercapita\n");
       break;
     case 12:
       printf("Você escolheu o atributo Supertrunfo\n");
       break;
     default:
       printf("Voce escolheu opcao invalida\n");
       break;

     }

        
      // comparacao das cartas
     
      if (Populacao1 > Populacao2) {    
     printf("Carta1 venceu!\n");
      } else if (Populacao1 < Populacao2) {
        printf("Carta2 venceu!\n");
      } else {
        printf("Houve um empate!\n");
      }

      if (Pib1 > Pib2) {
     printf("Carta1 venceu!\n");
     } else if (Pib1 < Pib2) {
     printf("carta2 venceu!\n");
     } else {
       printf("Houve empate!\n");
     }    

      if (Area1 > Area2) {
     printf("carta1 venceu!\n");
     } else if (Area1 < Area2) {
       printf("carta2 venceu!\n");
     } else {
       printf("Houve empate!\n");
     }
      
      if (Pontosturisticos1 > Pontosturisticos2) {
     printf("Carta1 venceu!\n");
    } else if ("Pontosturisticos1 < Pontosturisticos2\n") { 
     printf("Carta2 venceu!\n");
       } else {
     printf("Houve empate!\n");
     } 
       
       if (Densidade1 < Densidade2) {
      printf("Carta2 venceu!\n");
    } else if (Densidade1 > Densidade2) {
      printf("Carta1 venceu!\n");
    } else {
      printf("Houve empate!\n");
      }

    if (Pibpercapita1 > Pibpercapita2) {
      printf("Carta1 venceu!\n");
    } else if (Pibpercapita1 > Pibpercapita2) { 
      printf("Carta2 venceu!\n");
    } else {
    printf("Houve empate!\n");
    }

    if (Supertrunfo1 > Supertrunfo2) {
      printf("Carta1 venceu!\n");
    } else if (Supertrunfo1 > Supertrunfo2) {
      printf("Carta2 venceu!\n");
    } else {
      printf("Houve empate!\n");
    }

     return 0;

     } 
