#include <stdio.h>
int main() {
    printf("=== Desafio Super Trunfo - Nivel Mestre ===\n");

    // ===== Carta 1 =====
    char estado1;                    // Apenas uma letra (A-H)
    char codigo1[4];                 // Ex: A01
    char nomeCidade1[50];            // Nome da cidade com espaços
    unsigned long int populacao1;    // Número muito grande (sem negativos)
    double area1, pib1;              // Área e PIB com casas decimais
    unsigned int pontosTuristicos1;  // Sempre positivo

    // ===== Carta 2 =====
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    double area2, pib2;
    unsigned int pontosTuristicos2;

    // ===== Resultados =====
    double densidade1, densidade2;
    double pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // ===== Entrada Carta 1 =====
    printf("\nCarta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%lf", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%u", &pontosTuristicos1);

    // ===== Cálculos Carta 1 =====
    densidade1 = (double)populacao1 / area1;
    double pib1_em_reais = pib1 * 1000000000.0; // converte bilhões → reais
    pibPerCapita1 = pib1_em_reais / (double)populacao1;
    superPoder1 = (float)(populacao1 + area1 + pib1 +
                          pontosTuristicos1 + pibPerCapita1 +
                          (1.0 / densidade1));

    // ===== Entrada Carta 2 =====
    printf("\nCarta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%u", &pontosTuristicos2);

    // ===== Cálculos Carta 2 =====
    densidade2 = (double)populacao2 / area2;
    double pib2_em_reais = pib2 * 1000000000.0;
    pibPerCapita2 = pib2_em_reais / (double)populacao2;
    superPoder2 = (float)(populacao2 + area2 + pib2 +
                          pontosTuristicos2 + pibPerCapita2 +
                          (1.0 / densidade2));

    // ===== Saída das Cartas =====
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2lf km2\n", area1);
    printf("PIB: %.2lf bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %u\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km2\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2lf km2\n", area2);
    printf("PIB: %.2lf bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %u\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km2\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== Comparações (0 = Carta 2 venceu, 1 = Carta 1 venceu) =====
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
