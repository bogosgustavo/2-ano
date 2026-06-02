/*1) Escreva um Algoritmo que realize o produto de A (número real) por B (número
inteiro), ou seja, A * B, através de adições (somas). Esses dois valores são passados
pelo usuário através do teclado.
#include <stdio.h>

int main() {
    float a, res = 0;
    int b, i;
    printf("Informe um numero real: ");
    scanf("%f", &a);
    printf("Informe um numero inteiro: ");
    scanf("%d", &b);
    for(i = 0; i < b; i++) {
        res += a;
    }

    printf("%.2f\n", res);
}
*/

/*2) Escreva um Algoritmo que realize a potência de A (número real) por B (número
inteiro e positivo), ou seja, AB, através de multiplicações sucessivas. Esses dois
valores são passados pelo usuário através do teclado.
#include <stdio.h>
int main() {
    float a, res = 1;
    int b, i;
    printf("Informe um numero real: ");
    scanf("%f", &a);
    printf("Informe um numero inteiro: ");
    scanf("%d", &b);
    for(i = 0; i < b; i++) {
        res *= a;
    }

    printf("%.2f\n", res);
}
*/

/*3) Escreva um Algoritmo que calcule o resto da divisão de A por B (número inteiros e
positivos), ou seja, A mod B, através de subtrações sucessivas. Esses dois valores são
passados pelo usuário através do teclado.
#include <stdio.h>
int main() {
    int a, b;
    printf("Informe um numero inteiro: ");
    scanf("%d", &a);
    printf("Informe um numero inteiro: ");
    scanf("%d", &b);
    while(a >= b) {
        a -= b;
    }

    printf("Resto: %d\n", a);
}
*/

/*4) Escreva um Algoritmo que calcule o quociente da divisão de A por B (número
inteiros e positivos), ou seja, A div B, através de subtrações sucessivas. Esses dois
valores são passados pelo usuário através do teclado.
#include <stdio.h>
int main() {
    int a, b, q = 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &a);
    printf("Informe um numero inteiro: ");
    scanf("%d", &b);
    while(a >= b) {
        a -= b;
        q++;
    }
    printf("Quociente: %d\n", q);
}
*/

/*5) Escreva um Algoritmo que determine se dois valores inteiros e positivos A e B são
primos entre si. (dois números inteiros são ditos primos entre si, caso não exista
divisor comum aos dois números).
#include <stdio.h>
int main() {
    int a, b, i, mdc = 1;
    printf("Informe um numero inteiro: ");
    scanf("%d", &a);
    printf("Informe um numero inteiro: ");
    scanf("%d", &b);
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            mdc = i;
    }

    if(mdc == 1)
        printf("Primos entre si\n");
    else
        printf("Nao sao primos entre si\n");
}
*/

/*6) Escreva um Algoritmo para calcular o fatorial do número N, cujo valor é obtido
através do usuário pelo teclado.
#include <stdio.h>
int main() {
    int N, i;
    long long fat = 1;
    printf("Informe um numero inteiro: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        fat *= i;
    }

    printf("%lld\n", fat);
}
*/

/* 7) Escreva um Algoritmo que determine todos os divisores de um dado número N.
    int main() {
    int n, i = 1;
    printf("Digite um numero \n");
    scanf("%d", &n);
    printf("Divisores de %d \n", n);
    while (i <= n){
        if (n % i == 0){
            printf("%d \n", i);
        }
        i++;
    }
} */

/* 8) Escreva um Algoritmo que determine se um dado número N (digitado pelo usuário) é primo ou não.
    int main(){
    int n, i = 1;
    int divisores = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    while (i <= n){
        if (n % i == 0){
            divisores++;
        }
        i++;
    }
    if (divisores == 2){
        printf("O numero e primo \n");
    } else {printf("O numero nao e primo \n");}
} */

