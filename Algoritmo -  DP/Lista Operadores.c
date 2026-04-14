/* 1) Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro
termo(a 1 ). Escreva um Algoritmo que seja capaz de determinar qualquer termo de uma
P.A., dado a razão e o primeiro termo.

    #include <stdio.h>
    #include <math.h>

    int main (){
        int n1,nx, n,r;
        printf ("Defina o valor do primeiro termo: ");
        scanf("%d", &n1);
        printf("Defina a posição do ultimo termo: ");
        scanf("%d",&n);
        printf ("Defina o valor da razao: ");
        scanf("%d", &r);
        nx=n1+(n-1)*r;
        printf("%d",nx);
        return 0;
}
*/

/* 2) Uma P.G. (progressão geométrica) fica determinada pela sua razão (q) e pelo primeiro
termo (a1). Escreva um Algoritmo que seja capaz de determinar qualquer termo de uma
P.G., dado a razão e o primeiro termo.

    #include <stdio.h>
    #include <math.h>

    int main (){
        int n1,nx, n,q;
        printf ("Defina o valor do primeiro termo: ");
        scanf("%d", &n1);
        printf("Defina a posição do ultimo termo: ");
        scanf("%d",&n);
        printf ("Defina o valor da razao: ");
        scanf("%d", &q);
        nx=n1*pow(q,n-1);
        printf("%d",nx);
        return 0;
}
*/

/* 3) Dada a razão de uma P.A. (progressão aritmética) e um termo qualquer, k(a k ). Escreva
um Algoritmo para calcular qualquer outro termo, n, (a n ).
    #include <stdio.h>
    #include <math.h>

    int main(){
        int ak, k, n, r, an;

        printf("Digite o valor de ak: ");
        scanf("%d", &ak);

        printf("Digite a posicao k: ");
        scanf("%d", &k);

        printf("Digite a razao r: ");
        scanf("%d", &r);

        printf("Digite a posicao n desejada: ");
        scanf("%d", &n);

        an = ak + (n - k) * r;

        printf("O valor do termo na posicao %d eh: %d\n", n, an);

        return 0;

}
*/

/*4) Dada a razão de uma P.G. (progressão geométrica) e um termo qualquer, k (a k ).Escreva
um Algoritmo para calcular qualquer outro termo, n, (an).
    #include <stdio.h>
    #include <math.h>

    int main (){
        int ak, k, q, n, an;
        printf("Digite o valor de ak: ");
        scanf("%d", &ak);

        printf("Digite a posicao k: ");
        scanf("%d", &k);

        printf("Digite a razao q: ");
        scanf("%d", &q);

        printf("Digite a posicao n desejada: ");
        scanf("%d", &n);

        an=ak*pow(q,n-k);
        printf("%d",an);
        return 0;

}
*/

/*5) Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um Algoritmo que leia este número e apresente o algarismo correspondente à
casa das unidades.
    #include <stdio.h>
    #include <math.h>

    int main(){
        int placa, unidade;
        printf("Informe os 4 numeros da sua placa: ");
        scanf("%d", &placa);
        unidade=placa%10;
        printf("%d",unidade);
        return 0;
    }
*/

/*6) Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um Algoritmo que leia este número e apresente o algarismo correspondente à
casa das dezenas.
    #include <stdio.h>
    #include <math.h>

    int main(){
        int placa, dezena;
        printf("Informe os 4 numeros da sua placa: ");
        scanf("%d", &placa);
        dezena=(placa/10)%10;
        printf("%d",dezena);
        return 0;
    }
*/

/*7) Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um Algoritmo que leia este número e apresente o algarismo correspondente à
casa das centenas.
    #include <stdio.h>
    #include <math.h>

    int main(){
        int placa, centena;
        printf("Informe os 4 numeros da sua placa: ");
        scanf("%d", &placa);
        centena=(placa/100)%10;
        printf("%d",centena);
        return 0;
    }
*/

