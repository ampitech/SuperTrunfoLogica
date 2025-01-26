#include <stdio.h>
#include "carta.h"

void exibir_menu() {
    printf("Menu:\n");
    printf("1. Cadastrar carta\n");
    printf("2. Comparar cartas\n");
    printf("3. Sair\n");
}

int main() {
    Carta carta1, carta2;
    int opcao, atributo;

    while (1) {
        exibir_menu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Cadastrar primeira carta:\n");
                cadastrar_carta(&carta1);
                printf("Cadastrar segunda carta:\n");
                cadastrar_carta(&carta2);
                break;
            case 2:
                printf("Escolha o atributo para comparação:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Número de pontos turísticos\n");
                scanf("%d", &atributo);

                if (comparar_cartas(&carta1, &carta2, atributo)) {
                    printf("A carta vencedora é:\n");
                    exibir_carta(&carta1);
                } else {
                    printf("A carta vencedora é:\n");
                    exibir_carta(&carta2);
                }
                break;
            case 3:
                return 0;
            default:
                printf("Opção inválida!\n");
        }
    }
}
