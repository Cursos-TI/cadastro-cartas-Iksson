#include <stdio.h>

int main() {
  
  // Declaração das variáveis das cartas
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[50], cidade2[50];
  unsigned long long populacao1, populacao2;
  float area1, area2;
  unsigned long long pib1, pib2;
  int pontosturisticos1, pontosturisticos2;

  // Variáveis calculadas
  float densidade1, densidade2;
  float pibcapita1, pibcapita2;
  float superpoder1, superpoder2;
  
  // Entrada de dados
  printf("Cadastro da Carta 1\n");
  printf("Estado:"); scanf(" %c", &estado1);
  printf("Codigo da Carta: "); scanf("%s", codigo1);
  printf("Nome da Cidade: "); scanf(" %49[^\n]", cidade1);
  printf("Populacao: "); scanf("%llu", &populacao1);
  printf("Area (km²): "); scanf("%f", &area1);
  printf("PIB (bilhoes de reais): "); scanf("%llu", &pib1);
  printf("Numero de Pontos Turisticos: "); scanf("%d", &pontosturisticos1);

  printf("Cadastro da Carta 2\n");
  printf("Estado:"); scanf(" %c", &estado2);
  printf("Codigo da Carta: "); scanf("%s", codigo2);
  printf("Nome da Cidade: "); scanf(" %49[^\n]", cidade2);
  printf("Populacao: "); scanf("%llu", &populacao2);
  printf("Area (km²): "); scanf("%f", &area2);
  printf("PIB (bilhoes de reais): "); scanf("%llu", &pib2);
  printf("Numero de Pontos Turisticos: "); scanf("%d", &pontosturisticos2);
  
  // Cálculos
  densidade1 = (float)populacao1 / area1;
  densidade2 = (float)populacao2 / area2;

  pibcapita1 = (double)pib1 * 1e9 / populacao1;
  pibcapita2 = (double)pib2 * 1e9 / populacao2;

  superpoder1 = (float)populacao1 + area1 + (float)pib1 * 1e9f + pontosturisticos1 + (float)pibcapita1 + (1.0f / densidade1);
  superpoder2 = (float)populacao2 + area2 + (float)pib2 * 1e9f + pontosturisticos2 + (float)pibcapita2 + (1.0f / densidade2);

  // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
  int pop_venceu = populacao1 > populacao2;
  int area_venceu = area1 > area2;
  int pib_venceu = pib1 > pib2;
  int pontos_venceu = pontosturisticos1 > pontosturisticos2;
  int densidade_venceu = densidade1 < densidade2; // menor densidade vence
  int pibcapita_venceu = pibcapita1 > pibcapita2;
  int superpoder_venceu = superpoder1 > superpoder2;

  // Exibição das Cartas
  printf("\n===== CARTA 1 =====\n");
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %llu\nArea: %.2f\nPIB: %llu\nPontos Turisticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1, densidade1, pibcapita1);

  printf("\n===== CARTA 2 =====\n");
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %llu\nArea: %.2f\nPIB: %llu\nPontos Turisticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2, densidade2, pibcapita2);

  // Exibição das comparações
  printf("\n===== COMPARACAO DAS CARTAS =====\n");
  printf("Populacao: Carta %d venceu (%d)\n", pop_venceu ? 1 : 2, pop_venceu);
  printf("Area: Carta %d venceu (%d)\n", area_venceu ? 1 : 2, area_venceu);
  printf("PIB: Carta %d venceu (%d)\n", pib_venceu ? 1 : 2, pib_venceu);
  printf("Pontos Turisticos: Carta %d venceu (%d)\n", pontos_venceu ? 1 : 2, pontos_venceu);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_venceu ? 1 : 2, densidade_venceu);
  printf("PIB per Capita: Carta %d venceu (%d)\n", pibcapita_venceu ? 1 : 2, pibcapita_venceu);
  printf("Super Poder: Carta %d venceu (%d)\n", superpoder_venceu ? 1 : 2, superpoder_venceu);
  
  return 0;
}
