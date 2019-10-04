#include <stdio.h>

/* 	QUESTÃO 06: 
	Faça um programa que leia
	200 números inteiros. Ao final, exibir:

	a) O maior número fornecido, de
	ordem par (isto é, o maior dentre o
	segundo, quarto, sexto, oitavo, etc
	valores fornecidos).

	b) A média dos valores pares. */

#define QUANT 10

void main() {

	int num, maiorNum, cont=1, somaPar=0, pares=0;
	float media=0;
	
	do {
		printf("Informe %do valor: ", cont);
		scanf("%d", &num);
		
		// maior número fornecido de ordem par
		if(cont%2==0) {
			
			if(num > maiorNum) {
				maiorNum = num;
			}
		}
		
		// media dos valores pares
		if(num%2==0) {
						
			somaPar = somaPar + num;
			pares++;
		}
		
		cont++;
	}while(cont<=QUANT);
	
	media = (float)somaPar/pares;
	
	printf("\nMaior numero dos valores pares = %d", maiorNum);
	printf("\nMedia dos valores pares = %.2f", media);
}

