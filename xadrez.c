#include <stdio.h>

// Desafio de Xadrez
// Este código simula a movimentação da Torre, Bispo, Rainha e Cavalo utilizando estruturas de repetição.

int main() {
    // Variáveis para o número de casas que a Torre, Rainha e Bispo devem se mover
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

    // Cavalo (movimento em "L": duas casas para baixo e uma para a esquerda)
    printf("\nMovimentacao do Cavalo:\n");

    int movimentosBaixo = 2; // Número de casas para baixo
    int movimentosEsquerda = 1; // Número de casas para a esquerda

    // Primeiro loop (for) para movimentar duas casas para baixo
    for (int j = 1; j <= movimentosBaixo; j++) {
        printf("Baixo\n");
    }

    // Segundo loop (while) para movimentar uma casa para a esquerda
    int k = 1;
    while (k <= movimentosEsquerda) {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}
