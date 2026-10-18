/*1. Escreva um Algoritmo que leia um número e o imprima caso ele seja maior que
20.
#include <stdio.h>
int main (){
    float num;
    printf ("Informe um numero: ");
    scanf("%f",&num);
    if (num>20){
        printf ("Seu numero %.2f eh maior que 20!", num);
      } else return 0;
   return 0;
}
*/

 /*2. Construa um Algoritmo que leia dois valores numéricos inteiros e efetue a adição;
caso o resultado seja maior que 10, apresentá-lo.
 #include <stdio.h>
 int main (){
    int a,b,soma;
    printf("Informe numero inteiro a: ");
    scanf("%d",&a);
    printf("Informe numero inteiro b: ");
    scanf("%d",&b);
    soma=a+b;
    if(soma>10){
        printf ("A soma entre %d e %d resulta em %d, sendo maior que 10",a,b,soma);
    }
    return 0;
 }
*/

/*3. Construa um Algoritmo que determine (imprima) se um dado número N inteiro
(recebido através do teclado) é PAR ou ÍMPAR.
#include <stdio.h>
int main(){
    int num;
    printf("Informe numero inteiro a: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("O numero %d eh par",num);
    }else printf("O numero %d eh impar",num);
}
*/

/*4. Escreva um Algoritmo para determinar se um dado número N (recebido através
do teclado) é POSITIVO, NEGATIVO ou NULO.
#include <stdio.h>
int main(){
    int num;
    printf("Informe numero inteiro: ");
    scanf("%d",&num);
    if(num>0){
        printf ("O numero %d eh positivo",num);
    }else if(num<0){
        printf ("O numero %d eh negativo",num);
    }else printf("O numero informado eh nulo");
    return 0;
}
*/

/*5. Construir um Algoritmo que leia dois números e efetue a adição. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8;
caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5.
#include <stdio.h>

int main(){
    float a, b, soma;

    printf("Informe numero a: ");
    scanf("%f", &a);
    printf("Informe numero b: ");
    scanf("%f", &b);

    soma = a + b;

    if(soma > 20){
        soma = soma + 8;
        printf("A soma dos numeros %.2f e %.2f mais 8 eh de %.2f", a, b, soma);
    } else {
        soma = soma - 5;
        printf("A soma dos numeros %.2f e %.2f menos 5 eh de %.2f", a, b, soma);
    }

    return 0;
}
*/

/*6. Escreva um Algoritmo que leia um número e imprima a raiz quadrada do número
caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja
negativo.
#include <stdio.h>
#include <math.h>

int main(){
    int num,num2;
        printf("Informe numero: ");
    scanf("%d", &num);
    num2=num*num;
    if (num>=0){
            printf("%.2f",sqrt(num));
    }else printf("%d",num2);
    return 0;
}
*/

/*7. Construa um Algoritmo que imprima qual o menor e qual o maior valor de dois
números A e B, lidos através do teclado.
#include <stdio.h>
int main(){
     float a,b;
     printf("Informe numero a: ");
     scanf("%f", &a);
     printf("Informe numero b: ");
     scanf("%f", &b);
     if(a>b){
        printf ("O numero a %.2f eh maior que o numero b %.2f", a,b);
     }else if(a<b){
        printf ("O numero b %.2f eh maior que o numero a %.2f", b,a);
     }else printf("Os numeros %.2f e %.2f sao iguais",a,b);
     return 0;
}
*/

/* 8. Escreva um Algoritmo para determinar se um número A é divisível por outro
número B. Esses valores devem ser fornecidos pelo usuário.
#include <stdio.h>
int main(){
     int a,b;
     printf("Informe numero a: ");
     scanf("%d", &a);
     printf("Informe numero b: ");
     scanf("%d", &b);
     if (b==0){
        printf("Nao eh possivel divisao por zero!");
     }else if (a%b==0){
        printf ("%d eh divisivel por %d !",a,b);
     }else{
        printf ("%d nao eh divisivel por %d !",a,b);
     }
     return 0;
}
*/

/*9. Escreva um Algoritmo que receba um número e imprima uma das mensagens: “é
múltiplo de 3” ou “não é múltiplo de 3”.
#include <stdio.h>
int main(){
    int num;
    printf("Informe o numero: ");
    scanf("%d", &num);
    if (num%3==0){
        printf("Eh multiplo de 3");
    }else printf("Nao eh multiplo de 3");
    return 0;
}
*/

/*10. Escreva um Algoritmo que leia um número e informe se ele é ou não divisível por
5
#include <stdio.h>
int main(){
    int num;
    printf("Informe o numero: ");
    scanf("%d", &num);
    if (num%5==0){
        printf("Eh divisivel por 5");
    }else printf("Nao eh divisivel por 5");
    return 0;
}
*/

/*11. Escreva um Algoritmo que leia um número e informe se ele é divisível por 3 e por
7
#include <stdio.h>
int main(){
    int num;
    printf("Informe o numero: ");
    scanf("%d", &num);
    if (num%3==0&&num%7==0){
        printf("Eh divisivel por 3 e 7");
    }else printf("Nao eh divisivel por 3 e 7");
    return 0;
}
*/

