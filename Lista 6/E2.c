#include <stdio.h>

/* 	QUEST�O 02: 
	Um fazendeiro realizou um
	tratamento sobre sua planta��o de caf�
	que gerou um crescimento constante de C
	% em sua produ��o, por ano.
	Considerando que atualmente sua
	produ��o anual seja de M u.p.,
	implementar um programa que determine
	a quantidade de anos necess�ria para que
	a produ��o duplique. */

void main() {

	int anos=0;
	float c, m, rend=0, pAnual, pTotal=0;
	
	printf("\tPlantacao de Cafe\n");
	
	printf("Percentual de crescimento: %%");
	scanf("%f", &c);
	
	printf("Producao anual: ");
	scanf("%f", &m);
	
	pAnual = m;
	
	// fa�a enquanto a produ��o ainda n�o esteja duplicada
	do {
		rend = (pAnual*c)/100; // 5% de 1000 = 50 -> 5% de 1050 = 52.5 -> ...
		
		pTotal = pAnual + rend; // 1000 + 50 = 1050 -> 1102.5 -> ...
		
		pAnual = pTotal; // 1000 -> 1050 -> 1102.5 -> ...
		
		anos++;
	}while(pAnual <= (m*2)); // 2000 ou mais
	
	printf("\nSerao necessarios %d anos para a duplicacao da producao", anos);
}

