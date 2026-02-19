#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
// Tema: Estruturas de Repetição e Constantes

int main() {
    // Definição de Constantes para movimentação
    // O uso de 'const' garante segurança de tipo e facilita a manutenção do código.
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- Implementação de Movimentação do Bispo ---
    // Movimento: 5 casas na diagonal superior direita.
    // Lógica: Diagonal = 1 passo Cima + 1 passo Direita.
    // Estrutura utilizada: while
    printf("--- Movimentacao do Bispo ---\n");
    int passosBispo = 0;
    while (passosBispo < MOVIMENTO_BISPO) {
        // Simula o movimento diagonal imprimindo as direções componentes
        printf("Cima, Direita\n");
        passosBispo++;
    }

    // --- Implementação de Movimentação da Torre ---
    // Movimento: 5 casas para a direita.
    // Estrutura utilizada: for (Ideal para contagem definida)
    printf("\n--- Movimentacao da Torre ---\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    // --- Implementação de Movimentação da Rainha ---
    // Movimento: 8 casas para a esquerda.
    // Estrutura utilizada: do-while (Garante pelo menos uma execução)
    printf("\n--- Movimentacao da Rainha ---\n");
    int passosRainha = 0;
    do {
        printf("Esquerda\n");
        passosRainha++;
    } while (passosRainha < MOVIMENTO_RAINHA);

    // --- Nível Aventureiro: Movimentação do Cavalo ---
    // Movimento: em 'L' (Baixo e Esquerda).
    // Requisito: Utilizar loops aninhados (for e while).
    printf("\n--- Movimentacao do Cavalo ---\n");

    // Loop externo (for) controla a execução do movimento completo
    for (int i = 0; i < 1; i++) {
        int passosVertical = 0;
        // Loop interno (while) para o movimento vertical (Baixo)
        while (passosVertical < 2) {
            printf("Baixo\n");
            passosVertical++;
        }

        int passosHorizontal = 0;
        // Loop interno (while) para o movimento horizontal (Esquerda)
        while (passosHorizontal < 1) {
            printf("Esquerda\n");
            passosHorizontal++;
        }
    }

    return 0;
}
