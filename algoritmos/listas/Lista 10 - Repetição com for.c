#include <stdio.h>

/*1) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.
int main(){
    int num,i;
    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i=0;i<=num;i++){
        printf("%d ",i);
    }
    return 0;
}
*/

/*2) Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.
int main(){
    int num,i;
    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i=num;i>=0;i--){
        printf("%d ",i);
    }
    return 0;
}
*/

/*3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.
int main(){
    int num,i;
    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        printf("%d ",2*i-1);
    }
    return 0;
}
*/

/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0.
int main(){
    int i;

    for(i=1;i<=5;i++){
        printf("%d ",3*i);
    }
    return 0;
}
*/

/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
int main(){
    int i,soma=0;

    for(i=0;i<50;i++){
        soma = soma + (2*i);
    }

    printf("Soma: %d",soma);
    return 0;
}
*/

/*6) Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
terminando em 0. Mostre uma mensagem “FIM!” após a contagem.
int main(){
    int i;

    for(i=10;i>=0;i--){
        printf("%d\n",i);
    }

    printf("FIM!");
    return 0;
}
*/

/*7) Escreva um programa que leia um número inteiro positivo N e em seguida imprima N
linhas do chamado triângulo de Floyd:
int main(){
    int num,i,j,valor=1;
    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("%d ",valor);
            valor++;
        }
        printf("\n");
    }
    return 0;
}
*/

/*8) Faça um programa que receba um número inteiro maior do que 1 e verifique se o
número fornecido é primo ou não.
int main(){
    int num,i,div=0;
    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        if(num%i==0){
            div++;
        }
    }

    if(div==2){
        printf("Primo");
    }else{
        printf("Nao primo");
    }

    return 0;
}
*/
