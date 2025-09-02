#include <stdio.h>


int main () {

    //1º DECLARAR O LOOP EXTERNO, 2º condição,  3º incremento

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++)
        {
        printf("%d * %d = %d \n", i, j, i * j);
        }
        
        printf("\n");
    }
    

    return 0;
}