/* 9) Escreva um Algoritmo que calcule os N-menores números primos. Este número N deve ser lido do teclado.
    int main(){
    int N;
    int numero = 2;
    int contadorPrimos = 0;
    printf("Digite quantos numeros primos deseja \n");
    scanf("%d", &N);
    while (contadorPrimos < N){
        int i = 2;
        int primo = 1;
        while (i < numero){
            if (numero % i == 0) {
                primo = 0;
                break;}
            i++;
        }
        if (primo){
            printf("%d\n", numero);
            contadorPrimos++;
        }
        numero++;
    }
} */

/* 10) Escreva um Algoritmo que calcule o m.d.c. (máximo divisor comum) entre A e B (número inteiros e positivos). Esses dois valores são passados pelo usuário através do teclado.
    int main(){
    int a, b, resto;
    printf("Digite dois valores \n");
    scanf("%d %d", &a, &b);
    while (b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    printf("O MDC e %d", a);
} */

/* 11) A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Escreva um Algoritmo que gere a série de FIBONACCI até o N-ésimo termo.
    int main(){
    int N, proximo;
    int i = 3;
    int a = 1;
    int b = 1;
    printf("Digite o numero de termos \n");
    scanf("%d", &N);
    if (N >= 1){
        printf("1 ");}
    if (N >= 2) {
        printf("1 ");}
    while (i <= N){
        proximo = a + b;
        printf("%d ", proximo);
        a = b;
        b = proximo;
        i++;
    }
} */

/* 12) A série de RICCI difere da série de FIBONACCI porque os dois primeiros termos são fornecidos pelo usuário. Os demais termos são gerados da mesma forma que a série de FIBONACCI.Criar um Algoritmo que imprima os N primeiros termos da série de RICCI e a soma dos termos impressos, sabendo-se que para existir esta série serão necessários pelo menos três termos.
    int main(){
    int n, a, b, c, prox, soma;
    int i=3;
    printf("Digite N (>=3): ");
    scanf("%d", &n);
    if (n < 3){
        printf("N invalido \n");
        return 0;
    }
    printf("Digite os 3 primeiros termos: ");
    scanf("%d %d %d", &a, &b, &c);
    soma = a + b + c;
    printf("%d %d %d ", a, b, c);
    while (i < n){
        prox = a + b + c;
        printf("%d ", prox);
        soma += prox;
        a = b;
        b = c;
        c = prox;
        i++;
    }
    printf("\nSoma = %d\n", soma);
} */

/* 13) A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos anteriores, ou seja:
    Ai = A(i-1)+A(i-2) para i ímpar
    Ai = A(i-1)-A(i-2) para i par
    Criar um Algoritmo que imprima os N primeiros termos da série de FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três termos.
    int main(){
    int n, a, b, c, prox;
    int i=3;
    printf("Digite N (>=3): ");
    scanf("%d", &n);
    if (n < 3) {
        printf("N invalido\n");
        return 0;
    }
    printf("Digite os 3 primeiros termos: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d ", a, b, c);
    while (i < n) {
        if (i % 2 == 0){
            prox = a + b + c;}  //par
        else{prox = a - b - c;  //ímpar
        }
        printf("%d ", prox);
        a = b;
        b = c;
        c = prox;
        i++;
    }
} */

/* 14) Seja a seguinte série: 1, 4, 9, 16, 25, 36, ...
    Escreva um Algoritmo que gere esta série até o N-ésimo termo. Este N-ésimo termo é digitado pelo usuário.
    int main(){
    int n;
    int i = 1;
    printf("Digite N: ");
    scanf("%d", &n);
    while (i <= n){
        printf("%d ", i * i);
        i++;
    }
} */

/* 15) Seja a seguinte série: 1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7, ...
    Escreva um Algoritmo que seja capaz de gerar os N termos dessa série. Esse número N deve ser lido do teclado.
    int main(){
    int n;
    int i = 1;
    int count = 0;
    printf("Informe a quantidade de valores que voce quer para a sequencia \n");
    scanf("%d", &n);
    while (count < n){
        // imprime o primeiro número do grupo
        printf("%d ", i);
        count++;
        if (count >= n)
        break;
        // imprime o segundo
        printf("%d ", i + 3);
        count++;
        if (count >= n)
        break;
        // imprime o terceiro
        printf("%d ", i + 3);
        count++;
        i++;
    }
} */