/*12. Escreva um Algoritmo que leia um número e informe se ele é divisível por 10, por
5 ou por 2 ou se não é divisível por nenhum deles.
#include <stdio.h>

int main() {
    int num, achou = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num % 10 == 0) {
        printf("Divisivel por 10\n");
        achou = 1;
    }
    if (num % 5 == 0) {
        printf("Divisivel por 5\n");
        achou = 1;
    }
    if (num % 2 == 0) {
        printf("Divisivel por 2\n");
        achou = 1;
    }

    if (!achou) {
        printf("Nao eh divisivel por 10, 5 ou 2\n");
    }

    return 0;
}
*/

/*13. A prefeitura de Contagem abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Fazer um Algoritmo que permita entrar com o salário bruto e o valor da
prestação, e informar se o empréstimo pode ou não ser concedido.
#include <stdio.h>
int main (){
    float prestacao, salario;
    printf("Informe seu salario bruto: ");
    scanf("%f",&salario);
    printf("Informe a prestacao que voce pretende: ");
    scanf("%f",&prestacao);
    if (prestacao<=salario*0.3){
        printf("Voce pode fazer um emprestimo!");
    }else printf("Voce nao pode fazer um emprestimo...");
}
*/

/* 14. Construa um Algoritmo que dado quatro valores, A, B, C e D, o Algoritmo
imprima o maior e o menor valor.
#include <stdio.h>
int main (){
    float a,b,c,d,maior,menor;
    printf("Digite quatro valores:\n ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    maior=a;
    menor=a;

    if (b> maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;

    // Verifica o menor
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}
*/

/*15. Dados três valores A, B e C, construa um Algoritmo, que imprima os valores de
forma ascendente (do menor para o maior).
#include <stdio.h>
int main (){
    float a,b,c,maior,menor, meio;
    printf("Digite tres valores:\n ");
    scanf("%f %f %f", &a, &b, &c);
    maior=a;
    menor=a;

    if (b> maior) maior = b;
    if (c > maior) maior = c;


    // Verifica o menor
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    meio=a+b+c-maior-menor;
    printf("%.2f %.2f %.2f", menor, meio, maior);


    return 0;
}
*/

/*16. Dados três valores A, B e C, construa um Algoritmo, que imprima os valores de
forma descendente (do maior para o menor).
#include <stdio.h>
int main (){
    float a,b,c,maior,menor,meio;
    printf("Digite tres valores:\n ");
    scanf("%f %f %f", &a, &b, &c);
    maior=a;
    menor=a;

    if (b> maior) maior = b;
    if (c > maior) maior = c;


    // Verifica o menor
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    meio=a+b+c-maior-menor;
    printf("%.2f %.2f %.2f", maior, meio, menor);


    return 0;
}
*/

/*17. Construa um Algoritmo que indique se um número digitado está compreendido
entre 20 e 90 ou não (20 e 90 não estão na faixa de valores).
#include <stdio.h>
int main (){
    float num;
    printf("Informe um numero: ");
    scanf("%f",&num);
    if (num>20&&num<90){
        printf("O numero informado %.2f esta entre 20 e 90", num);
    }else printf("O numero informado %.2f  NAO esta entre 20 e 90", num);
    return 0;
}
*/

/*18. Construir um Algoritmo que leia um número e imprima se ele é igual a 5, a 200, a
400, se está no intervalo entre 500 e 1000, inclusive, ou se ela está fora dos
escopos anteriores.
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    if(num == 5)
        printf("Igual a 5\n");
    else if(num == 200)
        printf("Igual a 200\n");
    else if(num == 400)
        printf("Igual a 400\n");
    else if(num >= 500 && num <= 1000)
        printf("Entre 500 e 1000\n");
    else
        printf("Fora dos escopos\n");

    return 0;
}
*/

/*19. Criar um Algoritmo que leia dois números e imprimir o quadrado do menor
número e raiz quadrada do maior número, se for possível.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, menor, maior;

    scanf("%f %f", &a, &b);

    if(a < b){
        menor = a;
        maior = b;
    } else {
        menor = b;
        maior = a;
    }

    printf("Quadrado do menor: %.2f\n", menor * menor);

    if(maior >= 0)
        printf("Raiz do maior: %.2f\n", sqrt(maior));
    else
        printf("Nao existe raiz real\n");

    return 0;
}
*/

/*20. Construa um Algoritmo para determinar se o indivíduo esta com um peso
favorável. Essa situação é determinada através do IMC (Índice de Massa
Corpórea), que é definida como sendo a relação entre o peso (PESO) e o quadrado
da Altura (ALTURA) do indivíduo. Ou seja,

e, a situação do peso é determinada pela tabela abaixo:
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite peso: ");
    scanf("%f", &peso);
    printf("Digite altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if(imc < 18.5)
        printf("Abaixo do peso\n");
    else if(imc < 25)
        printf("Peso normal\n");
    else if(imc < 30)
        printf("Sobrepeso\n");
    else
        printf("Obesidade\n");

    return 0;
}
*/

/* 21. A CEF concederá um crédito especial com juros de 2% aos seus clientes de
acordo com o saldo médio no último ano. Fazer um Algoritmo que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
Imprimir uma mensagem informando o saldo médio e o valor de crédito.
 #include <stdio.h>

int main() {
    float saldo, credito;
    printf("Informe seu saldo medio: ");
    scanf("%f", &saldo);

    if(saldo <= 200)
        credito = 0;
    else if(saldo <= 400)
        credito = saldo * 0.2;
    else if(saldo <= 600)
        credito = saldo * 0.3;
    else
        credito = saldo * 0.4;

    printf("Saldo medio: %.2f\nCredito: %.2f\n", saldo, credito);

    return 0;
}
*/
