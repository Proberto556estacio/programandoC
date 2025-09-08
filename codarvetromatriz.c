# include <stdio.h>

int main() {

    int index;

     char * nomeAlunos [3] [3] = {
            {"Aluno 0", "Pt: 30", "Mat: 90"},
            {"Aluno 1", "Pt: 60", "Mat: 60"},
            {"Aluno 2", "Pt: 90", "Mat: 30"}
        };

        //Antes de acessar esses valores vamos criar um prompt para guiar o usuário
        printf("Digite o número do aluno para mostrar as notas...\n");
        printf("Aluno 0, digite 0\n");
        printf("Aluno 1, digite 1\n");
        printf("Aluno 2, digite 2\n");
              
        scanf("%d", &index);

        printf("As notas do %s são: %s, %s...\n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2]);





    return 0;

}