/* 16) Sendo H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n, faça um Algoritmo para gerar o número H. O número N é lido do teclado.
    int main(){
    int n;
    int i = 1;
    float H = 0;
    printf("Informe N para realizar a conta 1 + 1/2 + 1/3 + 1/4 + ... + 1/n \n");
    scanf("%d", &n);
    while (i <= n){
        H = H + 1.0 / i;
        i++;
    }
    printf("H = %.4f\n", H);
} */

/* 17) Sendo H = 1 - 1/2 + 1/3 + 1/4 + ... + 1/n, faça um Algoritmo para gerar o número H. O número N é lido do teclado.
    int main(){
    int n;
    int i = 1;
    float H = 0;
    printf("Informe N para realizar a conta 1 - 1/2 + 1/3 + 1/4 + ... + 1/n \n");
    scanf("%d", &n);
    while (i <= n){
        if (i == 2){
            H = H - 1.0 / i;}
        else{
            H = H + 1.0 / i;}
        i++;
    }
    printf("H = %.4f\n", H);
} */

/* 18) Faça um Algoritmo para calcular o valor de S, dado por: S = 1/N + 2/N-1 + 3/N-2 + ... + N-1/2 + N/1 sendo N fornecido pelo teclado.
    int main(){
    int n;
    int i = 1;
    float s = 0;
    printf("Informe N para calcular 1/N + 2/N-1 + 3/N-2 + ... + N-1/2 + N/1 \n");
    scanf("%d", &n);
    while (i <= n){
        s = s + (float)i / (n - i + 1);
        i++;
    }
    printf("S = %.4f\n", s);
} */

/* 19) Sendo S = 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5 + ... + 1/N^N, um somatório de N (definido pelo usuário) termos, escreva Algoritmo para calcular S para um número N.
    int main() {
    int n, j;
    int i = 1;
    double S = 0;
    double pot;
    printf("Informe N para calcular 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5 + ... + 1/N^N \n");
    scanf("%d", &n);
    while (i <= n){
        // calcula i^i
        pot = 1;
        j = 1;
        while (j <= i){
            pot = pot * i;
            j++;
        }
        S = S + 1.0 / pot;
        i++;
    }
    printf("S = %.6lf\n", S);
} */

/* 20) Faça um Algoritmo que: leia um número real X do teclado; determine e imprima o seguinte somatório:
    S = X - X/1! + X/2! - X/3! + X/4! + ... usando os 20 primeiros termos da série.
    int main(){
    int i = 1;
    int cont = 1;
    double x;
    double s = 0;
    double fat = 1;
    printf("Informe o valor de X para calcular X - X/1! + X/2! - X/3! + X/4! + ... \n");
    scanf("%lf", &x);
    s = x; // primeiro termo
    while (cont < 20) {
        fat = fat * i; // calcula fatorial
        if (i % 2 == 1) {
            s = s - x / fat; // sinal negativo
        } else {
            s = s + x / fat; // sinal positivo
        }
        i++;
        cont++;
    }
    printf("S = %.6lf\n", s);
} */

/* 21) O valor aproximado do número p pode ser calculado usando-se a série
    S = 1 - 1/3^3 + 1/5^3 - 1/7^3 + 1/9^3 ... sendo pi = raiz cúbica de (S * 32). Faça um Algoritmo que calcule e imprima o valor de p usando os 51 primeiros termos da séria acima.
    int main() {
    int i = 1;
    int cont = 0;
    double s = 0;
    double termo, pi;
    while (cont < 51){
        termo = 1.0/(i*i*i);
        if (cont % 2 == 0){
            s = s + termo;} // positivo
        else{s = s - termo;} // negativo
        i += 2;   // próximo ímpar
        cont++;
    }
    pi = cbrt(32 * s);
    printf("Valor aproximado de pi = %.6lf\n", pi);
} */

