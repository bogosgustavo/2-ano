// VENDA PRODUTOS
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define N_PROD 7  // so para testar
#define N_DIAS_SEMANA 7  // posso modificar para 5 ou menos dias...
        //      0    1    2    3    4    5    6
typedef enum { SEG, TER, QUA, QUI, SEX, SAB, DOM } t_dias_semana;

char  produtos[ N_PROD ][ 20 ];
char  *dias_semana[] = {"SEG", "TER", "QUA", "QUI", "SEX", "SAB", "DOM"};
float vendas[ N_PROD ][ N_DIAS_SEMANA ], total_produto[ N_PROD ],
	  total_dia[ N_DIAS_SEMANA ];

void inicializa()
{
	for( int i = 0; i < N_PROD; i++ ){
		strcpy( produtos[ i ], "" );
		for( t_dias_semana j = SEG; j <= DOM; j++ ) {
			printf( "\tInicializando ... [ %d / %d ]\r", i, j );
			vendas[ i ][ j ] = 0.00;
		}
		total_produto[ i ] = 0.00;
	}
	for( t_dias_semana j = SEG; j <= DOM; j++ )
		total_dia[ j ] = 0.00;
}

FILE *arq_produtos;

void abre_arquivo()
{
	arq_produtos = fopen( "produtos.txt", "rt" );
	if( arq_produtos == NULL ) {
		printf("\tErro (%d) ao abrir produtos.txt, usando teclado...\n", errno );
		printf("\tErro: (%s)\n", strerror( errno ) );
		arq_produtos = stdin;
	}
}

void leitura()
{
	abre_arquivo();
	printf( "\tInforme: produto v1 ... v7:\n" );
	if( arq_produtos == stdin )
		printf( "\t\tlendo do teclado!\n");
	else
		printf( "\t\tlendo do arquivo!\n");
	for( int i = 0; i < N_PROD; i++ ){
		fscanf( arq_produtos, "%s", &produtos[ i ] );
		for( t_dias_semana j = SEG; j <= DOM; j++ )
			fscanf( arq_produtos, "%f", &vendas[ i ][ j ]) ;
	}
}

void mostra()
{
	printf( "  PRODUTO   \tSEG\tTER\tQUA\tQUI\tSEX\tSAB\tDOM\n" );
	for( int i = 0; i < N_PROD; i++ ){
		printf( "  %-10s", produtos[ i ] );
		for( t_dias_semana j = SEG; j <= DOM; j++ )
			printf( "\t%6.2f", vendas[ i ][ j ]) ;
		putchar( '\n' );
	}
}

float soma_vendas()
{
	float total_geral = 0.00;

	float total_por_dia = 0.00;

	for( int i = 0; i < N_PROD; i++ ){
		total_produto[ i ] = 0.00;
		for( t_dias_semana j = SEG; j <= DOM; j++ ) {
			printf( "\t%-10s: %8.2f\r", produtos[ i ], (total_produto[ i ] += vendas[ i ][ j ]) );
			total_dia[ j ] += vendas[ i ][ j ];
		}
		putchar( '\n' );
		total_geral += total_produto[ i ];
	}
	for( t_dias_semana j = SEG; j <= DOM; j++ ) {
		printf( "\t%d %-3s: %8.2f\n", j, dias_semana[ j ], total_dia[ j ] );
		total_por_dia += total_dia[ j ];
	}
	printf( "\t---------------\n"
	        "\tTOTAL: %8.2f\n", total_por_dia );
	return total_geral;
}

void main( void )
{
	printf("1) Limpando os registros ... \n ");
	inicializa();
	printf("2) Lendo os dados ... \n ");
	leitura();
	printf("3) Mostrando as vendas ... \n ");
	mostra();
	printf("4) Totalizando ... \n ");
	printf( "\t--------------------\n"
	        "\tTOTAL     : %8.2f\n\n", soma_vendas() );
}