#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
// Tema: Estruturas de Repetição e Constantes

// --- Funções Recursivas (Nível Mestre) ---
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        // Passo Recursivo: Move 1 casa e chama a função novamente com casas - 1
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
    // Caso Base: casas == 0 (não faz nada, encerra a recursão)
}

void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        // Passo Recursivo: Move 1 casa e chama a função novamente com casas - 1
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
    // Caso Base: casas == 0 (não faz nada, encerra a recursão)
}

void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        // Passo Recursivo: Move 1 casa e chama a função novamente com casas - 1
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
    // Caso Base: casas == 0 (não faz nada, encerra a recursão)
}

int main() {
    // Definição de Constantes para movimentação
    // O uso de 'const' garante segurança de tipo e facilita a manutenção do código.
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- Nível Novato: Movimentação Básica ---
    printf("--- Nivel Novato ---\n");

    // --- Implementação de Movimentação do Bispo ---
    // Movimento: 5 casas na diagonal superior direita.
    // Lógica: Diagonal = 1 passo Cima + 1 passo Direita.
    // Estrutura utilizada: while
    printf("--- Movimentacao do Bispo (While) ---\n");
    int passosBispo = 0;
    while (passosBispo < MOVIMENTO_BISPO) {
        // Simula o movimento diagonal imprimindo as direções componentes
        printf("Cima, Direita\n");
        passosBispo++;
    }

    // --- Implementação de Movimentação da Torre ---
    // Movimento: 5 casas para a direita.
    // Estrutura utilizada: for (Ideal para contagem definida)
    printf("\n--- Movimentacao da Torre (For) ---\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    // --- Implementação de Movimentação da Rainha ---
    // Movimento: 8 casas para a esquerda.
    // Estrutura utilizada: do-while (Garante pelo menos uma execução)
    printf("\n--- Movimentacao da Rainha (Do-While) ---\n");
    int passosRainha = 0;
    do {
        printf("Esquerda\n");
        passosRainha++;
    } while (passosRainha < MOVIMENTO_RAINHA);

    // --- Nível Aventureiro: Movimentação do Cavalo ---
    // Movimento: em 'L' (Baixo e Esquerda).
    // Requisito: Utilizar loops aninhados (for e while).
    printf("\n--- Nivel Aventureiro ---\n");
    printf("--- Movimentacao do Cavalo (Loops Aninhados) ---\n");

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

    // --- Nível Mestre: Recursividade e Controle Avançado ---
    printf("\n--- Nivel Mestre ---\n");

    // --- Movimentação do Bispo (Recursivo) ---
    // Movimento: 5 casas na diagonal superior direita.
    // Estrutura utilizada: Função Recursiva
    printf("--- Movimentacao do Bispo (Recursivo) ---\n");
    moverBispoRecursivo(MOVIMENTO_BISPO);

    // --- Movimentação da Torre (Recursivo) ---
    // Movimento: 5 casas para a direita.
    // Estrutura utilizada: Função Recursiva
    printf("\n--- Movimentacao da Torre (Recursivo) ---\n");
    moverTorreRecursivo(MOVIMENTO_TORRE);

    // --- Movimentação da Rainha (Recursivo) ---
    // Movimento: 8 casas para a esquerda.
    // Estrutura utilizada: Função Recursiva
    printf("\n--- Movimentacao da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(MOVIMENTO_RAINHA);

    // --- Movimentação do Cavalo (Mestre) ---
    // Movimento: em 'L' (Cima e Direita).
    // Requisito: Loops com variáveis múltiplas e controle de fluxo (continue, break).
    printf("\n--- Movimentacao do Cavalo (Mestre - Loops Complexos) ---\n");

    // Loop for com duas variáveis de controle (i para vertical, j para horizontal)
    for (int i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            // continue força a próxima iteração do loop, pulando o código abaixo
            continue;
        }

        if (j < 1) {
            printf("Direita\n");
            j++;
            // break encerra o loop imediatamente após completar o movimento horizontal
            break;
        }
    }

    return 0;
}
