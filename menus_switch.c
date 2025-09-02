# include <stdio.h>

int main () {

    int opcao;

    printf("Menu Principal\n");
    printf("1. Ininicar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3, Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Iniciando jogo ...\n");
        break;
    case 2:
        printf("As regras do jogo:\n");
        printf("Regra 1\n");
        printf("Regra 2\n");
        printf("Regra 3\n");
        break;
    case 3:
        printf("Saindo do jogo....");
        break; 
    default:
        printf("Opção invalida. Tente novamente\n");
        break;
    }   






    return 0;
}