/* 22) Implementar um Algoritmo para calcular o sen(X). O valor de X deverá ser digitado em graus.
    O valor do seno de X será calculado pela soma dos 15 primeiros termos da série a seguir:
    sen(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9! - (x^11)/11! + ...
    int main() {
    int i = 1;
    int cont = 0;
    double x, rad, termo, fat, pot;
    double seno = 0;
    printf("Digite o valor de X (em graus) para calcular sen(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + (x^9)/9! - (x^11)/11! + ... \n");
    scanf("%lf", &x);
    // converte para radianos
    rad = x * M_PI / 180.0;
    while (cont < 15){
        // calcula potência x^(2i-1)
        pot = 1;
        int j = 1;
        while (j <= (2*i - 1)){
            pot *= rad;
            j++;
        }
        // calcula fatorial (2i-1)!
        fat = 1;
        j = 1;
        while (j <= (2*i - 1)){
            fat *= j;
            j++;
        }
        termo = pot / fat;
        // alterna sinal
        if (i % 2 == 1){
            seno += termo;}
        else{seno -= termo;}
        i++;
        cont++;
    }
    printf("sen(%.2lf) = %.6lf\n", x, seno);
} */

/* 23) Implementar um Algoritmo para calcular o cos(X). O valor de X deverá ser digitado em graus.
    O valor do cosseno de X será calculado pela soma dos 15 primeiros termos da série a seguir:
    sen(x) = x - (x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8! - (x^10)/10! + ...
    int main() {
    int i = 0, cont = 0, j;
    double x, rad, termo, pot, fat;
    double cos = 0;
    printf("Digite o valor de X (em graus) para calcular sen(x) = x - (x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8! - (x^10)/10! + ... \n");
    scanf("%lf", &x);
    rad = x * M_PI / 180.0;
    while (cont < 15){
        pot = 1;
        j = 1;
        while (j <= 2*i){
            pot *= rad;
            j++;
        }
        fat = 1;
        j = 1;
        while (j <= 2*i){
            fat *= j;
            j++;
        }
        termo = pot / fat;
        if (i % 2 == 0){
            cos += termo;}
        else{cos -= termo;}
        i++;
        cont++;
    }
    printf("cos(%.2lf) = %.6lf\n", x, cos);
} */

/* 24) Implementar um Algoritmo para calcular o valor de ex. O valor de X deverá ser digitado.
    O valor de será calculado pela soma dos 15 primeiros termos da série a seguir:
    e^x = 1 + x + (x^2)/2! + (x^3)/3! + (x^4)/4! + ...
    int main() {
    int i = 0, cont = 0, j;
    double S = 0;
    double x, pot, fat;
    printf("Digite o valor de X para calcular e^x = 1 + x + (x^2)/2! + (x^3)/3! + (x^4)/4! + ... \n");
    scanf("%lf", &x);
    while (cont < 15){
        pot = 1;
        j = 1;
        while (j <= i){
            pot *= x;
            j++;
        }
        fat = 1;
        j = 1;
        while (j <= i){
            fat *= j;
            j++;
        }
        S = S + pot / fat;
        i++;
        cont++;
    }
    printf("e^%.2lf = %.6lf\n", x, S);
} */

/* 25) Criar um Algoritmo que leia o valor de N, imprima a seqüência a seguir e o resultado.
    N!/0! - (N-1)!/2! - (N-2)!/4! - (N-3)!/6! + ... (0)!/(2N)!
    int main() {
    int n, j;
    int i = 0;
    double s = 0;
    double fat_num, fat_den;
    printf("Digite N para calcular N!/0! - (N-1)!/2! - (N-2)!/4! - (N-3)!/6! + ... (0)!/(2N)! \n");
    scanf("%d", &n);
    while (i <= n) {
        fat_num = 1;
        j = 1;
        while (j <= (n - i)){
            fat_num *= j;
            j++;
        }
        fat_den = 1;
        j = 1;
        while (j <= (2 * i)){
            fat_den *= j;
            j++;
        }
        if (i == 0){
            s += fat_num/fat_den;}
        else {s -= fat_num/fat_den;}
        printf("%s%.0lf/%.0lf ", (i == 0 ? "" : "- "), fat_num, fat_den);
        i++;
    }
    printf("\nResultado S = %.6lf\n", s);
} */

