// Desafio de Xadrez - Nível Mestre
// Este código simula a movimentação da Torre, Bispo, Rainha e Cavalo utilizando recursividade e loops aninhados.

#include <stdio.h>

void moverTorre(int casasRestantes) {
    // Função recursiva para movimentação da Torre para a direita
    if (casasRestantes > 0) {
        printf("Direita\n");
        moverTorre(casasRestantes - 1);
    }
}

void moverBispo(int casasRestantesVertical, int casasRestantesHorizontal) {
    // Função recursiva para movimentação do Bispo em diagonal (Cima Direita)
    if (casasRestantesVertical > 0 && casasRestantesHorizontal > 0) {
        printf("Cima Direita\n");
        moverBispo(casasRestantesVertical - 1, casasRestantesHorizontal - 1);
    }
}

void moverRainha(int casasRestantes) {
    // Função recursiva para movimentação da Rainha para a esquerda
    if (casasRestantes > 0) {
        printf("Esquerda\n");
        moverRainha(casasRestantes - 1);
    }
}

int main() {
    // Variáveis para o número de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimentação da Torre
    printf("Movimentacao da Torre:\n");
    moverTorre(casasTorre);

    // Movimentação do Bispo
    printf("\nMovimentacao do Bispo:\n");
    
    // Além da recursividade, também utilizando loops aninhados para o Bispo
    int movimentosVerticais = 5;
    int movimentosHorizontais = 5;
    for (int i = 0; i < movimentosVerticais; i++) {
        for (int j = 0; j < movimentosHorizontais; j++) {
            if (i == j) { // Diagonal principal
                printf("Cima Direita\n");
            }
        }
    }

    // Movimentação da Rainha
    printf("\nMovimentacao da Rainha:\n");
    moverRainha(casasRainha);

    // Movimentação do Cavalo
    printf("\nMovimentacao do Cavalo:\n");
    
    // Variáveis para o movimento do Cavalo
    int movimentosCima = 2;  // Duas casas para cima
    int movimentosDireita = 1; // Uma casa para a direita

    // Loops aninhados com múltiplas variáveis
    for (int cima = 1; cima <= movimentosCima; cima++) {
        printf("Cima\n");
        if (cima == movimentosCima) {
            int direita = 1;
            while (direita <= movimentosDireita) {
                if (direita == 1) {
                    printf("Direita\n");
                }
                direita++;
            }
            break; // Após mover para a direita, o Cavalo conclui o movimento em "L"
        }
    }

    return 0;
}