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
    scanf(" %[^\n]", cidade1); // Para parar de ignorar os espaços adicionei [^\n]

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
    scanf(" %[^\n]", cidade2); // Para parar de ignorar os espaços adicionei [^\n]

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

    // calcular o super poder
    long double superPoder1 = (populacao1 + area1 + pib1 + pontos1) - densidade1;
    long double superPoder2 = (populacao2 + area2 + pib2 + pontos2) - densidade2;

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

    /*printf("Coparação de cartas:\n");
    printf("Populacao: Carta 1 vence (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 vence (%d)\n", area1 > area2);
    printf("PIB: Carta 1 vence (%d)\n", pib1 > pib2);
    printf("Potos turisticos: Carta 1 vence (%d)\n", pontos1>pontos2);
    printf("Densidade Populacional: Carta 1 vence (%d)\n", densidade1 < densidade2);
    printf("PIB percapta: Carta 1 vence (%d)\n", percapta1 > percapta2);
    printf("Super Poder: Carta 1 vence (%d)\n", superPoder1 > superPoder2); */

    /*printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu \n", cidade2 );
    }; */

    printf("---Agora vamos jogar?--- \n Jogo de comparação: \n\n Qual Numero voce escolhe?\n");
    printf(" 1 - População \n 2 - Area \n 3 - PIB \n 4 - Numero de pontos turisticos \n 5 - Densidade demografica\n\n");
    int opc;
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:

        printf("Pais: %s - Populacao: %lu \n", estado1, populacao1);
        printf("Pais: %s - Populacao: %lu \n", estado2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("Vencedor: %s\n", estado1);
        }
        else if (populacao1 < populacao2)
        {
            printf(("vencedor: %s\n", estado2));
        }
        else
        {
            printf("O JOGO EMPATOU");
        }

        break;

    case 2:

        printf("Pais: %s - Area: %.2f \n", estado1, area1);
        printf("Pais: %s - Area: %.2f \n", estado2, area2);

        if (area1 > area2)
        {
            printf("Vencedor: %s\n", estado1);
        }
        else if (area1 < area2)
        {
            printf(("vencedor: %s\n", estado2));
        }
        else
        {
            printf("O JOGO EMPATOU");
        }

        break;

    case 3:
        printf("Pais: %s - PIB: %.2f \n", estado1, pib1);
        printf("Pais: %s - PIB: %.2f \n", estado2, pib2);

        if (pib1 > pib2)
        {
            printf("Vencedor: %s\n", estado1);
        }
        else if (pib1 < pib2)
        {
            printf("Vencedor: %s\n", estado2);
        }
        else
        {
            printf("O JOGO EMPATOU");
        }

        break;

    case 4:
        printf("Pais: %s - Pontos turisticos: %d \n", estado1, pontos1);
        printf("Pais: %s - Pontos turisticos: %d \n", estado2, pontos2);

        if (pontos1 > pontos2)
        {
            printf("Vencedor: %s\n", estado1);
        }
        else if (pontos1 < pontos2)
        {
            printf("Vencedor: %s\n", estado2);
        }
        else
        {
            printf("Empate!\n");
        }

        break;

    case 5:
        printf("%s: %.2f\n", estado1, densidade1);
        printf("%s: %.2f\n", estado2, densidade2);

        if (densidade1 < densidade2)
        {
            printf("Vencedor: %s\n", estado1);
        }
        else if (densidade1 > densidade2)
        {
            printf("Vencedor: %s\n", estado2);
        }
        else
        {
            printf("Empate!\n");
        }

        break;

    default:
        printf("OPÇÃO INVÁLIDA!");
    }
// Organizo meu codigo com Shif + alt + F
    return 0;
}