/* 26) Escreva um Algoritmo, que leia um conjunto de 50 fichas, cada uma contendo, a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e calcule e imprima:
    A maior e a menor altura da turma;
    A média de altura das mulheres;
    A média de altura da turma.
    int main() {
    int i = 1, sexo, cont_mulheres = 0;
    double altura, maior, menor;
    double soma_total = 0, soma_mulheres = 0;
    while (i <= 50){
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%lf", &altura);
        printf("Digite o sexo (1-M, 2-F): ");
        scanf("%d", &sexo);
        if (i == 1){
            maior = altura;
            menor = altura;}
        if (altura > maior){
            maior = altura;}
        if (altura < menor){
            menor = altura;}
        soma_total += altura;
        if (sexo == 2){
            soma_mulheres += altura;
            cont_mulheres++;}
        i++;}
    printf("\nMaior altura: %.2lf\n", maior);
    printf("Menor altura: %.2lf\n", menor);
    if (cont_mulheres > 0) {
        printf("Media das mulheres: %.2lf\n", soma_mulheres / cont_mulheres);}
    else{printf("Nao ha mulheres na turma\n");}
    printf("Media da turma: %.2lf\n", soma_total / 50);
} */

/* 27) Escreva um Algoritmo que:
    Leia 100 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
    Determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
    Suponha que não exista dois ou mais alunos com a mesma nota.
    int main(){
    int i = 1, matricula, mat_maior, mat_segunda;
    double nota, maior = -1, segunda = -1;
    while (i <= 100){
        printf("Digite a matricula: ");
        scanf("%d", &matricula);
        printf("Digite a nota: ");
        scanf("%lf", &nota);
        if (nota > maior){
            segunda = maior;
            mat_segunda = mat_maior;
            maior = nota;
            mat_maior = matricula;}
        else if (nota > segunda){
            segunda = nota;
            mat_segunda = matricula;}
        i++;
    }
    printf("\nMaior nota: %.2lf (Matricula: %d)\n", maior, mat_maior);
    printf("Segunda maior nota: %.2lf (Matricula: %d)\n", segunda, mat_segunda);
} */

/* 28) Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava:
    Sua idade;
    Sua opinião em relação ao filme, segundo as seguintes notas:
    Tabela no class
    int main(){
    char opiniao;
    int i = 1, idade, contA = 0, contB = 0, contC = 0, contD = 0, contE = 0, soma_idade_A = 0, maior_idade, menor_idade;
    while (i <= 100){
        printf("Pessoa %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Opiniao (A-otimo, B-bom, C-regular, D-ruim, E-pessimo): ");
        scanf(" %c", &opiniao);
        // maior e menor idade
        if (i == 1){
            maior_idade = idade;
            menor_idade = idade;}
        if (idade > maior_idade) maior_idade = idade;
        if (idade < menor_idade) menor_idade = idade;
        // contagem das opiniões
        if (opiniao == 'A' || opiniao == 'a') {
            contA++;
            soma_idade_A += idade;}
        else if (opiniao == 'B' || opiniao == 'b') contB++;
        else if (opiniao == 'C' || opiniao == 'c') contC++;
        else if (opiniao == 'D' || opiniao == 'd') contD++;
        else if (opiniao == 'E' || opiniao == 'e') contE++;
        i++;}
    printf("\nRESULTADOS:\n");
    printf("Otimo: %d (%.2f%%)\n", contA, contA / 100.0 * 100);
    printf("Bom: %d (%.2f%%)\n", contB, contB / 100.0 * 100);
    printf("Regular: %d (%.2f%%)\n", contC, contC / 100.0 * 100);
    printf("Ruim: %d (%.2f%%)\n", contD, contD / 100.0 * 100);
    printf("Pessimo: %d (%.2f%%)\n", contE, contE / 100.0 * 100);
    if (contA > 0){
        printf("Media de idade (otimo): %.2f\n", soma_idade_A / (double)contA);}
    else{printf("Nao houve respostas 'otimo'\n");}
    printf("Diferenca entre maior e menor idade: %d\n", maior_idade - menor_idade);
} */

