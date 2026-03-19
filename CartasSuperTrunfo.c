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
  double pib_per_capita1, pib_per_capita2;
  float superpoder1, superpoder2;
  
// Área para entrada de dados
  
  printf("Cadastro da Carta 1\n");

  printf("Estado:");
  scanf(" %c", &estado1);

  printf("Codigo da Carta: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosturisticos1);

  printf("Cadastro da Carta 2\n");

  printf("Estado:");
  scanf(" %c", &estado2);

  printf("Codigo da Carta: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosturisticos2);

// Cálculos das novas propriedades - Nível Aventureiro

  // Cálculo da densidade populacional (população / área)
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  // Cálculo do PIB per capita (PIB / população)
  pib_per_capita1 = pib1 / populacao1;
  pib_per_capita2 = pib2 / populacao2;
  
// Área para exibição dos dados das cartas

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
