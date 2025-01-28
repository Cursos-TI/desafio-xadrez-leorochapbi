#include <stdio.h>

#define MOV_BISPO 5  // Número de casas que o bispo se move
#define MOV_TORRE 5  // Número de casas que a torre se move
#define MOV_RAINHA 8 // Número de casas que a rainha se move

int main() {
    // Movimentação do Bispo (Diagonal Superior Direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Diagonal Superior Direita - Passo %d\n", i);
    }

    printf("\n");

    // Movimentação da Torre (Direita)
    printf("Movimentação da Torre:\n");
    int j = 1;
    while (j <= MOV_TORRE) {
        printf("Direita - Passo %d\n", j);
        j++;
    }

    printf("\n");

    // Movimentação da Rainha (Esquerda)
    printf("Movimentação da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda - Passo %d\n", k);
        k++;
    } while (k <= MOV_RAINHA);

    return 0;
}

