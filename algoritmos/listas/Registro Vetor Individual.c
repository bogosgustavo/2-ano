#include <stdio.h>
#define NOTAS 10

int main(){
char registro_academico[NOTAS][9];
int nota_1[NOTAS],nota_2[NOTAS],nota_exame[NOTAS];
float media[NOTAS];
int i;
int aprovadodireto=0,aprovadoexame=0,reprovadoexame=0,reprovadodireto=0;
for (i=0;i<NOTAS;i++){
    printf("\nInforme o registro academico do aluno %d: ",i+1);
    scanf("%s",registro_academico[i]);
    printf("Informe a nota 1 do aluno %d: ",i+1);
    scanf("%d",&nota_1[i]);
    printf("Informe a nota 2 do aluno %d: ",i+1);
    scanf("%d",&nota_2[i]);
    media[i]=(nota_1[i]+nota_2[i])/2.0;
    if (media[i]>=7){
        printf("O aluno de RA %s está aprovado!\n", registro_academico[i]);
        aprovadodireto++;
    }else if(media[i]>=4){
        printf("O aluno de RA %s está de exame...!\n", registro_academico[i]);
        printf("\n Informe a nota do exame do aluno %d: ",i+1);
        scanf("%d",&nota_exame[i]);
        media[i]=(media[i]+nota_exame[i])/2.0;
        if (media[i]>=6)
        {
            printf("Após exame, o aluno de RA %s está aprovado com media %.2f!\n", registro_academico[i],media[i]);
            aprovadoexame++;
        }else{
            printf("Após exame, o aluno de RA %s está reprovado com media %.2f...\n", registro_academico[i],media[i]);
            reprovadoexame++;
        }
        
    }else{
        printf("O aluno de RA %s está reprovado... :(\n", registro_academico[i]);
        reprovadodireto++;
    }
}
printf("\nAlunos aprovados direto: %d\nAlunos reprovados direto: %d\nAlunos aprovados por exame: %d\nAlunos reprovados após exame: %d\n",aprovadodireto, reprovadodireto, aprovadoexame, reprovadoexame);
return 0;
}
