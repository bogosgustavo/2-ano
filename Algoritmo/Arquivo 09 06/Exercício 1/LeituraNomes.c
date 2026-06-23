#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define charmax 100
#define nomemax 1000

int main() {
    char nomes[nomemax][charmax];
    char temp[charmax];

    int quantidade = 0;
    int i, j;

    // Abre o arquivo para leitura
    FILE *entrada = fopen("nomes.txt", "r");

    if (entrada == NULL) {
        printf("Erro ao abrir nomes.txt\n");
        return 1;
    }

    // Lê todos os nomes do arquivo
    while (fgets(nomes[quantidade], charmax, entrada) != NULL) {
        quantidade++;
    }

    fclose(entrada);

    // Ordenação alfabética
    for (i = 0; i < quantidade - 1; i++) {
        for (j = i + 1; j < quantidade; j++) {

            // Se o nome da posição i vier depois do da posição j
            if (strcmp(nomes[i], nomes[j]) > 0) {

                // Troca os dois nomes de posição
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    // Abre o arquivo de saída
    FILE *saida = fopen("nomes_ordenados.txt", "w");

    if (saida == NULL) {
        printf("Erro ao criar nomes_ordenados.txt\n");
        return 1;
    }

    // Escreve os nomes já ordenados no arquivo
    for (i = 0; i < quantidade; i++) {
        fprintf(saida, "%s", nomes[i]);
    }

    fclose(saida);

    printf("Arquivo nomes_ordenados.txt criado com sucesso!\n");

    return 0;
}