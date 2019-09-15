#include <stdio.h>

int main() {
	/* QUESTÃO 05:
	Escrever um algoritmo que, dada uma quantia
	em reais, calcule o menor número possível de
	notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
	o valor pode ser decomposto. */

	int quantia;
	int nCem, nCinquenta, nVinte, nDez, nCinco, nDois;
	
	printf("Quantia?\nR$");
	scanf("%d", &quantia);
	
	// 100
	printf("\nNota(s) de R$100: %d\n", quantia/100);
	
	// resto da divisão será usada para calcular restante das notas
	nCem = quantia%100;
	
	// 50
	printf("Nota(s) de R$50: %d\n", nCem/50);
	nCinquenta = nCem%50;
	
	// 20
	printf("Nota(s) de R$20: %d\n", nCinquenta/20);
	nVinte = nCinquenta%20;
	
	// 10
	printf("Nota(s) de R$10: %d\n", nVinte/10);
	nDez = nVinte%10;
	
	// 5
	printf("Nota(s) de R$5: %d\n", nDez/5);
	nCinco = nDez%5;
	
	// 2
	printf("Nota(s) de R$2: %d\n", nCinco/2);
	nDois = nCinco%2;
	
	// 1
	printf("Moeda de R$1: %d\n", nDois);
}
