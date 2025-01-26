#ifndef CARTA_H
#define CARTA_H

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

void cadastrar_carta(Carta *carta);
void exibir_carta(const Carta *carta);
int comparar_cartas(const Carta *carta1, const Carta *carta2, int atributo);

#endif // CARTA_H
