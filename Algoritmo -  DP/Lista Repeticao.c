/*1) Escreva um Algoritmo que imprima todos os números inteiros de 0 a 50.
#include <stdio.h>
int main(){
    int i;
    for(i = 0; i <= 50; i++){
        printf("%d\n", i);
    }
}
*/

/*2) Escreva um Algoritmo que imprima todos os números inteiros do intervalo fechado de
1 a 100.
#include <stdio.h>
int main() {
    int i;
    for(i = 1; i <= 100; i++){
        printf("%d\n", i);
    }
}
*/

/*3) Escreva um Algoritmo que imprima todos os números inteiros de 100 a 1 (em ordem
decrescente).
#include <stdio.h>
int main (){
    int i;
    for(i = 100; i >= 1; i--){
        printf("%d\n", i);
    }
}
*/

/*4) Escreva um Algoritmo que imprima todos os números inteiros de 100 a 200.
#include <stdio.h>
int main() {
    int i;
    for(i = 100; i <= 200; i++){
        printf("%d\n", i);
    }
}
*/

/*5) Escreva um Algoritmo que imprima todos os números inteiros de 200 a 100 (em
ordem decrescente).
#include <stdio.h>
int main (){
    int i;
    for(i=200; i>=100;i--){
        printf("%d\n", i);
    }
}
*/

/*6) Escreva um Algoritmo que imprima todos os números múltiplos de 5, no intervalo
fechado de 1 a 500.
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=500;i++){
        if(i%5==0)
            printf("%d\n", i);
    }
}
*/

/*7) Escreva um Algoritmo que imprima todos os números pares do intervalo fechado de 1
a 100.
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
*/

/*8) Escreva um Algoritmo que imprima os 100 primeiros números ímpares.
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=199;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}
*/

/*9) Escreva um Algoritmo que imprima o quadrado dos números no intervalo fechado de 1
a 20.
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=20;i++){
        printf("%d\n",i*i);
    }
}
*/

/*10) Escreva um Algoritmo que imprima todos os números ímpares do intervalo fechado
de 1 a 100.
#include <stdio.h>
int main (){
    int i;
    for(i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}
*/

/*11) Escreva um Algoritmo que receba dez números do usuário e imprima a metade de
cada número.
#include <stdio.h>
int main(){
    int i;
    double num;
    for (i=1;i<=10;i++){
        printf("Informe um numero: ");
        scanf("%lf",&num);
        printf("%lf\n",num/2);
    }
}
*/

/*12) Escreva um Algoritmo que receba dez números do usuário e imprima o quadrado de
cada número.
#include <stdio.h>
int main(){
    int i;
    float num;
    for(i=1;i<=10;i++){
        printf("Informe um numero: ");
        scanf("%f",&num);
        printf("%f\n",num*num);
    }
}
*/

/*13) Escreva um Algoritmo que receba quinze números do usuário e imprima a raiz
quadrada de cada número.
#include <stdio.h>
#include <math.h>
int main(){
    int i;
    double num;
    for(i=1;i<=15;i++){
        printf("Informe um numero: ");
        scanf("%lf",&num);
        printf("%lf\n",sqrt(num));
    }
}
*/

/*14) Escreva um Algoritmo que receba oito números do usuário e imprima o logaritmo de
cada um deles na base 10.
#include <stdio.h>
#include <math.h>
int main(){
    int i;
    double num;
    for(i=1;i<=8;i++){
        printf("Informe um numero: ");
        scanf("%lf",&num);
        printf("%lf\n",log10(num));
    }
}
*/

/*15) Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
de todos eles.
#include <stdio.h>
int main(){
    int i;
    int soma=0;
    for(i=1;i<=100;i++){
        printf("%d\n",i);
        soma+=i;
    }
    printf("Soma: %d\n", soma);
}
*/

/*16) Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
do quadrado desses números.
#include <stdio.h>
int main(){
    int i;
    int soma=0;
    for(i=1;i<=100;i++){
        printf("%d\n",i);
        soma+=i*i;
    }
    printf("Soma: %d\n", soma);
}
*/

/*17) Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
da metade desses números.
#include <stdio.h>
int main(){
    int i;
    float soma=0;
    for (i=1;i<=100;i++){
        printf("%d\n",i);
        soma+=i/2.0;
    }
    printf("Soma: %f",soma);
}
*/

