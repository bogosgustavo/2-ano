#include <stdio.h>
#include <locale.h>

/*1. Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no
vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x, y;
    printf("Insira a posição para x dentro do vetor: ");
    scanf("%d",&x);
    printf("Insira a posição para y dentro do vetor: ");
    scanf("%d",&y);
    printf("A soma dos valores encontrados nas posições x e y é: %d",vet[x]+vet[y]);
    return 0;
}
*/
.
/*2. Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.
int main(){
    int vet[10]={1,3,5,7,9,11,13,15,17,19};
    int i;
    for (i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    return 0;
}
*/

/*3. Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor
obtido.
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[16];
    int i, aux;
    for(i=0;i<16;i++){
        printf("Informe um valor para o vetor na posição %d: ",i);
        scanf("%d",&vet[i]);
    }
    for(i = 0; i < 8; i++){
        aux = vet[i];
        vet[i] = vet[i + 8];
        vet[i + 8] = aux;
    }
    printf("\nVetor com 8 valores trocados:\n");
    for(i=0;i<16;i++){
        printf("%d ",vet[i]);
    }
    return 0;
}
*/

/*4. Leia um vetor de 10 posições e em seguida um valor X qualquer. Seu programa devera fazer uma busca do valor de X no
vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[10];
    int i, X;
    int busca=0;

    for(i=0;i<10;i++){
        printf("Informe um valor para o vetor na posição %d: \n",i);
        scanf("%d",&vet[i]);
    }
    printf("\nInforme um valor X para buscar no vetor:");
    scanf("%d",&X);
    for(i=0;i<10;i++){
        if(vet[i]==X){
            printf("\n O valor %d foi encontrado na posição %d",X,i);
            busca=1;
        }
    }
    if(busca==0){
        printf("\nO valor %d NÃO foi encontrado no vetor! :(",X);
    }
    return 0;
}
*/

/*5. Leia um vetor de 30 posições. Contar e escrever quantos valores pares ele possui.
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[30];
    int i,par=0;
    for(i=0;i<30;i++){
        printf("Informe um valor para a posição %d:",i);
        scanf("%d",&vet[i]);
        if(vet[i]%2==0){
            par++;
        }
    }
    printf("\nVetor: ");
    for(i=0;i<30;i++){
        printf("%d ",vet[i]);
    }
    if(par>0){
        printf("\nO vetor tem %d valores pares!", par);
    }else{
        printf("\nO vetor NÃO tem valores pares! :(");
    }
    return 0;
}
*/

/*6. Leia um vetor de 30 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[30];
    int i;
    for(i=0;i<30;i++){
        printf("Informe um valor para a posição %d:",i);
        scanf("%d",&vet[i]);
        if(vet[i]<0){
            vet[i]=0;
        }
    }
    for(i=0;i<30;i++){
        printf("%d ",vet[i]);
    }
}
*/

/*7. Leia dos vetores de 20 posições e calcule um outro vetor contendo, nas posições pares os valores do primeiro e nas
posições impares os valores do segundo.
int main() {
    int A[20], B[20], C[20];
    int i;
    printf("Digite os valores do vetor A:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &A[i]);
    }
    printf("Digite os valores do vetor B:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &B[i]);
    }
    // Construção do vetor C
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            C[i] = A[i];  // posições pares
        } else {
            C[i] = B[i];  // posições ímpares
        }
    }
    printf("Vetor C:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }
    return 0;
}
*/
