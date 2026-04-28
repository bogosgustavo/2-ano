#include <stdio.h>
/*1) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
int main(){
    int i=0, soma=0, aux=0;
    do{
        if(i%2==0){
            soma=soma + i;
            aux++;
        }
        i++;
    }while(aux < 50);
    printf("Soma: %d", soma);
    return 0;
}
*/

/*2) Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10
e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.
int main(){
    int i=10;
    do{
        printf("%d...\n",i--);
    }while(i>=0);
    printf("FIM!");
}
*/

/*3) Escreva um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos
divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
int main() {
    int num, soma = 0, i = 1;
    printf("Insira um numero: ");
    scanf("%d", &num);
    do {
        if (num % i == 0) {
            soma=soma+i;
        }
        i++;
    } while (i < num);
    printf("Soma dos divisores: %d", soma);
    return 0;
}
*/

/*4) Escreva um programa que leia um número inteiro positivo N e em seguida
imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
int main(){
    int num,i;
    do{

    }while(i<=num);

}*/

/*5) Faça um programa que leia um conjunto de pedidos e calcule o total da compra.
O pedido possui os seguintes campos: número, data (dia, mês e ano), preço
unitário e quantidade. A entrada de pedidos é encerrada quando o usuário
informa zero como número do pedido.
int main(){
    int num,i;
    do{

    }while(i<=num);

}
*/

/*6) Elabore um programa que receba a idade, peso, sexo e o estado civil de várias
pessoas e imprima a quantidade de pessoas casadas, solteiras, separadas e viúvas.
Apresente a média de idade e de peso. O algoritmo finaliza quando for informado
o valor zero para idade.
int main(){
    int num,i;
    do{

    }while(i<=num);

}
*/

/*7) Construa um programa que possibilite calcular a área total de uma residência
(sala, cozinha, banheiro, quartos etc.). O programa deve solicitar a entrada do
nome, a largura e o comprimento de um determinado cômodo até que o nome do
cômodo seja “FIM”. O programa deve apresentar o valor total acumulado da área
residencial.
int main(){
    int num,i;
    do{

    }while(i<=num);

}
*/