/*8) Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um Algoritmo que leia este número e apresente o algarismo correspondente à
casa das unidades de milhar.
    #include <stdio.h>
    #include <math.h>
    int main(){
        int placa, milhar;
        printf("Informe os 4 numeros da sua placa: ");
        scanf("%d", &placa);
        milhar=(placa/1000)%10;
        printf("%d",milhar);
        return 0;
    }

*/

/* 9) Escreva um Algoritmo que leia um número inteiro e imprima o seu sucessor e seu
antecessor.
#include <stdio.h>
int main(){
    int num;
    printf("Informe um numero qualquer: ");
    scanf("%d",&num);
    printf("Antecessor: %d \nSucessor: %d\n", num-1, num+1);
    return 0;
}
*/

/*10) Escreva um Algoritmo que leia dois números inteiros e imprima o resultado da soma
destes dois valores. Antes do resultado, deve ser impressa a seguinte mensagem
“SOMA”.
#include <stdio.h>
int main (){
    int a,b;
    printf ("Informe um valor a: ");
    scanf("%d",&a);
    printf("Informe um valor b: ");
    scanf("%d",&b);
    printf("SOMA: %d", a+b);
    return 0;
}
*/

/*11) Escreva um Algoritmo que leia um número real e imprima a terça parte deste número.
#include <stdio.h>
int main (){
    float a;
    printf ("Informe um valor a: ");
    scanf("%f",&a);
    printf("Terça parte de %f: %.2f", a, a/3);
    return 0;
}
*/

/*12) Escreva um Algoritmo que leia dois números reais e imprima a média aritmética
entre esses dois valores com a seguinte mensagem “MEDIA” antes do resultado.
#include <stdio.h>
int main(){
    float a,b;
    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de b: ");
    scanf("%f",&b);
    printf("MEDIA:  %.2f", a, b, (a+b)/2);
}
*/

/*13) Construa uma Algoritmo para realizar a soma de uma P.A. de N termos, com o primeiro
a1 e o último an.
#include <stdio.h>
int main(){
    int n;
    float a1,an, soma;

    printf("Informe o valor de a1: ");
    scanf("%f",&a1);
    printf("Informe o valor de an: ");
    scanf("%f",&an);
    printf("Informe quantos termos tem essa PA: ");
    scanf("%d",&n);

    soma=((a1+an)*n)/2;
    printf("%.2f", soma);
    return 0;
}
*/

/*14) Seja uma sequência A,B,C, ... determinando um Progressão Aritmética (P.A.), o
termo médio (B) de uma P.A. é determinado pela média aritmética de seus termos,
sucessor (C) e antecessor (A). Com base neste enunciado construa um Algoritmo em
C que calcule o termo médio (B) através de A, C.
#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c;

    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de c: ");
    scanf("%f",&c);

    b=(a+c)/2;

    printf("O valor desta PA: %.2f", b);
}
*/

/* 15) Seja uma sequência A,B,C, ... determinando um Progressão Geométrica (P.G.), o
termo médio (B) de uma P.G. é determinado pela média geométrica de seus termos,
sucessor (C) e antecessor (B). Com base neste enunciado construa um Algoritmo que
calcule o termo médio (B) através de A, C.
#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    b = sqrt(a * c);

    printf("O termo medio B eh: %.2f\n", b);

    return 0;
}
*/

/*16) Escreva um Algoritmo para determinar o produto dos n primeiros termos de uma
P.G.
#include <stdio.h>
#include <math.h>

int main(){
    float p, a1, q;
    int n;

    printf("Informe o valor a1: ");
    scanf("%f", &a1);

    printf("Informe a razao da PG: ");
    scanf("%f", &q);

    printf("Informe o numero de termos da PG: ");
    scanf("%d", &n);

    p = pow(a1, n) * pow(q, (n * (n - 1)) / 2.0);

    printf("O produto dos %d primeiros termos da PG: %.2f", n, p);

    return 0;
}
*/

