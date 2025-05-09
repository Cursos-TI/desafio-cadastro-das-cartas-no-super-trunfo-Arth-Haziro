#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Super Trunfo!");
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int resultado_populacao, resultado_area, resultado_pib;
    int resultado_pontos, resultado_densidade, resultado_pib_capita, resultado_super_poder;
    printf("Cadastro da primeira carta:\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("\nCadastro da segunda carta:\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0f / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);
    resultado_populacao = (populacao1 > populacao2) ? 1 : 0;
    resultado_area = (area1 > area2) ? 1 : 0;
    resultado_pib = (pib1 > pib2) ? 1 : 0;
    resultado_pontos = (pontos1 > pontos2) ? 1 : 0;
    resultado_densidade = (densidade1 < densidade2) ? 1 : 0; // menor é melhor
    resultado_pib_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    resultado_super_poder = (super_poder1 > super_poder2) ? 1 : 0;

    printf("\n--- Resultado da Comparação ---\n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos turísticos: %d\n", resultado_pontos);
    printf("Densidade Populacional: %d\n", resultado_densidade);
    printf("PIB per Capita: %d\n", resultado_pib_capita);
    printf("Super Poder: %d\n", resultado_super_poder);
    // Atributos das duas cartas
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
