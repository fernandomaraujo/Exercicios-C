#include <stdio.h>

/* 	QUEST�O 08: 
	Fa�a um programa que leia
	um n�mero real x e um n�mero inteiro y.
	Em seguida, o programa deve ler 100
	n�meros reais e calcular quantos destes
	est�o no intervalo definido por [x-y,x+y]. */

#define QUANT 10

void main() {
	
	float x, num, inicio, fim;
	int y, cont=1, contN=0;
	
	printf("Informe um numero real: ");
	scanf("%f", &x);
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &y);
	
	inicio = x-y;
	fim = x+y;
	
	do {
		
		printf("Informe %do valor: ", cont);
		scanf("%f", &num);
		
		// intervalo
		if(num >= inicio && num <= fim) {
			contN++;
		}
		
		cont++;
	}while(cont<=QUANT);
	
	printf("\nQuantidades de valores nos intervalos [%.2f, %.2f] = %d", inicio, fim, contN);
	
}

