#include <stdio.h>


int main () {

    int vetor[5];  //Declarando um vetor de 5 inteiros sem inicializar;

    //Inicializando o vetor com loop "for".
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; //Atribuindo valores ao vetor.        
    }
        
    //Exibindo o valor do vetor com loop "for".
    for (int i = 0; i < 5; i++)
    {
        printf("Vetor [%d] - %d\n", i, vetor[i]);
    }
    



    return 0;

}