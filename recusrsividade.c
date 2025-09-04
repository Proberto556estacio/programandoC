# include <stdio.h>

void recusivo(int numero){    //Declarando uma variável local, criada dentro do parenteses, só vai existir no recursivo.
    if (numero > 0){
        printf("%d \n", numero);  //para ver o que vai fazer frame a frame
       

        recusivo(numero -1);    // momento que passa a ser recursivo (ele mesmo dentro dele)
    }
    


}


int main () {

    int quantidade = 10;     //fazer a chamada através de variável (quantidade de vezes que irá fazer o loop)

    printf("Contagem regressiva...");

    recusivo(quantidade);      //passar um valor inteiro




    return 0;

}