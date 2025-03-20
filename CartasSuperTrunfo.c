#include <stdio.h>
  int main(){
     
     char estado1, estado2;
     char codigo1[4], codigo2[4];
     char cidade1[50], cidade2[50];
     int populacao1, populacao2;
     int pontoturistico1, pontoturistico2;
     float pib1, pib2;
     float area1,area2;

       //Entrada de dados da Primeira carta

     printf("\n ==  Entre com os dados da primeira Carta: == \n");

     printf("Digite a letra do Estado (A-H): \n");
     scanf(" %c", &estado1);

     printf("Digite o Código da Carta (ex: A01, B03): \n");
     scanf("%s", codigo1);

     printf("Digite o Nome da Cidade: \n");
     scanf("%s", cidade1);

     printf("Digite a Poulação da cidade: \n");
     scanf("%d", &populacao1);

     printf("Digita a Àrea da cidade por Km²: \n");
     scanf("%f", &area1);

     printf("Digite o PIB da cidade:\n");
     scanf("%f", &pib1);

     printf("Digite a quantidade de pontos turisticos: \n");
     scanf("%d", &pontoturistico1);

     // Entrada de dados da segunda carta

     printf("\n == Digite dos dados da Segunta carta==: \n");

     printf("Digite a letra do Estado (A-H) \n");
     scanf(" %c", &estado2);

     printf("Digite o Código da Carta (ex: A01, B03):\n");
     scanf("%s", codigo2);

     printf("Digite o Nome da Cidade: \n");
     scanf("%s", cidade2);

     printf("Digite a Poulação da cidade: \n");
     scanf("%d", &populacao2);

     printf("Digita a Àrea da cidade por Km²: \n");
     scanf("%f", &area2);

     printf("Digite o PIB da cidade:\n");
     scanf("%f", &pib2);

     printf("Digite a quantidade de pontos turisticos:\n");
     scanf("%d", &pontoturistico2);

     // saida dos dados das cartas

     printf("\nCarta 1:== \n");
     printf("Estado: %c \n", estado1);
     printf("Código: %s \n", codigo1);
     printf("Nome da Cidade: %s \n", cidade1);
     printf("População: %d \n", populacao1);
     printf("Área: %f \n", area1 ,"Km²");
     printf("PIB: %f \n", pib1);
     printf("Numéros de Pontos Turisticos: %d \n", pontoturistico1);
     
     printf("\nCarta 2: == \n");
     printf("Estado: %c \n", estado2);
     printf("Código: %s \n", codigo2);
     printf("Nome da Cidade: %s \n", cidade2);
     printf("População: %d \n", populacao2);
     printf("Área: %f \n", area2 ,"Km²");
     printf("PIB: %f \n", pib2);
     printf("Numéros de Pontos Turisticos: %d \n \n", pontoturistico2);

     return 0;
    
  }