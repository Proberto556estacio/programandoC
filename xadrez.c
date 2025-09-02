# include <stdio.h>

int main () {

    
    
    //Movimento da torre - Estrutura repetição FOR

    int movTorre = 5;
    printf("Movimento da Torre\n");
    
    //Mover a Torre 5 casas para direita.
    for (int i = 0; i < movTorre; i++) //Laço "for" que começa 0 e repete se i for menor que 5. A cada repetição aumenta 1., garantindo 5 repetições.
    {
    printf("Direita\n"); // Torre movimentando linha reta para direita.
    }
    printf("\n");


    //Movimento do Bispo - Estrutura While
    int movBispo = 5;
    int i = 0;
    printf("Movimento do Bispo\n");

    //Mover o Bispo 5 casas para direita.
    while (i < movBispo)
    {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");    


    //Movimento da Rainha - Estrutura Do While
    int movRainha = 8;
    int j = 0;
    printf("Movimento da Rainha\n");
    
    do
    {
        printf("Esquerda\n");
        j++;
    } while (j < movRainha);
    




    
    return 0;

}


    
    


