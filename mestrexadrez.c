#include <stdio.h>

// Função recursiva para a Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo (diagonal - cima direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Movimento do Bispo com loops aninhados
void moverBispoLoops(int casas) {
    printf("Movimento do Bispo com Loops Aninhados\n");

    for (int i = 0; i < casas; i++) { // vertical
        for (int j = 0; j < 1; j++) { // horizontal (1 vez para manter diagonal)
            printf("Cima Direita\n");
        }
    }

    printf("\n");
}

// Movimento do Cavalo com loops aninhados e condições (duas para cima, uma para direita)
void moverCavalo() {
    const int linhas = 3;  // simula a altura do tabuleiro
    const int colunas = 3; // simula a largura do tabuleiro

    printf("Movimento do Cavalo\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == 0 || j == colunas - 1) {
                continue; // pular posições onde não dá pra mover
            }

            if (i >= 2 && j + 1 < colunas) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // exemplo de uso do break após movimento válido
            }
        }
    }

    printf("\n");
}

int main() {
    // Constantes de movimento
    const int movTorre = 5;
    const int movRainha = 8;
    const int movBispo = 5;

    // ---------------------------
    // Movimento do Bispo (Recursivo)
    printf("Movimento do Bispo (Recursivo)\n");
    moverBispoRecursivo(movBispo);
    printf("\n");

    // Movimento do Bispo com Loops Aninhados
    moverBispoLoops(movBispo);

    // ---------------------------
    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre\n");
    moverTorre(movTorre);
    printf("\n");

    // ---------------------------
    // Movimento da Rainha (Recursivo)
    printf("Movimento da Rainha\n");
    moverRainha(movRainha);
    printf("\n");

    // ---------------------------
    // Movimento do Cavalo (Loops Aninhados com Condições)
    moverCavalo();

    return 0;
}
