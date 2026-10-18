#include <stdio.h>

int main(){
    int N, resultado;
    int i;
    printf("Informe um número inteiro: ");
    scanf("%d", &N);
    printf("\nTabuada do número %d\n", N);
    for(i = 1; i <= 10; i++){
        resultado = N * i;
        printf("%d x %d = %d\n", N, i, resultado);
    }
    return 0;
}