#include <stdio.h>

// Desafio Super Trunfo - Países
// Implementação do Nível Novato

int main() {
    // Variáveis para armazenar os dados das cidades
    char nomeCidadeA[50], nomeCidadeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;

    printf("=== Cadastro das Cartas ===\n");

    // Cadastro da primeira cidade
    printf("\nDigite o nome da Cidade A: ");
    scanf("%s", nomeCidadeA);

    printf("Digite a população da Cidade A: ");
    scanf("%d", &populacaoA);

    printf("Digite a área da Cidade A (km²): ");
    scanf("%f", &areaA);

    printf("Digite o PIB da Cidade A: ");
    scanf("%f", &pibA);

    // Cadastro da segunda cidade
    printf("\nDigite o nome da Cidade B: ");
    scanf("%s", nomeCidadeB);

    printf("Digite a população da Cidade B: ");
    scanf("%d", &populacaoB);

    printf("Digite a área da Cidade B (km²): ");
    scanf("%f", &areaB);

    printf("Digite o PIB da Cidade B: ");
    scanf("%f", &pibB);

    printf("\n=== Comparação ===\n");

    // Comparação simples pela população (maior vence)
    if (populacaoA > populacaoB) {
        printf("A cidade vencedora é: %s (maior população)\n", nomeCidadeA);
    } else if (populacaoB > populacaoA) {
        printf("A cidade vencedora é: %s (maior população)\n", nomeCidadeB);
    } else {
        printf("As duas cidades possuem a mesma população.\n");
    }

    return 0;
}
