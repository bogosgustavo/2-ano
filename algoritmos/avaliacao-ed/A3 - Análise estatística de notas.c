#include <stdio.h>

int main(){
    int i;
    float notas[20];
    float media, maior, menor;
    float soma = 0;
    int acima_media = 0;

    for(i = 0; i < 20; i++){
        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    maior = notas[0];
    menor = notas[0];

    for(i = 0; i < 20; i++){
        soma += notas[i];

        if(notas[i] > maior)
            maior = notas[i];

        if(notas[i] < menor)
            menor = notas[i];
    }
    media = soma / 20;

    for(i = 0; i < 20; i++){
        if(notas[i] > media)
            acima_media++;
    }

    printf("\nMédia da turma: %.2f", media);
    printf("\nMaior nota: %.2f", maior);
    printf("\nMenor nota: %.2f", menor);
    printf("\nAlunos acima da média: %d\n", acima_media);

    return 0;
}