// Lista 2.1

/* 1 - Crie um constante área, ela represneta a área padrão de um quadrado*/

/*a) Mostre na tela o valor dessa variável

#include <stdio.h>
#define area 10

int main(){
    printf ("Valor da constante area: %d", area);

}
*/

/* b) Tente alterar o valor dessa variável, se não for possível, qual erro foi gerado

#include <stdio.h>
#define area 10

int main(){
    area= area+1;
    printf ("Valor da constante area: %d", area);

}
Gerou erro, "17|error: lvalue required as left operand of assignment|"
*/

/* c) Utilize essa variável para atribuir seu valor para outra variável, altere o valor via código, mostre na tela

#include <stdio.h>
#define area 10

int main(){
    int aux;
    aux=area+1;
    printf ("Valor da variavel auxiliar: %d", aux);

}
*/

/* 2 - Em qual situação podemos utilizar as varáveis constantes?
    Quando precisamos garantir que um valor não seja alterado durante a execução do programa, como em valores fixos*/

/* 3 - Declare uma variável inteira com o valor 1000 e mostre seu valor em decimal, octal, hexadecimal na tela

    #include <stdio.h>
    int main (){
        int val=1000;

        printf("Decimal: %d\n", val);
        printf("Octal: %o\n", val);
        printf("Hexadecimal: %X\n", val);

        return 0;
    }
*/

/* 4 - Qual a diferença entre %c e %s? Mostre um exemplo criando uma variável char de 1 elemento com o conteúdo ‘d’ e mostre na tela utilizando %c nas duas maneiras
    #include <stdio.h>
    int main (){
        char var = 'd';

        printf("Forma 1: %c\n", var);
        printf("Forma 2: %c\n", var);

        return 0;
    }
*/

/* 5 - Repita o exercício anterior e imprima na tela o valor utilizando %s
    #include <stdio.h>
    int main (){
        char var[] = "d" ;
        printf ("O valor de d e: %s", var);
        return 0;
}
*/

/* 6 -  Agora crie uma variável char de 5 unidades com valor "maçãs" e imprima na tela utilizando %s e depois %c, se gerar um erro, interprete e escreva aqui
#include <stdio.h>
int main(){
    char var[5] = "maçãs";
    printf ("%s\n", var);
    printf ("%c\n", var[0]);
    return 0;
}
Não foi possivel imprimir "maçãs" pela palavra conter "ç" e "~", sendo estes dois caracteres especiais. Além disso, quando utilizado %c, não é possível imprimir mais do que um caracter. O último motivo é a string ter o limite de 5, mas maçãs ter 6 letras
*/

// Lista 2.2

/* 1 - Elabore um programa que escreva as mensagens “Início do programa” e “Fim” na tela, uma em cada linha, usando apenas um comando printf().
int main(){
    printf ("Inicio do programa \n Fim");
    return 0;
}
*/

/* 2 - Escreva um programa que leia um número inteiro e depois o imprima.
int main (){
    int var;
    printf("Insira um numero: ");
    scanf("%d", &var);
    printf("O numero e:%d", var);
    return 0;
}
*/

/* 3 - Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().
int main(){
    int num;
    scanf("%d", &num);
    printf("Valor lido: %d", num);
    return 0;
}
*/

/* 4 -  Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.
int main(){
    int num;
    printf("Escreva um numero: ");
    scanf("%f", &num);
    printf("%f", num);
    return 0;
}
 O resultado aparece como 0.0000 porque foi usado o formato errado. O correto é usar %d, já que a variável é do tipo int.
 */

/*5 -  Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.
int main(){
    float num;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    printf("%d", num);
    return 0;
}
Resultado zero (0); o correto seria %f  para imprimir um número float.
*/

/* 6 - Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
int main(){
    double num;
    printf("Escreva um numero: ");
    scanf("%lf", &num);
    printf("%E", num);
    return 0;
}*/

/* 7 - Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
int main(){
    char var;
    printf("Escreva um caracter \n");
    scanf("%c", &var);
    printf("O valor correspondente e: %d", var);
    return 0;
}
*/

/* 8 - Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.
int main(){
    int num1, num2;
    printf("Escreva os numeros inteiros \n");
    scanf("%d %d", &num1, &num2);
    printf("Os valores na ordem inversa sao %d %d", num2, num1);
    return 0;
}
*/

/*9 - Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
int main(){
    float num1, num2;
    printf("Escreva os numeros \n");
    scanf("%f %f", &num1, &num2);
    printf("Os valores na ordem inversa são %f %f", num2, num1);
    return 0;
}
*/

/*10 - Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
int main(){
    int dia, mes, ano;
    printf("Escreva uma data contendo dia, mes, ano \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("A data que voce escreveu e: %d \\ %d \\ %d", dia, mes, ano);
    return 0;
}
*/

/*11 - Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.
#define euler 2.7182

int main(){
    float constante;
    printf("A constante e %.4f\n", euler);
    return 0;
}
*/

/* 12 -  Elabore um programa que contenha uma constante qualquer do tipo int. Use o comando const. Imprima essa constante.
int main(){
    const int qualquer = 15 ;
    printf("A constante qualquer e %d", qualquer);
    return 0;
}
*/

/* 13 - Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
int main(){
    char caracter;
    printf("Insira o caracter \n");
    scanf("%c", &caracter);
    printf("O caracter e: \"%c\" ", caracter);
    return 0;
}
*/

/* 14 - Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.
int main(){
    char caracter1, caracter2, caracter3;
    scanf("%c %c %c", &caracter1, &caracter2, &caracter3);
    printf("%c \n%c \n%c", caracter1, caracter2, caracter3);
    return 0;
}
*/

/* 15 - Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.
int main(){
    char c;
    int i;
    float f;

    printf("Digite um char, um int e um float:\n");
    scanf(" %c %d %f", &c, &i, &f);

    printf("%c %d %f\n", c, i, f);
    printf("%c\t%d\t%f\n", c, i, f);
    printf("%c\n%d\n%f\n", c, i, f);

    return 0;
}
*/
