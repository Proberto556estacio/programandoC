# include <stdio.h>


    int main() {

        int numeros[] = {10, 20, 30, 40, 50};

        /*
        printf("O primeiro elemento é: %d\n", numeros[0]);
        printf("O segundo elemento é: %d\n", numeros[1]);
        printf("O terceiro elemento é: %d\n", numeros[2]);
        printf("O quarto elemento é: %d\n", numeros[3]);
        printf("O quinto elemento é: %d\n", numeros[4]);
        */

        for (int i = 0; i < 5; i++)
        {
            printf("Mostre os valores dos elementos: %d\n", numeros[i]); 
        }
        




        return 0;
    }