/* 29) Elabore um Algoritmo que, lendo estes dados, calcule e imprima:
    A quantidade de respostas ótima;
    A diferença percentual entre respostas bom e regular;
    A média de idade das pessoas que responderam ruim;
    A percentagem de respostas péssima e a maior idade que utilizou esta opção;
    A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
    int main(){
    char op;
    int i = 1, idade, contA = 0, contB = 0, contC = 0, contD = 0, contE = 0, soma_idade_D = 0, maior_idade_A = 0, maior_idade_D = 0, maior_idade_E = 0;
    while (i <= 100){
        printf("Pessoa %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Opiniao (A/B/C/D/E): ");
        scanf(" %c", &op);
        if (op == 'A' || op == 'a'){
            contA++;
            if (idade > maior_idade_A)
                maior_idade_A = idade;}
        else if (op == 'B' || op == 'b') {
            contB++;}
        else if (op == 'C' || op == 'c') {
            contC++;}
        else if (op == 'D' || op == 'd') {
            contD++;
            soma_idade_D += idade;
            if (idade > maior_idade_D)
                maior_idade_D = idade;}
        else if (op == 'E' || op == 'e') {
            contE++;
            if (idade > maior_idade_E)
                maior_idade_E = idade;}
        i++;
    }
    printf("\nRESULTADOS:\n");
    printf("Quantidade de 'otimo': %d\n", contA);
    printf("Diferenca percentual (bom - regular): %.2f%%\n",
           (contB - contC) / 100.0 * 100);
    if (contD > 0)
        printf("Media de idade (ruim): %.2f\n", soma_idade_D / (double)contD);
    else
        printf("Nao houve respostas 'ruim'\n");
    printf("Percentual de 'pessimo': %.2f%%\n", contE / 100.0 * 100);
    if (contE > 0)
        printf("Maior idade (pessimo): %d\n", maior_idade_E);
    if (contA > 0 && contD > 0)
        printf("Diferenca de idade (otimo - ruim): %d\n",
               maior_idade_A - maior_idade_D);
    else printf("Nao foi possivel calcular diferenca (faltam dados)\n");
} */

