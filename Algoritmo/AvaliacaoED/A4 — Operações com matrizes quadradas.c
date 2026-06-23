#include <stdio.h>

int main(){
    int A[3][3], B[3][3], C[3][3], D[3][3], E[3];
    int N = 3;
    int i, j, soma = 0;

    // Leitura da matriz A
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Informe um valor para A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // Leitura da matriz B e calculo de C = A + B
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Informe um valor para B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Calculo da transposta de A
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            D[i][j] = A[j][i];
        }
    }

    // Calculo da diagonal principal de B e sua soma
    for (i = 0; i < N; i++){
        E[i] = B[i][i];   
        soma += E[i];      
    }

    // Exibicao: Soma A + B
    printf("\nSoma dos valores de A e B:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    // Exibicao: Transposta de A
    printf("\nTransposta de A:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%d\t", D[i][j]);
        }
        printf("\n");
    }

    // Exibicao: Diagonal principal de B
    printf("\nDiagonal principal de B:\n");
    for (i = 0; i < N; i++){
        printf("%d\t", E[i]);
    }

    // Exibicao: Soma da diagonal
    printf("\n\nSoma da diagonal principal de B:\n");
    printf("%d\n", soma);
    printf("\n");
    return 0;
}