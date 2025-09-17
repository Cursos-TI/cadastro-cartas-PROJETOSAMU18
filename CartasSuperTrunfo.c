#include <stdio.h> // Inclua iostream para entrada e saída padrão

int main() {
    // Carta 1: Curitiba (Paraná)
    char codigo1[5] = "A01";
    char nome1[30] = "Curitiba";
    char estado1[30] = "Paraná";
    int populacao1 = 10000;
    float area1 = 10000.00;
    float pib1 = 30000000.00;
    int pontos_turisticos1 = 5;

    // Carta 2: Campinas (São Paulo)
    char codigo2[5] = "A02";
    char nome2[30] = "Campinas";
    char estado2[30] = "São Paulo";
    int populacao2 = 20000;
    float area2 = 20000.00;
    float pib2 = 40000000.00;
    int pontos_turisticos2 = 10;

    // Exibir informações da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibir informações da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
