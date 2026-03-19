#include <stdio.h>

int main() {
  
  // Declaração das variáveis das cartas
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[50], ciddade2[50];
  unsigned long long populacao1, populacao2;
  float area1, area2;
  unsigned long long pib1, pib2;
  int pontosturisticos1, pontosturisticos2;

  // Variáveis calculadas
  float densidade1, densidade2;
  double pibcapita1, pibcapita2;
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
  
  printf("\n===== CARTA 1 =====\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosturisticos1);

  // Exibição das novas informações calculadas
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

  printf("\n===== CARTA 2 =====\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosturisticos2);

  // Exibição das novas informações calculadas
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

return 0;
} 
