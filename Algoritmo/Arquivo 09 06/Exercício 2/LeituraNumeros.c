#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main() {
    int numeros[TAM];
    int i, j, temp;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Cria o arquivo com 20 números aleatórios
    FILE *arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar numeros.txt\n");
        return 1;
    }

    for (i = 0; i < TAM; i++) {
        int num = rand() % 100 + 1;
        fprintf(arquivo, "%d\n", num);
    }

    fclose(arquivo);

    // Abre o arquivo para leitura
    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir numeros.txt\n");
        return 1;
    }

    // Lê os números para o vetor
    for (i = 0; i < TAM; i++) {
        fscanf(arquivo, "%d", &numeros[i]);
    }

    fclose(arquivo);

    // Ordenação crescente
    for (i = 0; i < TAM - 1; i++) {
        for (j = i + 1; j < TAM; j++) {
            if (numeros[i] > numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Salva os números ordenados
    FILE *saida = fopen("numeros_ordenados.txt", "w");

    if (saida == NULL) {
        printf("Erro ao criar numeros_ordenados.txt\n");
        return 1;
    }

    for (i = 0; i < TAM; i++) {
        fprintf(saida, "%d\n", numeros[i]);
    }

    fclose(saida);

    printf("Arquivo numeros_ordenados.txt criado com sucesso!\n");

    return 0;
}