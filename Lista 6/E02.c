#include <stdio.h>

/* 	QUESTÃO 02: 
	Um fazendeiro realizou um
	tratamento sobre sua plantação de café
	que gerou um crescimento constante de C
	% em sua produção, por ano.
	Considerando que atualmente sua
	produção anual seja de M u.p.,
	implementar um programa que determine
	a quantidade de anos necessária para que
	a produção duplique. */

void main() {

	int anos=0;
	float c, m, rend=0, pAnual, pTotal=0;
	
	printf("\tPlantacao de Cafe\n");
	
	printf("Percentual de crescimento: %%");
	scanf("%f", &c);
	
	printf("Producao anual: ");
	scanf("%f", &m);
	
	pAnual = m;
	
	// faça enquanto a produção ainda não esteja duplicada
	do {
		rend = (pAnual*c)/100; // 5% de 1000 = 50 -> 5% de 1050 = 52.5 -> ...
		
		pTotal = pAnual + rend; // 1000 + 50 = 1050 -> 1102.5 -> ...
		
		pAnual = pTotal; // 1000 -> 1050 -> 1102.5 -> ...
		
		anos++;
	}while(pAnual <= (m*2)); // 2000 ou mais
	
	printf("\nSerao necessarios %d anos para a duplicacao da producao", anos);
}