/* 30) Em um prédio, com 50 moradores, há três elevadores denominados A, B e C.
    Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia:
    O elevador que utilizava com mais freqüência;
    O período que utilizava o elevador, entre:
    a. “M” = matutino;
    b. “V” = vespertino;
    c. “N” = noturno.
    Construa um Algoritmo que calcule e imprima:
    Qual é o elevador mais freqüentado e em que período se concentra o maior fluxo;
    Qual o período mais usado de todos e a que elevador pertence;
    Qual a diferença percentual entre o mais usado dos horários e o menos usado;
    Qual a percentagem sobre o total de serviços prestados do elevador de média utilização.
    int main(){
    char elevador, periodo;
    int i = 1;
    int A = 0, B = 0, C = 0;
    int M = 0, V = 0, N = 0;
    int AM = 0, AV = 0, AN = 0;
    int BM = 0, BV = 0, BN = 0;
    int CM = 0, CV = 0, CN = 0;
    while (i <= 50){
        printf("Morador %d\n", i);
        printf("Elevador (A/B/C): ");
        scanf(" %c", &elevador);
        printf("Periodo (M/V/N): ");
        scanf(" %c", &periodo);
        if (elevador == 'A' || elevador == 'a'){
            A++;
            if (periodo == 'M' || periodo == 'm') AM++;
            else if (periodo == 'V' || periodo == 'v') AV++;
            else if (periodo == 'N' || periodo == 'n') AN++;}
        else if (elevador == 'B' || elevador == 'b') {
            B++;
            if (periodo == 'M' || periodo == 'm') BM++;
            else if (periodo == 'V' || periodo == 'v') BV++;
            else if (periodo == 'N' || periodo == 'n') BN++; }
        else if (elevador == 'C' || elevador == 'c') {
            C++;
            if (periodo == 'M' || periodo == 'm') CM++;
            else if (periodo == 'V' || periodo == 'v') CV++;
            else if (periodo == 'N' || periodo == 'n') CN++;}
        if (periodo == 'M' || periodo == 'm') M++;
        else if (periodo == 'V' || periodo == 'v') V++;
        else if (periodo == 'N' || periodo == 'n') N++;
        i++;}
    char elev_mais;
    int maior_elev;
    if (A >= B && A >= C){
        elev_mais = 'A';
        maior_elev = A;}
    else if (B >= C) {
        elev_mais = 'B';
        maior_elev = B;}
    else{elev_mais = 'C';
        maior_elev = C;}
    int m1, m2, m3;
    char periodo_mais;
    if (elev_mais == 'A') { m1 = AM; m2 = AV; m3 = AN; }
    if (elev_mais == 'B') { m1 = BM; m2 = BV; m3 = BN; }
    if (elev_mais == 'C') { m1 = CM; m2 = CV; m3 = CN; }
    if (m1 >= m2 && m1 >= m3) periodo_mais = 'M';
    else if (m2 >= m3) periodo_mais = 'V';
    else periodo_mais = 'N';
    printf("\nElevador mais usado: %c\n", elev_mais);
    printf("Periodo mais usado nele: %c\n", periodo_mais);
    char periodo_total;
    int maior_periodo;
    if (M >= V && M >= N){
        periodo_total = 'M';
        maior_periodo = M;}
    else if (V >= N){
        periodo_total = 'V';
        maior_periodo = V;}
    else{periodo_total = 'N';
        maior_periodo = N;}
    int p1, p2, p3;
    char elev_periodo;
    if (periodo_total == 'M') { p1 = AM; p2 = BM; p3 = CM; }
    if (periodo_total == 'V') { p1 = AV; p2 = BV; p3 = CV; }
    if (periodo_total == 'N') { p1 = AN; p2 = BN; p3 = CN; }
    if (p1 >= p2 && p1 >= p3) elev_periodo = 'A';
    else if (p2 >= p3) elev_periodo = 'B';
    else elev_periodo = 'C';
    printf("Periodo mais usado: %c\n", periodo_total);
    printf("Elevador mais usado nesse periodo: %c\n", elev_periodo);
    int menor_periodo;
    if (M <= V && M <= N) menor_periodo = M;
    else if (V <= N) menor_periodo = V;
    else menor_periodo = N;
    printf("Diferenca percentual: %.2f%%\n",
           (maior_periodo - menor_periodo) / 50.0 * 100);
    int medio;
    if ((A >= B && A <= C) || (A <= B && A >= C)) medio = A;
    else if ((B >= A && B <= C) || (B <= A && B >= C)) medio = B;
    else medio = C;
    printf("Percentual do elevador medio: %.2f%%\n", medio / 50.0 * 100);
} */

/* 31) Calcule o imposto de renda de um grupo de 10 contribuintes, considerando que os dados de cada contribuinte, número do CPF, número de dependentes e renda mensal são valores fornecidos pelo usuário.
    Para cada contribuinte será feito um desconto de 5% do salário mínimo por dependente. Os valores da alíquota para cálculo do imposto são:
    Tabela no class
    Observe que deve ser fornecido o valor atual do salário mínimo para que o Algoritmo calcule os valores corretamente.
    int main(){
    int i = 1, dependentes;
    char cpf[20];
    double renda, salario_minimo, desconto, renda_liquida, imposto;
    printf("Digite o valor do salario minimo: ");
    scanf("%lf", &salario_minimo);
    while (i <= 10){
        printf("\nContribuinte %d\n", i);
        printf("CPF: ");
        scanf("%s", cpf);
        printf("Numero de dependentes: ");
        scanf("%d", &dependentes);
        printf("Renda mensal: ");
        scanf("%lf", &renda);
        desconto = dependentes * (0.05 * salario_minimo);
        renda_liquida = renda - desconto;
        if (renda_liquida <= 2000) {
            imposto = 0;}
        else if (renda_liquida <= 3000){imposto = renda_liquida * 0.10;}
        else if (renda_liquida <= 5000){imposto = renda_liquida * 0.15;}
        else{imposto = renda_liquida * 0.20;}
        printf("Renda liquida: %.2lf\n", renda_liquida);
        printf("Imposto a pagar: %.2lf\n", imposto);
        i++;
    }
} */
