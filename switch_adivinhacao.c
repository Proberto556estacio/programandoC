
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao; 
    int numeroSecreto, palpite;

    // DEFINIÇÃO DO MENU PRINCIPAL
    printf("Menu Principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        
        if (numeroSecreto == palpite) {
        printf("Parabens! Você acertou!\n");
        printf("numero secreto %d\n", numeroSecreto);
        } else {
        printf("Você errou. O número era %d. \n,", numeroSecreto);
        }
        break;
    case 2:
        printf("As regras do jogo são:\n");
        printf("1 - Escolha uma opção no menu\n");
        printf("2 - Se você escolher 'Iniciar Jogo', adivinhe o número secreto\n");
        printf("3 - O jogo termina quando você escolher 'Sair'.\n");
        break;
    case 3:
        printf("Saindo do Jogo...\n");
        break;         
    default:
        printf("Opção invalida. Tente novament.\n");
    }







    return 0;
}

