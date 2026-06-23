#include <stdio.h>
#include <locale.h>

int main(){
    int N;
    int i,a=0,b=1,proximo,soma=0;
    printf("Quantos números da Sequência de Fibonacci deseja imprimir?");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("\n%d ",a);
        soma=soma+a;
        proximo=a+b;
        a=b;
        b=proximo;
    }
    printf("\nSoma dos %d termos de Fibonacci: %d\n",N,soma);
    return 0;
}
