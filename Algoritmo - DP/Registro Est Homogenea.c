#include <stdio.h>
#define NOTAS 10

typedef struct {
    char registro_academico[9];
    int nota_1;
    int nota_2;
    int nota_exame;
    float media;
} Aluno;

int main() {
    Aluno alunos[NOTAS];
    int i;
    int aprovadodireto = 0, aprovadoexame = 0, reprovadoexame = 0, reprovadodireto = 0;

    for (i = 0; i < NOTAS; i++) {
        printf("\nInforme o registro academico do aluno %d: ", i + 1);
        scanf("%s", alunos[i].registro_academico);

        printf("Informe a nota 1 do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].nota_1);

        printf("Informe a nota 2 do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].nota_2);

        alunos[i].media = (alunos[i].nota_1 + alunos[i].nota_2) / 2.0;

        if (alunos[i].media >= 7) {
            printf("O aluno de RA %s está aprovado com sua média %.2f!\n", alunos[i].registro_academico,alunos[i].media);
            aprovadodireto++;
        } else if (alunos[i].media >= 4) {
            printf("O aluno de RA %s está de exame com sua media %.2f...!\n", alunos[i].registro_academico,alunos[i].media);
            printf("\nInforme a nota do exame do aluno %d: ", i + 1);
            scanf("%d", &alunos[i].nota_exame);

            alunos[i].media = (alunos[i].media + alunos[i].nota_exame) / 2.0;

            if (alunos[i].media >= 6) {
                printf("Após exame, o aluno de RA %s está aprovado com media %.2f!\n", alunos[i].registro_academico, alunos[i].media);
                aprovadoexame++;
            } else {
                printf("Após exame, o aluno de RA %s está reprovado com media %.2f...\n", alunos[i].registro_academico, alunos[i].media);
                reprovadoexame++;
            }
        } else {
            printf("O aluno de RA %s está reprovado com sua média %.2f... :(\n", alunos[i].registro_academico,alunos[i].media);
            reprovadodireto++;
        }
    }

    printf("\nAlunos aprovados direto: %d\nAlunos reprovados direto: %d\nAlunos aprovados por exame: %d\nAlunos reprovados após exame: %d\n",
           aprovadodireto, reprovadodireto, aprovadoexame, reprovadoexame);

    return 0;
}