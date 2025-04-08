#include <stdio.h>
int main (){
 
 char estado1 , estado2;
 char codigo1 [4], codigo2 [4];
 char cidade1 [50], cidade2[50];
 int populacao1, populacao2;
 float area1, area2;
 float pib1, pib2;
 int pontoturistico1 , pontoturistico2;
 float densidadepopulacional1, densidadepopulacional2;
 float pibpercapita1, pibpercapita2;

 float Superpoder1;
 float Superpoder2;

 int resultado;

 // Entrada de dados 

 printf("\n *****  Calculando Densidade Populacional e PIB per Capita \n  \n");

 printf("\n Digite a letra do Estado (A-H): \n");
 scanf(" %c", &estado1);
 
 printf("Digite o Código da Carta (ex: A01, B03): \n");
 scanf("%s", codigo1);  
 
 printf("Digite o nome da cidade: \n");
 scanf("%s", cidade1);

 printf("Digite o numéro de Habitantes: \n");
 scanf("%d", &populacao1);

 printf("Digite a aréa territorial da cidade: \n");
 scanf("%f", &area1);

 printf("Digite o PIB da cidade: \n");
 scanf("%f", &pib1);

 printf("Digite a quantidade de Ponto Turisticos: \n ");
 scanf("%d", &pontoturistico1);

 densidadepopulacional1 = (float) populacao1 / area1;
 pibpercapita1 =(float) pib1 / populacao1;
 
 Superpoder1 = (float) populacao1 + area1 + pib1 +pontoturistico1 + pibpercapita1 + (1/densidadepopulacional1);
 // Entrada de dados da Segunda cidade 

 printf("\n Digite a letra do Estado (A-H): \n");
 scanf(" %c", &estado2);
 
 printf("Digite o Código da Carta (ex: A01, B03): \n");
 scanf("%s", codigo2);  
 
 printf("Digite o nome da cidade: \n");
 scanf("%s", cidade2);

 printf("Digite o numéro de Habitantes: \n");
 scanf("%d", &populacao2);

 printf("Digite a aréa territorial da cidade: \n");
 scanf("%f", &area2);

 printf("Digite o PIB da cidade: \n");
 scanf("%f", &pib2);

 printf("Digite a quantidade de Ponto Turisticos: \n ");
 scanf("%d", &pontoturistico2);

  densidadepopulacional2 =(float) populacao2 /area2;
  pibpercapita2 = (float) pib2 / populacao2;

  Superpoder2 = populacao2 + area2 + pontoturistico2 + pib2 + pibpercapita2 + (1/ densidadepopulacional2);

 // Mostrará os dados

 printf("Código carta 1: %c \n", estado1);
 printf("Estado: %s \n", codigo1);
 printf("Cidade: %s \n", cidade1);
 printf("População: %d \n", populacao1);
 printf("Área: %.2f \n", area1);
 printf("PIB: %.2f \n", pib1);
 printf("Pontos Turisticos: %d \n", pontoturistico1);
 printf("Densidade Populaciaonal: %.2f \n", densidadepopulacional1);
 printf("PIB per Capita: %.2f \n \n", pibpercapita1);
 
 printf("Código carta 1: %c \n", estado2);
 printf("Estado: %s \n", codigo2);
 printf("Cidade: %s \n", cidade2);
 printf("População: %d \n", populacao2);
 printf("Área: %.2f \n", area2);
 printf("PIB: %.2f \n", pib2);
 printf("Pontos Turisticos: %d \n", pontoturistico2);
 printf("Densidade Populaciaonal: %.2f \n", densidadepopulacional2);
 printf("PIB per Capita: %.2f \n", pibpercapita2);
 
 // comparaçãp das cartas

 printf("\n Comparação das Cartas \n");
 printf("População: Carta 1 venceu: (%d) \n", populacao1 > populacao2 );
 printf("Área: Carta 1 venceu: (%d) \n", area1 > area2);
 printf("PIB: Carta 1 venceu (%d) \n", pib1 > pib2);
 printf("Ponto Turisticos: Carta 1 venceu (%d) \n", pontoturistico1 > pontoturistico2);
 printf("Densidade Popupacional: Carta 2 venceu (%d) \n", densidadepopulacional1 < densidadepopulacional2);
 printf("Pib Per-capita: Carta 1 venceu (%d) \n", pibpercapita1 > pibpercapita2);
 printf("Super Poder: Carta 1 venceu (%d)", Superpoder1 > Superpoder2);
    
return 0;
}