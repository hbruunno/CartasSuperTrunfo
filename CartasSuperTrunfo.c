#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Carta 1
  char estado1[50];
  char codigo1[4];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidade1, percapta1;

  // Carta 2
  char estado2[50];
  char codigo2[4];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2, percapta2;

  // Criando Carta 1
  printf("Carta 1 \n");

  printf("Estado (A-H): ");
  scanf(" %[^\n]", &estado1);

  printf("Codigo da Carta: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1); //Para parar de ignorar os espaços adicionei [^\n]

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: \n");
  scanf("%d", &pontos1);

  // Criando Carta 2
  printf("\n Cadastro da Carta 2\n");

  printf("Estado (A-H): ");
  scanf(" %[^\n]", &estado2);

  printf("Codigo da Carta: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2); //Para parar de ignorar os espaços adicionei [^\n]

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);


  // calculando a densidade
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  // calculando o pib percapta
  percapta1 = pib1 / populacao1;
  percapta2 = pib2 / populacao2;

  //calcular o super poder
  long double superPoder1 = (populacao1 + area1 + pib1 +pontos1) - densidade1;
  long double superPoder2 = (populacao2 + area2 + pib2 +pontos2) - densidade2;



  printf("\n CARTAS CADASTRADAS \n");

  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f Bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n\n", percapta1);

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f Bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n\n", percapta2);

  
  int atributo1, atributo2;
  float soma1 =0, soma2=0;
  printf("\n Jogo de dois atributos:\nEscolha um numero/atributo:\n");
  printf(" 1 - População \n 2 - Area \n 3 - PIB \n 4 - Numero de pontos turisticos \n 5 - Densidade demografica\n\n");
  scanf("%d", &atributo1);

  printf("\n Jogo de dois atributos:\nEscolha outro numero/atributo:\n");
  if (atributo1 != 1) printf(" 1 - Populacao \n");
  if (atributo1 != 2) printf(" 2 - Area \n");
  if (atributo1 != 3) printf(" 3 - PIB \n");
  if (atributo1 != 4) printf(" 4 - Numero de pontos turisticos \n");
  if (atributo1 != 5) printf(" 5 - Densidade\n");

  scanf("%d", &atributo2);

 if (atributo1 == atributo2) {
    printf("\nErro: Atributos Iguais\n");
    return 0;
 }

 switch (atributo1) {
     case 1:

      if (populacao1 > populacao2){
        printf("Atributo Vencedor: %s com %lu pontos \n", estado1, populacao1);
      } else if (populacao1 < populacao2){
        printf("Atributo Vencedor: %s com %lu pontos \n", estado2, populacao2);
      } else {
        printf("Empate nesse atributo\n %s = %lu\n %s = %lu\n", estado1, populacao1, estado2, populacao2);
      };
      soma1 += populacao1;
      soma2 += populacao2;
      break;

  case 2:

      if (area1 > area2){
        printf("Atributo Vencedor: %s com %.2f pontos \n", estado1, area1);
      } else if (area1 < area2){
        printf("Atributo Vencedor: %s com %.2f pontos \n", estado2, area2);
      } else {
        printf("Empate nesse atributo\n %s = %.2f\n %s = %.2f\n", estado1, area1, estado2, area2);
      };
      soma1 += area1;
      soma2 += area2;
      break;

  case 3:

      if (pib1 > pib2) {
        printf("Atributo Vencedor: %s com %.2f pontos\n", estado1, pib1);
      } else if (pib1 < pib2){
          printf("Atributo Vencedor: %s com %.2f pontos", estado2, pib2);
      } else {
          printf("Empate nesse atributo\n %s = %.2f\n %s = %.2f\n", estado1, pib1, estado2, pib2);
      };
      soma1 += pib1;
      soma2 += pib2;

      break;

  case 4:

       if(pontos1 > pontos2){
        printf("Atributo Vencedor: %s com %d pontos\n", estado1, pontos1);
        } else if(pontos1 < pontos2){
        printf("Atributo Vencedor: %s com %d pontos\n", estado2, pontos2);
        } else {
        printf("Empate nesse atributo\n %s = %d\n %s = %d\n", estado1, pontos1, estado2, pontos2);
        };
        soma1+= pontos1;
        soma2+= pontos2;

        break;

  case 5 :

       if(densidade1 < densidade2){
        printf("Atributo Vencedor: %s com %.2f pontos\n", estado1, densidade1);
       } else if(densidade1 > densidade2) {
        printf("Atributo Vencedor: %s com %.2f pontos\n", estado2, densidade2);
       } else {
        printf("Empate nesse atributo\n %s = %.2f\n %s = %.2f\n", estado1, densidade1, estado2, densidade2);
       };
       soma1+= densidade1;
       soma2 += densidade2;

       break;

  default:
    printf("OPÇÃO INVÁLIDA!");

 };

 switch (atributo2) {
     case 1:

      if (populacao1 > populacao2){
        printf("Atributo Vencedor: %s com %lu pontos \n", estado1, populacao1);
      } else if (populacao1 < populacao2){
        printf ("Atributo Vencedor: %s com %lu pontos \n", estado2, populacao2);
      } else {
        printf("Empate nesse atributo\n %s = %lu\n %s = %lu\n", estado1, populacao1, estado2, populacao2);
      };
      soma1 += populacao1;
      soma2 += populacao2;
      break;

  case 2:

      if (area1 > area2){
        printf("Atributo Vencedor: %s com %.2f pontos \n", estado1, area1);
      } else if (area1 < area2){
        printf("Atributo Vencedor: %s com %.2f pontos \n", estado2, area2);
      } else {
        printf("Empate nesse atributo\n %s = %.2f\n %s = %.2f\n", estado1, area1, estado2, area2);
      }
      soma1 += area1;
      soma2 += area2;
      break;

  case 3:

      if (pib1 > pib2) {
        printf("Atributo Vencedor: %s com %.2f pontos\n", estado1, pib1);
      } else if (pib1 < pib2){
          printf("Atributo Vencedor: %s com %.2f pontos", estado2, pib2);
      } else {
          printf("Empate nesse atributo\n %s = %.2f\n %s = %.2f\n", estado1, pib1, estado2, pib2);
      };
      soma1 += pib1;
      soma2 += pib2;
      break;

  case 4:

       if(pontos1 > pontos2){
        printf("Atributo Vencedor: %s com %d pontos\n", estado1, pontos1);
        } else if(pontos1 < pontos2){
        printf("Atributo Vencedor: %s com %d pontos\n", estado2, pontos2);
        } else {
        printf("Empate nesse atributo\n %s = %d\n %s = %d\n", estado1, pontos1, estado2, pontos2);
        };
        soma1+= pontos1;
        soma2+= pontos2;
        break;

  case 5 :

       if(densidade1 < densidade2){
        printf("Atributo Vencedor: %s com %.2f pontos\n", estado1, densidade1);
       } else if(densidade1 > densidade2) {
        printf("Atributo Vencedor: %s com %.2f pontos\n", estado2, densidade2);
       } else {
        printf("Empate nesse atributo\n %s = %.2f\n %s = %.2f\n", estado1, densidade1, estado2, densidade2);
       }
       soma1+= densidade1;
       soma2 += densidade2;

       break;

  default:
      printf("OPÇÃO INVÁLIDA!");

 }
 printf("\nRESULTADO FINAL \n");

 printf("%s: %.2f\n", estado1, soma1);
 printf("%s: %.2f\n", estado2, soma2);

 if (soma1 > soma2){
    printf("VENCEDOR: %s\n", estado1);
 }else if (soma2 > soma1){
    printf("VENCEDOR: %s\n", estado2);
 }else{
    printf("EMPATE!\n");
 };


  return 0;
}
