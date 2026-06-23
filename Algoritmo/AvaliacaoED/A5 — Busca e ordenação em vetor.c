#include <stdio.h>
#define N 15

int main(){
    int vet[N];
    int i, j, temp;
    int busca, posicao;

    for(i=0; i<N; i++){
        printf("Informe um valor para a posição %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor não ordenado:\n");
    for(i=0; i<N; i++){
        printf("%d ", vet[i]);
    }
    for(i=0; i<N-1; i++){
        for(j=0; j<N-1; j++){
            if(vet[j] > vet[j+1]){
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
    printf("\n");
    printf("\nVetor ordenado:\n");
    for(i=0; i<N; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    printf("\nInforme um valor para buscar: ");
    scanf("%d",&busca);
    for(i=0;i<N;i++){
        if (vet[i]==busca){
            posicao=i;
            break;
        }
    }
    if(posicao==-1){
        printf("Valor de busca não encontrado :(\n");
    }else{
        printf("Valor encontrado na posição %d!\n",posicao+1);
    }
    return 0;
}