#include <stdio.h>

int main() {
    int x = 7; // linha inicial
    int y = 0; // coluna inicial

    for (int moviCavalo = 0; moviCavalo < 20; moviCavalo++) { // limite arbitrário para evitar loop infinito

        // Mover duas vezes para cima
        for (int i = 0; i < 2; i++) {
            if (x - 1 < 0) {
                // Sai se ultrapassa limite superior
                return 0;
            }
            x = x - 1;
            printf("Cima\n");
        }

        // Mover uma vez para a direita
        if (y + 1 >= 8) {
            // Sai se ultrapassa limite direito
            return 0;
        }
        y = y + 1;
        printf("Direita\n");
    }

    return 0;
}
