#include <stdio.h>

/* 	QUESTÃO 08: 
	Faça um programa que leia
	um número real x e um número inteiro y.
	Em seguida, o programa deve ler 100
	números reais e calcular quantos destes
	estão no intervalo definido por [x-y,x+y]. */

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

