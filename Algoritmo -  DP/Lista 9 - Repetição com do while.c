#include <stdio.h>
#include <string.h>

/* =========================================================
1) Soma dos 50 primeiros números pares
========================================================= */
/*
int main(){
    int i=0, soma=0, aux=0;

    do{
        if(i%2==0){
            soma = soma + i;
            aux++;
        }
        i++;
    }while(aux < 50);

    printf("Soma: %d\n", soma);
    return 0;
}
*/

/* =========================================================
2) Contagem regressiva de 10 até 0
========================================================= */
/*
int main(){
    int i = 10;

    do{
        printf("%d...\n", i--);
    }while(i >= 0);

    printf("FIM!\n");
    return 0;
}
*/

/* =========================================================
3) Soma dos divisores de um número (exceto ele mesmo)
========================================================= */
/*
int main(){
    int num, soma = 0, i = 1;

    printf("Insira um numero: ");
    scanf("%d", &num);

    do{
        if(num % i == 0){
            soma += i;
        }
        i++;
    }while(i < num);

    printf("Soma dos divisores: %d\n", soma);
    return 0;
}
*/

/* =========================================================
4) Triângulo de Floyd
========================================================= */
/*
int main(){
    int num, i = 1, linha = 1, j;

    printf("Digite o numero de linhas: ");
    scanf("%d", &num);

    do{
        j = 1;
        do{
            printf("%d ", i++);
            j++;
        }while(j <= linha);

        printf("\n");
        linha++;
    }while(linha <= num);

    return 0;
}
*/

/* =========================================================
5) Total da compra (vários pedidos)
========================================================= */
/*
int main(){
    int numero, quantidade;
    int dia, mes, ano;
    float preco, total = 0;

    do{
        printf("Numero do pedido (0 para sair): ");
        scanf("%d", &numero);

        if(numero != 0){
            printf("Data (dia mes ano): ");
            scanf("%d %d %d", &dia, &mes, &ano);

            printf("Preco unitario: ");
            scanf("%f", &preco);

            printf("Quantidade: ");
            scanf("%d", &quantidade);

            total += preco * quantidade;
        }

    }while(numero != 0);

    printf("Total da compra: %.2f\n", total);
    return 0;
}
*/

/* =========================================================
6) Estatísticas de pessoas
========================================================= */
/*
int main(){
    int idade, count = 0;
    float peso, soma_idade = 0, soma_peso = 0;
    char sexo, estado;

    int casadas = 0, solteiras = 0, separadas = 0, viuvas = 0;

    do{
        printf("Idade (0 para sair): ");
        scanf("%d", &idade);

        if(idade != 0){
            printf("Peso: ");
            scanf("%f", &peso);

            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);

            printf("Estado civil (C/S/P/V): ");
            scanf(" %c", &estado);

            if(estado == 'C') casadas++;
            else if(estado == 'S') solteiras++;
            else if(estado == 'P') separadas++;
            else if(estado == 'V') viuvas++;

            soma_idade += idade;
            soma_peso += peso;
            count++;
        }

    }while(idade != 0);

    if(count > 0){
        printf("Casadas: %d\n", casadas);
        printf("Solteiras: %d\n", solteiras);
        printf("Separadas: %d\n", separadas);
        printf("Viuvas: %d\n", viuvas);
        printf("Media de idade: %.2f\n", soma_idade / count);
        printf("Media de peso: %.2f\n", soma_peso / count);
    }

    return 0;
}
*/

/* =========================================================
7) Área total da residência
========================================================= */
/*
int main(){
    char nome[50];
    float largura, comprimento, area, total = 0;

    do{
        printf("Nome do comodo (FIM para encerrar): ");
        scanf("%s", nome);

        if(strcmp(nome, "FIM") != 0){
            printf("Largura: ");
            scanf("%f", &largura);

            printf("Comprimento: ");
            scanf("%f", &comprimento);

            area = largura * comprimento;
            total += area;
        }

    }while(strcmp(nome, "FIM") != 0);

    printf("Area total da residencia: %.2f\n", total);
    return 0;
}
*/
