#include <stdio.h>

/*	QUESTÃO 02: 
	Pede-se o desenvolvimento
	de um programa que leia n valores e
	determine o maior e o menor elementos
	do conjunto fornecido. */

void main() {
	
	int n, num, cont=1, maiorValor=0, menorValor;
	
	printf("Informe quantidade de valores: ");
	scanf("%d", &n);

	// inicializando menorValor com um valor
	menorValor = n;

	do {
		
		// lendo valores
		printf("Informe o %do valor: ", cont);
		scanf("%d", &num);
		
		// maior valor
		if(num > maiorValor) {
			maiorValor = num;
		}
		
		// menor valor
		if(num < menorValor) {
			menorValor = num;
		}
		
		// incrementando contador
		cont++;
	} while(cont <= n);
	
	printf("\nMaior valor = %d", maiorValor);
	printf("\nMenor valor = %d", menorValor);
}

