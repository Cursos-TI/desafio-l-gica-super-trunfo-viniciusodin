#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[30];
    char codigo[5];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo: ");
    scanf(" %s", carta1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo: ");
    scanf(" %s", carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibe as cartas cadastradas
    printf("\n===== CARTAS CADASTRADAS =====\n");
    printf("Carta 1 - %s (%s)\n", carta1.nome, carta1.estado);
    printf("Populacao: %d | Area: %.2f km² | PIB: %.2f | Pontos Turisticos: %d\n",
           carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos);

    printf("\nCarta 2 - %s (%s)\n", carta2.nome, carta2.estado);
    printf("Populacao: %d | Area: %.2f km² | PIB: %.2f | Pontos Turisticos: %d\n",
           carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos);

    // Comparação (exemplo: população)
    printf("\n===== RESULTADO DA COMPARACAO =====\n");
    if (carta1.populacao > carta2.populacao) {
        printf("Carta vencedora: %s (%s) [MAIOR POPULACAO]\n", carta1.nome, carta1.estado);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Carta vencedora: %s (%s) [MAIOR POPULACAO]\n", carta2.nome, carta2.estado);
    } else {
        printf("Empate! As duas cidades possuem a mesma populacao.\n");
    }

    return 0;
}
