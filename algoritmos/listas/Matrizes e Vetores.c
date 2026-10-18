#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    /*1)
    int vet [12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x, y;
    printf("Insira a posição para x dentro do vetor: ");
    scanf("%d", &x);
    printf("Insira a posição para y dentro do vetor: ");
    scanf("%d", &y);
    printf("A soma dos valores encontrados nas posições x e y: %d.\n", x + y);
    */
    /*2)
    int vet[10] = {1,3,5,7,9,11,13,15,17,19}
    int i;
    for (i = 0; i<10;i++){
        printf("%d", vet[i]);
    }
    */
    /*3)
    int vet[16];
    int i, aux;
    for(i=0;i<16;i++){
        printf("Digite um valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }
    for(i=0; i < 8; i++){
        aux = vet[i];
        vet[i] = vet[i + 8];
        vet[i + 8] = aux;
    }
    printf("\nVetor com os valores trocados: \n");
    for(i=0;i<16;i++){
        printf("%d ", vet[i]);
    }
    */
    /*4)
    int vet [10];
    int X, i, busca = 0;

    for(i=0;i<10;i++){
        printf("Digite um valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &X);
    for(i=0;i<10;i++){
        if(vet[i]==X){
            printf("\n O valor %d foi encontrado na posição %d.", X, i);
            busca = 1;
        }
    }
    if(busca == 0){
        printf("O valor %d não foi encontrado!", X);
    }
    */
    /*5)
    int vet[30];
    int i, cont = 0, par = 0;

    for(i = 0; i < 30; i++){
        printf("Digite um valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 30; i++){
        cont ++;
        if(vet[i]%2==0){
            par++;
        }
    }
    for(i = 0; i < 30; i++){
        printf("%d ", vet[i]);
    }
    printf("\nQuantidade de valorees do vetor: %d", cont);
    printf("\nQunatidade de valores pares do vetor: %d", par);
    */
    /*6)
    int vet[30];
    int i;

    for(i = 0; i < 30; i++){
        printf("Digite um valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 30; i++){
        if(vet[i] % 2 != 0){
            vet[i] = 0;
        }
    }
    printf("\nVetor modificado:");
    for(i = 0; i < 30; i++){
        printf("%d ", vet[i]);
    }
    */

    /*7)
    int vetA[10], vetB[10], vet[10];
    int i;
    for(i = 0; i < 10; i++){
        printf("Digite um valor para a posição %d do vetor A: ", i);
        scanf("%d", &vetA[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Digite um valor para a posição %d do vetor B: ", i);
        scanf("%d", &vetB[i]);
    }
    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            vet[i] = vetA[i];
        } else {
            vet[i] = vetB[i];
        }
    }
    printf("\nVetor resultante:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    return 0;
    }
    */
   
    /*8)
    int vet1[10], vet2[10], vet3[10];
    int i;
    for(i=0;i<10;i++){
        printf("Digite um valor para a posição %d do vetor 1: ", i);
        scanf("%d", &vet1[i]);
    }
    for(i=0;i<10;i++){
        vet2[i]=vet1[i];
    }
     for(i=0;i<10;i++){
       vet3[i]=vet2[i];
    }
    for(i=0;i<10;i++){
        printf("%d ", vet3[i]);
    }
}
    */
   
    int i;
    char frase[20];