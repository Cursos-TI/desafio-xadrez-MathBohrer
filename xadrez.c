#include <stdio.h>

// Desafio de Xadrez
// Este código simula a movimentação da Torre, Bispo e Rainha utilizando estruturas de repetição.

int main() {
    // Variáveis para o número de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre (5 casas para a direita) usando for
    printf("Movimentacao da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("\nMovimentacao do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimentacao da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}