#include <stdio.h>


    int main(){

        int matriz [3] [3];   //Declarando uma matriz de 3x3 de inteiros.
        
        //Inicializar a matriz usando estrutura de repetição "for" aninhadas.
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matriz [i] [j] = i + j;
                printf("Matriz [%d] [%d] = %d\n", i, j, matriz [i] [j]);
            }
            
        }
        

        return 0;
    }