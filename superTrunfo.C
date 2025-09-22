#include <stdio.h>

int main(){
    // carta 1 
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float pibcap1;
    long double superpoder1; 

    // carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float pibcap2;
    long double superpoder2;

    //dados da carta 1 
    printf("\nCadastro da carta 1:\n ");

    printf("Digite o estado da carta 1: ");
    scanf(" %c",&estado1);

    printf("Digite o codigo da carta 1: ");
    scanf(" %s",codigo1);

    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]",cidade1);

    printf("Digite a populacao da cidade 1: ");
    scanf("%lu",&populacao1);

    printf("Digite o tamanho da area da cidade 1: ");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f",&pib1);

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d",&turismo1);

    pib1 = pib1 * 1e9;
    densidade1 = ((float)populacao1 / area1);
    pibcap1 = (pib1 / (float)populacao1);
    superpoder1 = ((float)populacao1 + area1 + pib1 + turismo1 + pibcap1 + (1 / densidade1));

    // dados da carta 2
    printf("\nCadastro da carta 2:\n");

    printf("Digite o estado da carta 2: ");
    scanf(" %c",&estado2);

    printf("Digite o codigo da carta 2: ");
    scanf(" %s",codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da cidade 2: ");
    scanf("%lu",&populacao2);

    printf("Digite o tamanho da area da cidade 2: ");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f",&pib2);

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d",&turismo2);

    pib2 = pib2 * 1e9;
    densidade2 = ((float)populacao2 / area2);
    pibcap2 = (pib2 / (float)populacao2);
    superpoder2 = (float)populacao2 + area2 + pib2 + turismo2 + pibcap2 + (1 / densidade2);

    //  Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Cidade: %s\n",cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibcap1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibcap2);

    // Comparações
    printf("\n--- Comparacao das cartas ---\n");

    if (populacao1 > populacao2) printf("Populacao: Carta 1 venceu\n");
    else if (populacao2 > populacao1) printf("Populacao: Carta 2 venceu\n");
    else printf("Populacao: Empate\n");

    if (area1 > area2) printf("Area: Carta 1 venceu\n");
    else if (area2 > area1) printf("Area: Carta 2 venceu\n");
    else printf("Area: Empate\n");

    if (pib1 > pib2) printf("PIB: Carta 1 venceu\n");
    else if (pib2 > pib1) printf("PIB: Carta 2 venceu\n");
    else printf("PIB: Empate\n");

    if (turismo1 > turismo2) printf("Pontos Turisticos: Carta 1 venceu\n");
    else if (turismo2 > turismo1) printf("Pontos Turisticos: Carta 2 venceu\n");
    else printf("Pontos Turisticos: Empate\n");

    if (densidade1 < densidade2) printf("Densidade Populacional: Carta 1 venceu\n");
    else if (densidade2 < densidade1) printf("Densidade Populacional: Carta 2 venceu\n");
    else printf("Densidade Populacional: Empate\n");

    if (pibcap1 > pibcap2) printf("PIB per capita: Carta 1 venceu\n");
    else if (pibcap2 > pibcap1) printf("PIB per capita: Carta 2 venceu\n");
    else printf("PIB per capita: Empate\n");

    if (superpoder1 > superpoder2) printf("Super Poder: Carta 1 venceu\n");
    else if (superpoder2 > superpoder1) printf("Super Poder: Carta 2 venceu\n");
    else printf("Super Poder: Empate\n");

    return 0;
}