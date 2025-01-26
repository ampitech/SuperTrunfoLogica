#include <stdio.h>
#include "carta.h"

void cadastrar_carta(Carta *carta) {
    printf("Nome do país: ");
    scanf("%s", carta->nome);
    printf("População: ");
    scanf("%d", &carta->populacao);
    printf("Área: ");
    scanf("%f", &carta->area);
    printf("PIB: ");
    scanf("%f", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

void exibir_carta(const Carta *carta) {
    printf("Nome do país: %s\n", carta->nome);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f\n", carta->area);
    printf("PIB: %.2f\n", carta->pib);
    printf("Número de pontos turísticos: %d\n", carta->pontos_turisticos);
}

int comparar_cartas(const Carta *carta1, const Carta *carta2, int atributo) {
    switch (atributo) {
        case 1: // População
            return carta1->populacao > carta2->populacao;
        case 2: // Área
            return carta1->area > carta2->area;
        case 3: // PIB
            return carta1->pib > carta2->pib;
        case 4: // Número de pontos turísticos
            return carta1->pontos_turisticos > carta2->pontos_turisticos;
        default:
            return 0;
    }
}
