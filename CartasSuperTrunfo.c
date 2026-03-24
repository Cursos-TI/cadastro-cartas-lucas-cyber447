#include <stdio.h>

int main() {
    char carta1[20], carta2[20];
    char estado1[21], estado2[22];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    float populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pturisticos1, pturisticos2;

    // --- Carta 1 ---
    printf("Digite o numero da carta 1:\n");
    scanf("%s", carta1);

    printf("Digite o estado(ABREVIADO):\n");
    scanf(" %s", estado1);

    printf("Digite o codigo:\n");
    scanf("%s", codigo1);

    printf("Digite a cidade:\n");
    scanf("%s", cidade1);  // Atenção: sem espaço!

    printf("Digite a populacao:\n");
    scanf("%f", &populacao1);

    printf("Digite a area:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pturisticos1);

    // --- Carta 2 ---
    printf("\nDigite o numero da carta 2:\n");
    scanf("%s", carta2);

    printf("Digite o estado (ABREVIADO):\n");
    scanf(" %s", estado2);

    printf("Digite o codigo:\n");
    scanf("%s", codigo2);

    printf("Digite a cidade:\n");
    scanf("%s", cidade2);  // Atenção: sem espaço, primeiro nome somente!

    printf("Digite a populacao:\n");
    scanf("%f", &populacao2);

    printf("Digite a area:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite os pontos turísticos:\n");
    scanf("%d", &pturisticos2);

    // --- Exibir Carta 1 ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Carta: %s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %.0f\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pturisticos1);

    // --- Exibir Carta 2 ---
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Carta: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %.0f\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pturisticos2);

    return 0;
}