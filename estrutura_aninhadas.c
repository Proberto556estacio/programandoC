#include <stdio.h>

int main() {

    int idade, dependentes;
    float renda;
    

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua renda:\n");
    scanf("%f", &renda);
    printf("Digite o número de dependentes\n");
    scanf("%d", &dependentes);


    if (idade >= 18 && idade <= 65) {
        if (renda < 3000.0) {
            if (dependentes > 2) {
                printf("Você está qualificado para os benefícios sociais.");
            } else {
                printf("Você não está qualificado para os benefícios devido ao número dos dependentes.\n");
        } 
        } else {
            printf("Você não está qualificado para os benefícios devido à sua renda.\n");
        } 
    } else {
        printf("Você não está qualificado para os benefícios devido à sua idade.\n");
    }
         
            
        
    return 0;

}