/*18) Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
do cubo desses números.
#include <stdio.h>
int main(){
    int i;
    long long soma=0;
    for(i=1;i<=100;i++){
        printf("%d\n",i);
        soma+=i*i*i;
    }
    printf("Soma: %lld",soma);
}
*/

/*19) Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a média
de todos eles.
#include <stdio.h>
int main(){
    int i;
    int soma=0;
    float media;
    for(i=1;i<=100;i++){
        printf("%d\n",i);
        soma+=i;
    }
    media=soma/100.0;
    printf("Media: %.2f",media);
}
*/

/*20) Criar um Algoritmo que leia dez números inteiros e imprima o maior e o menor
número da lista.
#include <stdio.h>
int main(){
    int i,maior,menor,num;

    for(i=1;i<=10;i++){
        printf("Insira um numero: ");
        scanf("%d",&num);
        if(i==1){
            maior=menor=num;
        }else{
            if(num>maior) {
                    maior=num;
        }
            if (num<menor){
                menor=num;
        }
        }
    }
    printf("Maior: %d\nMenor: %d\n",maior,menor);
}
*/

/*21) Criar um Algoritmo que leia dez números inteiros e imprima o maior e o segundo
maior número da lista.
#include <stdio.h>
int main(){
    int i, num;
    int maior, segundoMaior;
    for(i = 1; i <= 10; i++){
        printf("Insira um numero: ");
        scanf("%d", &num);
        if(i == 1){
            maior = num;
            segundoMaior = num;
        }
        else if(i == 2){
            if(num > maior){
                segundoMaior = maior;
                maior = num;
            } else {
                segundoMaior = num;
            }
        }
        else {
            if(num > maior){
                segundoMaior = maior;
                maior = num;
            }
            else if(num > segundoMaior){
                segundoMaior = num;
            }
        }
    }

    printf("Maior: %d\nSegundo maior: %d\n", maior, segundoMaior);
}
*/

/*22) Criar um Algoritmo que leia os limites inferior e superior de um intervalo e imprima
todos os números pares no intervalo aberto e seu somatório.
#include <stdio.h>
int main(){
    int inf, sup, i, soma = 0;
    printf("Informe o numero inferior: ");
    scanf("%d", &inf);
    printf("Informe o numero superior: ");
    scanf("%d",&sup);
    for(i = inf + 1; i < sup; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
            soma += i;
        }
    }

    printf("Soma: %d\n", soma);
}
*/

/*23) Criar um Algoritmo que leia um número (NUM) e então imprima os múltiplos de 3 e
5, ao mesmo tempo, no intervalo fechado de 1 a NUM.
#include <stdio.h>
int main() {
    int num, i;
    printf("Informe o numero do limite: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            printf("%d\n", i);
        }
    }
}
*/

/*24) Escreva um Algoritmo que leia 200 números inteiros e imprima quantos são pares e
quantos são ímpares.
#include <stdio.h>
int main(){
    int i,par=0,impar=0, num;
    for(i=1;i<=200;i++){
        printf("Informe um numero: ");
        scanf("%d",&num);
        if(num%2==0){
            par++;
        }else{
            impar++;
        }
    }
    printf("Numero de pares: %d\n Numero de impares: %d",par, impar);
}
*/

/*25) Escreva um Algoritmo que receba 15 números e imprima quantos números maiores
que 30 foram digitados.
#include <stdio.h>
int main(){
    int i, maior=0;
    float num;
    for(i=1;i<=15;i++){
        printf("Informe um numero: ");
        scanf("%f",&num);
        if(num>30){
            maior++;
        }
    }
    printf("Numeros maiores que 30: %d", maior);
}
*/

/*26) Escreva um Algoritmo que leia 20 números e imprima a soma dos positivos e o total
de números negativos.
#include <stdio.h>
int main(){
    int i, pos=0,neg=0;
    double soma=0;
    double num;
    for(i=1;i<=20;i++){
        printf("Informe um numero: ");
        scanf("%lf",&num);
        if(num<0){
            neg++;
        }else{
            soma+=num;
        }
    }
    printf("Soma dos positivos: %.2f\n", soma);
    printf("Total de negativos: %d", neg);
}
*/
